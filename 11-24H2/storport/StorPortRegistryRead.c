/*
 * XREFs of StorPortRegistryRead @ 0x140030580
 * Callers:
 *     <none>
 * Callees:
 *     PortMiniportRegistryRead @ 0x140030768 (PortMiniportRegistryRead.c)
 *     PortBuildRegKeyName @ 0x140030988 (PortBuildRegKeyName.c)
 *     StorpPortRegistryValidate @ 0x140055C30 (StorpPortRegistryValidate.c)
 */

char __fastcall StorPortRegistryRead(
        PVOID VirtualAddress,
        const char *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int *a6)
{
  int **v8; // rax
  int *v9; // rcx
  int v10; // edx
  _DWORD *v11; // rbx
  __int64 v12; // r15
  int v13; // edx
  char v14; // r14
  int v15; // eax
  int v16; // eax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-30h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-20h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  Destination = 0LL;
  UnicodeString = 0LL;
  if ( KeGetCurrentIrql() )
    goto LABEL_19;
  if ( !MmIsAddressValid(VirtualAddress) )
    goto LABEL_19;
  v8 = (int **)*((_QWORD *)VirtualAddress - 2);
  if ( !v8 )
    goto LABEL_19;
  v9 = *v8;
  if ( !*v8 )
    goto LABEL_19;
  v10 = *v9;
  if ( ((_BYTE)v8[31] & 1) == 0 )
  {
    if ( v10 == 1094997074 )
    {
      v11 = v9 + 502;
      goto LABEL_8;
    }
LABEL_19:
    *a6 = 0;
    return 0;
  }
  if ( v10 != 1314275652 )
    goto LABEL_19;
  v11 = v9 + 226;
LABEL_8:
  v12 = *((_QWORD *)v9 + 2);
  if ( !(unsigned __int8)StorpPortRegistryValidate(v11, a5, a6) )
    return 0;
  v14 = 0;
  v15 = *a6;
  v11[13] = v13 - v11[8];
  v11[11] = v15;
  *a6 = 0;
  if ( (int)PortBuildRegKeyName((PCUNICODE_STRING)(v12 + 40), &Destination) >= 0 )
  {
    DestinationString = 0LL;
    RtlInitAnsiString(&DestinationString, a2);
    if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
    {
      v16 = ((__int64 (__fastcall *)(struct _UNICODE_STRING *, struct _UNICODE_STRING *, _QWORD, _DWORD *))PortMiniportRegistryRead)(
              &Destination,
              &UnicodeString,
              a4,
              v11);
      if ( v16 >= 0 )
      {
        v14 = 1;
        *a6 = v11[11];
      }
      else if ( v16 == -1073741789 )
      {
        *a6 = v11[12];
      }
      else
      {
        *a6 = 0;
      }
    }
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( Destination.Buffer )
    RtlFreeUnicodeString(&Destination);
  return v14;
}
