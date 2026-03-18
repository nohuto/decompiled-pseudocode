/*
 * XREFs of xxxSendUAHInitMenuMessage @ 0x14006BAE0
 * Callers:
 *     xxxMenuDraw @ 0x14006938C (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x14006A318 (xxxMNCompute.c)
 *     xxxPaintMenuBar @ 0x1401D8150 (xxxPaintMenuBar.c)
 * Callees:
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendUAHInitMenuMessage(struct tagWND *a1, __int64 a2)
{
  unsigned int v3; // r8d

  v3 = xxxSendMessage(a1, 0x93u);
  if ( v3 )
    *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) |= 0x800u;
  else
    *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) &= ~0x800u;
  return v3;
}
