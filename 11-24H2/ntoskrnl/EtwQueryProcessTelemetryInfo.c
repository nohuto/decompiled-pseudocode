/*
 * XREFs of EtwQueryProcessTelemetryInfo @ 0x1408EF7A4
 * Callers:
 *     PfSnLogScenarioDecision @ 0x140948A6C (PfSnLogScenarioDecision.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     PsGetSessionId @ 0x1403C1560 (PsGetSessionId.c)
 *     PsGetProcessStartKey @ 0x140447F60 (PsGetProcessStartKey.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     EtwpQueryTokenPackageInfo @ 0x1408EFE7C (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x1408F01B4 (EtwpQueryProcessOtherInfo.c)
 *     PsAcquireProcessExitSynchronization @ 0x1408F0200 (PsAcquireProcessExitSynchronization.c)
 *     EtwpQueryProcessCommandLine @ 0x1408F0230 (EtwpQueryProcessCommandLine.c)
 *     PsGetSessionCreateTime @ 0x1408F0550 (PsGetSessionCreateTime.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwQueryProcessTelemetryInfo(
        __int64 BugCheckParameter1,
        char *a2,
        SIZE_T Length,
        char a4,
        unsigned int *a5)
{
  SIZE_T v5; // rdi
  __int64 *v8; // rcx
  ULONG_PTR v9; // r15
  int v10; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 *v12; // rdx
  unsigned int v13; // r13d
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ebx
  size_t v17; // r8
  __int64 v18; // rcx
  char *v19; // rdi
  unsigned __int16 *v20; // rbx
  char *v21; // rbx
  char *v22; // rbx
  char *v23; // rbx
  __int64 v26; // [rsp+30h] [rbp-398h] BYREF
  const void **v27; // [rsp+38h] [rbp-390h]
  PVOID P[2]; // [rsp+40h] [rbp-388h] BYREF
  ULONG_PTR v29; // [rsp+50h] [rbp-378h]
  __int64 v30; // [rsp+58h] [rbp-370h]
  size_t Size; // [rsp+60h] [rbp-368h] BYREF
  size_t v32; // [rsp+68h] [rbp-360h]
  char v33[256]; // [rsp+78h] [rbp-350h] BYREF
  char v34[392]; // [rsp+178h] [rbp-250h] BYREF
  _OWORD v35[3]; // [rsp+300h] [rbp-C8h] BYREF
  _BYTE Src[80]; // [rsp+330h] [rbp-98h] BYREF

  v5 = (unsigned int)Length;
  v30 = BugCheckParameter1;
  memset(v35, 0, sizeof(v35));
  memset_0(&Size, 0, 0x2A0uLL);
  memset_0(Src, 0, 0x44uLL);
  *(_OWORD *)P = 0LL;
  v26 = 0LL;
  v8 = &EmptyUnicodeString;
  if ( *(_QWORD *)(BugCheckParameter1 + 848) )
    v8 = *(__int64 **)(BugCheckParameter1 + 848);
  v27 = (const void **)v8;
  v9 = PsReferencePrimaryTokenWithTag(BugCheckParameter1, 0x746C6644u);
  v29 = v9;
  EtwpQueryTokenPackageInfo((HANDLE)v9, &Size);
  v10 = -1073741789;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v9 + 48), 1u);
  v12 = **(unsigned __int8 ***)(v9 + 152);
  v13 = 4 * v12[1] + 8;
  if ( v13 <= 0x44 )
  {
    memmove(Src, v12, v13);
    v10 = 0;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(v9 + 48));
  KeLeaveCriticalRegion();
  if ( v10 >= 0 )
  {
    if ( (int)PsAcquireProcessExitSynchronization(BugCheckParameter1) >= 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v35);
      EtwpQueryProcessOtherInfo(BugCheckParameter1, &v26);
      EtwpQueryProcessCommandLine(BugCheckParameter1, P);
      KiUnstackDetachProcess((__int64)v35, 0, v14, v15);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 488));
    }
    v16 = Size + 100 + v32 + v13 + *(unsigned __int16 *)v27 + LOWORD(P[0]);
    if ( a5 )
      *a5 = v16;
    if ( a4 )
      ProbeForWrite(a2, v5, 4u);
    v17 = (unsigned int)v5;
    if ( v16 < (unsigned int)v5 )
      v17 = v16;
    memset_0(a2, 0, v17);
    if ( (unsigned int)v5 < 0x60 )
    {
      v10 = -1073741820;
    }
    else
    {
      *(_DWORD *)a2 = 96;
      *((_DWORD *)a2 + 1) = *(_DWORD *)(BugCheckParameter1 + 464);
      *((_QWORD *)a2 + 1) = PsGetProcessStartKey(BugCheckParameter1);
      *((_QWORD *)a2 + 2) = *(_QWORD *)(BugCheckParameter1 + 504);
      *((_QWORD *)a2 + 3) = *(_QWORD *)(BugCheckParameter1 + 1664);
      *((_QWORD *)a2 + 4) = *(_QWORD *)(BugCheckParameter1 + 1672);
      *((_QWORD *)a2 + 5) = *(_QWORD *)(BugCheckParameter1 + 1656);
      *((_QWORD *)a2 + 6) = PsGetSessionCreateTime();
      *((_DWORD *)a2 + 14) = PsGetSessionId(v18);
      *((_DWORD *)a2 + 15) = MEMORY[0xFFFFF780000002C4];
      *((_QWORD *)a2 + 8) = v26;
      if ( (unsigned int)v5 >= v16 )
      {
        *((_DWORD *)a2 + 18) = 96;
        memmove(a2 + 96, Src, v13);
        v19 = &a2[v13 + 96];
        *((_DWORD *)a2 + 19) = v13 + 96;
        v20 = (unsigned __int16 *)v27;
        memmove(v19, v27[1], *(unsigned __int16 *)v27);
        v21 = &v19[*v20 + 2];
        *((_DWORD *)a2 + 20) = (_DWORD)v21 - (_DWORD)a2;
        memmove(v21, v33, Size);
        v22 = &v21[Size];
        *((_DWORD *)a2 + 21) = (_DWORD)v22 - (_DWORD)a2;
        memmove(v22, v34, v32);
        v23 = &v22[v32];
        *((_DWORD *)a2 + 22) = (_DWORD)v23 - (_DWORD)a2;
        memmove(v23, P[1], LOWORD(P[0]));
        v10 = 0;
      }
      else
      {
        v10 = -2147483643;
      }
    }
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  ObFastDereferenceObject((__int64 *)(BugCheckParameter1 + 584), v9, 0x746C6644u);
  return (unsigned int)v10;
}
