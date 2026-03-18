/*
 * XREFs of MiEliminateZeroPages @ 0x1408F8080
 * Callers:
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1408F6F24 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiCopyToCfgBitMap @ 0x1408FA0F0 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiGetPdeAddress @ 0x14041A4F0 (MiGetPdeAddress.c)
 *     MiConvertAndFlushWsleVas @ 0x140486DF0 (MiConvertAndFlushWsleVas.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall MiEliminateZeroPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // r15
  _QWORD *v8; // r8
  _QWORD *v9; // rdx
  __int64 PdeAddress; // rbx
  _BYTE v11[12]; // [rsp+60h] [rbp-F8h] BYREF
  int v12; // [rsp+6Ch] [rbp-ECh]
  int v13; // [rsp+7Ch] [rbp-DCh]

  memset_0(v11, 0, 0xC8uLL);
  MiInitializeTbFlushList((__int64)v11, a1, 20, 10, 1);
  v6 = a3 >> 12;
  v7 = 0LL;
  while ( v6 )
  {
    v8 = (_QWORD *)a2;
    v9 = (_QWORD *)(a2 + 4088);
    do
    {
      if ( *v8 | *v9 )
        break;
      ++v8;
      --v9;
    }
    while ( v8 <= v9 );
    if ( v8 > v9 )
    {
      PdeAddress = MiGetPdeAddress(a2);
      if ( v7 != PdeAddress )
      {
        if ( v13 )
          MiConvertAndFlushWsleVas(a1, (__int64)v11);
        v7 = PdeAddress;
      }
      MiInsertTbFlushEntry((__int64)v11, a2, 1LL, 0);
      if ( v13 == v12 )
        MiConvertAndFlushWsleVas(a1, (__int64)v11);
    }
    a2 += 4096LL;
    --v6;
  }
  if ( v13 )
    MiConvertAndFlushWsleVas(a1, (__int64)v11);
}
