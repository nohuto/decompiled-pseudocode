/*
 * XREFs of ?Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ @ 0x140014BFC
 * Callers:
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x140013EB0 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     ?Resume@CAudioDeviceGraph@@UEAAJXZ @ 0x140014A70 (-Resume@CAudioDeviceGraph@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioDeviceGraph::DurationTracker::Start(LARGE_INTEGER *this)
{
  if ( !LOBYTE(this->LowPart) )
  {
    QueryPerformanceCounter(this + 2);
    LOBYTE(this->LowPart) = 1;
  }
}
