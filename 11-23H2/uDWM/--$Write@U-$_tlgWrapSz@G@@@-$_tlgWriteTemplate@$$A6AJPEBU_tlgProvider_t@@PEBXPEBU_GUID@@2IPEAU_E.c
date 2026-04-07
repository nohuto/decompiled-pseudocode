/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800BB530
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180045E04 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x18005AFB8 (-IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800BB978 (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180011060 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        wchar_t **a5)
{
  wchar_t *v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  _BYTE v10[32]; // [rsp+30h] [rbp-48h] BYREF
  wchar_t *v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+5Ch] [rbp-1Ch]

  v6 = *a5;
  if ( *a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v6[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v6 = word_18011F0D4;
    v8 = 2;
  }
  v11 = v6;
  v12 = v8;
  v13 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_180147058, a2, 0LL, 0LL, 3, (__int64)v10);
}
