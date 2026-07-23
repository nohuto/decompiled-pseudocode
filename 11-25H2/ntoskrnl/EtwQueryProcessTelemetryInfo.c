/*
 * XREFs of EtwQueryProcessTelemetryInfo @ 0x1408BE0D4
 * Callers:
 *     PfSnLogScenarioDecision @ 0x14082682C (PfSnLogScenarioDecision.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     PsGetSessionId @ 0x140433C80 (PsGetSessionId.c)
 *     PsGetProcessStartKey @ 0x140454D00 (PsGetProcessStartKey.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PsGetSessionCreateTime @ 0x1408BDF2C (PsGetSessionCreateTime.c)
 *     EtwpQueryTokenPackageInfo @ 0x1408BE7AC (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x1408BEAE4 (EtwpQueryProcessOtherInfo.c)
 *     PsAcquireProcessExitSynchronization @ 0x1408BEB30 (PsAcquireProcessExitSynchronization.c)
 *     EtwpQueryProcessCommandLine @ 0x1408BEB60 (EtwpQueryProcessCommandLine.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  unsigned int v14; // ebx
  size_t v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  char *v18; // rdi
  unsigned __int16 *v19; // rbx
  char *v20; // rbx
  char *v21; // rbx
  char *v22; // rbx
  __int64 v25; // [rsp+30h] [rbp-398h] BYREF
  const void **v26; // [rsp+38h] [rbp-390h]
  PVOID P[2]; // [rsp+40h] [rbp-388h] BYREF
  ULONG_PTR v28; // [rsp+50h] [rbp-378h]
  __int64 v29; // [rsp+58h] [rbp-370h]
  size_t Size; // [rsp+60h] [rbp-368h] BYREF
  size_t v31; // [rsp+68h] [rbp-360h]
  char v32[256]; // [rsp+78h] [rbp-350h] BYREF
  char v33[392]; // [rsp+178h] [rbp-250h] BYREF
  _OWORD v34[3]; // [rsp+300h] [rbp-C8h] BYREF
  _BYTE Src[80]; // [rsp+330h] [rbp-98h] BYREF

  v5 = (unsigned int)Length;
  v29 = BugCheckParameter1;
  memset(v34, 0, sizeof(v34));
  memset_0(&Size, 0, 0x2A0uLL);
  memset_0(Src, 0, 0x44uLL);
  *(_OWORD *)P = 0LL;
  v25 = 0LL;
  v8 = &EmptyUnicodeString;
  if ( *(_QWORD *)(BugCheckParameter1 + 848) )
    v8 = *(__int64 **)(BugCheckParameter1 + 848);
  v26 = (const void **)v8;
  v9 = PsReferencePrimaryTokenWithTag(BugCheckParameter1, 0x746C6644u);
  v28 = v9;
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
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v34);
      EtwpQueryProcessOtherInfo(BugCheckParameter1, &v25);
      EtwpQueryProcessCommandLine(BugCheckParameter1, P);
      KiUnstackDetachProcess((__int64)v34, 0LL);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 488));
    }
    v14 = Size + 100 + v31 + v13 + *(unsigned __int16 *)v26 + LOWORD(P[0]);
    if ( a5 )
      *a5 = v14;
    if ( a4 )
      ProbeForWrite(a2, v5, 4u);
    v15 = (unsigned int)v5;
    if ( v14 < (unsigned int)v5 )
      v15 = v14;
    memset_0(a2, 0, v15);
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
      *((_QWORD *)a2 + 6) = PsGetSessionCreateTime(v16);
      *((_DWORD *)a2 + 14) = PsGetSessionId(v17);
      *((_DWORD *)a2 + 15) = MEMORY[0xFFFFF780000002C4];
      *((_QWORD *)a2 + 8) = v25;
      if ( (unsigned int)v5 >= v14 )
      {
        *((_DWORD *)a2 + 18) = 96;
        memmove(a2 + 96, Src, v13);
        v18 = &a2[v13 + 96];
        *((_DWORD *)a2 + 19) = v13 + 96;
        v19 = (unsigned __int16 *)v26;
        memmove(v18, v26[1], *(unsigned __int16 *)v26);
        v20 = &v18[*v19 + 2];
        *((_DWORD *)a2 + 20) = (_DWORD)v20 - (_DWORD)a2;
        memmove(v20, v32, Size);
        v21 = &v20[Size];
        *((_DWORD *)a2 + 21) = (_DWORD)v21 - (_DWORD)a2;
        memmove(v21, v33, v31);
        v22 = &v21[v31];
        *((_DWORD *)a2 + 22) = (_DWORD)v22 - (_DWORD)a2;
        memmove(v22, P[1], LOWORD(P[0]));
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
  ObFastDereferenceObject((__int64 *)(BugCheckParameter1 + 584), v9, 1953261124LL);
  return (unsigned int)v10;
}
