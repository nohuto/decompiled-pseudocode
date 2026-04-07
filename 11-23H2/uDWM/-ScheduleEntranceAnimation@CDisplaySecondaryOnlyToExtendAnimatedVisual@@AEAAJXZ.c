/*
 * XREFs of ?ScheduleEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ @ 0x1800BEDA0
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BE960 (-OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180011060 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B7DC0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 */

__int64 __fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::ScheduleEntranceAnimation(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this)
{
  struct IAnimationListener *v2; // rsi
  int v3; // edi
  __int64 v4; // rdx
  struct CAnimatedTransitionVisual *v6; // rdx
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v11[32]; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+60h] [rbp-18h]
  int v14; // [rsp+64h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL));
  v3 = CDisplayAnimatedVisual::ScheduleAnimation(
         this,
         *((struct CAnimatedTransitionVisual **)this + 57),
         v2,
         *((unsigned int *)this + 88),
         *((_DWORD *)this + 89),
         (unsigned int *)this + 120);
  if ( v3 < 0 )
  {
    v4 = 165LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v6 = (struct CAnimatedTransitionVisual *)*((_QWORD *)this + 56);
  if ( v6 )
  {
    v3 = CDisplayAnimatedVisual::ScheduleAnimation(
           (CDisplayAnimatedVisual *)*((unsigned int *)this + 89),
           v6,
           v2,
           *((unsigned int *)this + 88),
           *((_DWORD *)this + 89),
           (unsigned int *)this + 119);
    if ( v3 < 0 )
    {
      v4 = 174LL;
      goto LABEL_3;
    }
  }
  if ( (unsigned int)dword_180147058 > 5 && (byte_180147068 & 1) != 0 && (qword_180147070 & 1) == qword_180147070 )
  {
    v7 = *((_QWORD *)this + 56);
    v14 = 0;
    v10 = v7;
    v13 = 8;
    v12 = &v10;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_180147058, byte_1801264B1, 0LL, 0LL, 3, (__int64)v11);
  }
  v8 = VisualCollection::Remove(
         (CDisplaySecondaryOnlyToExtendAnimatedVisual *)((char *)this + 32),
         (struct CVisual *)((*((_QWORD *)this + 55) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this
                                                                                            + 55) >> 64)));
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB6,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displaysecondaryonlytoextendanimatedvisual.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
