/*
 * XREFs of ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXW4_RIM_DEVICE_TYPE@@@Z @ 0x14006C4E8
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1401140EC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ApiSetApplyGatheredDeviceInfoSummaryInformation @ 0x14006C740 (ApiSetApplyGatheredDeviceInfoSummaryInformation.c)
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x140108298 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     ?GatherKeyboardDeviceSummaryInfo@CKeyboardProcessor@@QEAAXPEAUDEVICEINFO@@PEAK@Z @ 0x1401082D0 (-GatherKeyboardDeviceSummaryInfo@CKeyboardProcessor@@QEAAXPEAUDEVICEINFO@@PEAK@Z.c)
 */

__int64 __fastcall CBaseInput::ApplyRimDevBackedDeviceSummaryInformation(__int64 a1, int a2)
{
  struct W32_PUSH_LOCK *v2; // rbx
  unsigned int v3; // esi
  int v6; // ebp
  int v7; // r14d
  int v8; // r15d
  unsigned int v9; // r12d
  __int64 v10; // rdi
  int v11; // eax
  char v12; // r14
  bool v13; // r15
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  __int64 v18; // rax
  int v19; // eax
  __int16 v20; // cx
  CKeyboardProcessor *v21; // rcx
  int v22; // [rsp+90h] [rbp+8h]
  unsigned int v23; // [rsp+A0h] [rbp+18h] BYREF
  int v24; // [rsp+A8h] [rbp+20h]

  v2 = *(struct W32_PUSH_LOCK **)(a1 + 1232);
  v3 = 0;
  v22 = 0;
  v24 = 0;
  v23 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  W32AcquirePushLockExclusiveEx(v2, 0);
  v10 = **(_QWORD **)(a1 + 1240);
  if ( v10 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(v10 + 48);
      if ( v11 == a2 )
      {
        if ( !*(_QWORD *)(v10 + 208) )
        {
          if ( v11 == 2 )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
              || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v12 = 0;
            }
            v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
              LOBYTE(v15) = v13;
              LOBYTE(v16) = v12;
              WPP_RECORDER_AND_TRACE_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v16,
                v15,
                *(_QWORD *)(UserSessionState + 69400),
                4,
                2,
                24,
                (__int64)&WPP_a07c44b8f26832a02b5dbe6dbb74dde0_Traceguids,
                v10);
            }
            v7 = v22;
          }
          goto LABEL_12;
        }
        if ( !v11 )
        {
          ++v6;
          v20 = *(_WORD *)(v10 + 440);
          if ( v9 <= *(unsigned __int16 *)(v10 + 442) )
            v9 = *(unsigned __int16 *)(v10 + 442);
          if ( v20 < 0 )
          {
            v24 = 1;
            v20 &= ~0x8000u;
          }
          if ( v20 == 32 || v20 == 64 || v20 == 256 )
            v22 = ++v7;
          goto LABEL_12;
        }
        v19 = v11 - 1;
        if ( !v19 )
        {
          if ( anonymous_namespace_::GetKeyboardProcessor() )
            CKeyboardProcessor::GatherKeyboardDeviceSummaryInfo(v21, (struct DEVICEINFO *)v10, &v23);
          goto LABEL_12;
        }
        if ( v19 == 1 && (*(_DWORD *)(v10 + 184) & 0x80u) != 0 )
          goto LABEL_20;
      }
      else
      {
        if ( a2 != 2 )
        {
          if ( a2 || v11 != 2 )
            goto LABEL_12;
LABEL_20:
          v18 = *(_QWORD *)(v10 + 456);
          if ( !v18 || (unsigned int)(*(_DWORD *)(v18 + 24) - 1) > 6 )
            goto LABEL_12;
LABEL_17:
          ++v6;
          goto LABEL_12;
        }
        if ( !v11 )
          goto LABEL_17;
      }
LABEL_12:
      v10 = *(_QWORD *)(v10 + 56);
      if ( !v10 )
      {
        v3 = v23;
        v8 = v24;
        break;
      }
    }
  }
  W32ReleasePushLockExclusiveEx(v2, 0LL);
  return ApiSetApplyGatheredDeviceInfoSummaryInformation(a2, v6, v9, v7, v8, v3);
}
