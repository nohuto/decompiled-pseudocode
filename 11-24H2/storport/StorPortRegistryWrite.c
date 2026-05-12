/*
 * XREFs of StorPortRegistryWrite @ 0x140074820
 * Callers:
 *     <none>
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400255D0 (RaidpPortGetAdapter.c)
 *     PortBuildRegKeyName @ 0x140030988 (PortBuildRegKeyName.c)
 *     StorpPortRegistryValidate @ 0x140055C30 (StorpPortRegistryValidate.c)
 *     PortMiniportRegistryWrite @ 0x14013AAD0 (PortMiniportRegistryWrite.c)
 */

bool __fastcall StorPortRegistryWrite(
        PVOID VirtualAddress,
        PCSZ SourceString,
        int a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  bool v10; // si
  int *v11; // rbx
  __int64 v12; // rax
  int *v13; // rdi
  const UNICODE_STRING *v14; // r14
  int v15; // edx
  __int64 v16; // r11
  int v17; // edx
  int v18; // r8d
  int *v20; // [rsp+20h] [rbp-40h] BYREF
  struct _STRING DestinationString; // [rsp+28h] [rbp-38h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-28h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+48h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  v20 = 0LL;
  Destination = 0LL;
  UnicodeString = 0LL;
  v10 = 0;
  if ( KeGetCurrentIrql() || !MmIsAddressValid(VirtualAddress) )
    return 0;
  RaidpPortGetAdapter((__int64)VirtualAddress, (int **)&DestinationString, &v20);
  v11 = v20;
  if ( *(_QWORD *)&DestinationString.Length )
  {
    v12 = *(_QWORD *)(*(_QWORD *)&DestinationString.Length + 16LL);
    v13 = (int *)(*(_QWORD *)&DestinationString.Length + 2008LL);
  }
  else
  {
    if ( !v20 )
      return 0;
    v12 = *((_QWORD *)v20 + 2);
    v13 = v20 + 226;
  }
  v14 = (const UNICODE_STRING *)(v12 + 40);
  if ( !StorpPortRegistryValidate((__int64)v13, a5, (unsigned int *)&a6) )
    return 0;
  v17 = v15 - v13[8];
  v13[11] = a6;
  v13[13] = v17;
  if ( v16 )
    v18 = *(_DWORD *)(v16 + 56);
  else
    v18 = v11[14];
  if ( PortBuildRegKeyName(v14, &Destination, v18, a3) >= 0 )
  {
    DestinationString = 0LL;
    RtlInitAnsiString(&DestinationString, SourceString);
    if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
      v10 = (int)PortMiniportRegistryWrite(&Destination, &UnicodeString, a4, v13) >= 0;
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( Destination.Buffer )
    RtlFreeUnicodeString(&Destination);
  return v10;
}
