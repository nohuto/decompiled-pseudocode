/*
 * XREFs of ?FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14008CA48
 * Callers:
 *     ?FxIFRReplay@@YAX_K@Z @ 0x14008CE0C (-FxIFRReplay@@YAX_K@Z.c)
 * Callees:
 *     FxIsEqualGuid @ 0x140019D5C (FxIsEqualGuid.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 *     ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14008433C (-FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ds @ 0x14008D3C4 (WPP_IFR_SF_ds.c)
 *     WPP_IFR_SF_s @ 0x14008D4F8 (WPP_IFR_SF_s.c)
 *     memmove @ 0x1400ACC80 (memmove.c)
 */

_WDF_IFR_HEADER *__fastcall FxIFRCreateSnapshot(const char *DriverName, _FX_DRIVER_GLOBALS *FxGlobalsForTracing)
{
  char *v3; // rsi
  int v4; // ebx
  KIRQL v6; // al
  unsigned int v7; // r8d
  _LIST_ENTRY *Flink; // rdi
  KIRQL v9; // r15
  signed __int32 Blink; // eax
  signed __int32 v11; // ecx
  signed __int32 v12; // edx
  unsigned int v13; // ecx
  __int64 v14; // rdx
  size_t v15; // rbx
  char *Pool2; // rax
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned __int8 v19; // dl
  unsigned int v20; // r8d
  unsigned __int16 v21; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]

  v3 = 0LL;
  v4 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock);
  Flink = FxLibraryGlobals.FxDriverGlobalsList.Flink;
  v9 = v6;
  while ( 1 )
  {
    if ( Flink == &FxLibraryGlobals.FxDriverGlobalsList )
    {
      WPP_IFR_SF_s(FxGlobalsForTracing, 3u, v7, 0xAu, traceGuid, DriverName);
      WPP_IFR_SF_(FxGlobalsForTracing, 3u, 0x16u, 0xBu, WPP_TracingIfrReplay_cpp_Traceguids);
      goto LABEL_31;
    }
    if ( !_stricmp((const char *)&Flink[29], DriverName) )
      break;
    Flink = Flink->Flink;
  }
  if ( !Flink[6].Blink )
  {
    WPP_IFR_SF_s(FxGlobalsForTracing, 3u, v7, 0xCu, traceGuid, DriverName);
    goto LABEL_31;
  }
  Blink = (signed __int32)Flink[25].Blink;
  while ( Blink > 0 )
  {
    v11 = Blink;
    v12 = Blink + 1;
    Blink = _InterlockedCompareExchange((volatile signed __int32 *)&Flink[25].Blink, Blink + 1, Blink);
    if ( v11 == Blink )
      goto LABEL_12;
  }
  v12 = Blink;
LABEL_12:
  if ( v12 )
  {
    v13 = (unsigned int)Flink[6].Blink[1].Blink;
    v14 = v13 + 72;
    if ( (unsigned int)v14 < v13 )
    {
      v4 = -1073741675;
      goto $DoneReleaseLock;
    }
    if ( v13 - 4024 > 0xF000 )
    {
      v4 = -1073741306;
      goto $DoneReleaseLock;
    }
    v15 = (unsigned int)v14;
    Pool2 = (char *)ExAllocatePool2(64LL, v14, 1733064774LL);
    v3 = Pool2;
    if ( !Pool2 )
    {
      v4 = -1073741670;
$DoneReleaseLock:
      FxIFRStop((_FX_DRIVER_GLOBALS *)Flink);
      goto LABEL_31;
    }
    memmove(Pool2, Flink[6].Blink, v15);
    *((_QWORD *)v3 + 2) = v3 + 72;
    v17 = *((_DWORD *)v3 + 6);
    if ( v17 + 72 < v17 )
    {
      v4 = -1073741675;
    }
    else if ( v17 - 4024 > 0xF000 )
    {
      v4 = -1073741306;
    }
    else
    {
      if ( FxIsEqualGuid((const _GUID *)v3, &WdfTraceGuid) )
      {
        v18 = *((_DWORD *)v3 + 6);
        if ( *((unsigned __int16 *)v3 + 14) <= v18 && *((unsigned __int16 *)v3 + 15) <= v18 )
        {
          v4 = 0;
          goto $DoneReleaseLock;
        }
      }
      v4 = -1073741823;
    }
    ExFreePoolWithTag(v3, 0x674C7846u);
    v3 = 0LL;
    goto $DoneReleaseLock;
  }
LABEL_31:
  KeReleaseSpinLock(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock, v9);
  if ( v4 < 0 )
    WPP_IFR_SF_ds(FxGlobalsForTracing, v19, v20, v21, traceGuid, v4, DriverName);
  return (_WDF_IFR_HEADER *)v3;
}
