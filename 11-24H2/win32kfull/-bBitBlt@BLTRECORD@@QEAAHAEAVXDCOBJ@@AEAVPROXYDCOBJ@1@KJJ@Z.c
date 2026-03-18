/*
 * XREFs of ?bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KJJ@Z @ 0x1401DCC04
 * Callers:
 *     ?bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x1400D2508 (-bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 * Callees:
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z @ 0x1400158E8 (-bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z.c)
 */

__int64 __fastcall BLTRECORD::bBitBlt(
        BLTRECORD *this,
        struct XDCOBJ *a2,
        struct BLTRECORD::PROXYDCOBJ *a3,
        unsigned int a4,
        int a5,
        int a6)
{
  __int128 v11; // xmm7
  __int128 v12; // xmm6
  int v13; // eax
  int v14; // ecx
  int v15; // ebx
  __int128 v16; // xmm7
  __int128 v17; // xmm6
  int v18; // ecx
  __int128 v19; // xmm7
  __int128 v20; // xmm6
  int v21; // eax
  int v22; // ecx
  int v23; // ebx
  int v24; // eax
  int v25; // eax
  int v26; // eax

  switch ( a5 )
  {
    case -1:
      --*((_DWORD *)this + 40);
LABEL_3:
      if ( a6 != 1 )
      {
        *((_DWORD *)this + 41) += a6;
        return BLTRECORD::bBitBlt(this, a2, a3, a4);
      }
      --*((_DWORD *)this + 35);
      v16 = *((_OWORD *)this + 8);
      v17 = *(_OWORD *)((char *)this + 152);
      v13 = BLTRECORD::bBitBlt(this, a2, a3, a4);
      *((_OWORD *)this + 8) = v16;
      v18 = *((_DWORD *)this + 35);
      *((_DWORD *)this + 33) = v18;
      *((_DWORD *)this + 35) = v18 + 1;
      *(_OWORD *)((char *)this + 152) = v17;
      *((_DWORD *)this + 39) = *((_DWORD *)this + 41) - 1;
      goto LABEL_9;
    case 0:
      goto LABEL_3;
    case 1:
      --*((_DWORD *)this + 34);
      if ( a6 == 1 )
      {
        --*((_DWORD *)this + 35);
        v19 = *((_OWORD *)this + 8);
        v20 = *(_OWORD *)((char *)this + 152);
        v21 = BLTRECORD::bBitBlt(this, a2, a3, a4);
        *((_OWORD *)this + 8) = v19;
        v22 = *((_DWORD *)this + 34);
        *((_DWORD *)this + 32) = v22;
        *(_OWORD *)((char *)this + 152) = v20;
        *((_DWORD *)this + 34) = v22 + 1;
        *((_DWORD *)this + 38) = *((_DWORD *)this + 40) - 1;
        v23 = BLTRECORD::bBitBlt(this, a2, a3, a4) & v21;
        *((_OWORD *)this + 8) = v19;
        v24 = *((_DWORD *)this + 35);
        *((_DWORD *)this + 33) = v24;
        *((_DWORD *)this + 35) = v24 + 1;
        *(_OWORD *)((char *)this + 152) = v20;
        *((_DWORD *)this + 39) = *((_DWORD *)this + 41) - 1;
        v15 = BLTRECORD::bBitBlt(this, a2, a3, a4) & v23;
        *((_OWORD *)this + 8) = v19;
        v25 = *((_DWORD *)this + 35);
        *((_DWORD *)this + 33) = v25;
        *((_DWORD *)this + 35) = v25 + 1;
        *(_OWORD *)((char *)this + 152) = v20;
        *((_DWORD *)this + 39) = *((_DWORD *)this + 41) - 1;
        v26 = *((_DWORD *)this + 34);
        *((_DWORD *)this + 32) = v26;
        *((_DWORD *)this + 34) = v26 + 1;
        *((_DWORD *)this + 38) = *((_DWORD *)this + 40) - 1;
        return v15 & (unsigned int)BLTRECORD::bBitBlt(this, a2, a3, a4);
      }
      *((_DWORD *)this + 41) += a6;
      v11 = *((_OWORD *)this + 8);
      v12 = *(_OWORD *)((char *)this + 152);
      v13 = BLTRECORD::bBitBlt(this, a2, a3, a4);
      *((_OWORD *)this + 8) = v11;
      v14 = *((_DWORD *)this + 34);
      *((_DWORD *)this + 32) = v14;
      *(_OWORD *)((char *)this + 152) = v12;
      *((_DWORD *)this + 34) = v14 + 1;
      *((_DWORD *)this + 38) = *((_DWORD *)this + 40) - 1;
LABEL_9:
      v15 = v13;
      return v15 & (unsigned int)BLTRECORD::bBitBlt(this, a2, a3, a4);
  }
  return 0LL;
}
