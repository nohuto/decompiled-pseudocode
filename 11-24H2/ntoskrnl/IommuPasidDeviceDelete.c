/*
 * XREFs of IommuPasidDeviceDelete @ 0x140703E00
 * Callers:
 *     <none>
 * Callees:
 *     IommupPasidDeviceDelete @ 0x14054E6DC (IommupPasidDeviceDelete.c)
 */

__int64 __fastcall IommuPasidDeviceDelete(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 48) )
    return IommupPasidDeviceDelete(a1);
  else
    return 3221225659LL;
}
