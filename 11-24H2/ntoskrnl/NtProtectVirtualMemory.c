/*
 * XREFs of NtProtectVirtualMemory @ 0x1408DC680
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     MiMakeProtectionMask @ 0x1402EAF70 (MiMakeProtectionMask.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PsIsProcessLoggingEnabled @ 0x14041A430 (PsIsProcessLoggingEnabled.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     MmProtectVirtualMemory @ 0x1408DCA30 (MmProtectVirtualMemory.c)
 *     EtwTiLogProtectExecVm @ 0x1408DD430 (EtwTiLogProtectExecVm.c)
 */

__int64 __fastcall NtProtectVirtualMemory(ULONG_PTR a1, PVOID *a2, __int64 *a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // r13
  __int64 *v6; // r9
  PVOID *v7; // r8
  ULONG_PTR v8; // r11
  unsigned __int64 v9; // r10
  int v10; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r12
  char PreviousMode; // dl
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  char *v17; // rcx
  __int64 v18; // r14
  __int64 result; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rsi
  int v22; // esi
  int v23; // eax
  char v24; // r11
  char v25; // [rsp+40h] [rbp-128h]
  int v26; // [rsp+44h] [rbp-124h] BYREF
  char v27[8]; // [rsp+48h] [rbp-120h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp-118h] BYREF
  int ProtectionMask; // [rsp+58h] [rbp-110h]
  PVOID Object; // [rsp+60h] [rbp-108h] BYREF
  __int64 *v31; // [rsp+68h] [rbp-100h]
  PVOID *v32; // [rsp+70h] [rbp-F8h]
  _DWORD *v33; // [rsp+78h] [rbp-F0h]
  _OWORD v34[3]; // [rsp+80h] [rbp-E8h] BYREF
  char v35[8]; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-B0h]
  _KPROCESS *v37; // [rsp+C0h] [rbp-A8h]
  PVOID v38; // [rsp+C8h] [rbp-A0h]
  __int64 v39; // [rsp+D0h] [rbp-98h]
  __int64 v40; // [rsp+D8h] [rbp-90h]

  v5 = a4;
  v6 = a3;
  v31 = a3;
  v7 = a2;
  v32 = a2;
  v8 = a1;
  v9 = (unsigned __int64)a5;
  v33 = a5;
  memset(v34, 0, sizeof(v34));
  v10 = 0;
  Object = 0LL;
  BaseAddress = 0LL;
  *(_QWORD *)v27 = 0LL;
  v26 = 0;
  if ( (_DWORD)v5 == 0x80000000 || (_DWORD)v5 == 0x10000000 )
  {
    ProtectionMask = 24;
  }
  else
  {
    ProtectionMask = MiMakeProtectionMask(v5 & 0xFF807FF);
    if ( ProtectionMask == -1 )
      return 3221225541LL;
  }
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  v25 = PreviousMode;
  if ( PreviousMode )
  {
    v14 = 0x7FFFFFFF0000LL;
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v7 < 0x7FFFFFFF0000LL )
      v15 = (__int64)v7;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    v16 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v6 < 0x7FFFFFFF0000LL )
      v16 = (__int64)v6;
    *(_QWORD *)v16 = *(_QWORD *)v16;
    if ( v9 < 0x7FFFFFFF0000LL )
      v14 = v9;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v17 = (char *)*v7;
    BaseAddress = *v7;
    v18 = *v6;
    *(_QWORD *)v27 = *v6;
    PreviousMode = v25;
  }
  else
  {
    v18 = *v6;
    *(_QWORD *)v27 = *v6;
    v17 = (char *)*v7;
    BaseAddress = *v7;
  }
  if ( !v18 || &v17[v18 - 1] < v17 || (unsigned __int64)&v17[v18 - 1] > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  result = ObpReferenceObjectByHandleWithTag(
             v8,
             8,
             (__int64)PsProcessType,
             PreviousMode,
             0x76506D4Du,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v20 = Object;
    if ( Process != Object )
    {
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v34);
      v10 = 1;
    }
    v21 = v20[46];
    if ( (v21 & 1) != 0 )
    {
      memset_0(v35, 0, 0x68uLL);
      v36 = v21;
      v37 = Process;
      v38 = BaseAddress;
      v39 = *(_QWORD *)v27;
      v40 = v5;
      v22 = VslpEnterIumSecureMode(2u, 40LL, 0, (__int64)v35);
      if ( v22 >= 0 )
      {
        BaseAddress = v38;
        *(_QWORD *)v27 = v39;
        v26 = v40;
      }
    }
    else
    {
      v22 = MmProtectVirtualMemory(
              (_DWORD)Process,
              (_DWORD)v20,
              (unsigned int)&BaseAddress,
              (unsigned int)v27,
              v5,
              (__int64)&v26);
    }
    LODWORD(Object) = v22;
    if ( v10 )
      KiUnstackDetachProcess((__int64)v34, 0);
    if ( v22 >= 0
      && (((unsigned __int8)MiMakeProtectionMask(v26 & 0xFFF807FF) | (unsigned __int8)ProtectionMask) & 2) != 0 )
    {
      LOBYTE(v23) = PsIsProcessLoggingEnabled((__int64)Process, (__int64)v20, 8);
      if ( v23 )
        EtwTiLogProtectExecVm((ULONG_PTR)v20, BaseAddress, v27[0], v5, v24);
    }
    ObfDereferenceObjectWithTag(v20, 0x76506D4Du);
    *v31 = *(_QWORD *)v27;
    *v32 = BaseAddress;
    *v33 = v26;
    return (unsigned int)v22;
  }
  return result;
}
