/*
 * XREFs of RtlCmDecodeMemIoResource @ 0x14048FE80
 * Callers:
 *     HalpDmaGetReservedRegionsForDeviceResources @ 0x14054E514 (HalpDmaGetReservedRegionsForDeviceResources.c)
 *     IopGenericUnpackResource @ 0x140723650 (IopGenericUnpackResource.c)
 *     PnprAddMemoryResources @ 0x14072CDA4 (PnprAddMemoryResources.c)
 *     PnpCmResourcesToIoResources @ 0x140731264 (PnpCmResourcesToIoResources.c)
 *     PnpFilterResourceRequirementsList @ 0x140978308 (PnpFilterResourceRequirementsList.c)
 *     PnpIsRangeWithin @ 0x140A8BD60 (PnpIsRangeWithin.c)
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
