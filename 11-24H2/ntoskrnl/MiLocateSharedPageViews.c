/*
 * XREFs of MiLocateSharedPageViews @ 0x1406790E0
 * Callers:
 *     MmQueryBadAddresses @ 0x1409876D4 (MmQueryBadAddresses.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14020F410 (MiReleaseControlAreaWaiters.c)
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiReferencePfBackedSection @ 0x14022EFF8 (MiReferencePfBackedSection.c)
 *     MiPreventControlAreaDeletion @ 0x14022F600 (MiPreventControlAreaDeletion.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiTrimSection @ 0x1402B9B70 (MiTrimSection.c)
 *     MiIsPageOnBadList @ 0x14030492C (MiIsPageOnBadList.c)
 *     ObReferenceObjectSafeWithTag @ 0x14033E7D0 (ObReferenceObjectSafeWithTag.c)
 *     MiDecrementModifiedWriteCount @ 0x140370FD4 (MiDecrementModifiedWriteCount.c)
 *     MiDecrementSubsection @ 0x140371D7C (MiDecrementSubsection.c)
 *     MiDeleteTrimViewInfoList @ 0x140A4C370 (MiDeleteTrimViewInfoList.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiLocateSharedPageViews(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  char v6; // r15
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 Pool; // rax
  _QWORD *v10; // rbx
  __int64 result; // rax
  int v12; // eax
  __int64 *v13; // r14
  __int64 v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 *v17; // rax
  int v18; // ebx
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  _QWORD v22[5]; // [rsp+20h] [rbp-30h] BYREF
  int v23; // [rsp+48h] [rbp-8h]
  int v24; // [rsp+4Ch] [rbp-4h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp+40h] BYREF
  __int64 v26; // [rsp+98h] [rbp+48h] BYREF

  v24 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  v5 = 48 * a1 - 0x220000000000LL;
  v6 = MiSafeLockPage(a1, a2, a3);
  if ( v6 == 17 )
    return 3221226548LL;
  if ( MiIsPageOnBadList(v5)
    || (*(_DWORD *)(v5 + 32) & 0x40000000) == 0
    || *(__int64 *)(v5 + 40) >= 0
    || (*(_QWORD *)(v5 + 24) & 0x4000000000000000LL) != 0
    || (*(_QWORD *)(v5 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v5 + 8) > 0 )
  {
    MiUnlockPage(v5, v6);
    return 3221226548LL;
  }
  v7 = *(_QWORD *)(v5 + 8) | 0x8000000000000000uLL;
  if ( v7 == qword_140E2DA68 )
  {
    v8 = 2147352576LL;
LABEL_12:
    MiUnlockPage(v5, v6);
    Pool = MiAllocatePool(0x40uLL, 0x30uLL, 1633053005);
    v10 = (_QWORD *)Pool;
    if ( !Pool )
      return 3221225626LL;
    *(_QWORD *)(Pool + 16) = v8;
    *(_QWORD *)(Pool + 8) = a3;
    *(_QWORD *)(Pool + 24) = v8 + 4096;
    *(_QWORD *)(Pool + 32) = 0LL;
    *(_DWORD *)(Pool + 40) = 1;
    if ( ObReferenceObjectSafeWithTag(a3, 0x77566D4Du) )
    {
      *v10 = *(_QWORD *)(a2 + 8);
      result = 0LL;
      *(_QWORD *)(a2 + 8) = v10;
    }
    else
    {
      ExFreePoolWithTag(v10, 0);
      return 3221225738LL;
    }
    return result;
  }
  if ( v7 == qword_140E2DA70 )
  {
    v8 = qword_140E2DA78;
    if ( qword_140E2DA78 )
      goto LABEL_12;
  }
  v12 = *(_DWORD *)(v5 + 16);
  v13 = 0LL;
  v26 = 0LL;
  BugCheckParameter2 = 0LL;
  if ( (v12 & 0x400) != 0 )
  {
    v14 = MiPreventControlAreaDeletion(v5, (__int64 *)&BugCheckParameter2, &v26);
    if ( !v14 )
    {
      MiUnlockPage(v5, v6);
      return 3221225497LL;
    }
    v15 = *(_QWORD *)(v5 + 16);
    if ( qword_140E2DB80 && (v15 & 0x10) == 0 )
      v15 &= ~qword_140E2DB80;
    v16 = v15 >> 16;
    MiUnlockPage(v5, v6);
    v13 = (__int64 *)BugCheckParameter2;
  }
  else
  {
    MiUnlockPage(v5, v6);
    v17 = (__int64 *)MiReferencePfBackedSection(v7);
    v16 = (__int64)v17;
    if ( !v17 )
      return 3221225497LL;
    v14 = *v17;
  }
  v23 = 0;
  v22[0] = v14;
  v22[1] = v7;
  v22[2] = v7;
  v22[3] = v16;
  v22[4] = v16;
  v18 = MiTrimSection(v22, a2, 1, 0);
  if ( v13 )
    MiDecrementSubsection(v13);
  v19 = MiDecrementModifiedWriteCount(v14, 0);
  if ( v19 )
    MiReleaseControlAreaWaiters(v19, v20, v21);
  if ( v18 < 0 )
    MiDeleteTrimViewInfoList(*(PVOID *)(a2 + 8));
  return (unsigned int)v18;
}
