/*
 * XREFs of MiCommitVadCfgBits @ 0x14091C360
 * Callers:
 *     MiCommitVadMetadataBits @ 0x14091D290 (MiCommitVadMetadataBits.c)
 * Callees:
 *     MiMarkPrivateImageCfgBits @ 0x14091BF74 (MiMarkPrivateImageCfgBits.c)
 *     MiMarkSharedImageCfgBits @ 0x14091C554 (MiMarkSharedImageCfgBits.c)
 *     MiPopulateCfgBitMap @ 0x14091C830 (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiCommitVadCfgBits(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        char a7)
{
  unsigned __int64 v8; // rbp
  __int64 v11; // rsi
  __int64 v12; // rbx
  _BOOL8 v13; // rdx
  __int64 result; // rax
  __int16 v15; // ax
  __int16 v16; // cx
  __int64 v17; // rdx
  int v18; // ecx

  v8 = a4;
  v11 = 0x100000000LL;
  if ( *(_QWORD *)(a1 + 784)
    && ((v15 = *(_WORD *)(a1 + 1772), v15 == 332) || v15 == 452)
    && a3 < 0x100000000LL
    && (!a5 || _bittest16((const signed __int16 *)(*(_QWORD *)a5 + 12LL), 0xFu)) )
  {
    v12 = *(_QWORD *)(a1 + 1040) + 1216LL;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 1040) + 1184LL;
  }
  v13 = (a7 & 2) != 0;
  switch ( a6 )
  {
    case 1:
      result = MiMarkSharedImageCfgBits(v12, v13, a2);
      break;
    case 2:
      result = MiMarkPrivateImageCfgBits(v12, v13, a2);
      break;
    case 3:
      result = MiPopulateCfgBitMap(v12, a3, (a4 + 4095) & 0xFFFFFFFFFFFFF000uLL, 0LL);
      break;
    default:
      result = 3221225473LL;
      break;
  }
  if ( *(_QWORD *)(a1 + 784) )
  {
    v16 = *(_WORD *)(a1 + 1772);
    if ( (v16 == 332 || v16 == 452) && (int)result >= 0 )
    {
      v17 = *(_QWORD *)(a1 + 1040);
      v18 = v17 + 1184;
      if ( v12 != v17 + 1184 )
        return MiPopulateCfgBitMap(v18, a3, (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL, 0LL);
      if ( a3 <= 0x100000000LL )
      {
        v18 = v17 + 1216;
        if ( v8 <= 0x100000000LL )
          v11 = v8;
        v8 = v11;
        return MiPopulateCfgBitMap(v18, a3, (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL, 0LL);
      }
    }
  }
  return result;
}
