/*
 * XREFs of RtlCmDecodeMemIoResource @ 0x140495FB0
 * Callers:
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x14054E274 (HalpDmaGetReservedRegionsForDeviceResources.c)
 *     IopGenericUnpackResource @ 0x140719B40 (IopGenericUnpackResource.c)
 *     PnprAddMemoryResources @ 0x140722E14 (PnprAddMemoryResources.c)
 *     PnpCmResourcesToIoResources @ 0x140727098 (PnpCmResourcesToIoResources.c)
 *     PnpIsRangeWithin @ 0x140A8A6F8 (PnpIsRangeWithin.c)
 *     PnpFilterResourceRequirementsList @ 0x140AB35EC (PnpFilterResourceRequirementsList.c)
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
