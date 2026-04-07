/*
 * XREFs of ?OnGlobalTimeUpdated@CDisplayAnimatedVisual@@UEAAJXZ @ 0x180079A50
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180001B30 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?GetGlobalTime@CDesktopManager@@SANXZ @ 0x180027CA4 (-GetGlobalTime@CDesktopManager@@SANXZ.c)
 *     _tlgKeywordOn @ 0x18007A880 (_tlgKeywordOn.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18009A16C (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A44DC (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDisplayAnimatedVisual::OnGlobalTimeUpdated(CDisplayAnimatedVisual *this)
{
  __int64 v2; // rcx
  double v3; // xmm0_8
  int v4; // eax
  double GlobalTime; // xmm0_8
  __int64 v7; // rcx
  int v8; // ecx
  int v9; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 384) )
  {
    GlobalTime = CDesktopManager::GetGlobalTime();
    *(double *)(v7 + 376) = GlobalTime;
    *(_BYTE *)(v7 + 384) = 1;
  }
  v3 = CDesktopManager::GetGlobalTime();
  if ( v3 - *(double *)(v2 + 376) >= 4.0 )
  {
    if ( (unsigned int)dword_180125130 > 5 && (unsigned __int8)tlgKeywordOn(&dword_180125130, 2LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v8,
        (int)&unk_1801111D2,
        0);
    v9 = CDisplayAnimatedVisual::Stop(this, 0LL);
    if ( v9 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x323,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
        (const char *)(unsigned int)v9,
        v10);
  }
  else if ( *(_BYTE *)(v2 + 386) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 232LL))(v2);
    if ( v4 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x31A,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
        (const char *)(unsigned int)v4,
        v10);
  }
  return 0LL;
}
