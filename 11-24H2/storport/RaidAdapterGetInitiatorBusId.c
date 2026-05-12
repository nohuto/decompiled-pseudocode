/*
 * XREFs of RaidAdapterGetInitiatorBusId @ 0x14005A5A4
 * Callers:
 *     RaidAdapterCreateDevmapEntry @ 0x1400554BC (RaidAdapterCreateDevmapEntry.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x14005F248 (RaidAdapterScsiGetInquiryDataIoctl.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidAdapterGetInitiatorBusId(_DWORD *a1, unsigned __int8 a2)
{
  __int64 v2; // rcx

  if ( *a1 == 1314275652 )
  {
    v2 = (__int64)a1 + 249;
  }
  else if ( *a1 == 1094997074 )
  {
    v2 = (__int64)a1 + 457;
  }
  else
  {
    v2 = 73LL;
  }
  if ( a2 < 8u )
    return *(_BYTE *)(a2 + v2);
  else
    return -1;
}
