/*
 * XREFs of HvpMapHiveImageFromViewMap @ 0x14096B20C
 * Callers:
 *     HvLoadHive @ 0x140969B4C (HvLoadHive.c)
 *     HvpPerformLogFileRecovery @ 0x140AAB57C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     CmpClaimGlobalQuota @ 0x140882FDC (CmpClaimGlobalQuota.c)
 *     HvpGetCellMap @ 0x140BBB710 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpMapHiveImageFromViewMap(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // edi
  char v6; // al
  _QWORD *v7; // r10
  unsigned int v9; // r11d
  unsigned int v10; // ebx
  __int64 CellMap; // rax
  __int64 v12; // r8
  int v13; // r11d
  unsigned __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rcx

  v5 = a2;
  v6 = CmpClaimGlobalQuota(a3, a2);
  LODWORD(v7) = 0;
  if ( v6 )
  {
    v9 = 0;
    v10 = v5 + a3;
    if ( v10 )
    {
      do
      {
        CellMap = HvpGetCellMap(a1, v9);
        v9 = v13 + 4096;
        v14 = *(_QWORD *)v12;
        v15 = CellMap;
        if ( (*(_BYTE *)(v12 + 8) & 1) != 0 )
        {
          if ( v14 )
            v14 ^= v12;
          else
            v14 = (unsigned __int64)v7;
        }
        while ( v14 )
        {
          if ( v9 < *(__int64 *)(v14 + 40) )
          {
            v16 = *(_QWORD *)v14;
          }
          else
          {
            if ( v9 < *(__int64 *)(v14 + 48) )
              break;
            v16 = *(_QWORD *)(v14 + 8);
          }
          if ( (*(_BYTE *)(v12 + 8) & 1) != 0 && v16 )
            v14 ^= v16;
          else
            v14 = v16;
        }
        v17 = *(_QWORD *)(v14 + 56) - *(_QWORD *)(v14 + 24);
        *(_QWORD *)v15 = v7;
        *(_DWORD *)(v15 + 16) = 4096;
        *(_QWORD *)(v15 + 8) = (v9 + v17) | 1;
      }
      while ( v9 < v10 );
    }
  }
  else
  {
    LODWORD(v7) = -1073741670;
  }
  return (unsigned int)v7;
}
