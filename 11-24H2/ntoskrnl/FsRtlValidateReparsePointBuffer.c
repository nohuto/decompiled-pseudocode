/*
 * XREFs of FsRtlValidateReparsePointBuffer @ 0x140437800
 * Callers:
 *     IopValidateJunctionTarget @ 0x140710FC8 (IopValidateJunctionTarget.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlValidateReparsePointBuffer(ULONG BufferLength, PREPARSE_DATA_BUFFER ReparseBuffer)
{
  signed int ReparseTag; // eax
  unsigned int ReparseDataLength; // ecx
  unsigned int v6; // r10d
  unsigned int v7; // edx
  USHORT v9; // dx
  USHORT v10; // ax
  USHORT SubstituteNameOffset; // r11
  USHORT SubstituteNameLength; // r8
  USHORT PrintNameOffset; // cx
  USHORT PrintNameLength; // r9

  if ( BufferLength - 8 > 0x3FF8 )
    return -1073741192;
  ReparseTag = ReparseBuffer->ReparseTag;
  if ( (ReparseBuffer->ReparseTag & 0xFFF0000) != 0
    || (unsigned int)ReparseTag <= 2
    || (ReparseTag & 0xC0000000) == 0x40000000
    || (ReparseTag & 0x30000000) == 0x30000000
    || ReparseTag == -1610612711 )
  {
    return -1073741194;
  }
  ReparseDataLength = ReparseBuffer->ReparseDataLength;
  v6 = ReparseDataLength + 8;
  v7 = ReparseDataLength + 24;
  if ( ReparseDataLength + 8 != BufferLength )
  {
    if ( v7 != BufferLength )
      return -1073741192;
LABEL_15:
    if ( ReparseTag >= 0
      && !ReparseBuffer->AppExecLinkReparseBuffer.StringCount
      && !ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameOffset
      && !ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameLength
      && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 8)
      && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 9)
      && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 10)
      && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 11)
      && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 12)
      && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 13)
      && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 14)
      && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 15)
      || ReparseTag == -1610612733 )
    {
      return -1073741192;
    }
    if ( ReparseTag != -1610612724 )
      return 0;
    return -1073741192;
  }
  if ( ReparseTag >= 0 )
    return -1073741192;
  if ( v7 == BufferLength )
    goto LABEL_15;
  if ( ReparseTag != -1610612733 )
  {
    if ( ReparseTag != -1610612724 )
      return 0;
    if ( ReparseDataLength < 0xC )
      return -1073741192;
    SubstituteNameOffset = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameOffset;
    SubstituteNameLength = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength;
    if ( (unsigned __int16)(SubstituteNameOffset + SubstituteNameLength) >= SubstituteNameOffset )
    {
      PrintNameOffset = ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameOffset;
      PrintNameLength = ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameLength;
      if ( (unsigned __int16)(PrintNameOffset + PrintNameLength) >= PrintNameOffset )
      {
        if ( v6 >= (unsigned int)(unsigned __int16)(PrintNameOffset + PrintNameLength) + 20
          && v6 >= (unsigned int)(unsigned __int16)(SubstituteNameOffset + SubstituteNameLength) + 20
          && SubstituteNameLength
          && PrintNameLength
          && (SubstituteNameLength & 1) == 0
          && (PrintNameLength & 1) == 0
          && (SubstituteNameOffset & 1) == 0 )
        {
          return (PrintNameOffset & 1) != 0 ? 0xC0000278 : 0;
        }
        return -1073741192;
      }
    }
    return -1073741675;
  }
  if ( ReparseDataLength < 8 )
    return -1073741192;
  v9 = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength;
  v10 = ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameLength + v9;
  if ( v10 < v9 || (unsigned __int16)(v9 + 2) < v9 )
    return -1073741675;
  if ( ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameOffset
    || ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameOffset != v9 + 2 )
  {
    return -1073741192;
  }
  if ( ReparseDataLength == v10 + 12 )
    return 0;
  return -1073741192;
}
