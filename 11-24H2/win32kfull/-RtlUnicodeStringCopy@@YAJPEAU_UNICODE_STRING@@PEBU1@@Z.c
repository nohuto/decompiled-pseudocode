/*
 * XREFs of ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x14012D69C
 * Callers:
 *     ?_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z @ 0x14012D0B4 (-_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z.c)
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x14012D2B0 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x140133ED4 (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     ReadTiltCalibrationData @ 0x14026F094 (ReadTiltCalibrationData.c)
 *     WriteTiltCalibrationData @ 0x14026F584 (WriteTiltCalibrationData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeStringCopy(struct _UNICODE_STRING *a1, const struct _UNICODE_STRING *a2)
{
  USHORT Length; // r8
  USHORT MaximumLength; // ax
  unsigned int v6; // ecx
  __int16 v7; // dx
  unsigned __int64 v8; // r9
  PWSTR Buffer; // rdi
  unsigned __int64 v10; // r11
  USHORT v11; // ax
  PWSTR v12; // rbx
  unsigned __int64 v13; // r8

  Length = a1->Length;
  if ( (a1->Length & 1) != 0 )
    return (unsigned int)-1073741811;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( Length > MaximumLength )
    return (unsigned int)-1073741811;
  if ( MaximumLength == 0xFFFF )
    return (unsigned int)-1073741811;
  v6 = 0;
  if ( !a1->Buffer && (Length || MaximumLength) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v7 = 0;
    v8 = a2->Length;
    Buffer = a1->Buffer;
    v10 = (unsigned __int64)a1->MaximumLength >> 1;
    if ( (v8 & 1) != 0
      || (v11 = a2->MaximumLength, (v11 & 1) != 0)
      || (unsigned __int16)v8 > v11
      || v11 == 0xFFFF
      || !a2->Buffer && ((_WORD)v8 || v11) )
    {
      v6 = -1073741811;
    }
    else
    {
      v12 = a2->Buffer;
      v13 = v8 >> 1;
      if ( v10 )
      {
        while ( v13 )
        {
          --v13;
          *Buffer++ = *v12++;
          ++v7;
          if ( !--v10 )
            goto LABEL_14;
        }
      }
      else
      {
LABEL_14:
        if ( v13 )
          v6 = -2147483643;
      }
    }
    a1->Length = 2 * v7;
  }
  return v6;
}
