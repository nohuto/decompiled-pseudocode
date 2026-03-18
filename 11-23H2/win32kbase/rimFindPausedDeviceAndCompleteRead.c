/*
 * XREFs of rimFindPausedDeviceAndCompleteRead @ 0x1C0075170
 * Callers:
 *     rimCompleteReads @ 0x1C0074F84 (rimCompleteReads.c)
 * Callees:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0004A38 (rimProcessDeviceBufferAndStartRead.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0005B28 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C00749F8 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimFindPausedDeviceAndCompleteRead(struct RawInputManagerObject *a1)
{
  struct RawInputManagerObject **v1; // rsi
  struct RawInputManagerObject *v3; // rbx
  unsigned int v4; // ebp
  struct RIMDEV *v6; // r14
  __int64 v7; // rax
  struct RawInputManagerObject **v8; // rcx
  char v9; // dl

  v1 = (struct RawInputManagerObject **)((char *)a1 + 784);
  v3 = (struct RawInputManagerObject *)*((_QWORD *)a1 + 98);
  v4 = -1073741823;
  if ( v3 != (struct RawInputManagerObject *)((char *)a1 + 784) )
  {
    while ( 1 )
    {
      if ( *((_BYTE *)v3 - 56) == 3 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 259LL);
      if ( *((_BYTE *)v3 - 56) == 2 && (*((_DWORD *)v3 + 24) & 0x80u) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 260LL);
      if ( *((struct RawInputManagerObject **)v3 + 29) != a1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 261LL);
      v6 = (struct RawInputManagerObject *)((char *)v3 - 104);
      if ( v3 == (struct RawInputManagerObject *)176 )
        v6 = 0LL;
      if ( ((unsigned int)RimDeviceTypeToRimInputType((__int64)v6, *((unsigned __int8 *)v3 - 56)) & *((_DWORD *)a1 + 21)) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 262LL);
      v7 = *(_QWORD *)v3;
      if ( *(struct RawInputManagerObject **)(*(_QWORD *)v3 + 8LL) != v3
        || (v8 = (struct RawInputManagerObject **)*((_QWORD *)v3 + 1), *v8 != v3) )
      {
        __fastfail(3u);
      }
      *v8 = (struct RawInputManagerObject *)v7;
      *(_QWORD *)(v7 + 8) = v8;
      *((_QWORD *)v3 + 1) = v3;
      *(_QWORD *)v3 = v3;
      if ( (*((_DWORD *)v3 + 20) & 0x400) == 0 )
      {
        rimProcessDeviceBufferAndStartRead(a1, v6, 0);
        if ( !*((_BYTE *)a1 + 776) )
          break;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        v9 = 0;
      }
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_qq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v9,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gRimLog,
          3u,
          1u,
          0xCu,
          (__int64)&WPP_978b37271e493f0f4db770890ab25331_Traceguids,
          (char *)v3 - 176,
          a1);
      v3 = *v1;
      if ( *v1 == (struct RawInputManagerObject *)v1 )
        return v4;
    }
    return 0;
  }
  return v4;
}
