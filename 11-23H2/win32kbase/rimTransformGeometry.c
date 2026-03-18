/*
 * XREFs of rimTransformGeometry @ 0x1C00E335E
 * Callers:
 *     rimPopulateContactFrameData @ 0x1C01AAF54 (rimPopulateContactFrameData.c)
 * Callees:
 *     RIMApplyPTPTranslation @ 0x1C00E113E (RIMApplyPTPTranslation.c)
 *     EtwTracePointerDeviceTransformationStart @ 0x1C013AE50 (EtwTracePointerDeviceTransformationStart.c)
 *     EtwTracePointerDeviceTransformationStop @ 0x1C013AE80 (EtwTracePointerDeviceTransformationStop.c)
 *     RIMApplyTransforms @ 0x1C018F3F0 (RIMApplyTransforms.c)
 *     rimComputeHimetricGeometry @ 0x1C01A7C74 (rimComputeHimetricGeometry.c)
 */

__int64 __fastcall rimTransformGeometry(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        int a2,
        unsigned int *a3,
        int a4,
        __int64 a5)
{
  EtwTracePointerDeviceTransformationStart(*a3);
  if ( *((_DWORD *)a1 + 6) == 7 )
  {
    RIMApplyPTPTranslation(a1, (__int64)a3);
  }
  else
  {
    RIMApplyTransforms((_DWORD)a1, a2, (_DWORD)a3, a4, a5);
    rimComputeHimetricGeometry(a1, a3, a3 + 8);
  }
  return EtwTracePointerDeviceTransformationStop(*a3);
}
