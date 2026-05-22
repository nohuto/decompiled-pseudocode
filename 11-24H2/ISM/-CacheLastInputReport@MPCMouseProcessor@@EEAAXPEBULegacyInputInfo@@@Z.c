/*
 * XREFs of ?CacheLastInputReport@MPCMouseProcessor@@EEAAXPEBULegacyInputInfo@@@Z @ 0x1801C14D0
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x1801CF19C (memcpy_0.c)
 */

void __fastcall MPCMouseProcessor::CacheLastInputReport(MPCMouseProcessor *this, const struct LegacyInputInfo *a2)
{
  memcpy_0((char *)this + 5408, a2, 0xBC0uLL);
  *((_BYTE *)this + 5353) = 1;
  *(_QWORD *)((char *)this + 5356) = 0LL;
  *((_DWORD *)this + 1341) = 0;
}
