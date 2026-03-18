/*
 * XREFs of ?WaitForVBlank@CDDisplayRenderTarget@@UEBAJPEAX@Z @ 0x180231D10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::WaitForVBlank(CDDisplayRenderTarget *this, void *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  void *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  if ( *((_QWORD *)this + 6) )
  {
    v2 = NtDCompositionWaitForCompositorClock(a2 != 0LL, (unsigned __int64)&v5 & -(__int64)(a2 != 0LL), 80LL);
    if ( v2 == -1071775738 )
    {
      return 142213121;
    }
    else if ( v2 )
    {
      if ( v2 == 1 )
      {
        return 1;
      }
      else if ( v2 == 258 )
      {
        return 258;
      }
      else
      {
        return v2 | 0x10000000u;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v3 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304442, 0x402u, 0LL);
  }
  return v3;
}
