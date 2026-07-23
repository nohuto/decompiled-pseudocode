/*
 * XREFs of CmpCreateRegistryThread @ 0x1407D86F0
 * Callers:
 *     CmpInitializeSystemHivesLoad @ 0x1407CB18C (CmpInitializeSystemHivesLoad.c)
 *     CmCompleteRegistryInitialization @ 0x1407CF6FC (CmCompleteRegistryInitialization.c)
 *     CmpInitializeRegistryProcess @ 0x1407D87A0 (CmpInitializeRegistryProcess.c)
 *     CmpInitializeLazyWriters @ 0x1407DF6B4 (CmpInitializeLazyWriters.c)
 *     CmpHiveCachePopulateHiveEntry @ 0x1407E5E24 (CmpHiveCachePopulateHiveEntry.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x1408F8C50 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall CmpCreateRegistryThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v5[4]; // [rsp+50h] [rbp-38h] BYREF
  __int128 v6; // [rsp+70h] [rbp-18h]

  v5[0] = 48LL;
  v5[1] = 0LL;
  v5[2] = 0LL;
  v5[3] = 512LL;
  v6 = 0LL;
  return PsCreateSystemThreadEx(a1, 0x1FFFFFLL, v5, CmpRegistryProcess, 0LL, a3, a4, 0LL, 0LL);
}
