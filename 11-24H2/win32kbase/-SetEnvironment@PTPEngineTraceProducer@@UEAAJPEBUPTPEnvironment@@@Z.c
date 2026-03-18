/*
 * XREFs of ?SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z @ 0x140053EA0
 * Callers:
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140053E64 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140152874 (-InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x140053F38 (-TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PTPEngineTraceProducer::SetEnvironment(
        PTPEngineTraceProducer *this,
        const struct PTPEnvironment *a2)
{
  __int64 result; // rax

  PTPEngineTraceProducer::TraceEnvironment(this, a2);
  result = (*(__int64 (__fastcall **)(_QWORD, const struct PTPEnvironment *))(**((_QWORD **)this + 3) + 8LL))(
             *((_QWORD *)this + 3),
             a2);
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 88) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 104) = *((_OWORD *)a2 + 4);
  *(_OWORD *)((char *)this + 120) = *((_OWORD *)a2 + 5);
  *(_OWORD *)((char *)this + 136) = *((_OWORD *)a2 + 6);
  *(_OWORD *)((char *)this + 152) = *((_OWORD *)a2 + 7);
  *(_OWORD *)((char *)this + 168) = *((_OWORD *)a2 + 8);
  *(_OWORD *)((char *)this + 184) = *((_OWORD *)a2 + 9);
  return result;
}
