/*
 * XREFs of rimProcessInjectedDeviceBuffers @ 0x1401EDAB4
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x140122404 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400D75DC (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     ?PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401286EC (-PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1401E74C4 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 */

char __fastcall rimProcessInjectedDeviceBuffers(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v5; // rax
  int v6; // r8d
  __int64 *v7; // rbx
  __int64 **v8; // rcx

  v2 = *(_DWORD *)(a2 + 168);
  if ( (v2 & 0x2000) == 0 && (v2 & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1129);
  LODWORD(v5) = *(_DWORD *)(a2 + 48);
  if ( !(_DWORD)v5 && *(_DWORD *)(a2 + 900) || (_DWORD)v5 == 1 && *(_DWORD *)(a2 + 676) )
  {
    if ( !*(_BYTE *)(a1 + 776) )
    {
      if ( (_DWORD)v5 )
      {
        if ( *(_DWORD *)(a2 + 672) )
        {
          v6 = 1151;
          goto LABEL_14;
        }
      }
      else if ( *(_DWORD *)(a2 + 896) )
      {
        v6 = 1147;
LABEL_14:
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v6);
      }
      RIMTransferInjectionDeviceDataFifoToDataBuffer(a1, a2);
      InputTraceLogging::RIM::PauseDevice((const struct RIMDEV *)a2);
      *(_DWORD *)(a2 + 168) |= 0x200u;
      v7 = (__int64 *)(a2 + 88);
      if ( (__int64 *)*v7 != v7 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1165);
      v5 = a1 + 784;
      v8 = *(__int64 ***)(a1 + 792);
      if ( *v8 != (__int64 *)(a1 + 784) )
        __fastfail(3u);
      *v7 = v5;
      v7[1] = (__int64)v8;
      *v8 = v7;
      *(_QWORD *)(a1 + 792) = v7;
      return v5;
    }
    if ( (_DWORD)v5 )
    {
      if ( !*(_DWORD *)(a2 + 672) )
      {
        LOBYTE(v5) = InputTraceLogging::RIM::DropInput(a2, 8u);
        *(_DWORD *)(a2 + 676) = 0;
      }
    }
    else if ( !*(_DWORD *)(a2 + 896) )
    {
      LOBYTE(v5) = InputTraceLogging::RIM::DropInput(a2, 8u);
      *(_DWORD *)(a2 + 900) = 0;
    }
  }
  return v5;
}
