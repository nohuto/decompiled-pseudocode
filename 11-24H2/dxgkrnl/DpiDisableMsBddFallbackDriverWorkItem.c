/*
 * XREFs of DpiDisableMsBddFallbackDriverWorkItem @ 0x140249E90
 * Callers:
 *     <none>
 * Callees:
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003551C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140041998 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DpiDisableMsBddFallbackDriver @ 0x140249CE4 (DpiDisableMsBddFallbackDriver.c)
 *     DpiPnpEnableVga @ 0x14024A8C4 (DpiPnpEnableVga.c)
 */

void __fastcall DpiDisableMsBddFallbackDriverWorkItem(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  _OWORD *v4; // rdi
  __int64 v5; // rdx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v6; // [rsp+20h] [rbp-18h] BYREF
  _OWORD *v7; // [rsp+28h] [rbp-10h]

  LOBYTE(v6) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(&v6, 0LL, 0x4Eu, 0);
  v4 = v7;
  LOBYTE(v5) = 1;
  DpiPnpEnableVga(0LL, v5, 0LL, v7);
  AcquireMiniportListMutex();
  if ( (unsigned int)(dword_140161110 - 4) <= 1 )
    DpiDisableMsBddFallbackDriver(v4);
  ReleaseMiniportListMutex();
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v6);
}
