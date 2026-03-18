/*
 * XREFs of ?Optimize@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAXXZ @ 0x180097304
 * Callers:
 *     ?CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ @ 0x180096F10 (-CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CWatermarkStack<CVisual *,64,2,10>::Optimize(__int64 a1)
{
  int v1; // edi
  int v3; // edi
  __int64 v4; // rsi
  void *v5; // rbp
  int v6; // r9d

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 == 10 )
  {
    v4 = 64LL;
    if ( *(_DWORD *)(a1 + 20) > 0x40u )
      v4 = *(unsigned int *)(a1 + 20);
    v3 = 0;
    if ( (unsigned __int64)(3 * v4) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Eu, 0LL);
    }
    else if ( (unsigned int)(3 * v4) <= *(_DWORD *)(a1 + 12) )
    {
      if ( (_DWORD)v4 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v4 > 8 )
      {
        v5 = MIDL_user_allocate(8LL * (unsigned int)v4);
        if ( v5 )
        {
          operator delete(*(void **)a1);
          *(_QWORD *)a1 = v5;
          *(_DWORD *)(a1 + 12) = v4;
          goto LABEL_13;
        }
        v6 = -2147024882;
      }
      else
      {
        v6 = -2147024809;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x11Eu, 0LL);
    }
LABEL_13:
    *(_DWORD *)(a1 + 20) = 0;
    goto LABEL_3;
  }
  v3 = v1 + 1;
LABEL_3:
  *(_DWORD *)(a1 + 16) = v3;
}
