/*
 * XREFs of ?GetSampledConditionAnimation@CConditionalExpression@@QEBAXPEAPEAVCBaseExpression@@@Z @ 0x180298E4C
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801EBA88 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801BF7A0 (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

void __fastcall CConditionalExpression::GetSampledConditionAnimation(
        CConditionalExpression *this,
        struct CBaseExpression **a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rdx
  struct CBaseExpression *v5; // rax
  struct CBaseExpression *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = *((int *)this + 91);
  if ( (int)v3 >= 0 )
  {
    v4 = (_QWORD *)(16 * v3 + *((_QWORD *)this + 41) + 8LL);
LABEL_4:
    Microsoft::WRL::ComPtr<CBaseExpression>::operator=((__int64 *)&v6, v4);
    goto LABEL_5;
  }
  v4 = (_QWORD *)((char *)this + 352);
  if ( *((_QWORD *)this + 44) )
    goto LABEL_4;
LABEL_5:
  v5 = v6;
  v6 = 0LL;
  *a2 = v5;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v6);
}
