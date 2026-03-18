/*
 * XREFs of WheapPrmTranslateDimmAddressIntel @ 0x14065E610
 * Callers:
 *     WheaPrmTranslateDimmAddress @ 0x14065E550 (WheaPrmTranslateDimmAddress.c)
 * Callees:
 *     WheapPrmInvokeHandler @ 0x14065E5CC (WheapPrmInvokeHandler.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall WheapPrmTranslateDimmAddressIntel(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ecx
  __int64 v8; // rdx
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
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v22[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+44h] [rbp-BCh]
  int v24; // [rsp+48h] [rbp-B8h]
  __int64 v25; // [rsp+4Ch] [rbp-B4h]
  __int64 v26; // [rsp+64h] [rbp-9Ch]
  __int64 v27; // [rsp+6Ch] [rbp-94h]
  __int64 v28; // [rsp+74h] [rbp-8Ch]
  __int64 v29; // [rsp+7Ch] [rbp-84h]
  __int64 v30; // [rsp+A4h] [rbp-5Ch]
  __int64 v31; // [rsp+ACh] [rbp-54h]
  __int64 v32; // [rsp+C4h] [rbp-3Ch]
  __int64 v33; // [rsp+CCh] [rbp-34h]
  __int64 v34; // [rsp+D4h] [rbp-2Ch]
  __int64 v35; // [rsp+DCh] [rbp-24h]
  __int64 v36; // [rsp+E4h] [rbp-1Ch]
  __int64 v37; // [rsp+ECh] [rbp-14h]
  __int64 v38; // [rsp+F4h] [rbp-Ch]
  __int64 v39; // [rsp+FCh] [rbp-4h]
  __int64 v40; // [rsp+104h] [rbp+4h]
  __int64 v41; // [rsp+10Ch] [rbp+Ch]
  __int64 v42; // [rsp+114h] [rbp+14h]
  __int64 v43; // [rsp+11Ch] [rbp+1Ch]
  __int64 v44; // [rsp+124h] [rbp+24h]
  __int64 v45; // [rsp+14Ch] [rbp+4Ch]
  __int64 v46; // [rsp+154h] [rbp+54h]
  __int64 v47; // [rsp+164h] [rbp+64h]
  __int64 v48; // [rsp+16Ch] [rbp+6Ch]

  v21 = 0LL;
  memset_0(v22, 255, 0x134uLL);
  v26 = *(_QWORD *)(a1 + 36);
  v27 = *(_QWORD *)(a1 + 44);
  v28 = *(_QWORD *)(a1 + 52);
  v29 = *(_QWORD *)(a1 + 60);
  v30 = *(_QWORD *)(a1 + 100);
  v31 = *(_QWORD *)(a1 + 108);
  v32 = *(_QWORD *)(a1 + 132);
  v33 = *(_QWORD *)(a1 + 140);
  v34 = *(_QWORD *)(a1 + 148);
  v35 = *(_QWORD *)(a1 + 156);
  v36 = *(_QWORD *)(a1 + 164);
  v37 = *(_QWORD *)(a1 + 172);
  v38 = *(_QWORD *)(a1 + 180);
  v39 = *(_QWORD *)(a1 + 188);
  v40 = *(_QWORD *)(a1 + 196);
  v41 = *(_QWORD *)(a1 + 204);
  v42 = *(_QWORD *)(a1 + 212);
  v43 = *(_QWORD *)(a1 + 220);
  v44 = *(_QWORD *)(a1 + 228);
  v45 = *(_QWORD *)(a1 + 268);
  v46 = *(_QWORD *)(a1 + 276);
  v47 = *(_QWORD *)(a1 + 292);
  v48 = *(_QWORD *)(a1 + 300);
  v23 = 3;
  v7 = WheapPrmInvokeHandler(v4, (__int64)v22, v5, v6, (__int64)&v21);
  if ( v7 >= 0 )
  {
    if ( v21 )
    {
      return (unsigned int)-1073741637;
    }
    else
    {
      v8 = 2LL;
      if ( v24 == 2 )
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
          *(_OWORD *)a1 = *v9;
          v11 = v9[2];
          *(_OWORD *)(a1 + 16) = v10;
          v12 = v9[3];
          *(_OWORD *)(a1 + 32) = v11;
          v13 = v9[4];
          *(_OWORD *)(a1 + 48) = v12;
          v14 = v9[5];
          *(_OWORD *)(a1 + 64) = v13;
          v15 = v9[6];
          *(_OWORD *)(a1 + 80) = v14;
          v16 = v9[7];
          v9 += 8;
          *(_OWORD *)(a1 + 96) = v15;
          a1 += 128LL;
          *(_OWORD *)(a1 - 16) = v16;
          --v8;
        }
        while ( v8 );
        v17 = v9[1];
        *(_OWORD *)a1 = *v9;
        v18 = v9[2];
        v19 = *((_DWORD *)v9 + 12);
        *(_OWORD *)(a1 + 16) = v17;
        *(_OWORD *)(a1 + 32) = v18;
        *(_DWORD *)(a1 + 48) = v19;
        *a2 = v25;
      }
    }
  }
  return (unsigned int)v7;
}
