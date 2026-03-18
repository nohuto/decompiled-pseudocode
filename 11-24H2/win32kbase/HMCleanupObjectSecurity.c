/*
 * XREFs of HMCleanupObjectSecurity @ 0x140144D7C
 * Callers:
 *     HMFreeObject @ 0x1400632F0 (HMFreeObject.c)
 *     HMRemoveHandleForObjectWorker @ 0x140134F1C (HMRemoveHandleForObjectWorker.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     HMCleanupCapabilityTable @ 0x140144E20 (HMCleanupCapabilityTable.c)
 */

__int64 __fastcall HMCleanupObjectSecurity(__int64 a1, char a2)
{
  __int64 v2; // rdi
  unsigned __int8 DaclPresent; // [rsp+40h] [rbp+20h] BYREF
  unsigned __int8 DaclDefaulted; // [rsp+48h] [rbp+28h] BYREF
  PACL Dacl; // [rsp+50h] [rbp+30h] BYREF
  PACL Sacl; // [rsp+58h] [rbp+38h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  Dacl = 0LL;
  Sacl = 0LL;
  DaclPresent = 0;
  DaclDefaulted = 0;
  RtlGetDaclSecurityDescriptor((PSECURITY_DESCRIPTOR)v2, &DaclPresent, &Dacl, &DaclDefaulted);
  if ( Dacl )
    GreDeleteFastMutex((char *)Dacl);
  RtlGetSaclSecurityDescriptor((PSECURITY_DESCRIPTOR)v2, &DaclPresent, &Sacl, &DaclDefaulted);
  if ( Sacl )
    GreDeleteFastMutex((char *)Sacl);
  if ( a2 == 1 || a2 == 23 )
    HMCleanupCapabilityTable((PRTL_AVL_TABLE)(v2 + 40));
  return 1LL;
}
