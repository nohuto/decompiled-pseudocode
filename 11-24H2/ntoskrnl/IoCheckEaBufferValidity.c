/*
 * XREFs of IoCheckEaBufferValidity @ 0x140A15CA0
 * Callers:
 *     IopCreateFile @ 0x1409557C0 (IopCreateFile.c)
 *     NtSetEaFile @ 0x140A59680 (NtSetEaFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoCheckEaBufferValidity(PFILE_FULL_EA_INFORMATION EaBuffer, ULONG EaLength, PULONG ErrorOffset)
{
  int v3; // r10d
  PFILE_FULL_EA_INFORMATION v4; // r9
  __int64 EaNameLength; // rcx
  ULONG v6; // r11d
  __int64 NextEntryOffset; // rcx

  v3 = (int)EaBuffer;
  v4 = EaBuffer;
  if ( EaLength > 0x7FFFFFFF )
  {
    *ErrorOffset = 0;
  }
  else
  {
    while ( EaLength >= 8 )
    {
      EaNameLength = v4->EaNameLength;
      v6 = v4->EaValueLength + EaNameLength + 9;
      if ( EaLength < v6 || v4->EaName[EaNameLength] )
        break;
      NextEntryOffset = v4->NextEntryOffset;
      if ( !(_DWORD)NextEntryOffset )
        return 0;
      if ( ((v6 + 3) & 0xFFFFFFFC) != (_DWORD)NextEntryOffset
        || (int)NextEntryOffset < 0
        || EaLength < (unsigned int)NextEntryOffset )
      {
        break;
      }
      EaLength -= NextEntryOffset;
      v4 = (PFILE_FULL_EA_INFORMATION)((char *)v4 + NextEntryOffset);
    }
    *ErrorOffset = (_DWORD)v4 - v3;
  }
  return -2147483628;
}
