/*
 * XREFs of WheapPrmTranslatePhysicalAddressIntel @ 0x14065E858
 * Callers:
 *     WheaPrmTranslatePhysicalAddress @ 0x14065E590 (WheaPrmTranslatePhysicalAddress.c)
 * Callees:
 *     WheapPrmInvokeHandler @ 0x14065E5CC (WheapPrmInvokeHandler.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall WheapPrmTranslatePhysicalAddressIntel(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ecx
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  int v19; // eax
  __int64 v21; // [rsp+30h] [rbp-168h] BYREF
  _BYTE v22[4]; // [rsp+40h] [rbp-158h] BYREF
  int v23; // [rsp+44h] [rbp-154h]
  int v24; // [rsp+48h] [rbp-150h]
  __int64 v25; // [rsp+4Ch] [rbp-14Ch]

  v21 = 0LL;
  memset_0(v22, 255, 0x134uLL);
  v25 = a1;
  v4 = 2LL;
  v23 = 2;
  v8 = WheapPrmInvokeHandler(v5, (__int64)v22, v6, v7, (__int64)&v21);
  if ( v8 >= 0 )
  {
    if ( v21 )
    {
      return (unsigned int)-1073741637;
    }
    else if ( v24 == 2 )
    {
      return (unsigned int)-1073741811;
    }
    else if ( v24 == 3 )
    {
      return (unsigned int)-1073741595;
    }
    else if ( v24 )
    {
      return (unsigned int)-1073741823;
    }
    else
    {
      v9 = v22;
      do
      {
        v10 = v9[1];
        *a2 = *v9;
        v11 = v9[2];
        a2[1] = v10;
        v12 = v9[3];
        a2[2] = v11;
        v13 = v9[4];
        a2[3] = v12;
        v14 = v9[5];
        a2[4] = v13;
        v15 = v9[6];
        a2[5] = v14;
        v16 = v9[7];
        v9 += 8;
        a2[6] = v15;
        a2 += 8;
        *(a2 - 1) = v16;
        --v4;
      }
      while ( v4 );
      v17 = v9[1];
      *a2 = *v9;
      v18 = v9[2];
      v19 = *((_DWORD *)v9 + 12);
      a2[1] = v17;
      a2[2] = v18;
      *((_DWORD *)a2 + 12) = v19;
    }
  }
  return (unsigned int)v8;
}
