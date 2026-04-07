/*
 * XREFs of ?StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BE410
 * Callers:
 *     <none>
 * Callees:
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180046D50 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B7168 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B7DC0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1800B93D0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyToDuplicateAnimatedVisual::StartImpl(
        CDisplaySecondaryOnlyToDuplicateAnimatedVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  LONG v4; // r10d
  __int64 v5; // r9
  LONG v6; // edx
  struct CAnimatedTransitionVisual **v7; // rdi
  struct CAnimatedTransitionVisual *v8; // rdx
  int v9; // eax
  unsigned int v10; // esi
  int updated; // ebx
  __int64 v13; // rdx
  LONG v14; // [rsp+40h] [rbp-30h] BYREF
  LONG v15; // [rsp+44h] [rbp-2Ch] BYREF
  int v16; // [rsp+48h] [rbp-28h] BYREF
  int v17; // [rsp+4Ch] [rbp-24h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT v19; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v18 = 0LL;
  v19 = 0LL;
  GetDesktopID(1LL, &v18);
  v3 = *((unsigned int *)CDesktopManager::s_pDesktopManagerInstance + 97);
  v19.left = v3;
  v4 = v3 + *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 99);
  v19.right = v4;
  v5 = *((unsigned int *)CDesktopManager::s_pDesktopManagerInstance + 98);
  v19.top = v5;
  v6 = v5 + *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 100);
  v19.bottom = v6;
  if ( (unsigned int)dword_180147058 > 5 && (byte_180147068 & 1) != 0 && (qword_180147070 & 1) == qword_180147070 )
  {
    v14 = v6;
    v15 = v4;
    v16 = v5;
    v17 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v2,
      byte_180126452,
      v3,
      v5,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14);
  }
  v7 = (struct CAnimatedTransitionVisual **)((char *)this + 440);
  v8 = (struct CAnimatedTransitionVisual *)*((_QWORD *)this + 55);
  if ( !v8 )
  {
    *v7 = 0LL;
    v9 = CDisplayAnimatedVisual::CaptureAndAddVisual(
           this,
           v18,
           &v19,
           (const struct tagRECT *)((char *)this + 296),
           (struct CAnimatedTransitionVisual **)this + 55);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40,
        (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoduplicateanimatedvisual.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
    v8 = *v7;
  }
  updated = CDisplayAnimatedVisual::ScheduleAnimation(
              (CDisplaySecondaryOnlyToDuplicateAnimatedVisual *)((char *)this + 456),
              v8,
              (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
              *((unsigned int *)this + 88),
              *((_DWORD *)this + 90),
              (unsigned int *)this + 114);
  if ( updated < 0 )
  {
    v13 = 73LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoduplicateanimatedvisual.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  updated = CWindowList::ForceUpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54));
  if ( updated < 0 )
  {
    v13 = 80LL;
    goto LABEL_11;
  }
  return 0LL;
}
