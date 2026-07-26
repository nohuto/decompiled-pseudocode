/*
 * XREFs of ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x140082F40
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x140181730 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1400830E0 (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     WPP_RECORDER_SF_Sd @ 0x1400881B0 (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_Si @ 0x14009EC18 (WPP_RECORDER_SF_Si.c)
 */

void __fastcall ndisQueryDeviceFlags(const wchar_t *a1, unsigned __int64 *a2)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rsi
  wchar_t *Pool2; // rax
  int v8; // edx
  wchar_t *v9; // rdi
  int DeviceFlags; // eax
  int v11; // edx

  *a2 = 0LL;
  v4 = -1LL;
  while ( a1[++v4] != 0 )
    ;
  v6 = 2 * v4 + 12;
  Pool2 = (wchar_t *)ExAllocatePool2(66LL, v6, 538985550);
  v9 = Pool2;
  if ( Pool2 )
  {
    RtlStringCbPrintfW(Pool2, v6, L"%ws:%ws", L"NDIS", a1);
    DeviceFlags = KseQueryDeviceFlags(v9, L"NdisMp", a2);
    if ( DeviceFlags < 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v11,
          13,
          119,
          (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
          (__int64)a1,
          DeviceFlags);
      }
    }
    else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_Si(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        13,
        118,
        (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
        (__int64)a1,
        *a2);
    }
    ExFreePoolWithTag(v9, 0);
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      13,
      117,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids);
  }
}
