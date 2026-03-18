/*
 * XREFs of ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801BAE20
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801BAEE0 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?IsPastDelay@CNaturalAnimation@@AEAA_NXZ @ 0x1801BB1E8 (-IsPastDelay@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801BB26C (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 *     ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x1801BB4F4 (-PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 */

__int64 __fastcall CNaturalAnimation::CalculateValueWorker(
        CNaturalAnimation *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        bool *a4)
{
  unsigned int v8; // edi
  __int64 result; // rax
  int v10; // eax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]

  *a4 = 1;
  v8 = 0;
  CNaturalAnimation::SetupAnimationIfNecessary(this);
  if ( CNaturalAnimation::IsPastDelay(this) )
  {
    CNaturalAnimation::CalculateValue(this, a2, a3, a4);
  }
  else if ( *((_DWORD *)this + 99) == 1 )
  {
    v10 = *((_DWORD *)this + 82);
    v11 = *((_QWORD *)this + 40);
    v12 = v10;
    CNaturalAnimation::PushValueToStack(this, &v11, a2);
  }
  else
  {
    v8 = 1;
  }
  result = v8;
  *((_BYTE *)this + 572) ^= (*((_BYTE *)this + 572) ^ (*a4 << 6)) & 0x40;
  return result;
}
