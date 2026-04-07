/*
 * XREFs of ?EndTransition@CAccent@@QEAAJXZ @ 0x18000ADF0
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x18000AD88 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x1800A1FA4 (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
 * Callees:
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x180011F54 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?_UpdateAccentBackground@CAccent@@IEAAXK@Z @ 0x1800198D0 (-_UpdateAccentBackground@CAccent@@IEAAXK@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAccent::EndTransition(CAccent *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  struct CVisual *v4; // rdx
  CBaseObject *v5; // rcx
  __int64 v6; // rax
  CBaseObject *v7; // rcx
  unsigned int v8; // edx
  int updated; // eax
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_BYTE *)this + 320) )
  {
    v11 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v3 = *((_QWORD *)this + 46);
    if ( v3 )
    {
      CBaseObject::Release((CBaseObject *)(v3 + 8));
      *((_QWORD *)this + 46) = 0LL;
    }
    v4 = (struct CVisual *)*((_QWORD *)this + 41);
    if ( v4 )
      VisualCollection::Remove((CAccent *)((char *)this + 32), v4);
    v5 = (CBaseObject *)*((_QWORD *)this + 41);
    if ( v5 )
      CBaseObject::Release(v5);
    v6 = *((_QWORD *)this + 42);
    *((_QWORD *)this + 41) = v6;
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v7 = (CBaseObject *)*((_QWORD *)this + 42);
    if ( v7 )
    {
      CBaseObject::Release(v7);
      *((_QWORD *)this + 42) = 0LL;
    }
    v8 = *((_DWORD *)this + 78);
    *((_DWORD *)this + 91) = v8;
    if ( (*((_BYTE *)this + 308) & 1) != 0 )
      CAccent::_UpdateAccentBackground(this, v8);
    *((_OWORD *)this + 18) = *((_OWORD *)this + 19);
    *((_DWORD *)this + 75) = 0;
    *((_BYTE *)this + 320) = 0;
    *((_DWORD *)this + 76) = 6;
    updated = CAccent::_UpdateBackgroundGeometry(this);
    v2 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x26Au, 0LL);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  }
  return v2;
}
