/*
 * XREFs of ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1401140EC
 * Callers:
 *     ?_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z @ 0x1401140D0 (-_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z @ 0x14006C4E8 (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1400A3C50 (IsThreadCrossSessionAttached.c)
 *     RIMHandleAnySignalledReadsOnDestroyed @ 0x1400FF688 (RIMHandleAnySignalledReadsOnDestroyed.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x140106334 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _lambda_65e0d2d98340653a56fe7d74fa289e35_::operator() @ 0x14020B8D0 (_lambda_65e0d2d98340653a56fe7d74fa289e35_--operator().c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x14020D128 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 */

void __fastcall CBaseInput::RIMCallBack(CBaseInput *this, struct RIMDevChangeStruct *a2)
{
  __int64 v3; // rbx
  bool v5; // r14
  BOOL v6; // r12d
  __int64 v7; // rcx
  __int64 v8; // rsi
  int v9; // eax
  int v10; // r15d
  int v11; // eax
  _QWORD *v12; // rax
  __int64 *v13; // rsi
  int v14; // eax
  __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+28h] [rbp-18h]
  int v17; // [rsp+30h] [rbp-10h]
  int v18; // [rsp+34h] [rbp-Ch]
  CBaseInput *v19; // [rsp+78h] [rbp+38h] BYREF

  v3 = *((_QWORD *)a2 + 3);
  v5 = *((_DWORD *)a2 + 1) != 3;
  v6 = IsThreadCrossSessionAttached();
  RIMHandleAnySignalledReadsOnDestroyed((__int64)a2);
  if ( v6 || !CBaseInput::ExecutingOnSensorHostingThread(this) )
  {
    v7 = *(unsigned int *)a2;
    if ( *(_DWORD *)a2 == 1 )
    {
      *(_DWORD *)(v3 + 240) |= 0x20000000u;
LABEL_11:
      v5 = 0;
      goto LABEL_12;
    }
    if ( *(_DWORD *)a2 == 2 )
      KeBugCheck(0x164u);
    if ( (unsigned int)(v7 - 3) > 1 )
    {
      LODWORD(v19) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2250LL);
    }
    if ( !PtiCurrent(v7) )
      goto LABEL_11;
  }
LABEL_12:
  v8 = 0LL;
  v9 = *(_DWORD *)a2;
  v19 = this;
  v10 = 0;
  v11 = v9 - 1;
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      v12 = (_QWORD *)(v3 + 72);
      if ( !v3 )
        v12 = 0LL;
      if ( !*v12 )
        lambda_65e0d2d98340653a56fe7d74fa289e35_::operator()(&v19, v3);
      v10 = lambda_65e0d2d98340653a56fe7d74fa289e35_::operator()(&v19, v3);
      v8 = *(_QWORD *)((v3 + 72) & -(__int64)(v3 != 0));
    }
    else if ( (*(_DWORD *)(v3 + 240) & 0x20000000) == 0 )
    {
      v8 = *(_QWORD *)(v3 + 72);
      v10 = lambda_65e0d2d98340653a56fe7d74fa289e35_::operator()(&v19, v3);
    }
  }
  else if ( v6 )
  {
    if ( (*(_DWORD *)(v3 + 240) & 0x2000) != 0 )
    {
      LODWORD(v19) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2334LL);
    }
  }
  else
  {
    v10 = lambda_65e0d2d98340653a56fe7d74fa289e35_::operator()(&v19, v3);
    if ( v10 )
    {
      v13 = (__int64 *)(v3 + 72);
      if ( !v3 )
        v13 = 0LL;
      v8 = *v13;
    }
  }
  if ( ((*(_DWORD *)a2 - 2) & 0xFFFFFFFD) == 0 )
    CBaseInput::ApplyRimDevBackedDeviceSummaryInformation((__int64)this, *((_DWORD *)a2 + 1));
  if ( v5 && v8 )
  {
    if ( *((_DWORD *)a2 + 1) == 3 )
    {
      LODWORD(v19) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2384LL);
    }
    v14 = *(_DWORD *)(v3 + 240);
    if ( (v14 & 0x20000000) != 0 )
    {
      *(_DWORD *)(v3 + 240) = v14 & 0xDFFFFFFF;
      if ( *(_DWORD *)a2 == 2 )
      {
        v16 = v8;
        v15 = v3 + 72;
        v17 = 0;
        v18 = 1;
        CBaseInput::PerformPnpNotification(this, (const struct _DevicePnpNotification *)&v15);
      }
      else
      {
        v5 = 0;
      }
    }
    if ( v5 )
    {
      v16 = v8;
      v15 = v3 + 72;
      v18 = *(_DWORD *)a2;
      v17 = v10;
      CBaseInput::PerformPnpNotification(this, (const struct _DevicePnpNotification *)&v15);
    }
  }
}
