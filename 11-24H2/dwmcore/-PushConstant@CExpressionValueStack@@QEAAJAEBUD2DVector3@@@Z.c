/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z @ 0x1801E45A4
 * Callers:
 *     ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x1801BB4F4 (-PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?AddAndSet@?$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z @ 0x18000D670 (-AddAndSet@-$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

__int64 __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, const struct D2DVector3 *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v8; // rdx
  int v9; // r9d
  int v10; // eax
  _BYTE v11[64]; // [rsp+30h] [rbp-58h] BYREF
  CPathData *v12; // [rsp+70h] [rbp-18h] BYREF
  int v13; // [rsp+78h] [rbp-10h]

  if ( (unsigned int)~*((_DWORD *)this + 2) < 5 )
  {
    v5 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147418113,
      0x54u,
      0LL);
    goto LABEL_8;
  }
  if ( *((_DWORD *)this + 10) == *((_DWORD *)this + 2) )
  {
    memset_0(v11, 0, sizeof(v11));
    v12 = 0LL;
    v13 = 0;
    v10 = DynArray<CExpressionValue,1>::AddAndSet((__int64)this + 16, v8, (__int64)v11, v9);
    v5 = v10;
    if ( v10 >= 0 )
    {
      Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v12);
      goto LABEL_3;
    }
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v10,
      0x5Du,
      0LL);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v12);
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v5,
      0xE2u,
      0LL);
    return v5;
  }
LABEL_3:
  v4 = *((unsigned int *)this + 2);
  v5 = 0;
  *((_DWORD *)this + 2) = v4 + 1;
  v6 = *((_QWORD *)this + 2) + 80 * v4;
  *(_DWORD *)(v6 + 72) = 52;
  *(_QWORD *)v6 = *(_QWORD *)a2;
  *(_DWORD *)(v6 + 8) = *((_DWORD *)a2 + 2);
  return v5;
}
