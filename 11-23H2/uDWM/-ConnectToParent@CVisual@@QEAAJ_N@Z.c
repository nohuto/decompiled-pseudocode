/*
 * XREFs of ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x18004DC1C
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180042EC0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18004C860 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?InsertChild@CVisualProxy@@QEAAJPEAV1@0_N@Z @ 0x18001E974 (-InsertChild@CVisualProxy@@QEAAJPEAV1@0_N@Z.c)
 *     ?RemoveChild@CVisualProxy@@QEAAJPEAV1@@Z @ 0x18004DF04 (-RemoveChild@CVisualProxy@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ConnectToParent(CVisual *this, char a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  char v6; // r8
  __int64 v7; // rax
  CVisualProxy *v8; // rax
  int inserted; // eax
  unsigned int v10; // edi
  CVisualProxy *v11; // rax
  int v12; // eax

  v2 = 0;
  if ( ((*((_BYTE *)this + 92) & 4) != 0) != a2 )
  {
    v5 = *((_QWORD *)this + 3);
    v6 = (4 * a2) | *((_BYTE *)this + 92) & 0xFB;
    *((_BYTE *)this + 92) = v6;
    v7 = **(_QWORD **)(v5 + 40);
    if ( (v6 & 4) != 0 )
    {
      v8 = (CVisualProxy *)(*(__int64 (**)(void))(v7 + 72))();
      inserted = CVisualProxy::InsertChild(v8, *((struct CVisualProxy **)this + 2), 0LL, 1);
      v10 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x181u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x3EBu, 0LL);
      }
    }
    else
    {
      v11 = (CVisualProxy *)(*(__int64 (**)(void))(v7 + 72))();
      v12 = CVisualProxy::RemoveChild(v11, *((struct CVisualProxy **)this + 2));
      v10 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x19Cu, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x3EFu, 0LL);
      }
    }
    return v10;
  }
  return v2;
}
