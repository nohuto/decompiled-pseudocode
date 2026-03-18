/*
 * XREFs of ?MonitorFromHdev@@YAPEAUtagMONITOR@@PEAX@Z @ 0x1400997AC
 * Callers:
 *     UserGetMonitorDC @ 0x140099680 (UserGetMonitorDC.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400A2D78 (-zzzUpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     <none>
 */

struct tagMONITOR *__fastcall MonitorFromHdev(void *a1)
{
  struct tagMONITOR *result; // rax

  for ( result = *(struct tagMONITOR **)(*(_QWORD *)(W32GetUserSessionState(a1) + 57008) + 112LL);
        result && *((void **)result + 10) != a1;
        result = (struct tagMONITOR *)*((_QWORD *)result + 7) )
  {
    ;
  }
  return result;
}
