/*
 * XREFs of IidCloneDeviceId @ 0x140817818
 * Callers:
 *     HalpIommuCloneDeviceId @ 0x1404D36B0 (HalpIommuCloneDeviceId.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406FA900 (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     IidCloneDeviceIdAcpi @ 0x14069D080 (IidCloneDeviceIdAcpi.c)
 *     IidCloneDeviceIdPci @ 0x14069D0C8 (IidCloneDeviceIdPci.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall IidCloneDeviceId(_DWORD *Src, void *a2, size_t a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !Src || !a2 || (unsigned int)(*Src - 1) > 4 )
    return (unsigned int)-1073741811;
  switch ( *Src )
  {
    case 1:
      return (unsigned int)IidCloneDeviceIdPci((__int64)Src, (__int64)a2);
    case 2:
      return (unsigned int)IidCloneDeviceIdAcpi((__int64)Src, (__int64)a2);
    case 5:
      memmove(a2, Src, a3);
      break;
    default:
      return (unsigned int)-1073741637;
  }
  return v3;
}
