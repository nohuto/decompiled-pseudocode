/*
 * XREFs of InputInitialize @ 0x1C00814D4
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02DEBC0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1C00766E0 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0076738 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ?InitializeInputGlobals@@YAJXZ @ 0x1C00816B0 (-InitializeInputGlobals@@YAJXZ.c)
 *     ?Initialize@CTouchProcessor@@SAJXZ @ 0x1C00817DC (-Initialize@CTouchProcessor@@SAJXZ.c)
 *     ?DeviceAcceleratorInitialize@@YAJXZ @ 0x1C0081FEC (-DeviceAcceleratorInitialize@@YAJXZ.c)
 *     InitializeInputComponents @ 0x1C00821D8 (InitializeInputComponents.c)
 *     ShouldEnableInputVirtualization @ 0x1C00837F0 (ShouldEnableInputVirtualization.c)
 *     IsGetInputSensorThreadingModelSupported @ 0x1C00C1130 (IsGetInputSensorThreadingModelSupported.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ?ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z @ 0x1C01EE8CC (-ivrInitAllwin32knsDelayLoads@@YAXPEAX@Z.c)
 *     ivrLoadImage @ 0x1C01EEE44 (ivrLoadImage.c)
 */

__int64 InputInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // esi
  __int64 (**v15)(void); // rbx
  __int64 v16; // rax
  unsigned int v17; // ebp
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int *v23; // rax
  void *v24; // rcx
  char v26; // [rsp+78h] [rbp+20h] BYREF

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v26, 1);
  gbInputInitialized = 1;
  v2 = InitializeInputGlobals();
  if ( v2 >= 0 )
  {
    v5 = SGDGetUserSessionState(v1, v0, v3, v4);
    *(_QWORD *)(v5 + 3232) = 0LL;
    *(_QWORD *)(v5 + 3240) = 0LL;
    *(_BYTE *)(SGDGetUserSessionState(v7, v6, v8, v9) + 3256) = 1;
    v14 = 0;
    v15 = (__int64 (**)(void))(SGDGetUserSessionState(v11, v10, v12, v13) + 3312);
    do
    {
      if ( v14 != *(_DWORD *)v15 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 70LL);
      v16 = (*(v15 - 4))();
      *(v15 - 1) = (__int64 (*)(void))v16;
      if ( !v16 )
      {
        v2 = -1073741823;
        goto LABEL_24;
      }
      v17 = *(_DWORD *)v15;
      v18 = 0;
      if ( (int)IsGetInputSensorThreadingModelSupported() < 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1356LL);
      if ( (int)IsGetInputSensorThreadingModelSupported() >= 0 && qword_1C02965C8 )
        v18 = qword_1C02965C8(v17);
      *((_DWORD *)v15 - 4) = v18;
      if ( !v18 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 82LL);
      ++v14;
      v15 += 6;
    }
    while ( v14 < 3 );
    v2 = CTouchProcessor::Initialize();
    if ( v2 >= 0 )
    {
      v2 = DeviceAcceleratorInitialize();
      if ( v2 >= 0 )
      {
        if ( (unsigned __int8)ShouldEnableInputVirtualization() )
        {
          v23 = (int *)SGDGetUserSessionState(v20, v19, v21, v22);
          gbInputVirtualizationEnabled = 1;
          gInputVirtualizationSessionId = *v23;
          ghModwin32kns = (void *)ivrLoadImage();
          if ( ghModwin32kns )
          {
            ivrInitAllwin32knsDelayLoads(v24);
            if ( gpfnIVInitialize )
              v2 = gpfnIVInitialize(&gbRootPartition);
            else
              v2 = -1073741637;
          }
          else
          {
            v2 = -1073741204;
          }
        }
      }
    }
    InitializeInputComponents();
  }
LABEL_24:
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v26);
  return (unsigned int)v2;
}
