/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18005862C
 * Callers:
 *     ?TrackCrossDisplaysMoveDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@HH@Z @ 0x18001AE00 (-TrackCrossDisplaysMoveDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@HH@Z.c)
 *     ?IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x180056818 (-IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800C046C (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18005A1CC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        void **a5)
{
  _WORD *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  _BYTE v9[32]; // [rsp+30h] [rbp-48h] BYREF
  _WORD *v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]

  v5 = *a5;
  if ( *a5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( v5[v6] );
    v7 = 2 * v6 + 2;
  }
  else
  {
    v5 = &unk_180107C78;
    v7 = 2;
  }
  v11 = v7;
  v10 = v5;
  v12 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer((unsigned int)&dword_180125130, a2, 0, 0, 3, (__int64)v9);
}
