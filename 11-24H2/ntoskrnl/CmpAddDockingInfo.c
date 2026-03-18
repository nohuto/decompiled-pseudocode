/*
 * XREFs of CmpAddDockingInfo @ 0x140C45CA8
 * Callers:
 *     CmpAddAliasEntry @ 0x140C45A78 (CmpAddAliasEntry.c)
 *     CmpCreateHardwareProfiles @ 0x140C463E8 (CmpCreateHardwareProfiles.c)
 * Callees:
 *     NtSetValueKey @ 0x14086A810 (NtSetValueKey.c)
 */

__int64 __fastcall CmpAddDockingInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  size_t Size; // [rsp+28h] [rbp-10h]
  size_t Sizea; // [rsp+28h] [rbp-10h]
  size_t Sizeb; // [rsp+28h] [rbp-10h]
  size_t Sizec; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v9) = *(unsigned __int16 *)(a2 + 4);
  LODWORD(Size) = 4;
  result = NtSetValueKey(a1, (UNICODE_STRING *)&CmpStrDockingStateString, 0, 4, &v9, Size);
  if ( (int)result >= 0 )
  {
    LODWORD(v9) = *(unsigned __int16 *)(a2 + 6);
    LODWORD(Sizea) = 4;
    result = NtSetValueKey(a1, (UNICODE_STRING *)&CmpStrCapabilitiesString, 0, 4, &v9, Sizea);
    if ( (int)result >= 0 )
    {
      LODWORD(v9) = *(_DWORD *)(a2 + 8);
      LODWORD(Sizeb) = 4;
      result = NtSetValueKey(a1, (UNICODE_STRING *)&CmpStrDockIdString, 0, 4, &v9, Sizeb);
      if ( (int)result >= 0 )
      {
        LODWORD(v9) = *(_DWORD *)(a2 + 12);
        LODWORD(Sizec) = 4;
        return NtSetValueKey(a1, (UNICODE_STRING *)&CmpStrSerialNumberString, 0, 4, &v9, Sizec);
      }
    }
  }
  return result;
}
