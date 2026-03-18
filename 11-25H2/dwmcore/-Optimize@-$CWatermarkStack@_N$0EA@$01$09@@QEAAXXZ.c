/*
 * XREFs of ?Optimize@?$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ @ 0x180097930
 * Callers:
 *     ?CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ @ 0x180096F10 (-CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CWatermarkStack<bool,64,2,10>::Optimize(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rdi
  void *v4; // rsi
  int v5; // r9d

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 != 10 )
  {
    *(_DWORD *)(a1 + 16) = v1 + 1;
    return;
  }
  v3 = 64LL;
  if ( *(_DWORD *)(a1 + 20) > 0x40u )
    v3 = *(unsigned int *)(a1 + 20);
  if ( (unsigned __int64)(3 * v3) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Eu, 0LL);
    goto LABEL_7;
  }
  if ( (unsigned int)(3 * v3) <= *(_DWORD *)(a1 + 12) )
  {
    if ( (_DWORD)v3 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v3 > 1 )
    {
      v4 = MIDL_user_allocate((unsigned int)v3);
      if ( v4 )
      {
        operator delete(*(void **)a1);
        *(_QWORD *)a1 = v4;
        *(_DWORD *)(a1 + 12) = v3;
        goto LABEL_7;
      }
      v5 = -2147024882;
    }
    else
    {
      v5 = -2147024809;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x11Eu, 0LL);
  }
LABEL_7:
  *(_QWORD *)(a1 + 16) = 0LL;
}
