/*
 * XREFs of DpiFreeAdapterInfo @ 0x14022F3F8
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x14018C23C (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     DpiGetAdapterInfo @ 0x14022F500 (DpiGetAdapterInfo.c)
 * Callees:
 *     DxgkFreeUnicodeString @ 0x140231224 (DxgkFreeUnicodeString.c)
 */

__int64 __fastcall DpiFreeAdapterInfo(_BYTE *a1)
{
  __int64 result; // rax

  if ( *a1 )
  {
    DxgkFreeUnicodeString(a1 + 8);
    DxgkFreeUnicodeString(a1 + 24);
    DxgkFreeUnicodeString(a1 + 48);
    DxgkFreeUnicodeString(a1 + 80);
    DxgkFreeUnicodeString(a1 + 96);
    DxgkFreeUnicodeString(a1 + 64);
    DxgkFreeUnicodeString(a1 + 192);
    DxgkFreeUnicodeString(a1 + 208);
    DxgkFreeUnicodeString(a1 + 128);
    DxgkFreeUnicodeString(a1 + 152);
    DxgkFreeUnicodeString(a1 + 224);
    DxgkFreeUnicodeString(a1 + 240);
    DxgkFreeUnicodeString(a1 + 280);
    return DxgkFreeUnicodeString(a1 + 296);
  }
  return result;
}
