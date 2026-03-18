/*
 * XREFs of ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800321C0
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800387D0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18003C07C (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18012B6A0 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 */

__int64 __fastcall CVisual::GetProperty(CVisual *this, int a2, struct CExpressionValue *a3)
{
  struct CExpressionValue *v3; // r9
  bool v4; // cl
  __int64 result; // rax
  __int64 v6; // rax
  int v7; // xmm0_4
  int v8; // xmm0_4
  int v9; // xmm1_4
  int v10; // xmm2_4
  __int64 v11; // rax
  __int64 v12; // rax
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  bool v15; // al
  CSparseStorage::AllocatedStorage *v16; // rcx
  int v17; // eax
  int v18; // edx
  int *v19; // rcx
  int v20; // edx
  int *v21; // rcx
  struct CSparseStorage::DataInfo *Slot; // rax
  __int64 v23; // xmm0_8
  __int64 v24; // [rsp+30h] [rbp-18h]

  v3 = a3;
  if ( a2 == 38 )
  {
    v4 = (*((_BYTE *)this + 106) & 0x40) != 0;
    *((_DWORD *)a3 + 18) = 17;
    *(_BYTE *)a3 = v4;
    return 0LL;
  }
  else
  {
    switch ( a2 )
    {
      case 26:
        v6 = *((_QWORD *)this + 28);
        if ( (*(_DWORD *)(v6 + 4) & 0x8000000) != 0 )
        {
          v18 = *(_DWORD *)(v6 + 12);
          v19 = (int *)(v6 + 12);
          if ( (v18 & 0x7F000000) != 0x5000000 )
          {
            do
            {
              v19 = (int *)((char *)v19 + (v18 & 0xFFFFFF) + 4);
              v18 = *v19;
            }
            while ( (*v19 & 0x7F000000) != 0x5000000 );
          }
          v7 = v19[1];
        }
        else
        {
          v7 = (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
        }
        *(_DWORD *)a3 = v7;
        result = 0LL;
        *((_DWORD *)a3 + 18) = 18;
        break;
      case 27:
        v15 = (*((_BYTE *)this + 105) & 0x40) != 0;
        *((_DWORD *)a3 + 18) = 17;
        *(_BYTE *)a3 = v15;
        result = 0LL;
        break;
      case 28:
        v8 = *((_DWORD *)this + 29);
        result = 0LL;
        v9 = *((_DWORD *)this + 30);
        v10 = *((_DWORD *)this + 31);
        *((_DWORD *)a3 + 18) = 52;
        *(_DWORD *)a3 = v8;
        *((_DWORD *)a3 + 1) = v9;
        *((_DWORD *)a3 + 2) = v10;
        break;
      case 29:
        result = 0LL;
        *(_QWORD *)a3 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 34), (__m128)*((unsigned int *)this + 35)).m128_u64[0];
        *((_DWORD *)a3 + 18) = 35;
        break;
      case 30:
        v16 = (CSparseStorage::AllocatedStorage *)*((_QWORD *)this + 28);
        if ( (*((_DWORD *)v16 + 1) & 0x10000000) != 0 )
        {
          Slot = CSparseStorage::AllocatedStorage::FindSlot(v16, 4u);
          v23 = *(_QWORD *)((char *)Slot + 4);
          v17 = *((_DWORD *)Slot + 3);
          v24 = v23;
        }
        else
        {
          v17 = 0;
          v24 = 0LL;
        }
        *((_DWORD *)v3 + 18) = 52;
        *(_QWORD *)v3 = v24;
        *((_DWORD *)v3 + 2) = v17;
        result = 0LL;
        break;
      case 31:
        v11 = *((_QWORD *)this + 28);
        if ( (*(_DWORD *)(v11 + 4) & 0x20000000) != 0 )
        {
          v20 = *(_DWORD *)(v11 + 12);
          v21 = (int *)(v11 + 12);
          if ( (v20 & 0x7F000000) != 0x3000000 )
          {
            do
            {
              v21 = (int *)((char *)v21 + (v20 & 0xFFFFFF) + 4);
              v20 = *v21;
            }
            while ( (*v21 & 0x7F000000) != 0x3000000 );
          }
          v12 = *(_QWORD *)(v21 + 1);
        }
        else
        {
          v12 = 0LL;
        }
        v13 = (__m128)HIDWORD(v12);
        v14 = (__m128)_mm_cvtsi32_si128(v12);
        result = 0LL;
        *(_QWORD *)a3 = _mm_unpacklo_ps(v14, v13).m128_u64[0];
        *((_DWORD *)a3 + 18) = 35;
        break;
      default:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x170Eu, 0LL);
        result = 2147942487LL;
        break;
    }
  }
  return result;
}
