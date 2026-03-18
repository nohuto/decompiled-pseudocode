/*
 * XREFs of xxxSendUAHInitMenuMessage @ 0x1C0236F3C
 * Callers:
 *     xxxMenuDraw @ 0x1C0235944 (xxxMenuDraw.c)
 *     xxxPaintMenuBar @ 0x1C0235DDC (xxxPaintMenuBar.c)
 *     xxxMNCompute @ 0x1C0237FB0 (xxxMNCompute.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 *     MNInitUAHMenu @ 0x1C023419C (MNInitUAHMenu.c)
 */

__int64 __fastcall xxxSendUAHInitMenuMessage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rcx
  ULONG_PTR v5; // r10
  unsigned int v6; // r8d
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v3 = *(__int64 **)(a2 + 16);
  v9 = 0LL;
  v8 = 0LL;
  if ( !v3 )
    v3 = **(__int64 ***)a2;
  MNInitUAHMenu(v3, a3, (__int64)&v8);
  v6 = xxxSendMessage(v5);
  if ( v6 )
    *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) |= 0x800u;
  else
    *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) &= ~0x800u;
  return v6;
}
