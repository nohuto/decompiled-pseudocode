/*
 * XREFs of ?PostPresentForComputeScribble@CScribbleSwapChain@@IEAAX_N@Z @ 0x180240640
 * Callers:
 *     ?PostPresent@CDDisplaySwapChain@@IEAAX_N0@Z @ 0x180067518 (-PostPresent@CDDisplaySwapChain@@IEAAX_N0@Z.c)
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x1801C7654 (-PostPresent@CLegacySwapChain@@IEAAX_N0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScribbleSwapChain::PostPresentForComputeScribble(CScribbleSwapChain *this, char a2)
{
  unsigned __int8 v4; // di
  int v5; // eax

  if ( *((_DWORD *)this + 68) )
  {
    v4 = 0;
    if ( !a2
      && (*((_BYTE *)this + 276)
       || (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 32) + 112LL))((char *)this + 256)) )
    {
      v4 = 1;
    }
    if ( *((_BYTE *)this + 277) != v4 )
    {
      if ( *((_DWORD *)this + 68) == 1
        && (v5 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 32) + 80LL))((char *)this + 256, v4),
            v5 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0xFEu, 0LL);
      }
      else
      {
        *((_BYTE *)this + 277) = v4;
      }
    }
  }
  if ( a2 )
    CScribbleSwapChain::ReleaseComputeScribbleResources(this);
}
