/*
 * XREFs of ?EraseAllViews@FullScreenPositioner@@AEAAJXZ @ 0x1802CB97C
 * Callers:
 *     ?UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800C8710 (-UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FullScreenPositioner::EraseAllViews(FullScreenPositioner *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 29);
  if ( v1 != *((_QWORD *)this + 30) )
    *((_QWORD *)this + 30) = v1;
  return 0LL;
}
