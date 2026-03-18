/*
 * XREFs of MiReturnSystemCacheRegionsToKva @ 0x1403B6388
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1403B5010 (MiReleaseSystemCacheView.c)
 *     MiDeleteUnumappedSystemCacheViews @ 0x14066B148 (MiDeleteUnumappedSystemCacheViews.c)
 * Callees:
 *     MiUnlockWorkingSetOptimal @ 0x1402C04C8 (MiUnlockWorkingSetOptimal.c)
 *     MiSetSystemCacheReverseMap @ 0x1402C0620 (MiSetSystemCacheReverseMap.c)
 *     MiLockWorkingSetOptimal @ 0x1402C0690 (MiLockWorkingSetOptimal.c)
 *     MiReturnSystemVa @ 0x1402C0B88 (MiReturnSystemVa.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiReturnSystemCacheRegionsToKva(__int64 a1, _QWORD **a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r15
  _QWORD *v7; // rsi
  _QWORD *v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned __int8 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0;
  v6 = a1 + 18816;
  while ( 1 )
  {
    v7 = *a2;
    if ( *a2 == a2 )
      break;
    if ( (_QWORD **)v7[1] != a2 || (v8 = (_QWORD *)*v7, *(_QWORD **)(*v7 + 8LL) != v7) )
      __fastfail(3u);
    *a2 = v8;
    v8[1] = a2;
    v9 = v7[2];
    v10 = MiLockWorkingSetOptimal(v6, ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v12, a4);
    MiSetSystemCacheReverseMap(v11, v9, 0LL);
    MiUnlockWorkingSetOptimal(v6, v10, v12);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 2408));
    MiReturnSystemVa(v9, v9 + 0x200000);
    ExFreePoolWithTag(v7, 0);
  }
}
