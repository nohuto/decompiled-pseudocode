/*
 * XREFs of ?Insert@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x18018FD88
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18018F7D0 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18018F780 (--4-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Insert(
        __int64 a1,
        __int64 a2,
        CEffectCompilationTask **a3)
{
  unsigned int v4; // edi
  CEffectCompilationTask **v5; // rax
  CEffectCompilationTask **v6; // rbx
  CEffectCompilationTask ***v7; // rax

  v4 = 0;
  EnterCriticalSection(&stru_1803F91B8);
  if ( byte_1803F91B4 )
  {
    v4 = -2147023781;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147023781, 0x97u, 0LL);
  }
  else
  {
    v5 = (CEffectCompilationTask **)operator new(0x18uLL);
    v6 = v5;
    if ( v5 )
    {
      *v5 = 0LL;
      v5[1] = 0LL;
      v5[2] = 0LL;
      Microsoft::WRL::ComPtr<CManipulationFrame>::operator=(v5 + 2, a3);
      v7 = (CEffectCompilationTask ***)off_1803F91A8;
      if ( *off_1803F91A8 != (_UNKNOWN *)&CManipulationManager::s_InputQueue )
        __fastfail(3u);
      *v6 = (CEffectCompilationTask *)&CManipulationManager::s_InputQueue;
      v6[1] = (CEffectCompilationTask *)v7;
      *v7 = v6;
      ++dword_1803F91B0;
      off_1803F91A8 = (_UNKNOWN **)v6;
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x9Cu, 0LL);
    }
  }
  LeaveCriticalSection(&stru_1803F91B8);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)a3);
  return v4;
}
