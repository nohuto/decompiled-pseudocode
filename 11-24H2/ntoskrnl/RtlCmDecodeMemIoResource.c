/*
 * XREFs of RtlCmDecodeMemIoResource @ 0x1404955C0
 * Callers:
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x140550BD4 (HalpDmaGetReservedRegionsForDeviceResources.c)
 *     IopGenericUnpackResource @ 0x140725AC0 (IopGenericUnpackResource.c)
 *     PnprAddMemoryResources @ 0x14072ED94 (PnprAddMemoryResources.c)
 *     PnpCmResourcesToIoResources @ 0x140733330 (PnpCmResourcesToIoResources.c)
 *     PnpFilterResourceRequirementsList @ 0x14098D2D0 (PnpFilterResourceRequirementsList.c)
 *     PnpIsRangeWithin @ 0x140A8F6C8 (PnpIsRangeWithin.c)
 * Callees:
 *     <none>
 */

ULONGLONG __stdcall RtlCmDecodeMemIoResource(PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor, PULONGLONG Start)
{
  ULONGLONG Length; // r8
  USHORT Flags; // ax

  Length = 0LL;
  if ( ((Descriptor->Type - 1) & 0xFD) != 0 )
  {
    Flags = Descriptor->Flags;
    if ( (Flags & 0x200) != 0 )
    {
      Length = (unsigned __int64)Descriptor->u.Generic.Length << 8;
    }
    else if ( (Flags & 0x400) != 0 )
    {
      Length = (unsigned __int64)Descriptor->u.Generic.Length << 16;
    }
    else if ( (Flags & 0x800) != 0 )
    {
      Length = (unsigned __int64)Descriptor->u.Generic.Length << 32;
    }
  }
  else
  {
    Length = Descriptor->u.Generic.Length;
  }
  if ( Start )
    *Start = Descriptor->u.Generic.Start.QuadPart;
  return Length;
}
