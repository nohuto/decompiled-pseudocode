/*
 * XREFs of ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x180007130
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x180005B60 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180006F48 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     _lambda_2b90c2a36d03e4dd9d87c571f9fa67ab_::operator() @ 0x18000720C (_lambda_2b90c2a36d03e4dd9d87c571f9fa67ab_--operator().c)
 *     ??0CWindowSnapshot@@IEAA@XZ @ 0x180007220 (--0CWindowSnapshot@@IEAA@XZ.c)
 *     ?OnSnapshotStart@CTopLevelWindow@@QEAAXXZ @ 0x18000727C (-OnSnapshotStart@CTopLevelWindow@@QEAAXXZ.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18000728C (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowSnapshot::Create(struct CTopLevelWindow *a1, struct CWindowSnapshot **a2)
{
  CWindowSnapshot *v3; // rax
  unsigned int v4; // ebx
  CWindowSnapshot *v6; // rax
  CBaseObject *v7; // rdi
  int v8; // eax
  struct CTopLevelWindow **v9; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]
  struct CTopLevelWindow *v11; // [rsp+50h] [rbp+8h] BYREF
  CWindowSnapshot *v12; // [rsp+60h] [rbp+18h]

  v11 = a1;
  v9 = &v11;
  v10 = 1;
  CTopLevelWindow::OnSnapshotStart(a1);
  v3 = (CWindowSnapshot *)DefaultHeap::AllocClear(0x68uLL);
  v12 = v3;
  if ( v3 && (v6 = CWindowSnapshot::CWindowSnapshot(v3), (v7 = v6) != 0LL) )
  {
    v8 = CWindowSnapshot::Initialize(v6, v11);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x3Eu, 0LL);
      CBaseObject::Release(v7);
    }
    else
    {
      *a2 = v7;
    }
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x3Cu, 0LL);
  }
  v10 = 0;
  lambda_2b90c2a36d03e4dd9d87c571f9fa67ab_::operator()(&v9);
  return v4;
}
