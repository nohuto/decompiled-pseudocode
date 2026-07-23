/*
 * XREFs of MiTrimWorkingSetBuildup @ 0x14038A000
 * Callers:
 *     MiTrimPteWorker @ 0x140387E98 (MiTrimPteWorker.c)
 *     MiTrimPte @ 0x140387FA0 (MiTrimPte.c)
 *     MiTrimWorkingSetTailHelper @ 0x140389FB0 (MiTrimWorkingSetTailHelper.c)
 * Callees:
 *     MiSetVaAgeList @ 0x140249BE0 (MiSetVaAgeList.c)
 *     RtlClearBits @ 0x140337F60 (RtlClearBits.c)
 *     MiFreeWsleList @ 0x1403815C4 (MiFreeWsleList.c)
 */

void __fastcall MiTrimWorkingSetBuildup(__int64 a1, __int64 a2)
{
  int v3; // ebp
  __int64 v4; // r15
  ULONG_PTR v5; // rdx
  unsigned int v6; // r8d
  unsigned __int64 v7; // r12
  __int64 v8; // r12
  int v9; // r13d
  __int64 v10; // rsi
  unsigned int v11; // r9d
  unsigned int v12; // eax
  ULONG v13; // r11d
  unsigned int v14; // ecx
  _QWORD *v15; // rbx
  __int64 i; // rdx
  unsigned __int64 v17; // rax
  ULONG v18; // ebx
  unsigned int v19; // esi
  unsigned __int64 v20; // r9
  _DWORD *v21; // rdx
  int v22; // r8d
  _DWORD *j; // rax
  unsigned int v24; // r8d
  __int64 v25; // rcx
  unsigned int v26; // edi
  unsigned __int64 k; // rax
  unsigned int *v28; // rax
  unsigned int v29; // esi
  unsigned int v30; // edi
  unsigned int SizeOfBitMap; // eax
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-58h] BYREF
  __int64 v33; // [rsp+90h] [rbp+18h]

  LODWORD(BitMapHeader.Buffer) = 0;
  v3 = 0;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  v33 = *(_QWORD *)(a1 + 32);
  while ( v3 != 2 )
  {
    v4 = a2 + 80LL * v3 + 88;
    if ( !*(_BYTE *)(v4 + 72) )
      goto LABEL_4;
    v6 = 0;
    v7 = (*(_QWORD *)(v4 + 64) & 0xFFFFFFFFFFFFF000uLL) << 16;
    BitMapHeader.SizeOfBitMap = 512;
    BitMapHeader.Buffer = (unsigned int *)(a2 + 80LL * v3 + 88);
    v8 = (__int64)(v7 & 0xFFFFFFE000000000uLL) >> 16;
    v9 = (v4 & 4) != 0 ? 0x20 : 0;
    v10 = v4 - ((v4 & 4) != 0 ? 4 : 0);
    do
    {
      v11 = v6 < BitMapHeader.SizeOfBitMap ? v6 : 0;
      v12 = BitMapHeader.SizeOfBitMap - 1;
      while ( 1 )
      {
        v13 = v12 + v9;
        v14 = v11 + v9;
        if ( v12 - v11 != -1 )
        {
          v15 = (_QWORD *)(v10 + 8 * ((unsigned __int64)v14 >> 6));
          for ( i = ~*v15 | ((1LL << (v14 & 0x3F)) - 1); i == -1; i = ~*v15 )
          {
            if ( (unsigned __int64)++v15 > v10 + 8 * ((unsigned __int64)v13 >> 6) )
              goto LABEL_39;
          }
          _BitScanForward64(&v17, ~i);
          v18 = v17 + ((unsigned int)(((__int64)v15 - v10) >> 3) << 6);
          if ( v18 <= v13 )
            break;
        }
LABEL_39:
        v18 = -1;
LABEL_40:
        if ( !v11 )
          goto LABEL_19;
        SizeOfBitMap = v6 + 1;
        if ( v6 + 1 > BitMapHeader.SizeOfBitMap )
          SizeOfBitMap = BitMapHeader.SizeOfBitMap;
        v12 = SizeOfBitMap - 1;
        v11 = 0;
      }
      if ( v18 == -1 )
        goto LABEL_40;
      v18 -= v9;
LABEL_19:
      if ( v18 < v6 || v18 == -1 )
        break;
      v19 = 0;
      if ( v18 < 0x200 )
      {
        v20 = v4 + 60;
        v21 = (_DWORD *)(v4 + 4 * ((unsigned __int64)v18 >> 5));
        v22 = ((1 << (v18 & 0x1F)) - 1) | *v21;
        for ( j = v21 + 1; ; ++j )
        {
          v24 = ~v22;
          if ( v24 )
            break;
          if ( (unsigned __int64)j > v20 )
            goto LABEL_44;
          v22 = *++v21;
        }
        _BitScanForward64((unsigned __int64 *)&v25, v24);
        v26 = v25 + 32 * (((__int64)v21 - v4) >> 2);
        if ( v26 > 0x200 )
        {
LABEL_44:
          v26 = 512;
          goto LABEL_35;
        }
        for ( k = ~(v24 | ((1 << v25) - 1)); ; k = *v28 )
        {
          if ( (_DWORD)k )
          {
            _BitScanForward64(&k, k);
            goto LABEL_32;
          }
          v28 = v21 + 1;
          if ( (unsigned __int64)(v21 + 1) > v20 )
            break;
          ++v21;
        }
        LODWORD(k) = 32;
LABEL_32:
        v29 = k + 32 * (((__int64)v21 - v4) >> 2);
        if ( v29 > 0x200 )
          v29 = 512;
        v19 = v29 - v26;
LABEL_35:
        if ( v19 )
          goto LABEL_49;
      }
      v26 = 512;
LABEL_49:
      v30 = v26 - v18;
      MiSetVaAgeList(v33, v8 + (v18 << 12), v30, v3 != 0 ? 6 : 0);
      RtlClearBits(&BitMapHeader, v18, v30);
      v6 = v30 + v19 + v18;
      if ( !v19 )
        break;
      v10 = v4 - ((v4 & 4) != 0 ? 4 : 0);
    }
    while ( v6 != 512 );
    *(_BYTE *)(v4 + 72) = 0;
LABEL_4:
    ++v3;
  }
  v5 = *(_QWORD *)(a2 + 72);
  if ( v5 && *(_DWORD *)(v5 + 28) )
    *(_QWORD *)(a2 + 16) -= MiFreeWsleList(v33, v5, (*(_DWORD *)a2 & 0x1000) != 0);
}
