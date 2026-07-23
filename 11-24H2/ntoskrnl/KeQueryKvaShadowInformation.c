/*
 * XREFs of KeQueryKvaShadowInformation @ 0x14073A8D0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 *     VslpIumPhase0Initialize @ 0x140C1BEB0 (VslpIumPhase0Initialize.c)
 * Callees:
 *     KeKvaShadowingActive @ 0x1404A367C (KeKvaShadowingActive.c)
 *     KeQueryImplementedPhysicalBits @ 0x1405C0CF0 (KeQueryImplementedPhysicalBits.c)
 *     SpcQueryKvaLeakagePresent @ 0x1406A1C28 (SpcQueryKvaLeakagePresent.c)
 */

__int64 __fastcall KeQueryKvaShadowInformation(BOOL *a1, unsigned int a2, _DWORD *a3)
{
  int ImplementedPhysicalBits; // eax
  int v6; // edi
  char v7; // si
  BOOL v8; // ebx
  int v9; // edi
  char v10; // al
  int v11; // ecx
  int KvaLeakagePresent; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // esi

  *a3 = 4;
  if ( a2 < 4 )
    return 3221225476LL;
  ImplementedPhysicalBits = KeQueryImplementedPhysicalBits();
  v6 = 0;
  v7 = 0;
  if ( ImplementedPhysicalBits > 0 )
    v7 = ImplementedPhysicalBits - 1;
  *a1 = 0;
  v8 = KiKvaShadow != 0;
  *a1 = v8;
  if ( (unsigned int)KeKvaShadowingActive() == 2 )
    v6 = 2;
  v9 = v8 | v6;
  *a1 = v9;
  v10 = KiFlushPcid;
  v11 = v9 | (4 * (KiFlushPcid & 1));
  *a1 = v11;
  *a1 = v11 | (4 * (v10 & 2));
  KvaLeakagePresent = SpcQueryKvaLeakagePresent();
  v14 = v13 | (KvaLeakagePresent != 0 ? 0x10 : 0);
  *a1 = v14;
  v14 |= 0x20u;
  *a1 = v14;
  v14 |= 0x2000u;
  *a1 = v14;
  v15 = v14 | ((v7 & 0x3F) << 6);
  *a1 = v15;
  *a1 = v15 | ((KeFeatureBits2 & 1) << 12);
  return 0LL;
}
