/*
 * XREFs of ??1CTimelineBase@@UEAA@XZ @ 0x18006ED8C
 * Callers:
 *     ??_E?$CTimeline@I@@UEAAPEAXI@Z @ 0x18006ECF0 (--_E-$CTimeline@I@@UEAAPEAXI@Z.c)
 *     ??_E?$CTimeline@M@@UEAAPEAXI@Z @ 0x18006ED40 (--_E-$CTimeline@M@@UEAAPEAXI@Z.c)
 *     ??1CLivePreviewTimeline@@UEAA@XZ @ 0x18007C9AC (--1CLivePreviewTimeline@@UEAA@XZ.c)
 *     ??_ECTimelineBase@@UEAAPEAXI@Z @ 0x1800DAA00 (--_ECTimelineBase@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  CBaseObject::~CBaseObject(this);
}
