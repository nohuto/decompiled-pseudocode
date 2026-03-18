/*
 * XREFs of MiLogSectionObjectEvent @ 0x1407DC3F8
 * Callers:
 *     MmCreateSectionEx @ 0x14093C3AC (MmCreateSectionEx.c)
 *     MmCreateCacheManagerSection @ 0x14093C698 (MmCreateCacheManagerSection.c)
 *     MiCreateSection @ 0x14093C8A0 (MiCreateSection.c)
 *     MiSectionDelete @ 0x140A1D090 (MiSectionDelete.c)
 * Callees:
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     MiLogPerfMemoryEvent @ 0x140456DC4 (MiLogPerfMemoryEvent.c)
 */

__int64 __fastcall MiLogSectionObjectEvent(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  int v3; // r8d
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = MiSectionControlArea(a1);
  v5[0] = v2;
  v5[1] = *(_QWORD *)(*(_QWORD *)v1 + 64LL);
  return MiLogPerfMemoryEvent(648 - (v3 != 0), 0x20400001u, (__int64)v5, 16, 5249282);
}
