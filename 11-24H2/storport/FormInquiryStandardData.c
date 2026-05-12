/*
 * XREFs of FormInquiryStandardData @ 0x1400FA2AC
 * Callers:
 *     ScsiInquiryRequest @ 0x140115960 (ScsiInquiryRequest.c)
 * Callees:
 *     SetSrbSenseData @ 0x140117490 (SetSrbSenseData.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall FormInquiryStandardData(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v4; // rax
  __int64 v5; // r11
  void *v6; // r9
  size_t v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rax
  signed int v10; // edx
  __int128 v11; // xmm0
  int v12; // r10d
  __int64 v13; // rcx
  unsigned int v14; // ecx
  _BYTE *v15; // r10
  __int64 v16; // rax
  __int128 Src; // [rsp+30h] [rbp-50h] BYREF
  __int128 v19; // [rsp+40h] [rbp-40h]
  __int128 v20; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+60h] [rbp-20h]
  int v22; // [rsp+68h] [rbp-18h]

  v2 = *(_BYTE *)(a2 + 2) == 40;
  v21 = 0LL;
  v22 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  Src = 0LL;
  v19 = 0LL;
  v5 = *(_QWORD *)(v4 + 592);
  v20 = 0LL;
  if ( v2 )
  {
    v6 = *(void **)(a2 + 64);
    v7 = *(unsigned int *)(a2 + 60);
  }
  else
  {
    v6 = *(void **)(a2 + 24);
    v7 = *(unsigned int *)(a2 + 16);
  }
  v8 = 0;
  LOWORD(Src) = Src & 0x7F00;
  BYTE3(Src) = BYTE3(Src) & 0xE0 | 0x12;
  v9 = *(_QWORD *)(a1 + 176);
  v10 = 7;
  BYTE2(Src) = 6;
  if ( v9 )
    BYTE5(Src) = BYTE5(Src) & 0xFE | ((*(_BYTE *)(v9 + 29) & 7) != 0);
  v11 = *(_OWORD *)(v5 + 24);
  BYTE7(Src) |= 2u;
  v12 = 0;
  v19 = v11;
  BYTE4(Src) = 55;
  v13 = 7LL;
  LODWORD(v20) = 538976288;
  *((_QWORD *)&Src + 1) = 0x20202020654D564ELL;
  do
  {
    if ( (unsigned __int8)(*(_BYTE *)(v5 + v13 + 64) - 33) <= 0x5Du && ++v12 == 4 )
      break;
    if ( !v13 )
      break;
    --v10;
    --v13;
  }
  while ( v13 >= 0 );
  v14 = 0;
  if ( (unsigned __int64)v10 < 8 )
  {
    v15 = (_BYTE *)(v10 + v5 + 64);
    do
    {
      if ( (unsigned __int8)(*v15 - 33) <= 0x5Du )
      {
        v16 = v14++;
        *((_BYTE *)&v20 + v16) = *v15;
        if ( v14 >= 4 )
          break;
      }
      ++v10;
      ++v15;
    }
    while ( (unsigned int)v10 < 8 );
  }
  if ( (*(_BYTE *)(v5 + 256) & 1) != 0 )
    HIWORD(v22) = -16129;
  if ( (unsigned int)v7 >= 0x3C )
  {
    v7 = 60LL;
  }
  else if ( !(_DWORD)v7 )
  {
    goto LABEL_20;
  }
  if ( v6 )
  {
    memmove(v6, &Src, v7);
    *(_BYTE *)(a2 + 3) = 1;
    return v8;
  }
LABEL_20:
  LOBYTE(v6) = 36;
  LOBYTE(v7) = 5;
  LOBYTE(v10) = 48;
  SetSrbSenseData(a2, v10, v7, (_DWORD)v6, 0);
  return (unsigned int)-1056964602;
}
