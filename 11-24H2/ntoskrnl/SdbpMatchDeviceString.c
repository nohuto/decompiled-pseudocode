/*
 * XREFs of SdbpMatchDeviceString @ 0x1408053C4
 * Callers:
 *     SdbpMatchAcpi @ 0x140805104 (SdbpMatchAcpi.c)
 *     SdbpMatchBios @ 0x1408051E0 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x140805278 (SdbpMatchCpu.c)
 *     SdbpMatchOem @ 0x140805434 (SdbpMatchOem.c)
 * Callees:
 *     _wcsicmp @ 0x1404FE3B0 (_wcsicmp.c)
 *     SdbGetStringTagPtr @ 0x14095FA98 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x14096003C (SdbFindFirstTag.c)
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
