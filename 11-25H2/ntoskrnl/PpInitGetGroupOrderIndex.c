/*
 * XREFs of PpInitGetGroupOrderIndex @ 0x140C55ABC
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1409AD954 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 *     PnpRegSzToString @ 0x140A44250 (PnpRegSzToString.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int16 __fastcall PpInitGetGroupOrderIndex(void *a1)
{
  _WORD *v2; // rbx
  unsigned int v3; // edx
  _WORD *v4; // rcx
  unsigned __int16 v5; // si
  wchar_t *v6; // rax
  UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)(&String1.MaximumLength + 1) = 0;
  P = 0LL;
  if ( !PiInitGroupOrderTable )
    return -1;
  if ( !a1 )
    return PiInitGroupOrderTableCount + 1;
  if ( IopGetRegistryValue(a1, L"Group", 0, &P) < 0 )
    return PiInitGroupOrderTableCount;
  v2 = P;
  if ( *((_DWORD *)P + 1) != 1 || (v3 = *((_DWORD *)P + 3)) == 0 )
  {
    ExFreePoolWithTag(P, 0);
    return PiInitGroupOrderTableCount;
  }
  v4 = (char *)P + *((unsigned int *)P + 2);
  LODWORD(P) = 0;
  PnpRegSzToString(v4, v3, (int *)&P);
  v5 = 0;
  String1.MaximumLength = v2[6];
  v6 = (_WORD *)((char *)v2 + *((unsigned int *)v2 + 2));
  String1.Length = (unsigned __int16)P;
  for ( String1.Buffer = v6; v5 < (unsigned __int16)PiInitGroupOrderTableCount; ++v5 )
  {
    if ( RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)PiInitGroupOrderTable + v5, 1u) )
      break;
  }
  ExFreePoolWithTag(v2, 0);
  return v5;
}
