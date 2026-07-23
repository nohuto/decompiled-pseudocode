/*
 * XREFs of MiLocateSharedPageViews @ 0x14067A2C0
 * Callers:
 *     MmQueryBadAddresses @ 0x14096FEB8 (MmQueryBadAddresses.c)
 * Callees:
 *     MiDecrementModifiedWriteCount @ 0x140259314 (MiDecrementModifiedWriteCount.c)
 *     MiDecrementSubsection @ 0x14025A644 (MiDecrementSubsection.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiReferencePfBackedSection @ 0x140302908 (MiReferencePfBackedSection.c)
 *     MiPreventControlAreaDeletion @ 0x140302F10 (MiPreventControlAreaDeletion.c)
 *     MiIsPageOnBadList @ 0x14030E80C (MiIsPageOnBadList.c)
 *     ObReferenceObjectSafeWithTag @ 0x14031DCB0 (ObReferenceObjectSafeWithTag.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiReleaseControlAreaWaiters @ 0x140338770 (MiReleaseControlAreaWaiters.c)
 *     MiTrimSection @ 0x1403612B0 (MiTrimSection.c)
 *     MiDeleteTrimViewInfoList @ 0x140A42F00 (MiDeleteTrimViewInfoList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  _QWORD v20[5]; // [rsp+20h] [rbp-30h] BYREF
  int v21; // [rsp+48h] [rbp-8h]
  int v22; // [rsp+4Ch] [rbp-4h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp+40h] BYREF
  __int64 v24; // [rsp+98h] [rbp+48h] BYREF

  v22 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  v5 = 48 * a1 - 0x220000000000LL;
  v6 = MiSafeLockPage(a1);
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
  if ( v7 == qword_140E2DBA8 )
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
  if ( v7 == qword_140E2DBB0 )
  {
    v8 = qword_140E2DBB8;
    if ( qword_140E2DBB8 )
      goto LABEL_12;
  }
  v12 = *(_DWORD *)(v5 + 16);
  v13 = 0LL;
  v24 = 0LL;
  BugCheckParameter2 = 0LL;
  if ( (v12 & 0x400) != 0 )
  {
    v14 = MiPreventControlAreaDeletion(v5, &BugCheckParameter2, &v24);
    if ( !v14 )
    {
      MiUnlockPage(v5, v6);
      return 3221225497LL;
    }
    v15 = *(_QWORD *)(v5 + 16);
    if ( qword_140E2DCC0 && (v15 & 0x10) == 0 )
      v15 &= ~qword_140E2DCC0;
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
  v21 = 0;
  v20[0] = v14;
  v20[1] = v7;
  v20[2] = v7;
  v20[3] = v16;
  v20[4] = v16;
  v18 = MiTrimSection(v20, a2, 1, 0);
  if ( v13 )
    MiDecrementSubsection(v13);
  v19 = MiDecrementModifiedWriteCount(v14, 0);
  if ( v19 )
    MiReleaseControlAreaWaiters(v19);
  if ( v18 < 0 )
    MiDeleteTrimViewInfoList(*(PVOID *)(a2 + 8));
  return (unsigned int)v18;
}
