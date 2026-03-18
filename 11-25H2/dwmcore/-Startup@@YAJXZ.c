/*
 * XREFs of ?Startup@@YAJXZ @ 0x180259CDC
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x18021D4CC (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitializeFromRegistry@CCommonRegistryData@@SAJXZ @ 0x180215474 (-InitializeFromRegistry@CCommonRegistryData@@SAJXZ.c)
 *     ?Initialize@OSInfo@@SAXXZ @ 0x18023074C (-Initialize@OSInfo@@SAXXZ.c)
 *     ?EnsureD2DFactory@CD2DFactory@@QEAAJXZ @ 0x180259D38 (-EnsureD2DFactory@CD2DFactory@@QEAAJXZ.c)
 */

__int64 Startup(void)
{
  CD2DFactory *v0; // rcx
  int v1; // eax
  unsigned int v2; // ebx

  OSInfo::Initialize();
  QueryPerformanceFrequency(&g_qpcFrequency);
  CCommonRegistryData::InitializeFromRegistry();
  v1 = CD2DFactory::EnsureD2DFactory(v0);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v1, 0xF7u, 0LL);
  return v2;
}
