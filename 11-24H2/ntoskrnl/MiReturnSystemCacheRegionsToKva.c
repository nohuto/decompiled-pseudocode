/*
 * XREFs of MiReturnSystemCacheRegionsToKva @ 0x1402D24DC
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1402D4388 (MiReleaseSystemCacheView.c)
 *     MiDeleteUnumappedSystemCacheViews @ 0x140676A90 (MiDeleteUnumappedSystemCacheViews.c)
 * Callees:
 *     MiUnlockWorkingSetOptimal @ 0x14024231C (MiUnlockWorkingSetOptimal.c)
 *     MiSetSystemCacheReverseMap @ 0x140242480 (MiSetSystemCacheReverseMap.c)
 *     MiLockWorkingSetOptimal @ 0x1402424F0 (MiLockWorkingSetOptimal.c)
 *     MiReturnSystemVa @ 0x1402429F4 (MiReturnSystemVa.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiReturnSystemCacheRegionsToKva(__int64 a1, _QWORD **a2)
{
  __int64 v4; // r15
  _QWORD *v5; // rsi
  _QWORD *v6; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0;
  v4 = a1 + 18816;
  while ( 1 )
  {
    v5 = *a2;
    if ( *a2 == a2 )
      break;
    if ( (_QWORD **)v5[1] != a2 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *a2 = v6;
    v6[1] = a2;
    v7 = v5[2];
    v8 = MiLockWorkingSetOptimal(v4, ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned __int8 *)&v10);
    MiSetSystemCacheReverseMap(v9, v7, 0LL);
    MiUnlockWorkingSetOptimal(v4, v8, v10);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 2408));
    MiReturnSystemVa(v7, v7 + 0x200000, 7);
    ExFreePoolWithTag(v5, 0);
  }
}
