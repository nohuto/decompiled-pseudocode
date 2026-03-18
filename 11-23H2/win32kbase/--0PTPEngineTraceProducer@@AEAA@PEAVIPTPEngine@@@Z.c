/*
 * XREFs of ??0PTPEngineTraceProducer@@AEAA@PEAVIPTPEngine@@@Z @ 0x1C0205328
 * Callers:
 *     ?Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z @ 0x1C0205434 (-Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 */

PTPEngineTraceProducer *__fastcall PTPEngineTraceProducer::PTPEngineTraceProducer(
        PTPEngineTraceProducer *this,
        struct IPTPEngine *a2)
{
  unsigned __int64 v2; // rbx

  *((_QWORD *)this + 1) = 0LL;
  v2 = (unsigned __int64)this + 16;
  *(_QWORD *)this = &PTPEngineTraceProducer::`vftable'{for `IPTPEngine'};
  *((_QWORD *)this + 2) = &PTPEngineTraceProducer::`vftable'{for `IPTPEngineClient'};
  *((_QWORD *)this + 3) = a2;
  memset((char *)this + 40, 0, 0x22CuLL);
  *((_QWORD *)this + 75) = 0LL;
  (***((void (__fastcall ****)(_QWORD, _QWORD))this + 3))(
    *((_QWORD *)this + 3),
    v2 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  return this;
}
