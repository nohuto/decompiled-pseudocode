/*
 * XREFs of IidCloneDeviceId @ 0x1408170D8
 * Callers:
 *     HalpIommuCloneDeviceId @ 0x1404D9C34 (HalpIommuCloneDeviceId.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406FCCC0 (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     IidCloneDeviceIdAcpi @ 0x14069C000 (IidCloneDeviceIdAcpi.c)
 *     IidCloneDeviceIdPci @ 0x14069C048 (IidCloneDeviceIdPci.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
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
