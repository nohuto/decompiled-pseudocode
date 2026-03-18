/*
 * XREFs of ?CheckMdmDeviceAndMuxOwnership@DISPLAY_MUX_MGR@@QEBAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@PEAE1@Z @ 0x140083760
 * Callers:
 *     DpiFdoIsMdmDeviceAndOwnsMux @ 0x140088D9C (DpiFdoIsMdmDeviceAndOwnsMux.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?CheckMdmDeviceAndMuxOwnership@DISPLAY_MUX_PAIRING@@QEBAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@PEAE1@Z @ 0x1400838C4 (-CheckMdmDeviceAndMuxOwnership@DISPLAY_MUX_PAIRING@@QEBAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_S.c)
 *     ?DoesMuxAcpiNameMatch@DISPLAY_MUX_PAIRING@@QEBA_NPEBU_UNICODE_STRING@@@Z @ 0x140084320 (-DoesMuxAcpiNameMatch@DISPLAY_MUX_PAIRING@@QEBA_NPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DISPLAY_MUX_MGR::CheckMdmDeviceAndMuxOwnership(
        DISPLAY_MUX_PAIRING **this,
        const struct _DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  NTSTATUS v8; // eax
  unsigned int v9; // ebx
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v12[16]; // [rsp+30h] [rbp-20h] BYREF
  _STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (struct DXGFASTMUTEX *const)(this + 2), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  if ( *((_DWORD *)this + 20) == 1 && this[9] )
  {
    DestinationString = 0LL;
    UnicodeString = 0LL;
    RtlInitAnsiString(&DestinationString, (PCSZ)a2 + 96);
    v8 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
    v9 = v8;
    if ( v8 >= 0 )
    {
      if ( DISPLAY_MUX_PAIRING::DoesMuxAcpiNameMatch(this[9], &UnicodeString) )
      {
        v9 = DISPLAY_MUX_PAIRING::CheckMdmDeviceAndMuxOwnership(this[9], a2, a3, a4);
      }
      else
      {
        v9 = -1073741823;
        WdLogSingleEntry1(4LL, -1073741823LL);
        WdLogGlobalForLineNumber = 3450;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v8);
      WdLogGlobalForLineNumber = 3443;
    }
    RtlFreeUnicodeString(&UnicodeString);
  }
  else
  {
    v9 = -1073741823;
    WdLogSingleEntry1(4LL, -1073741823LL);
    WdLogGlobalForLineNumber = 3429;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v12);
  return v9;
}
