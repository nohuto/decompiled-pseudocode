/*
 * XREFs of GetZoneCountFromUnit @ 0x14006CDBC
 * Callers:
 *     RaidUnitCompleteRequest @ 0x14001F490 (RaidUnitCompleteRequest.c)
 *     GetZoneIndexFromUnitAndLba @ 0x14006CE84 (GetZoneIndexFromUnitAndLba.c)
 * Callees:
 *     McTemplateK0sssiqxxq_EtwWriteTransfer @ 0x14006D030 (McTemplateK0sssiqxxq_EtwWriteTransfer.c)
 */

__int64 __fastcall GetZoneCountFromUnit(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r10
  __int64 v4; // rdi
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r8

  result = *(unsigned int *)(a1 + 3472);
  if ( !(_DWORD)result )
  {
    v3 = *(_QWORD *)(a1 + 3464);
    v4 = *(unsigned int *)(a1 + 932);
    v5 = *(_QWORD *)(a1 + 3416);
    v6 = v4 * (v3 + 1) / v5;
    if ( v6 > 0xFFFFFFFF )
    {
      if ( StorEtwLoggingEnabled && (byte_140171464 & 2) != 0 )
        McTemplateK0sssiqxxq_EtwWriteTransfer(
          a1 + 242,
          a1 + 177,
          v6,
          a1 + 168,
          a1 + 177,
          a1 + 242,
          v3,
          v4,
          v5,
          v4 * (v3 + 1) / v5);
      v6 = 0xFFFFFFFFLL;
    }
    if ( v6 != 0xFFFFFFFF )
      LODWORD(v6) = v6 + 1;
    *(_DWORD *)(a1 + 3472) = v6;
    return (unsigned int)v6;
  }
  return result;
}
