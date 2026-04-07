/*
 * XREFs of ??1CTimelineBase@@UEAA@XZ @ 0x1800E4DD4
 * Callers:
 *     ??_ECLivePreviewTimeline@@UEAAPEAXI@Z @ 0x1800C9A30 (--_ECLivePreviewTimeline@@UEAAPEAXI@Z.c)
 *     ??_ECTimelineBase@@UEAAPEAXI@Z @ 0x1800E4E30 (--_ECTimelineBase@@UEAAPEAXI@Z.c)
 *     ??_E?$CTimeline@I@@UEAAPEAXI@Z @ 0x1801062A0 (--_E-$CTimeline@I@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CTimelineBase::~CTimelineBase(CTimelineBase *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CTimelineBase::`vftable';
  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 8) = 0LL;
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
