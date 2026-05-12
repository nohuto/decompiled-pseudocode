/*
 * XREFs of StorGetIdentityProductId @ 0x1400A1D18
 * Callers:
 *     RaidUnitGetDeviceId @ 0x14009E9BC (RaidUnitGetDeviceId.c)
 *     RaUnitQueryDeviceTextIrp @ 0x140185CFC (RaUnitQueryDeviceTextIrp.c)
 * Callees:
 *     RaCopyPaddedString @ 0x140184CFC (RaCopyPaddedString.c)
 */

__int64 __fastcall StorGetIdentityProductId(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8

  if ( (*(_BYTE *)(a1 + 24) & 4) == 0 )
  {
    if ( *(_QWORD *)a1 )
    {
      v3 = *(_QWORD *)a1 + 16LL;
      goto LABEL_7;
    }
    return 3221225485LL;
  }
  v2 = *(_QWORD *)(a1 + 48);
  if ( !v2 )
    return 3221225485LL;
  v3 = v2 + 25;
LABEL_7:
  RaCopyPaddedString(a2, 17LL, v3);
  return 0LL;
}
