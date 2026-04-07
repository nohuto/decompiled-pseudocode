/*
 * XREFs of ??$CreateProxy@VCDoubleResourceProxy@@@CCompositor@@IEAAJPEAPEAVCDoubleResourceProxy@@@Z @ 0x18002037C
 * Callers:
 *     ?_EnsureResources@CLivePreview@@AEAAJXZ @ 0x180027A44 (-_EnsureResources@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003994C (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositor::CreateProxy<CDoubleResourceProxy>(__int64 a1, CBaseObject **a2)
{
  __int64 v4; // rax
  CBaseObject *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         24LL);
  v5 = (CBaseObject *)v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)v4 = &CTransform3dGroupProxy::`vftable';
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v6 = CResource::Create(10LL, *(_QWORD *)(a1 + 24), v4 + 16);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x10u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x79u, 0LL);
    }
    else
    {
      *a2 = v5;
      v7 = 0;
    }
  }
  else
  {
    v5 = 0LL;
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x77u, 0LL);
  }
  if ( v5 )
    CBaseObject::Release(v5);
  return v7;
}
