/*
 * XREFs of NtCreateWnfStateName @ 0x140836950
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B5CF0 (RtlCopyVolatileMemory.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x140836D2C (ExpWnfSpecializeSecurityDescriptor.c)
 *     ExpWnfGenerateStateName @ 0x140836DD8 (ExpWnfGenerateStateName.c)
 *     ExpWnfCreateNameInstance @ 0x140837E90 (ExpWnfCreateNameInstance.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ExpWnfResolveScopeInstance @ 0x1408AD060 (ExpWnfResolveScopeInstance.c)
 *     SeCaptureSecurityDescriptor @ 0x14091CE60 (SeCaptureSecurityDescriptor.c)
 *     ExpWnfRegisterPermanentName @ 0x140A64B40 (ExpWnfRegisterPermanentName.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtCreateWnfStateName(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        __int128 *Src,
        unsigned int a6,
        PVOID a7)
{
  unsigned __int64 v10; // r9
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r15
  int NameInstance; // edi
  __int64 v14; // r9
  BOOL v15; // eax
  int v16; // eax
  __int64 v17; // rbx
  _KPROCESS *Process; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  PVOID P; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+40h] [rbp-A8h] BYREF
  int v24[2]; // [rsp+48h] [rbp-A0h] BYREF
  __int128 *v25; // [rsp+50h] [rbp-98h]
  _QWORD v26[2]; // [rsp+58h] [rbp-90h] BYREF
  _DWORD v27[2]; // [rsp+68h] [rbp-80h] BYREF
  __int128 *v28; // [rsp+70h] [rbp-78h]
  PVOID v29; // [rsp+78h] [rbp-70h]
  __int64 *v30; // [rsp+88h] [rbp-60h]
  __int128 v31; // [rsp+98h] [rbp-50h] BYREF

  v10 = (unsigned __int64)a1;
  v30 = a1;
  v26[1] = a7;
  v31 = 0LL;
  v23 = 0LL;
  v26[0] = 0LL;
  v27[1] = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)v24 = 0LL;
  P = 0LL;
  v25 = Src;
  if ( !PreviousMode )
  {
    LOBYTE(v10) = 1;
    NameInstance = SeCaptureSecurityDescriptor((_DWORD)a7, 0, 1, v10, (__int64)&P);
    if ( NameInstance < 0 )
      goto LABEL_36;
LABEL_3:
    ExpWnfSpecializeSecurityDescriptor(P);
    v15 = a2 < 2 || a2 - 2 <= 1;
    if ( !v15
      || !a2
      || (a3 >= 4 && a3 - 4 > 1 ? (v16 = 0) : (v16 = 1),
          !v16 || a4 && ((a3 & 0xFFFFFFFB) != 0 || a2 != 1) || a6 > 0x1000 || a3 == 3 && a2 == 3 || a3 == 5) )
    {
      NameInstance = -1073741811;
    }
    else if ( a2 == 3 || SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
    {
      LOBYTE(v14) = a4;
      NameInstance = ExpWnfGenerateStateName(&v23, a2, a3, v14);
      if ( NameInstance >= 0 )
      {
        v17 = v23;
        *v30 = v23 ^ 0x41C64E6DA3BC0074LL;
        v27[0] = a6;
        v28 = v25;
        v29 = P;
        if ( a2 == 3 )
        {
          if ( PreviousMode )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            LODWORD(v17) = v23;
          }
          else
          {
            LODWORD(Process) = (_DWORD)PsInitialSystemProcess;
          }
          NameInstance = ExpWnfResolveScopeInstance((int)v24, (int)Process, 0, a3, 0LL);
          if ( NameInstance >= 0 )
          {
            NameInstance = ExpWnfCreateNameInstance(v24[0], v17, (unsigned int)v27, (_DWORD)Process, (__int64)v26);
            if ( NameInstance >= 0 )
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v26[0] + 8LL));
          }
        }
        else
        {
          NameInstance = ExpWnfRegisterPermanentName(v17, v27);
        }
      }
    }
    else
    {
      NameInstance = -1073741727;
    }
    goto LABEL_36;
  }
  v19 = 0x7FFFFFFF0000LL;
  v20 = 0x7FFFFFFF0000LL;
  if ( v10 < 0x7FFFFFFF0000LL )
    v20 = v10;
  *(_BYTE *)v20 = *(_BYTE *)v20;
  *(_BYTE *)(v20 + 7) = *(_BYTE *)(v20 + 7);
  if ( Src )
  {
    if ( (unsigned __int64)Src < 0x7FFFFFFF0000LL )
      v19 = (__int64)Src;
    RtlCopyVolatileMemory(&v31, (const void *)v19, 0x10uLL);
    v25 = &v31;
  }
  if ( !a7 )
  {
    NameInstance = -1073741819;
    goto LABEL_36;
  }
  LOBYTE(v10) = 1;
  LOBYTE(v19) = PreviousMode;
  NameInstance = SeCaptureSecurityDescriptor((_DWORD)a7, v19, 1, v10, (__int64)&P);
  if ( NameInstance >= 0 )
    goto LABEL_3;
LABEL_36:
  if ( *(_QWORD *)v24 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v24 + 8LL));
  if ( P && (unsigned __int8)PreviousMode <= 1u && P != a7 )
    ExFreePoolWithTag(P, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)NameInstance;
}
