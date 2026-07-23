/*
 * XREFs of WheapPrmTranslatePhysicalAddressIntel @ 0x14065D028
 * Callers:
 *     WheaPrmTranslatePhysicalAddress @ 0x14065CD60 (WheaPrmTranslatePhysicalAddress.c)
 * Callees:
 *     WheapPrmInvokeHandler @ 0x14065CD9C (WheapPrmInvokeHandler.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall WheapPrmTranslatePhysicalAddressIntel(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  int v6; // ecx
  _OWORD *v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  int v17; // eax
  _BYTE v19[4]; // [rsp+40h] [rbp-158h] BYREF
  int v20; // [rsp+44h] [rbp-154h]
  int v21; // [rsp+48h] [rbp-150h]
  __int64 v22; // [rsp+4Ch] [rbp-14Ch]

  memset_0(v19, 255, 0x134uLL);
  v22 = a1;
  v4 = 2LL;
  v20 = 2;
  v6 = WheapPrmInvokeHandler(v5, (__int64)v19);
  if ( v6 >= 0 )
  {
    if ( v21 == 2 )
    {
      return (unsigned int)-1073741811;
    }
    else if ( v21 == 3 )
    {
      return (unsigned int)-1073741595;
    }
    else if ( v21 )
    {
      return (unsigned int)-1073741823;
    }
    else
    {
      v7 = v19;
      do
      {
        v8 = v7[1];
        *a2 = *v7;
        v9 = v7[2];
        a2[1] = v8;
        v10 = v7[3];
        a2[2] = v9;
        v11 = v7[4];
        a2[3] = v10;
        v12 = v7[5];
        a2[4] = v11;
        v13 = v7[6];
        a2[5] = v12;
        v14 = v7[7];
        v7 += 8;
        a2[6] = v13;
        a2 += 8;
        *(a2 - 1) = v14;
        --v4;
      }
      while ( v4 );
      v15 = v7[1];
      *a2 = *v7;
      v16 = v7[2];
      v17 = *((_DWORD *)v7 + 12);
      a2[1] = v15;
      a2[2] = v16;
      *((_DWORD *)a2 + 12) = v17;
    }
  }
  return (unsigned int)v6;
}
