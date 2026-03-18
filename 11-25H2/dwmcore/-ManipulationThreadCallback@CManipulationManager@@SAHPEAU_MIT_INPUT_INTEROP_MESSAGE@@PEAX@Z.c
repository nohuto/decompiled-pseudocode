/*
 * XREFs of ?ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x1801AD450
 * Callers:
 *     <none>
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180135FAC (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x180136020 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x1801AD504 (-s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1801AD948 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CManipulationManager::ManipulationThreadCallback(struct _MIT_INPUT_INTEROP_MESSAGE *a1, void *a2)
{
  unsigned int v3; // ebx
  const char *v5; // rdx
  unsigned int v6; // eax
  _BYTE v8[56]; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  switch ( *(_DWORD *)a1 )
  {
    case 0:
      v5 = "GT:MIT_INPUT_INTEROP_MTCALLBACK";
      goto LABEL_9;
    case 1:
      InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v8, "GT:MIT_INPUT_INTEROP_HOVER", 0LL);
      v6 = CInputManager::s_HoverHittestRequest((struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a1 + 8));
LABEL_6:
      v3 = v6;
      InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v8);
      return v3;
    case 2:
      v5 = "GT:MIT_INPUT_INTEROP_INERTIA";
LABEL_9:
      InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v8, v5, 0LL);
      v6 = CManipulationManager::ProcessManipulationThreadCallbackInput(
             (struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a1 + 8),
             a2);
      goto LABEL_6;
  }
  return v3;
}
