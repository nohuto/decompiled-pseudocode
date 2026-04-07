/*
 * XREFs of ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x1800C4658
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180036300 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x1800C42AC (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ??0CImmersiveWindowIconic@@IEAA@XZ @ 0x1800C4554 (--0CImmersiveWindowIconic@@IEAA@XZ.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800C4770 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 */

__int64 __fastcall CImmersiveWindowIconic::Create(
        HWND *a1,
        int a2,
        enum DEVICE_SCALE_FACTOR a3,
        bool a4,
        struct CImmersiveWindowIconic **a5)
{
  CImmersiveWindowIconic *v9; // rax
  CImmersiveWindowIconic *v10; // rax
  struct CImmersiveWindowIconic *v11; // rdi
  int v12; // eax
  unsigned int v13; // ebx
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // rax

  v9 = (CImmersiveWindowIconic *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 16LL))(
                                   WPF::g_pProcessHeap,
                                   336LL);
  if ( v9 && (v10 = CImmersiveWindowIconic::CImmersiveWindowIconic(v9), (v11 = v10) != 0LL) )
  {
    v12 = CImmersiveWindowIconic::Initialize(v10, (struct CWindowData *)a1, a2, a3, a4);
    v13 = v12;
    if ( v12 >= 0 )
    {
      *a5 = v11;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x24u);
      IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(
                              *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 30),
                              a1[5]);
      if ( IconicResourceNoRef )
        --*((_DWORD *)IconicResourceNoRef + 11);
      CBaseObject::Release(v11);
    }
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x22u);
  }
  return v13;
}
