/*
 * XREFs of ?ScheduleEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ @ 0x1800C2478
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x180085720 (-OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x180046064 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180059B74 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x18007A880 (_tlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::ScheduleEntranceAnimation(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this)
{
  struct IAnimationListener *v2; // rsi
  int v3; // edi
  __int64 v4; // rdx
  struct CAnimatedTransitionVisual *v6; // rdx
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct IAnimationListener *)(((unsigned __int64)this + 240) & -(__int64)(this != 0LL));
  v3 = CDisplayAnimatedVisual::ScheduleAnimation(
         this,
         *((struct CAnimatedTransitionVisual **)this + 51),
         v2,
         *((_DWORD *)this + 76),
         *((_DWORD *)this + 77),
         (unsigned int *)this + 108);
  if ( v3 < 0 )
  {
    v4 = 163LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v6 = (struct CAnimatedTransitionVisual *)*((_QWORD *)this + 50);
  if ( v6 )
  {
    v3 = CDisplayAnimatedVisual::ScheduleAnimation(
           (CDisplayAnimatedVisual *)*((unsigned int *)this + 77),
           v6,
           v2,
           *((_DWORD *)this + 76),
           *((_DWORD *)this + 77),
           (unsigned int *)this + 107);
    if ( v3 < 0 )
    {
      v4 = 172LL;
      goto LABEL_3;
    }
  }
  if ( (unsigned int)dword_180125130 > 5 && tlgKeywordOn((__int64)&dword_180125130, 2LL) )
  {
    v13 = *((_QWORD *)this + 50);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      v7,
      (int)&unk_180111707,
      v8,
      v9,
      (__int64)&v13);
  }
  v10 = CContainerVisual::RemoveChild(
          this,
          (struct CVisual *)((*((_QWORD *)this + 49) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this
                                                                                             + 49) >> 64)));
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB4,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
