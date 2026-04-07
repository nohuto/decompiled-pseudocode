/*
 * XREFs of ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x1800ABC70
 * Callers:
 *     ?AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x1800AB418 (-AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$CreateProxy@VCAnimationProxy@@@CCompositor@@IEAAJPEAPEAVCAnimationProxy@@@Z @ 0x1800ACE88 (--$CreateProxy@VCAnimationProxy@@@CCompositor@@IEAAJPEAPEAVCAnimationProxy@@@Z.c)
 */

__int64 __fastcall CAnimationResource::_EnsureResources(CAnimationResource *this)
{
  int v1; // ebx
  CBaseObject **v2; // rdi
  unsigned int v4; // eax
  __int64 v5; // rdx

  v1 = 0;
  v2 = (CBaseObject **)((char *)this + 8);
  if ( *((_QWORD *)this + 1) )
    return (unsigned int)v1;
  v1 = CCompositor::CreateProxy<CAnimationProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6), v2);
  if ( v1 < 0 )
  {
    v4 = 304;
    goto LABEL_12;
  }
  if ( *((_BYTE *)this + 65) )
  {
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)*v2 + 2) + 16LL) + 672LL))(
           *(_QWORD *)(*((_QWORD *)*v2 + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)*v2 + 2) + 24LL),
           *((_QWORD *)this + 7),
           0LL);
    if ( v1 < 0 )
    {
      v4 = 308;
      goto LABEL_12;
    }
LABEL_10:
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)*v2 + 2) + 16LL) + 680LL))(
           *(_QWORD *)(*((_QWORD *)*v2 + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)*v2 + 2) + 24LL),
           *((_QWORD *)this + 3),
           *((unsigned int *)this + 12));
    if ( v1 >= 0 )
      return (unsigned int)v1;
    v4 = 316;
    goto LABEL_12;
  }
  v5 = *((_QWORD *)this + 11);
  if ( !v5 )
    goto LABEL_10;
  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)*v2 + 2) + 16LL) + 688LL))(
         *(_QWORD *)(*((_QWORD *)*v2 + 2) + 16LL),
         *(unsigned int *)(*((_QWORD *)*v2 + 2) + 24LL),
         *(unsigned int *)(*(_QWORD *)(v5 + 16) + 24LL));
  if ( v1 >= 0 )
    goto LABEL_10;
  v4 = 312;
LABEL_12:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, v4);
  if ( *v2 )
  {
    CBaseObject::Release(*v2);
    *v2 = 0LL;
  }
  return (unsigned int)v1;
}
