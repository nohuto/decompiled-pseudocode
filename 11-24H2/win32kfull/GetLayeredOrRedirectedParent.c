/*
 * XREFs of GetLayeredOrRedirectedParent @ 0x140045C50
 * Callers:
 *     UserVisrgnFromHwnd @ 0x140045834 (UserVisrgnFromHwnd.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1400463C0 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     GreUpdateSpriteVisRgn @ 0x1400617E0 (GreUpdateSpriteVisRgn.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetLayeredOrRedirectedParent(_QWORD *a1)
{
  _QWORD *v1; // rdx
  int v2; // r8d
  __int64 v4; // rax
  __int64 v5; // rcx

  v1 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v2 = *(_DWORD *)(v1[5] + 24LL);
      if ( (v2 & 0x80000) != 0 )
        break;
      if ( (v2 & 0x20000000) == 0 )
      {
        v1 = (_QWORD *)v1[13];
        if ( v1 )
          continue;
      }
      if ( !v1 )
        return v1;
      break;
    }
    if ( v1 != a1 )
    {
      v4 = v1[3];
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 8);
        if ( v5 )
        {
          if ( v1 == *(_QWORD **)(v5 + 24) )
            return 0LL;
        }
      }
    }
  }
  return v1;
}
