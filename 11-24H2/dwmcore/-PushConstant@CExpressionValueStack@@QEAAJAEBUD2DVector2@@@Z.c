/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z @ 0x180249018
 * Callers:
 *     ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x1801BB4F4 (-PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?AddAndSet@?$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z @ 0x18000D670 (-AddAndSet@-$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, const struct D2DVector2 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v6; // r9d
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  _BYTE v11[64]; // [rsp+30h] [rbp-58h] BYREF
  CPathData *v12; // [rsp+70h] [rbp-18h] BYREF
  int v13; // [rsp+78h] [rbp-10h]

  if ( (unsigned int)~*((_DWORD *)this + 2) < 5 )
  {
    v4 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147418113,
      0x54u,
      0LL);
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v4,
      0xD1u,
      0LL);
    return v4;
  }
  if ( *((_DWORD *)this + 10) == *((_DWORD *)this + 2) )
  {
    memset_0(v11, 0, sizeof(v11));
    v12 = 0LL;
    v13 = 0;
    v7 = DynArray<CExpressionValue,1>::AddAndSet((__int64)this + 16, v5, (__int64)v11, v6);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        20,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        v7,
        0x5Du,
        0LL);
      Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v12);
      goto LABEL_9;
    }
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v12);
  }
  v8 = *((unsigned int *)this + 2);
  v4 = 0;
  *((_DWORD *)this + 2) = v8 + 1;
  v9 = *((_QWORD *)this + 2) + 80 * v8;
  *(_DWORD *)(v9 + 72) = 35;
  *(_QWORD *)v9 = *(_QWORD *)a2;
  return v4;
}
