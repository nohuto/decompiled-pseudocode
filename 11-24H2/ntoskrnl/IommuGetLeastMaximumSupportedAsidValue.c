/*
 * XREFs of IommuGetLeastMaximumSupportedAsidValue @ 0x140561F44
 * Callers:
 *     IommupDeviceEnableSvm @ 0x1406FD184 (IommupDeviceEnableSvm.c)
 *     IommuGetConfiguration @ 0x140C168A0 (IommuGetConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 IommuGetLeastMaximumSupportedAsidValue()
{
  ULONG_PTR *v0; // rdx
  unsigned int v1; // r8d
  ULONG_PTR *v2; // rcx
  unsigned int v3; // ecx

  v0 = (ULONG_PTR *)HalpIommuList;
  v1 = -1;
  while ( v0 != &HalpIommuList )
  {
    v2 = v0;
    v0 = (ULONG_PTR *)*v0;
    if ( (v2[59] & 0xA0) != 0 )
    {
      v3 = *((_DWORD *)v2 + 128);
      if ( v3 < v1 )
        v1 = v3;
    }
  }
  return v1;
}
