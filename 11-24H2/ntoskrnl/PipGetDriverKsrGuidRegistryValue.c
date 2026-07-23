/*
 * XREFs of PipGetDriverKsrGuidRegistryValue @ 0x1407198D0
 * Callers:
 *     PipGetDriverKsrGuid @ 0x140719810 (PipGetDriverKsrGuid.c)
 * Callees:
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     PnpRegSzToString @ 0x140A3FBB8 (PnpRegSzToString.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipGetDriverKsrGuidRegistryValue(void *a1, GUID *a2)
{
  int RegistryValue; // eax
  _WORD *v4; // rbx
  unsigned int v5; // edi
  unsigned int v6; // ecx
  __int64 v7; // rdx
  char *v8; // rcx
  wchar_t *v9; // rax
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  P = 0LL;
  RegistryValue = IopGetRegistryValue(a1);
  v4 = P;
  v5 = RegistryValue;
  if ( RegistryValue >= 0 && *((_DWORD *)P + 1) == 1 )
  {
    v6 = *((_DWORD *)P + 3);
    if ( v6 >= 2 && !*(_WORD *)((char *)P + 2 * ((unsigned __int64)v6 >> 1) + *((unsigned int *)P + 2) - 2) )
    {
      v7 = *((unsigned int *)P + 3);
      v8 = (char *)P + *((unsigned int *)P + 2);
      LODWORD(P) = 0;
      PnpRegSzToString(v8, v7, &P);
      GuidString.MaximumLength = v4[6];
      v9 = (_WORD *)((char *)v4 + *((unsigned int *)v4 + 2));
      GuidString.Length = (unsigned __int16)P;
      GuidString.Buffer = v9;
      v5 = RtlGUIDFromString(&GuidString, a2);
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v5;
}
