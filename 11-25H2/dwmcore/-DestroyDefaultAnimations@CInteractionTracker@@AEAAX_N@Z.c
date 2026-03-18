/*
 * XREFs of ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x180223624
 * Callers:
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18003DCF4 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1800EF928 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x1800F1C04 (-ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z.c)
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x1802A6E94 (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800387D0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CExpressionValueStack@@QEAA@XZ @ 0x1802B4074 (--1CExpressionValueStack@@QEAA@XZ.c)
 */

void __fastcall CInteractionTracker::DestroyDefaultAnimations(CInteractionTracker *this, char a2)
{
  struct CResource **v2; // rdi
  CBaseExpression *v4; // rcx
  CBaseExpression *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  int v12; // [rsp+28h] [rbp-28h]
  __int128 v13; // [rsp+30h] [rbp-20h]
  int v14; // [rsp+40h] [rbp-10h]
  int v15; // [rsp+44h] [rbp-Ch]
  int v16; // [rsp+48h] [rbp-8h]
  bool v17; // [rsp+60h] [rbp+10h] BYREF

  v2 = (struct CResource **)((char *)this + 464);
  v4 = (CBaseExpression *)*((_QWORD *)this + 58);
  if ( v4 )
  {
    if ( a2 )
    {
      v7 = *((_QWORD *)this + 3);
      v8 = *(_QWORD *)(v7 + 824);
      v12 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v11 = v8;
      v13 = 0LL;
      v17 = 0;
      CBaseExpression::CalculateValue(v4, (struct CExpressionValueStack *)&v11, *(_QWORD *)(v7 + 888), &v17);
      CExpressionValueStack::~CExpressionValueStack((CExpressionValueStack *)&v11);
    }
    CResource::UnRegisterNotifierInternal(this, *v2);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v2);
  }
  v6 = (CBaseExpression *)*((_QWORD *)this + 59);
  if ( v6 )
  {
    if ( a2 )
    {
      v9 = *((_QWORD *)this + 3);
      v10 = *(_QWORD *)(v9 + 824);
      v12 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v11 = v10;
      v13 = 0LL;
      v17 = 0;
      CBaseExpression::CalculateValue(v6, (struct CExpressionValueStack *)&v11, *(_QWORD *)(v9 + 888), &v17);
      CExpressionValueStack::~CExpressionValueStack((CExpressionValueStack *)&v11);
    }
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 59));
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 59);
  }
}
