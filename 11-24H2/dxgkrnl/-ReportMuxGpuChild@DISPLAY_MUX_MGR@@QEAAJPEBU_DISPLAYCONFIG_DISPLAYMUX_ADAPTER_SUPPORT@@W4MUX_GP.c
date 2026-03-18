/*
 * XREFs of ?ReportMuxGpuChild@DISPLAY_MUX_MGR@@QEAAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@W4MUX_GPU_TYPE@@@Z @ 0x140087724
 * Callers:
 *     DpiMdmProcessStartAdapter @ 0x1400893FC (DpiMdmProcessStartAdapter.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?DoesMuxAcpiNameMatch@DISPLAY_MUX_PAIRING@@QEBA_NPEBU_UNICODE_STRING@@@Z @ 0x140084320 (-DoesMuxAcpiNameMatch@DISPLAY_MUX_PAIRING@@QEBA_NPEBU_UNICODE_STRING@@@Z.c)
 *     ?ReportMuxGpuChild@DISPLAY_MUX_PAIRING@@QEAAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@W4MUX_GPU_TYPE@@@Z @ 0x140087884 (-ReportMuxGpuChild@DISPLAY_MUX_PAIRING@@QEAAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@W4MU.c)
 *     ?SetMdmStatus@DISPLAY_MUX_MGR@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_RUNTIME_STATUS@@J@Z @ 0x140087D78 (-SetMdmStatus@DISPLAY_MUX_MGR@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_RUNTIME_STATUS@@J@Z.c)
 */

__int64 __fastcall DISPLAY_MUX_MGR::ReportMuxGpuChild(__int64 a1, __int64 a2, unsigned int a3)
{
  NTSTATUS v6; // ebx
  __int64 v7; // rdx
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-30h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v11[16]; // [rsp+40h] [rbp-10h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGFASTMUTEX *const)(a1 + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    if ( !*(_QWORD *)(a1 + 72) )
    {
      v6 = -1073741823;
      DISPLAY_MUX_MGR::SetMdmStatus(a1, 3LL);
      goto LABEL_12;
    }
    DestinationString = 0LL;
    UnicodeString = 0LL;
    RtlInitAnsiString(&DestinationString, (PCSZ)(a2 + 96));
    v6 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
    if ( v6 >= 0 )
    {
      if ( DISPLAY_MUX_PAIRING::DoesMuxAcpiNameMatch(*(DISPLAY_MUX_PAIRING **)(a1 + 72), &UnicodeString) )
      {
        v6 = DISPLAY_MUX_PAIRING::ReportMuxGpuChild(*(_QWORD *)(a1 + 72), a2, a3);
        goto LABEL_11;
      }
      v6 = -1073741823;
      v7 = 6LL;
    }
    else
    {
      WdLogSingleEntry0(2LL);
      v7 = 8LL;
      WdLogGlobalForLineNumber = 2828;
    }
    DISPLAY_MUX_MGR::SetMdmStatus(a1, v7);
LABEL_11:
    RtlFreeUnicodeString(&UnicodeString);
    goto LABEL_12;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 2808;
  v6 = -1073741762;
LABEL_12:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
  return (unsigned int)v6;
}
