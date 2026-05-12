/*
 * XREFs of RaUnitResetBusSrb @ 0x140096298
 * Callers:
 *     RaUnitScsiIrp @ 0x140002710 (RaUnitScsiIrp.c)
 *     RaDriverScsiIrp @ 0x1400038A0 (RaDriverScsiIrp.c)
 * Callees:
 *     RaidUnitSubmitResetRequest @ 0x140005A88 (RaidUnitSubmitResetRequest.c)
 *     McTemplateK0zqjujssstq_EtwWriteTransfer @ 0x140090604 (McTemplateK0zqjujssstq_EtwWriteTransfer.c)
 */

__int64 __fastcall RaUnitResetBusSrb(__int64 a1, __int64 a2)
{
  if ( (byte_140171464 & 1) != 0 )
    McTemplateK0zqjujssstq_EtwWriteTransfer(
      a1,
      *(_QWORD *)(a1 + 24) + 5064LL,
      a1 + 177,
      *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4720LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_QWORD *)(a1 + 24) + 5064LL,
      *(_BYTE *)(a1 + 104),
      a1 + 2104,
      (const char *)(a1 + 168),
      (const char *)(a1 + 177),
      (const char *)(a1 + 242),
      *(_BYTE *)(a1 + 506) & 1,
      1);
  return RaidUnitSubmitResetRequest(a1, a2);
}
