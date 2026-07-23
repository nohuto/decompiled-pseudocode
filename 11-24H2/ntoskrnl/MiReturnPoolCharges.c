/*
 * XREFs of MiReturnPoolCharges @ 0x14044FBA4
 * Callers:
 *     MiReturnPhysicalPoolPages @ 0x14034B914 (MiReturnPhysicalPoolPages.c)
 *     MiReturnExcessPoolCharges @ 0x14044F9D8 (MiReturnExcessPoolCharges.c)
 * Callees:
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     MiReturnSystemCharges @ 0x14044FC38 (MiReturnSystemCharges.c)
 */

unsigned __int64 __fastcall MiReturnPoolCharges(unsigned __int64 *a1, int a2, char a3)
{
  unsigned __int64 result; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r11

  result = qword_140E3D9D8;
  if ( qword_140E3D9D8 )
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
        _InterlockedAdd64(&qword_140E37710, v7);
      else
        _InterlockedAdd64(&qword_140E37708, v7);
    }
  }
  return result;
}
