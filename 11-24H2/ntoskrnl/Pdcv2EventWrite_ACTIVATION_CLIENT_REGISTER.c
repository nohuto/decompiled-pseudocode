/*
 * XREFs of Pdcv2EventWrite_ACTIVATION_CLIENT_REGISTER @ 0x140605350
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x14078D88C (Pdcv2ActivationClientRegister.c)
 * Callees:
 *     McTemplateU0qqqqzr3_EtwWriteTransfer @ 0x140604C50 (McTemplateU0qqqqzr3_EtwWriteTransfer.c)
 */

void __fastcall Pdcv2EventWrite_ACTIVATION_CLIENT_REGISTER(__int64 a1, __int64 a2)
{
  int v2; // r10d
  const wchar_t *v3; // r8
  __int64 v4; // rax
  int v5; // [rsp+20h] [rbp-28h]

  v2 = -1;
  v3 = &cchOriginalDestLength;
  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 32);
    v3 = (const wchar_t *)(a1 + 120);
  }
  if ( (byte_140F04D62 & 0x40) != 0 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v3[v4] );
    McTemplateU0qqqqzr3_EtwWriteTransfer(a1, a2, v2, a2, v5, v4, (__int64)v3);
  }
}
