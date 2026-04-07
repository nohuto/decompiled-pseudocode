/*
 * XREFs of ?Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x18000360C
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x180004E74 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x180003824 (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x180005B60 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x1800076C4 (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Create(
        struct CTopLevelWindow *this,
        struct CVisual *a2,
        const struct tagRECT *a3,
        struct CTransitionWindowSnapshot **a4)
{
  CTransitionWindowSnapshot *v8; // rax
  CTransitionWindowSnapshot *v9; // rbx
  CTopLevelWindow *v10; // rcx
  struct CWindowData *WindowData; // rax
  int v12; // r8d
  int v13; // eax
  unsigned int v14; // edi
  struct tagRECT rc; // [rsp+38h] [rbp-40h] BYREF

  *a4 = 0LL;
  v8 = (CTransitionWindowSnapshot *)DefaultHeap::AllocClear(0x140uLL);
  if ( v8 && (v9 = CTransitionWindowSnapshot::CTransitionWindowSnapshot(v8)) != 0LL )
  {
    rc = 0LL;
    if ( a3 )
    {
      rc = *a3;
      CTopLevelWindow::GetWindowData(this);
      WindowData = CTopLevelWindow::GetWindowData(v10);
      OffsetRect(&rc, *((_DWORD *)WindowData + 12), v12);
    }
    else
    {
      rc = (struct tagRECT)*((_OWORD *)CTopLevelWindow::GetWindowData(this) + 3);
    }
    v13 = CTransitionWindowSnapshot::Initialize(v9, this, a2, &rc);
    v14 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801053C0, 1u, v13, 0x2Fu, 0LL);
    }
    else
    {
      *a4 = v9;
      CMILRefCountBase::AddRef(v9);
    }
    CBaseObject::Release(v9);
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801053C0, 1u, -2147024882, 0x21u, 0LL);
  }
  return v14;
}
