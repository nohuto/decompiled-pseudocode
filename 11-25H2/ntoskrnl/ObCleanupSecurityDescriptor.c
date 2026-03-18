/*
 * XREFs of ObCleanupSecurityDescriptor @ 0x140736E34
 * Callers:
 *     ObpInitializeRootNamespace @ 0x140737C88 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x1407EFF58 (MiCreatePartitionNamespace.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140457450 (RtlGetDaclSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ObCleanupSecurityDescriptor(void *a1)
{
  BOOLEAN v1; // [rsp+38h] [rbp+10h] BYREF
  BOOLEAN v2; // [rsp+40h] [rbp+18h] BYREF
  PVOID P; // [rsp+48h] [rbp+20h] BYREF

  P = 0LL;
  v1 = 0;
  if ( RtlGetDaclSecurityDescriptor(a1, &v1, (PACL *)&P, &v2) >= 0 )
  {
    if ( v1 )
      ExFreePoolWithTag(P, 0);
  }
}
