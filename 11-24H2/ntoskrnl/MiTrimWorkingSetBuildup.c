/*
 * XREFs of MiTrimWorkingSetBuildup @ 0x1402EA6B0
 * Callers:
 *     MiTrimWorkingSetTailHelper @ 0x14020D060 (MiTrimWorkingSetTailHelper.c)
 *     MiTrimPteWorker @ 0x140212FB0 (MiTrimPteWorker.c)
 *     MiTrimPte @ 0x1402130B0 (MiTrimPte.c)
 * Callees:
 *     MiFreeWsleList @ 0x140297494 (MiFreeWsleList.c)
 *     RtlClearBits @ 0x1402EA360 (RtlClearBits.c)
 *     MiSetVaAgeList @ 0x140304F30 (MiSetVaAgeList.c)
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
  unsigned __int64 v11; // r9
  unsigned int v12; // eax
  ULONG v13; // r11d
  unsigned int v14; // ecx
  _QWORD *v15; // rbx
  __int64 i; // rdx
  unsigned __int64 v17; // rax
  ULONG v18; // ebx
  unsigned int v19; // esi
  _DWORD *v20; // rdx
  int v21; // r8d
  _DWORD *j; // rax
  unsigned int v23; // r8d
  __int64 v24; // rcx
  unsigned int v25; // edi
  unsigned __int64 k; // rax
  unsigned int *v27; // rax
  unsigned int v28; // esi
  ULONG v29; // edi
  unsigned int SizeOfBitMap; // eax
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-58h] BYREF
  __int64 v32; // [rsp+90h] [rbp+18h]

  LODWORD(BitMapHeader.Buffer) = 0;
  v3 = 0;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  v32 = *(_QWORD *)(a1 + 32);
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
        if ( v12 - (_DWORD)v11 != -1 )
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
        if ( !(_DWORD)v11 )
          goto LABEL_19;
        SizeOfBitMap = v6 + 1;
        if ( v6 + 1 > BitMapHeader.SizeOfBitMap )
          SizeOfBitMap = BitMapHeader.SizeOfBitMap;
        v12 = SizeOfBitMap - 1;
        v11 = 0LL;
      }
      if ( v18 == -1 )
        goto LABEL_40;
      v18 -= v9;
LABEL_19:
      if ( v18 == -1 || v18 < v6 )
        break;
      v19 = 0;
      if ( v18 < 0x200 )
      {
        v11 = v4 + 60;
        v20 = (_DWORD *)(v4 + 4 * ((unsigned __int64)v18 >> 5));
        v21 = ((1 << (v18 & 0x1F)) - 1) | *v20;
        for ( j = v20 + 1; ; ++j )
        {
          v23 = ~v21;
          if ( v23 )
            break;
          if ( (unsigned __int64)j > v11 )
            goto LABEL_44;
          v21 = *++v20;
        }
        _BitScanForward64((unsigned __int64 *)&v24, v23);
        v25 = v24 + 32 * (((__int64)v20 - v4) >> 2);
        if ( v25 > 0x200 )
        {
LABEL_44:
          v25 = 512;
          goto LABEL_35;
        }
        for ( k = ~(v23 | ((1 << v24) - 1)); ; k = *v27 )
        {
          if ( (_DWORD)k )
          {
            _BitScanForward64(&k, k);
            goto LABEL_32;
          }
          v27 = v20 + 1;
          if ( (unsigned __int64)(v20 + 1) > v11 )
            break;
          ++v20;
        }
        LODWORD(k) = 32;
LABEL_32:
        v28 = k + 32 * (((__int64)v20 - v4) >> 2);
        if ( v28 > 0x200 )
          v28 = 512;
        v19 = v28 - v25;
LABEL_35:
        if ( v19 )
          goto LABEL_49;
      }
      v25 = 512;
LABEL_49:
      LOBYTE(v11) = v3 != 0 ? 6 : 0;
      v29 = v25 - v18;
      MiSetVaAgeList(v32, v8 + (v18 << 12), v29, v11);
      RtlClearBits(&BitMapHeader, v18, v29);
      v6 = v29 + v19 + v18;
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
    *(_QWORD *)(a2 + 16) -= MiFreeWsleList(v32, v5, (*(_DWORD *)a2 >> 12) & 1);
}
