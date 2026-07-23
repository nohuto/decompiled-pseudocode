/*
 * XREFs of Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE @ 0x1402B885C
 * Callers:
 *     Pdcv2ActivationClientActivate @ 0x1409EB97C (Pdcv2ActivationClientActivate.c)
 * Callees:
 *     McTemplateU0qqzr1qzr3qqqqpqqzr11_EtwWriteTransfer @ 0x1402B894C (McTemplateU0qqzr1qzr3qqqqpqqzr11_EtwWriteTransfer.c)
 */

void __fastcall Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE(__int64 a1, _DWORD *a2, char a3)
{
  int v3; // r11d
  const wchar_t *v4; // r10
  int v6; // ebp
  int v7; // r8d
  int v8; // esi
  const wchar_t *v9; // rbx
  const wchar_t *v10; // rdi
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax

  LOBYTE(v3) = -1;
  v4 = &cchOriginalDestLength;
  LOBYTE(v6) = -1;
  v7 = -1;
  LOBYTE(v8) = -1;
  v9 = &cchOriginalDestLength;
  v10 = &cchOriginalDestLength;
  if ( a2 )
  {
    v7 = a2[8];
    v4 = (const wchar_t *)(a2 + 30);
    v6 = a2[62];
    v3 = a2[63];
  }
  if ( a1 )
  {
    v8 = *(_DWORD *)(a1 + 52);
    v10 = (const wchar_t *)(a1 + 72);
    v9 = (const wchar_t *)(a1 + 328);
  }
  if ( (byte_140F04D62 & 0x40) != 0 )
  {
    v11 = -1LL;
    v12 = -1LL;
    do
      ++v12;
    while ( v4[v12] );
    v13 = -1LL;
    do
      ++v13;
    while ( v9[v13] );
    do
      ++v11;
    while ( v10[v11] );
    McTemplateU0qqzr1qzr3qqqqpqqzr11_EtwWriteTransfer(
      a1,
      v12,
      v7,
      v11,
      (__int64)v10,
      v13,
      (__int64)v9,
      v3,
      v6,
      v8,
      a3,
      a1);
  }
}
