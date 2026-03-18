/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x18000C810
 * Callers:
 *     ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800E40F0 (-CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x1801BB4F4 (-PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?AddAndSet@?$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z @ 0x18000D670 (-AddAndSet@-$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, float a2)
{
  int v3; // ecx
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // ebp
  _BYTE v10[64]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+70h] [rbp-28h] BYREF
  int v12; // [rsp+78h] [rbp-20h]

  v3 = *((_DWORD *)this + 2);
  if ( (unsigned int)~v3 < 5 )
  {
    v9 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147418113,
      0x54u,
      0LL);
  }
  else
  {
    if ( *((_DWORD *)this + 10) != v3 )
    {
LABEL_3:
      v4 = *((unsigned int *)this + 2);
      result = 0LL;
      *((_DWORD *)this + 2) = v4 + 1;
      v6 = *((_QWORD *)this + 2) + 80 * v4;
      *(float *)v6 = a2;
      *(_DWORD *)(v6 + 72) = 18;
      return result;
    }
    memset_0(v10, 0, sizeof(v10));
    v11 = 0LL;
    v12 = 0;
    v8 = DynArray<CExpressionValue,1>::AddAndSet((char *)this + 16, v7, v10);
    v9 = v8;
    if ( v8 >= 0 )
    {
      Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v11);
      goto LABEL_3;
    }
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v8,
      0x5Du,
      0LL);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v11);
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    v9,
    0xC0u,
    0LL);
  return v9;
}
