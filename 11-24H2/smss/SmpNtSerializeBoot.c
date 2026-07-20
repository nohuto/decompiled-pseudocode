/*
 * XREFs of SmpNtSerializeBoot @ 0x14000D628
 * Callers:
 *     SmscpLoadSubSystemsForMuSession @ 0x140002580 (SmscpLoadSubSystemsForMuSession.c)
 *     SmpAsyncMemoryConfiguration @ 0x14000F110 (SmpAsyncMemoryConfiguration.c)
 *     SmpLoadDataFromRegistry @ 0x140015DF4 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpEventWriteULONG @ 0x140009890 (SmpEventWriteULONG.c)
 *     SmpEventWrite @ 0x14000D668 (SmpEventWrite.c)
 */

__int64 SmpNtSerializeBoot()
{
  unsigned int v0; // ebx

  SmpEventWrite(&SmssEvt_SerializeBoot_Start);
  v0 = NtSerializeBoot();
  SmpEventWriteULONG(&SmssEvt_SerializeBoot_Stop, v0);
  return v0;
}
