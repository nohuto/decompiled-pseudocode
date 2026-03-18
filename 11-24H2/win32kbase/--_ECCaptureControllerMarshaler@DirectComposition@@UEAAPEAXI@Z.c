/*
 * XREFs of ??_ECCaptureControllerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140127100
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CCaptureControllerMarshaler@DirectComposition@@UEAA@XZ @ 0x1402249C0 (--1CCaptureControllerMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CCaptureControllerMarshaler *__fastcall DirectComposition::CCaptureControllerMarshaler::`vector deleting destructor'(
        DirectComposition::CCaptureControllerMarshaler *Buffer,
        char a2)
{
  DirectComposition::CCaptureControllerMarshaler::~CCaptureControllerMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
