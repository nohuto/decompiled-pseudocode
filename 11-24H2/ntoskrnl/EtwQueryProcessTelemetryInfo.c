/*
 * XREFs of EtwQueryProcessTelemetryInfo @ 0x14094B234
 * Callers:
 *     PfSnLogScenarioDecision @ 0x140960FAC (PfSnLogScenarioDecision.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     ObFastDereferenceObject @ 0x140356880 (ObFastDereferenceObject.c)
 *     PsGetSessionId @ 0x1403D5E10 (PsGetSessionId.c)
 *     PsGetProcessStartKey @ 0x140452EB0 (PsGetProcessStartKey.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     EtwpQueryTokenPackageInfo @ 0x14094B90C (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x14094BC44 (EtwpQueryProcessOtherInfo.c)
 *     PsAcquireProcessExitSynchronization @ 0x14094BC90 (PsAcquireProcessExitSynchronization.c)
 *     EtwpQueryProcessCommandLine @ 0x14094BCC0 (EtwpQueryProcessCommandLine.c)
 *     PsGetSessionCreateTime @ 0x14094BFE0 (PsGetSessionCreateTime.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  char *v17; // rdi
  unsigned __int16 *v18; // rbx
  char *v19; // rbx
  char *v20; // rbx
  char *v21; // rbx
  int v24; // [rsp+28h] [rbp-3A0h] BYREF
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
  v24 = 0;
  EtwpQueryTokenPackageInfo(v9, &Size, &v24);
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
      KiUnstackDetachProcess((__int64)v34, 0);
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
      *((_QWORD *)a2 + 6) = PsGetSessionCreateTime();
      *((_DWORD *)a2 + 14) = PsGetSessionId(v16);
      *((_DWORD *)a2 + 15) = MEMORY[0xFFFFF780000002C4];
      *((_QWORD *)a2 + 8) = v25;
      if ( (unsigned int)v5 >= v14 )
      {
        *((_DWORD *)a2 + 18) = 96;
        memmove(a2 + 96, Src, v13);
        v17 = &a2[v13 + 96];
        *((_DWORD *)a2 + 19) = v13 + 96;
        v18 = (unsigned __int16 *)v26;
        memmove(v17, v26[1], *(unsigned __int16 *)v26);
        v19 = &v17[*v18 + 2];
        *((_DWORD *)a2 + 20) = (_DWORD)v19 - (_DWORD)a2;
        memmove(v19, v32, Size);
        v20 = &v19[Size];
        *((_DWORD *)a2 + 21) = (_DWORD)v20 - (_DWORD)a2;
        memmove(v20, v33, v31);
        v21 = &v20[v31];
        *((_DWORD *)a2 + 22) = (_DWORD)v21 - (_DWORD)a2;
        memmove(v21, P[1], LOWORD(P[0]));
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
