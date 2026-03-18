/*
 * XREFs of HMCleanupCapabilityTable @ 0x140144E20
 * Callers:
 *     HMCleanupObjectSecurity @ 0x140144D7C (HMCleanupObjectSecurity.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

PVOID __fastcall HMCleanupCapabilityTable(PRTL_AVL_TABLE Table)
{
  struct _RTL_AVL_TABLE *v1; // rdi
  BOOLEAN v2; // dl
  PVOID result; // rax
  PVOID v4; // rbx
  PACL Sacl; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int8 DaclDefaulted; // [rsp+58h] [rbp+28h] BYREF
  unsigned __int8 DaclPresent; // [rsp+60h] [rbp+30h] BYREF
  PACL Dacl; // [rsp+68h] [rbp+38h] BYREF

  Dacl = 0LL;
  v1 = Table;
  Sacl = 0LL;
  v2 = 1;
  DaclPresent = 0;
  DaclDefaulted = 0;
  while ( 1 )
  {
    result = RtlEnumerateGenericTableAvl(Table, v2);
    v4 = result;
    if ( !result )
      break;
    RtlGetDaclSecurityDescriptor(result, &DaclPresent, &Dacl, &DaclDefaulted);
    if ( Dacl )
      GreDeleteFastMutex((char *)Dacl);
    RtlGetSaclSecurityDescriptor(v4, &DaclPresent, &Sacl, &DaclDefaulted);
    if ( Sacl )
      GreDeleteFastMutex((char *)Sacl);
    RtlDeleteElementGenericTableAvl(v1, v4);
    v2 = 0;
    Table = v1;
  }
  return result;
}
