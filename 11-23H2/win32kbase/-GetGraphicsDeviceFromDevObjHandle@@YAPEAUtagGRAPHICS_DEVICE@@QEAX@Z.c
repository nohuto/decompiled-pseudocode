/*
 * XREFs of ?GetGraphicsDeviceFromDevObjHandle@@YAPEAUtagGRAPHICS_DEVICE@@QEAX@Z @ 0x1C00AD4B0
 * Callers:
 *     EngQueryW32kCddInterface @ 0x1C00AD2B0 (EngQueryW32kCddInterface.c)
 *     ?W32kCddInitPdev@@YAJQEAUHDEV__@@QEAXPEAIPEAPEAU_devicemodeW@@PEAPEAX@Z @ 0x1C00AD440 (-W32kCddInitPdev@@YAJQEAUHDEV__@@QEAXPEAIPEAPEAU_devicemodeW@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

struct tagGRAPHICS_DEVICE *__fastcall GetGraphicsDeviceFromDevObjHandle(void *const a1)
{
  struct tagGRAPHICS_DEVICE *result; // rax

  for ( result = *(struct tagGRAPHICS_DEVICE **)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 1264LL);
        result && *((void *const *)result + 17) != a1;
        result = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)result + 16) )
  {
    ;
  }
  return result;
}
