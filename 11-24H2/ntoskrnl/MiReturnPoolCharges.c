/*
 * XREFs of MiReturnPoolCharges @ 0x14045A754
 * Callers:
 *     MiReturnPhysicalPoolPages @ 0x1402EA2D4 (MiReturnPhysicalPoolPages.c)
 *     MiReturnExcessPoolCharges @ 0x14045A588 (MiReturnExcessPoolCharges.c)
 * Callees:
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiReturnSystemCharges @ 0x14045A7E8 (MiReturnSystemCharges.c)
 */

unsigned __int64 __fastcall MiReturnPoolCharges(unsigned __int64 *a1, int a2, char a3)
{
  unsigned __int64 result; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r11

  result = qword_140E3D898;
  if ( qword_140E3D898 )
  {
    v6 = a1[3] - a1[1];
    if ( a2 == 2 )
    {
      return MiReturnSystemCharges(&MiSystemPartition, v6, v6, (a3 & 4) != 0 ? 14 : 4);
    }
    else
    {
      MiReturnCommit((__int64)&MiSystemPartition, v6, 0);
      result = MiReturnResident((__int64)&MiSystemPartition, *a1);
      v7 = -(__int64)a1[3];
      if ( a2 )
        _InterlockedAdd64(&qword_140E375D0, v7);
      else
        _InterlockedAdd64(&qword_140E375C8, v7);
    }
  }
  return result;
}
