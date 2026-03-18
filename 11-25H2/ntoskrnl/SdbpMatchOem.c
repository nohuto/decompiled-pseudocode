/*
 * XREFs of SdbpMatchOem @ 0x1407F58C4
 * Callers:
 *     SdbpCheckKObject @ 0x14082BD7C (SdbpCheckKObject.c)
 * Callees:
 *     SdbpMatchDeviceDWORD @ 0x1407F57C8 (SdbpMatchDeviceDWORD.c)
 *     SdbpMatchDeviceString @ 0x1407F5854 (SdbpMatchDeviceString.c)
 *     SdbFindFirstTag @ 0x1408258C0 (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbpMatchOem(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  unsigned int FirstTag; // eax
  unsigned int v7; // esi

  v5 = 0;
  FirstTag = SdbFindFirstTag(a1, a2, 28706LL);
  v7 = FirstTag;
  if ( FirstTag )
  {
    if ( (unsigned int)SdbpMatchDeviceString(a1, *(const wchar_t **)a3, FirstTag, 0x6025u)
      && (unsigned int)SdbpMatchDeviceString(a1, *(const wchar_t **)(a3 + 8), v7, 0x6026u) )
    {
      return (unsigned int)SdbpMatchDeviceDWORD(a1, *(_DWORD *)(a3 + 44), v7, 0x4034u, 0x4035u, 0x4036u) != 0;
    }
  }
  else
  {
    return 1;
  }
  return v5;
}
