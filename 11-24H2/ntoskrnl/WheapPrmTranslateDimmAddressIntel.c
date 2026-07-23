/*
 * XREFs of WheapPrmTranslateDimmAddressIntel @ 0x14065CDE0
 * Callers:
 *     WheaPrmTranslateDimmAddress @ 0x14065CD20 (WheaPrmTranslateDimmAddress.c)
 * Callees:
 *     WheapPrmInvokeHandler @ 0x14065CD9C (WheapPrmInvokeHandler.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall WheapPrmTranslateDimmAddressIntel(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  int v5; // ecx
  __int64 v6; // rdx
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
  _BYTE v19[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh]
  int v21; // [rsp+48h] [rbp-B8h]
  __int64 v22; // [rsp+4Ch] [rbp-B4h]
  __int64 v23; // [rsp+64h] [rbp-9Ch]
  __int64 v24; // [rsp+6Ch] [rbp-94h]
  __int64 v25; // [rsp+74h] [rbp-8Ch]
  __int64 v26; // [rsp+7Ch] [rbp-84h]
  __int64 v27; // [rsp+A4h] [rbp-5Ch]
  __int64 v28; // [rsp+ACh] [rbp-54h]
  __int64 v29; // [rsp+C4h] [rbp-3Ch]
  __int64 v30; // [rsp+CCh] [rbp-34h]
  __int64 v31; // [rsp+D4h] [rbp-2Ch]
  __int64 v32; // [rsp+DCh] [rbp-24h]
  __int64 v33; // [rsp+E4h] [rbp-1Ch]
  __int64 v34; // [rsp+ECh] [rbp-14h]
  __int64 v35; // [rsp+F4h] [rbp-Ch]
  __int64 v36; // [rsp+FCh] [rbp-4h]
  __int64 v37; // [rsp+104h] [rbp+4h]
  __int64 v38; // [rsp+10Ch] [rbp+Ch]
  __int64 v39; // [rsp+114h] [rbp+14h]
  __int64 v40; // [rsp+11Ch] [rbp+1Ch]
  __int64 v41; // [rsp+124h] [rbp+24h]
  __int64 v42; // [rsp+14Ch] [rbp+4Ch]
  __int64 v43; // [rsp+154h] [rbp+54h]
  __int64 v44; // [rsp+164h] [rbp+64h]
  __int64 v45; // [rsp+16Ch] [rbp+6Ch]

  memset_0(v19, 255, 0x134uLL);
  v23 = *(_QWORD *)(a1 + 36);
  v24 = *(_QWORD *)(a1 + 44);
  v25 = *(_QWORD *)(a1 + 52);
  v26 = *(_QWORD *)(a1 + 60);
  v27 = *(_QWORD *)(a1 + 100);
  v28 = *(_QWORD *)(a1 + 108);
  v29 = *(_QWORD *)(a1 + 132);
  v30 = *(_QWORD *)(a1 + 140);
  v31 = *(_QWORD *)(a1 + 148);
  v32 = *(_QWORD *)(a1 + 156);
  v33 = *(_QWORD *)(a1 + 164);
  v34 = *(_QWORD *)(a1 + 172);
  v35 = *(_QWORD *)(a1 + 180);
  v36 = *(_QWORD *)(a1 + 188);
  v37 = *(_QWORD *)(a1 + 196);
  v38 = *(_QWORD *)(a1 + 204);
  v39 = *(_QWORD *)(a1 + 212);
  v40 = *(_QWORD *)(a1 + 220);
  v41 = *(_QWORD *)(a1 + 228);
  v42 = *(_QWORD *)(a1 + 268);
  v43 = *(_QWORD *)(a1 + 276);
  v44 = *(_QWORD *)(a1 + 292);
  v45 = *(_QWORD *)(a1 + 300);
  v20 = 3;
  v5 = WheapPrmInvokeHandler(v4, (__int64)v19);
  if ( v5 >= 0 )
  {
    v6 = 2LL;
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
        *(_OWORD *)a1 = *v7;
        v9 = v7[2];
        *(_OWORD *)(a1 + 16) = v8;
        v10 = v7[3];
        *(_OWORD *)(a1 + 32) = v9;
        v11 = v7[4];
        *(_OWORD *)(a1 + 48) = v10;
        v12 = v7[5];
        *(_OWORD *)(a1 + 64) = v11;
        v13 = v7[6];
        *(_OWORD *)(a1 + 80) = v12;
        v14 = v7[7];
        v7 += 8;
        *(_OWORD *)(a1 + 96) = v13;
        a1 += 128LL;
        *(_OWORD *)(a1 - 16) = v14;
        --v6;
      }
      while ( v6 );
      v15 = v7[1];
      *(_OWORD *)a1 = *v7;
      v16 = v7[2];
      v17 = *((_DWORD *)v7 + 12);
      *(_OWORD *)(a1 + 16) = v15;
      *(_OWORD *)(a1 + 32) = v16;
      *(_DWORD *)(a1 + 48) = v17;
      *a2 = v22;
    }
  }
  return (unsigned int)v5;
}
