/*
 * XREFs of ?InitializeWithPosition@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBGPEBUtagRECT@@@Z @ 0x1806C7920
 * Callers:
 *     <none>
 * Callees:
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x18008578C (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1806846FC (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveWindowFactoryBase::InitializeWithPosition(
        CImmersiveWindowFactoryBase *this,
        struct IImmersiveMonitor *a2,
        const unsigned __int16 *a3,
        const struct tagRECT *a4)
{
  __int64 result; // rax

  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  result = _AllocString<CTCoAllocPolicy>((__int64)this, (__int64)a2, a3, (_QWORD *)this + 8);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(char *, struct IImmersiveMonitor *, const struct tagRECT *))(*((_QWORD *)this - 9)
                                                                                                 + 72LL))(
             (char *)this - 72,
             a2,
             a4);
  return result;
}
