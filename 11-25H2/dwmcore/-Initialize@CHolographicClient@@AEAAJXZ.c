/*
 * XREFs of ?Initialize@CHolographicClient@@AEAAJXZ @ 0x1802DDD64
 * Callers:
 *     ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x1802DD78C (-Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ @ 0x1802DDA48 (-EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ.c)
 */

__int64 __fastcall CHolographicClient::Initialize(LARGE_INTEGER *this)
{
  int AnalogExclusiveTokenEvent; // ebx
  unsigned int v3; // ebx
  int v4; // eax

  AnalogExclusiveTokenEvent = NtTokenManagerGetAnalogExclusiveTokenEvent(&this[32]);
  if ( AnalogExclusiveTokenEvent >= 0 )
  {
    v4 = CHolographicClient::EnsureHolographicCompositor((CHolographicClient *)this);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x66u, 0LL);
    else
      QueryPerformanceFrequency(this + 35);
  }
  else
  {
    v3 = AnalogExclusiveTokenEvent | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x64u, 0LL);
  }
  return v3;
}
