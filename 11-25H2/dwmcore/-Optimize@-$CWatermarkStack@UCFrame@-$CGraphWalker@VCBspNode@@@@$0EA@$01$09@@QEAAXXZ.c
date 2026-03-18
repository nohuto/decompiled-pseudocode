/*
 * XREFs of ?Optimize@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAXXZ @ 0x18010BA24
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18012B970 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CWatermarkStack<CGraphWalker<CBspNode>::CFrame,64,2,10>::Optimize(__int64 a1)
{
  int v1; // edi
  int v3; // edi
  void *v4; // rbp
  int v5; // r9d
  __int64 v6; // rsi

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 == 10 )
  {
    v6 = 64LL;
    if ( *(_DWORD *)(a1 + 20) > 0x40u )
      v6 = *(unsigned int *)(a1 + 20);
    v3 = 0;
    if ( (unsigned __int64)(3 * v6) <= 0xFFFFFFFF )
    {
      if ( (unsigned int)(3 * v6) <= *(_DWORD *)(a1 + 12) )
      {
        if ( (_DWORD)v6 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v6 > 0x10 )
        {
          v4 = MIDL_user_allocate(16LL * (unsigned int)v6);
          if ( v4 )
          {
            operator delete(*(void **)a1);
            *(_QWORD *)a1 = v4;
            *(_DWORD *)(a1 + 12) = v6;
            goto LABEL_9;
          }
          v5 = -2147024882;
        }
        else
        {
          v5 = -2147024809;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x11Eu, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x10Eu, 0LL);
    }
LABEL_9:
    *(_DWORD *)(a1 + 20) = 0;
    goto LABEL_10;
  }
  v3 = v1 + 1;
LABEL_10:
  *(_DWORD *)(a1 + 16) = v3;
}
