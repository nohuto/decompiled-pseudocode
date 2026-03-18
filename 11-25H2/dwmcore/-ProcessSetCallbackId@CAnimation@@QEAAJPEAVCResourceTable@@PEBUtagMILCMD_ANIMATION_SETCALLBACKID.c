/*
 * XREFs of ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x18029E8E0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18014BED0 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x180198AD0 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?ShouldNotify@CAnimation@@AEBA_NXZ @ 0x1801CE8C0 (-ShouldNotify@CAnimation@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimation::ProcessSetCallbackId(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_SETCALLBACKID *a3)
{
  _DWORD *v3; // rbx
  _DWORD *v5; // rdi
  char *v7; // rsi
  CComposition *v8; // rcx
  int AttachedChannel; // eax
  CDrawListCache *v10; // rbx
  unsigned int v11; // esi
  CDrawListCache *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  v3 = (_DWORD *)((char *)this + 284);
  v5 = (_DWORD *)((char *)this + 288);
  v7 = (char *)this + 24;
  if ( CAnimation::ShouldNotify(this) )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v7 + 6416LL) + 88LL))(
      *(_QWORD *)(*(_QWORD *)v7 + 6416LL),
      (unsigned int)*v5,
      (unsigned int)*v3);
  v8 = *(CComposition **)v7;
  *v3 = *((_DWORD *)a3 + 2);
  AttachedChannel = CComposition::GetAttachedChannel(v8, *((_DWORD *)a2 + 12), &v13);
  v10 = v13;
  v11 = AttachedChannel;
  if ( AttachedChannel < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, AttachedChannel, 0x1F9u, 0LL);
  else
    *v5 = *((_DWORD *)v13 + 28);
  if ( v10 )
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v10);
  return v11;
}
