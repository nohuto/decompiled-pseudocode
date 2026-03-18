/*
 * XREFs of ??_G?$CSharedResourceMarshaler@VCCaptureControllerMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x14022CC90
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CCaptureControllerMarshaler@DirectComposition@@UEAA@XZ @ 0x1402249C0 (--1CCaptureControllerMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CCaptureControllerMarshaler *__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CCaptureControllerMarshaler,2>::`scalar deleting destructor'(
        DirectComposition::CCaptureControllerMarshaler *Buffer,
        char a2)
{
  *(_QWORD *)Buffer = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CCaptureControllerMarshaler,2>::`vftable';
  DirectComposition::CCaptureControllerMarshaler::~CCaptureControllerMarshaler(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
