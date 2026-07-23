/*
 * XREFs of ViDeadlockSearchResource @ 0x140B9C0E0
 * Callers:
 *     ViDeadlockAddResource @ 0x140B9A880 (ViDeadlockAddResource.c)
 *     VfDeadlockReleaseResource @ 0x140BA95AC (VfDeadlockReleaseResource.c)
 *     VfDeadlockAcquireResource @ 0x140BAA3C4 (VfDeadlockAcquireResource.c)
 * Callees:
 *     VfUtilAddressRangeFit @ 0x140B85148 (VfUtilAddressRangeFit.c)
 *     ViDeadlockForgetResourceHistory @ 0x140B9B56C (ViDeadlockForgetResourceHistory.c)
 */

_QWORD *__fastcall ViDeadlockSearchResource(unsigned __int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rcx
  _QWORD **v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r11
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  _QWORD *i; // rax

  v4 = (a1 >> 12) % 0x3FF;
  v5 = (_QWORD **)(*((_QWORD *)ViDeadlockGlobals + 2) + 16 * v4);
  if ( *v5 != v5 && (unsigned int)VfUtilAddressRangeFit((unsigned __int64 *)ViDeadlockGlobals + 2 * v4 + 4, a1, a1 + 1) )
  {
    if ( (++*(_DWORD *)(v8 + 32848) & 0xF) == 0 )
    {
      v9 = *v5;
      while ( v9 != v5 )
      {
        v10 = (__int64)(v9 - 5);
        v9 = (_QWORD *)*v9;
        ViDeadlockForgetResourceHistory(v10, v6, v7, a2);
      }
    }
    for ( i = *v5; i != v5; i = (_QWORD *)*i )
    {
      if ( *(i - 4) == a1 )
        return i - 5;
    }
  }
  return 0LL;
}
