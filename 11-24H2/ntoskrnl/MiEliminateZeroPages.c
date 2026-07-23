/*
 * XREFs of MiEliminateZeroPages @ 0x1409752C0
 * Callers:
 *     MiCopyToCfgBitMap @ 0x14091C9CC (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140974760 (MiUpdateCfgSystemWideBitmapWorker.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiGetPdeAddress @ 0x14040A4F0 (MiGetPdeAddress.c)
 *     MiConvertAndFlushWsleVas @ 0x140481E60 (MiConvertAndFlushWsleVas.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall MiEliminateZeroPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rsi
  __int64 v9; // r15
  _QWORD *v10; // rdx
  __int64 PdeAddress; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE v14[12]; // [rsp+60h] [rbp-F8h] BYREF
  int v15; // [rsp+6Ch] [rbp-ECh]
  int v16; // [rsp+7Ch] [rbp-DCh]

  memset_0(v14, 0, 0xC8uLL);
  MiInitializeTbFlushList((__int64)v14, a1, 20, 10, 1);
  v8 = a3 >> 12;
  v9 = 0LL;
  while ( v8 )
  {
    v6 = (_QWORD *)a2;
    v10 = (_QWORD *)(a2 + 4088);
    do
    {
      if ( *v6 | *v10 )
        break;
      ++v6;
      --v10;
    }
    while ( v6 <= v10 );
    if ( v6 > v10 )
    {
      PdeAddress = MiGetPdeAddress(a2);
      if ( v9 != PdeAddress )
      {
        if ( v16 )
          MiConvertAndFlushWsleVas(a1, (__int64)v14, v12, v13);
        v9 = PdeAddress;
      }
      MiInsertTbFlushEntry((__int64)v14, a2, 1LL, 0);
      if ( v16 == v15 )
        MiConvertAndFlushWsleVas(a1, (__int64)v14, (__int64)v6, v7);
    }
    a2 += 4096LL;
    --v8;
  }
  if ( v16 )
    MiConvertAndFlushWsleVas(a1, (__int64)v14, (__int64)v6, v7);
}
