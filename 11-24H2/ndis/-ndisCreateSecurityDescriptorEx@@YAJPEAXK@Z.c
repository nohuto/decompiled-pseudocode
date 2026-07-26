/*
 * XREFs of ?ndisCreateSecurityDescriptorEx@@YAJPEAXK@Z @ 0x14013EEBC
 * Callers:
 *     ?ndisFdoInitializeSubsystem@@YAJXZ @ 0x14018CA40 (-ndisFdoInitializeSubsystem@@YAJXZ.c)
 * Callees:
 *     ?ndisBuildDeviceAcl@@YAJPEAPEAU_ACL@@K@Z @ 0x140064960 (-ndisBuildDeviceAcl@@YAJPEAPEAU_ACL@@K@Z.c)
 */

__int64 __fastcall ndisCreateSecurityDescriptorEx(ACL *a1)
{
  __int64 result; // rax
  NTSTATUS v2; // ebx
  PACL Dacl; // [rsp+30h] [rbp+8h] BYREF

  Dacl = a1;
  RtlCreateSecurityDescriptor(&unk_14011C8C0, 1u);
  Dacl = 0LL;
  result = ndisBuildDeviceAcl(&Dacl, 128);
  if ( (int)result >= 0 )
  {
    v2 = RtlSetDaclSecurityDescriptor(&unk_14011C8C0, 1u, Dacl, 0);
    if ( v2 >= 0 )
    {
      return 0LL;
    }
    else
    {
      ExFreePoolWithTag(Dacl, 0);
      return (unsigned int)v2;
    }
  }
  return result;
}
