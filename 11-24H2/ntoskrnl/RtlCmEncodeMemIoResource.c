/*
 * XREFs of RtlCmEncodeMemIoResource @ 0x1405E6EA0
 * Callers:
 *     VslGetSecurePciDeviceBootConfiguration @ 0x14058A650 (VslGetSecurePciDeviceBootConfiguration.c)
 *     HalpReportResourceUsage @ 0x140C10954 (HalpReportResourceUsage.c)
 *     IopInitializeResourceMap @ 0x140C24FB8 (IopInitializeResourceMap.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlCmEncodeMemIoResource(
        PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor,
        UCHAR Type,
        ULONGLONG Length,
        ULONGLONG Start)
{
  USHORT v5; // dx
  ULONGLONG v6; // r9
  __int16 v7; // ax

  if ( ((Type - 3) & 0xFB) != 0 && (Type != 1 || Length > 0xFFFFFFFF) )
    return -1073741811;
  Descriptor->u.Generic.Start.QuadPart = Start;
  if ( Type == 1 )
  {
    Descriptor->Type = 1;
LABEL_7:
    Descriptor->u.Generic.Length = Length;
    return 0;
  }
  v5 = Descriptor->Flags & 0xF1FF;
  Descriptor->Flags = v5;
  if ( Length <= 0xFFFFFFFF )
  {
    Descriptor->Type = 3;
    goto LABEL_7;
  }
  if ( Length > 0xFFFFFFFF00LL )
  {
    if ( Length > 0xFFFFFFFF0000LL )
    {
      if ( Length <= 0xFFFFFFFF00000000uLL )
      {
        v6 = HIDWORD(Length);
        if ( Length == HIDWORD(Length) << 32 )
        {
          v7 = 2048;
          goto LABEL_14;
        }
      }
    }
    else
    {
      v6 = Length >> 16;
      if ( Length == (unsigned __int64)(unsigned int)(Length >> 16) << 16 )
      {
        v7 = 1024;
        goto LABEL_14;
      }
    }
  }
  else
  {
    v6 = Length >> 8;
    if ( Length == (unsigned __int64)(unsigned int)(Length >> 8) << 8 )
    {
      v7 = 512;
LABEL_14:
      Descriptor->Type = 7;
      Descriptor->Flags = v7 | v5;
      Descriptor->u.Generic.Length = v6;
      return 0;
    }
  }
  return -1073741823;
}
