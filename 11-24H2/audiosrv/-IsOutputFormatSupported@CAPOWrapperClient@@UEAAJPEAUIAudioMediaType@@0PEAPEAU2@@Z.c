/*
 * XREFs of ?IsOutputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x1800715F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x180024FB0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0001@@PEAUIAudioMediaType@@1PEAPEAU3@@Z @ 0x180025100 (-IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800252E8 (--1CPerfTracker@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall CAPOWrapperClient::IsOutputFormatSupported(
        CAPOWrapperClient *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  struct AudioSrvTelemetryProvider *v8; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-128h] BYREF

  v8 = AudioSrvTelemetryProvider::Instance();
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    *((const struct _tlgProvider_t **)v8 + 1),
    "SystemEffect_IsOutputFormatSupported",
    (const char *const)this + 124);
  LODWORD(this) = CAPOWrapperClient::IsAudioFormatSupported(
                    (__int64)this - 8,
                    1LL,
                    (__int64)a2,
                    (__int64)a3,
                    (__int64)a4);
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return (unsigned int)this;
}
