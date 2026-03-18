/*
 * XREFs of ?Optimize@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAXXZ @ 0x1800225B0
 * Callers:
 *     ?CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ @ 0x180021E20 (-CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Optimize(__int64 a1)
{
  int v1; // eax
  HANDLE ProcessHeap; // rax
  LPVOID v4; // rbp
  int v5; // r9d
  __int64 v6; // rsi
  void *v7; // rdi
  HANDLE v8; // rax

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 != 10 )
  {
    *(_DWORD *)(a1 + 16) = v1 + 1;
    return;
  }
  v6 = 64LL;
  if ( *(_DWORD *)(a1 + 20) > 0x40u )
    v6 = *(unsigned int *)(a1 + 20);
  if ( (unsigned __int64)(3 * v6) <= 0xFFFFFFFF )
  {
    if ( (unsigned int)(3 * v6) <= *(_DWORD *)(a1 + 12) )
    {
      if ( (_DWORD)v6 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v6 > 4 )
      {
        ProcessHeap = GetProcessHeap();
        v4 = HeapAlloc(ProcessHeap, 0, 4 * v6);
        if ( v4 )
        {
          v7 = *(void **)a1;
          if ( *(_QWORD *)a1 )
          {
            v8 = GetProcessHeap();
            HeapFree(v8, 0, v7);
          }
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x11Eu, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Eu, 0LL);
  }
LABEL_9:
  *(_QWORD *)(a1 + 16) = 0LL;
}
