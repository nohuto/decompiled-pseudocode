/*
 * XREFs of ??$_Uninitialized_move@PEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@YAPEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@0@@Z @ 0x18008B4BC
 * Callers:
 *     ??$_Emplace_reallocate@AEBKAEAPEAUIRawInputProvider@@@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@AEAAPEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@1@QEAU21@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x18008B384 (--$_Emplace_reallocate@AEBKAEAPEAUIRawInputProvider@@@-$vector@U-$pair@KV-$ComPtr@UIRawInputProv.c)
 *     ??$_Reallocate@$0A@@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@AEAAXAEA_K@Z @ 0x1800CCF18 (--$_Reallocate@$0A@@-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V-$all.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@std@@@std@@YAXPEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@0@QEAU10@AEAV?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@0@@Z @ 0x1800383E8 (--$_Destroy_range@V-$allocator@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@std.c)
 */

char *__fastcall std::_Uninitialized_move<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>> *,std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>>(
        char *a1,
        char *a2,
        __int64 a3)
{
  char *v3; // rbx
  _QWORD *v4; // r8
  signed __int64 v5; // r9
  _QWORD *v6; // rcx

  v3 = (char *)a3;
  if ( a1 != a2 )
  {
    v4 = (_QWORD *)(a3 + 8);
    v5 = a1 - v3;
    do
    {
      v6 = (_QWORD *)((char *)v4 + v5);
      *(_DWORD *)v3 = *(_DWORD *)((char *)v4 + v5 - 8);
      *v4 = 0LL;
      if ( v4 != (_QWORD *)((char *)v4 + v5) )
      {
        *v4 = *v6;
        *v6 = 0LL;
      }
      v4 += 2;
      v3 += 16;
    }
    while ( (char *)v4 + v5 - 8 != a2 );
  }
  std::_Destroy_range<std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>>(
    (__int64)v3,
    (__int64)v3);
  return v3;
}
