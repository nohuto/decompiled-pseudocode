/*
 * XREFs of RaidBusEnumeratorProcessSerialNumber @ 0x140068C00
 * Callers:
 *     <none>
 * Callees:
 *     RaidSrbStatusToNtStatus @ 0x14001EF94 (RaidSrbStatusToNtStatus.c)
 *     StorCreateAnsiString @ 0x14008EFC8 (StorCreateAnsiString.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessSerialNumber(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v5; // rdx

  *a4 = 0;
  if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 1 )
    return RaidSrbStatusToNtStatus(*(_BYTE *)(a2 + 3));
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v5 = *(_QWORD *)(a2 + 64);
  else
    v5 = *(_QWORD *)(a2 + 24);
  return StorCreateAnsiString(a3 + 40, v5 + 4, *(unsigned __int8 *)(v5 + 3));
}
