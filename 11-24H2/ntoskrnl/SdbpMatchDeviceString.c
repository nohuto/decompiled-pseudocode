/*
 * XREFs of SdbpMatchDeviceString @ 0x140805B04
 * Callers:
 *     SdbpMatchAcpi @ 0x140805844 (SdbpMatchAcpi.c)
 *     SdbpMatchBios @ 0x140805920 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x1408059B8 (SdbpMatchCpu.c)
 *     SdbpMatchOem @ 0x140805B74 (SdbpMatchOem.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     SdbGetStringTagPtr @ 0x140947558 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x140947AFC (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbpMatchDeviceString(__int64 a1, const wchar_t *a2, unsigned int a3, unsigned __int16 a4)
{
  unsigned int v6; // ebx
  unsigned int FirstTag; // eax
  const wchar_t *StringTagPtr; // rax

  v6 = 0;
  FirstTag = SdbFindFirstTag(a1, a3, a4);
  if ( FirstTag )
  {
    StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag);
    if ( StringTagPtr && a2 )
      return wcsicmp(StringTagPtr, a2) == 0;
  }
  else
  {
    return 1;
  }
  return v6;
}
