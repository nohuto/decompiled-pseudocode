/*
 * XREFs of NtGdiGetBitmapDimension @ 0x1401D2180
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapDimension @ 0x1401D21E8 (GreGetBitmapDimension.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiGetBitmapDimension(HSURF a1, void *a2)
{
  unsigned int BitmapDimension; // ebx
  __int64 Src; // [rsp+30h] [rbp+8h] BYREF

  Src = 0LL;
  if ( a1 )
  {
    BitmapDimension = GreGetBitmapDimension(a1);
    if ( BitmapDimension )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(a2, &Src, 8uLL);
    }
  }
  else
  {
    return 0;
  }
  return BitmapDimension;
}
