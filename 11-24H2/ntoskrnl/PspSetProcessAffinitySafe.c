/*
 * XREFs of PspSetProcessAffinitySafe @ 0x140A42004
 * Callers:
 *     PspUpdateSingleProcessAffinity @ 0x1407756D0 (PspUpdateSingleProcessAffinity.c)
 *     PspApplyJobLimitsToProcess @ 0x1408D873C (PspApplyJobLimitsToProcess.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     KeSetAffinityProcess @ 0x14032B26C (KeSetAffinityProcess.c)
 *     KeIsSubsetAffinityEx @ 0x1403A1D00 (KeIsSubsetAffinityEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PspSetProcessAffinitySafe(
        struct _KPROCESS *a1,
        char a2,
        struct _KAFFINITY_EX *a3,
        __int64 *a4,
        int *a5)
{
  int v9; // ebp
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rdx
  char v13; // si
  unsigned __int64 v14; // rbx
  int v15; // eax
  _DWORD v17[2]; // [rsp+30h] [rbp-158h] BYREF
  _QWORD v18[33]; // [rsp+38h] [rbp-150h] BYREF

  memset_0(v17, 0, 0x108uLL);
  v9 = 0;
  v10 = 1;
  if ( a4 )
  {
    v17[1] = 0;
    v17[0] = 2097153;
    memset_0(v18, 0, 0x100uLL);
    v11 = *((unsigned __int16 *)a4 + 4);
    v12 = *a4;
    if ( LOWORD(v17[0]) <= (unsigned __int16)v11 )
    {
      if ( HIWORD(v17[0]) <= (unsigned __int16)v11 )
        goto LABEL_4;
      LOWORD(v17[0]) = v11 + 1;
    }
    v18[v11] |= v12;
LABEL_4:
    a3 = (struct _KAFFINITY_EX *)v17;
    v13 = 1;
    goto LABEL_5;
  }
  v13 = 0;
  if ( (a2 & 2) != 0 )
    v13 = 2;
LABEL_5:
  if ( (a2 & 1) != 0 || (a1[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
  {
    v14 = 0LL;
    goto LABEL_13;
  }
  v14 = a1[1].Padding[3];
  if ( !v14
    || (ExAcquireResourceSharedLite((PERESOURCE)(v14 + 56), 1u), v15 = *(_DWORD *)(v14 + 1056), (v15 & 0x10) == 0)
    || (v15 & 0x4000) != 0 && (unsigned int)KeIsSubsetAffinityEx(&a3->Count, (unsigned __int16 *)(v14 + 728)) )
  {
LABEL_13:
    v9 = KeSetAffinityProcess(a1, v13, a3);
    if ( !v14 )
      goto LABEL_15;
    goto LABEL_14;
  }
  v10 = 0;
LABEL_14:
  ExReleaseResourceLite((PERESOURCE)(v14 + 56));
LABEL_15:
  if ( v9 >= 0 )
    *a5 = v10;
  return (unsigned int)v9;
}
