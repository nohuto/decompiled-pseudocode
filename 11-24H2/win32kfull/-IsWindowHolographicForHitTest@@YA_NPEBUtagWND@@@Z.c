/*
 * XREFs of ?IsWindowHolographicForHitTest@@YA_NPEBUtagWND@@@Z @ 0x1400F6E70
 * Callers:
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1400F6BF4 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsWindowHolographicForHitTest(const struct tagWND *a1)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  __int64 v4; // rax

  if ( a1 )
  {
    while ( 1 )
    {
      v1 = *((_QWORD *)a1 + 13);
      if ( !v1 )
        break;
      v3 = *((_QWORD *)a1 + 3);
      if ( v3 )
      {
        v4 = *(_QWORD *)(v3 + 8);
        if ( v4 )
        {
          if ( v1 == *(_QWORD *)(v4 + 24) )
            return a1 && *(char *)(*((_QWORD *)a1 + 5) + 233LL) < 0;
        }
      }
      a1 = (const struct tagWND *)*((_QWORD *)a1 + 13);
    }
  }
  return 0;
}
