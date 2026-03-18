/*
 * XREFs of MiLogSectionObjectEvent @ 0x1407EC298
 * Callers:
 *     MmCreateSectionEx @ 0x140940C6C (MmCreateSectionEx.c)
 *     MmCreateCacheManagerSection @ 0x140940F58 (MmCreateCacheManagerSection.c)
 *     MiCreateSection @ 0x140941160 (MiCreateSection.c)
 *     MiSectionDelete @ 0x140A24310 (MiSectionDelete.c)
 * Callees:
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     MiLogPerfMemoryEvent @ 0x140457228 (MiLogPerfMemoryEvent.c)
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
