/*
 * XREFs of IommuPasidDeviceDelete @ 0x1407019C0
 * Callers:
 *     <none>
 * Callees:
 *     IommupPasidDeviceDelete @ 0x14054C01C (IommupPasidDeviceDelete.c)
 */

__int64 __fastcall IommuPasidDeviceDelete(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 48) )
    return IommupPasidDeviceDelete(a1);
  else
    return 3221225659LL;
}
