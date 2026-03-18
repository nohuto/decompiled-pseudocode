/*
 * XREFs of ?ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ @ 0x1802DAD9C
 * Callers:
 *     ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x1802DAE70 (-ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ @ 0x1802DB1D0 (-OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHolographicExclusiveView::ActivateSwapChain(CHolographicExclusiveView *this, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // rsi
  __int64 v5; // rsi
  int v6; // eax
  int v7; // eax
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_BYTE *)this + 90) )
  {
    if ( !*((_BYTE *)this + 89) )
    {
      v4 = *((_QWORD *)this + 13);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 96);
        if ( v5 )
        {
          LOBYTE(a2) = 1;
          v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 448LL))(v5, a2);
          v2 = v6;
          if ( v6 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x14Du, 0LL);
          }
          else
          {
            *((_QWORD *)this + 17) = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 80LL))(
                                                  v5,
                                                  &v9);
            v7 = CHolographicExclusiveView::OpenSurfaceHandles(this);
            v2 = v7;
            if ( v7 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x151u, 0LL);
            else
              *((_BYTE *)this + 88) = 1;
          }
        }
      }
    }
  }
  return v2;
}
