/*
 * XREFs of ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18000728C
 * Callers:
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x180007130 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x1800076C4 (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x1800076E0 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800077FC (--0CWindowData@@QEAA@XZ.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x180020E90 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x180021154 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z @ 0x180030460 (-CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z.c)
 *     ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x18003D380 (-IsSimpleClientArea@CWindowData@@QEAA_NXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowSnapshot::Initialize(CWindowSnapshot *this, struct CTopLevelWindow *a2)
{
  struct CWindowData *WindowData; // rax
  struct CWindowData *v5; // rdi
  char v6; // bp
  int v7; // eax
  unsigned int v8; // ebx
  CWindowData *v9; // rax
  CWindowData *v10; // rcx
  __int64 v11; // rax
  CMILRefCountBase *v12; // rcx
  CMILRefCountBase **v13; // r14
  int v15; // r9d
  unsigned int v16; // [rsp+20h] [rbp-28h]

  WindowData = CTopLevelWindow::GetWindowData(a2);
  v5 = WindowData;
  v6 = *((_BYTE *)WindowData + 736);
  if ( (v6 & 4) == 0 )
  {
    *((_BYTE *)WindowData + 736) = v6 & 0xFD;
    CWindowData::OnWindowStyleUpdated(WindowData);
  }
  CTopLevelWindow::NotifyMouseLeave(*((CTopLevelWindow **)v5 + 55));
  v7 = CContainerVisual::RenderRecursive(a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v16 = 100;
LABEL_19:
    v15 = v7;
    goto LABEL_16;
  }
  v9 = (CWindowData *)DefaultHeap::AllocClear(0x3A0uLL);
  if ( v9 )
    v10 = CWindowData::CWindowData(v9);
  else
    v10 = 0LL;
  *((_QWORD *)this + 4) = v10;
  if ( !v10 )
  {
    v8 = -2147024882;
    v16 = 105;
    v15 = -2147024882;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, v16, 0LL);
    goto LABEL_14;
  }
  *((_QWORD *)v10 + 5) = *((_QWORD *)v5 + 5);
  *(_QWORD *)(*((_QWORD *)this + 4) + 32LL) = *((_QWORD *)v5 + 4);
  *(_OWORD *)(*((_QWORD *)this + 4) + 48LL) = *((_OWORD *)v5 + 3);
  *(_OWORD *)(*((_QWORD *)this + 4) + 64LL) = *((_OWORD *)v5 + 4);
  *(_OWORD *)(*((_QWORD *)this + 4) + 96LL) = *((_OWORD *)v5 + 6);
  *(_OWORD *)(*((_QWORD *)this + 4) + 220LL) = *(_OWORD *)((char *)v5 + 220);
  *(_OWORD *)(*((_QWORD *)this + 4) + 268LL) = *(_OWORD *)((char *)v5 + 268);
  *(_OWORD *)(*((_QWORD *)this + 4) + 284LL) = *(_OWORD *)((char *)v5 + 284);
  *(_QWORD *)(*((_QWORD *)this + 4) + 136LL) = *((_QWORD *)v5 + 17);
  *(_DWORD *)(*((_QWORD *)this + 4) + 744LL) = *((_DWORD *)v5 + 186);
  *(_BYTE *)(*((_QWORD *)this + 4) + 740LL) ^= (*((_BYTE *)v5 + 740) ^ *(_BYTE *)(*((_QWORD *)this + 4) + 740LL)) & 8;
  *(_BYTE *)(*((_QWORD *)this + 4) + 408LL) = *((_BYTE *)v5 + 408);
  *(_DWORD *)(*((_QWORD *)this + 4) + 128LL) = *((_DWORD *)v5 + 32);
  *(_OWORD *)(*((_QWORD *)this + 4) + 748LL) = *(_OWORD *)((char *)v5 + 748);
  *(_OWORD *)(*((_QWORD *)this + 4) + 764LL) = *(_OWORD *)((char *)v5 + 764);
  *(_OWORD *)(*((_QWORD *)this + 4) + 780LL) = *(_OWORD *)((char *)v5 + 780);
  *(_OWORD *)(*((_QWORD *)this + 4) + 796LL) = *(_OWORD *)((char *)v5 + 796);
  *(_DWORD *)(*((_QWORD *)this + 4) + 116LL) = *((_DWORD *)v5 + 29);
  *(_DWORD *)(*((_QWORD *)this + 4) + 120LL) = *((_DWORD *)v5 + 30);
  *(_DWORD *)(*((_QWORD *)this + 4) + 124LL) = *((_DWORD *)v5 + 31);
  *(_DWORD *)(*((_QWORD *)this + 4) + 112LL) = *((_DWORD *)v5 + 28);
  *(_OWORD *)(*((_QWORD *)this + 4) + 304LL) = *((_OWORD *)v5 + 19);
  *(_QWORD *)(*((_QWORD *)this + 4) + 320LL) = *((_QWORD *)v5 + 40);
  *(_DWORD *)(*((_QWORD *)this + 4) + 328LL) = *((_DWORD *)v5 + 82);
  v11 = *((_QWORD *)this + 4);
  *(_OWORD *)(v11 + 336) = *((_OWORD *)v5 + 21);
  *(_OWORD *)(v11 + 352) = *((_OWORD *)v5 + 22);
  *(_OWORD *)(v11 + 368) = *((_OWORD *)v5 + 23);
  *(_OWORD *)(v11 + 384) = *((_OWORD *)v5 + 24);
  *(_QWORD *)(v11 + 400) = *((_QWORD *)v5 + 50);
  *(_BYTE *)(*((_QWORD *)this + 4) + 741LL) ^= (*((_BYTE *)v5 + 741) ^ *(_BYTE *)(*((_QWORD *)this + 4) + 741LL)) & 1;
  *(_BYTE *)(*((_QWORD *)this + 4) + 737LL) ^= (*((_BYTE *)v5 + 737) ^ *(_BYTE *)(*((_QWORD *)this + 4) + 737LL)) & 0x20;
  *(_OWORD *)(*((_QWORD *)this + 4) + 80LL) = *((_OWORD *)v5 + 5);
  *(_DWORD *)(*((_QWORD *)this + 4) + 184LL) = *((_DWORD *)v5 + 46);
  *(_DWORD *)(*((_QWORD *)this + 4) + 188LL) = *((_DWORD *)v5 + 47);
  *(_DWORD *)(*((_QWORD *)this + 4) + 192LL) = *((_DWORD *)v5 + 48);
  *(_DWORD *)(*((_QWORD *)this + 4) + 196LL) = *((_DWORD *)v5 + 49);
  *(_QWORD *)(*((_QWORD *)this + 4) + 920LL) = *((_QWORD *)v5 + 115);
  *(_BYTE *)(*((_QWORD *)this + 4) + 737LL) = *(_BYTE *)(*((_QWORD *)this + 4) + 737LL) & 0xEF | (16
                                                                                                * !CWindowData::IsSimpleClientArea(v5));
  *(_QWORD *)(*((_QWORD *)this + 4) + 424LL) = *((_QWORD *)v5 + 53);
  v12 = (CMILRefCountBase *)*((_QWORD *)v5 + 53);
  if ( v12 )
    CMILRefCountBase::AddRef(v12);
  if ( (*((_BYTE *)v5 + 740) & 8) == 0 )
  {
    v13 = (CMILRefCountBase **)((char *)this + 24);
    v7 = CTopLevelWindow::CloneForNewWindowData(a2, *((_QWORD *)this + 4), 4LL, (char *)this + 24);
    v8 = v7;
    if ( v7 < 0 )
    {
      v16 = 150;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 4) + 440LL) = *v13;
      if ( *v13 )
        CMILRefCountBase::AddRef(*v13);
      v7 = CContainerVisual::RenderRecursive(*v13);
      v8 = v7;
      if ( v7 >= 0 )
        goto LABEL_14;
      v16 = 155;
    }
    goto LABEL_19;
  }
LABEL_14:
  *((_BYTE *)v5 + 736) ^= (v6 ^ *((_BYTE *)v5 + 736)) & 2;
  return v8;
}
