/*
 * XREFs of RtlAreBitsClearEx @ 0x140411AE0
 * Callers:
 *     MiPatchDataPagesCallback @ 0x1407F5A20 (MiPatchDataPagesCallback.c)
 *     MiHotAddPartitionMemory @ 0x1407FC9F4 (MiHotAddPartitionMemory.c)
 *     MiCommitPageTablesForVad @ 0x140919270 (MiCommitPageTablesForVad.c)
 *     MiReturnPageTablePageCommitment @ 0x1409D7D90 (MiReturnPageTablePageCommitment.c)
 *     MiMarkRetpolineBits @ 0x140A84A10 (MiMarkRetpolineBits.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlAreBitsClearEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r11
  __int64 v6; // rbx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r10
  __int64 v10; // rax

  if ( a2 < *a1 )
  {
    if ( a3 > 1 )
    {
      if ( *a1 - a2 >= a3 )
      {
        v4 = a1[1];
        v5 = a2 + a3 - 1;
        v6 = *(_QWORD *)(v4 + 8 * (a2 >> 6));
        v7 = v4 + 8 * (a2 >> 6);
        v8 = v4 + 8 * (v5 >> 6);
        if ( v7 == v8 )
          return (v6 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)a3) << a2)) == 0;
        if ( (v6 & (-1LL << a2)) != 0 )
          return 0;
        while ( 1 )
        {
          v10 = *(_QWORD *)(v7 + 8);
          v7 += 8LL;
          if ( v7 == v8 )
            break;
          if ( v10 )
            return 0;
        }
        return (v10 & (0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v5)) == 0;
      }
    }
    else if ( a3 == 1 )
    {
      return !_bittest64((const signed __int64 *)(a1[1] + 8 * (a2 >> 6)), a2 & 0x3F);
    }
  }
  return 0;
}
