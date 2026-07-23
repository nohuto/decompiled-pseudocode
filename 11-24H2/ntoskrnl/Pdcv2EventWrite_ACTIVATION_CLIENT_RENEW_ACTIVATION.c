/*
 * XREFs of Pdcv2EventWrite_ACTIVATION_CLIENT_RENEW_ACTIVATION @ 0x1406053A8
 * Callers:
 *     Pdcv2ActivationClientRenewActivation @ 0x14078DA44 (Pdcv2ActivationClientRenewActivation.c)
 * Callees:
 *     McTemplateU0qqzr1qzr3qqqxqqqpqzr13q_EtwWriteTransfer @ 0x140604EC4 (McTemplateU0qqzr1qzr3qqqxqqqpqzr13q_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall Pdcv2EventWrite_ACTIVATION_CLIENT_RENEW_ACTIVATION(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        char a4)
{
  int v4; // r11d
  const wchar_t *v5; // rbx
  __int64 v6; // r9
  NTSTATUS result; // eax
  char v8; // r10
  int v9; // ebp
  __int64 v10; // rsi
  int v11; // r15d
  int v12; // r14d
  int v13; // r12d
  int v14; // r13d
  const wchar_t *v15; // r8
  const wchar_t *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rax

  LOBYTE(v4) = -1;
  v5 = &cchOriginalDestLength;
  v6 = -1LL;
  result = 0;
  v8 = a1;
  LOBYTE(v9) = -1;
  LOBYTE(v10) = -1;
  LOBYTE(v11) = 0;
  v12 = -1;
  LOBYTE(v13) = -1;
  LOBYTE(v14) = -1;
  v15 = &cchOriginalDestLength;
  v16 = &cchOriginalDestLength;
  if ( a2 )
  {
    v12 = a2[8];
    v5 = (const wchar_t *)(a2 + 30);
    v9 = a2[62];
    v4 = a2[63];
  }
  if ( a1 )
  {
    v13 = *(_DWORD *)(a1 + 52);
    v16 = (const wchar_t *)(a1 + 72);
    v15 = (const wchar_t *)(a1 + 328);
    v14 = *(_DWORD *)(a1 + 64);
    v11 = *(_DWORD *)(a1 + 584);
    result = 0;
    v10 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
        - *(_QWORD *)(a1 + 40);
  }
  if ( (byte_140F04D62 & 0x40) != 0 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v5[v17] );
    v18 = -1LL;
    do
      ++v18;
    while ( v15[v18] );
    do
      ++v6;
    while ( v16[v6] );
    return McTemplateU0qqzr1qzr3qqqxqqqpqzr13q_EtwWriteTransfer(
             a3,
             0LL,
             v12,
             v6,
             (__int64)v16,
             v18,
             (__int64)v15,
             v13,
             v4,
             v9,
             v10,
             v14,
             a3,
             a4,
             v8,
             v17,
             (__int64)v5,
             v11);
  }
  return result;
}
