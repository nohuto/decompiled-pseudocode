/*
 * XREFs of ?Insert@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x1801ADF00
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1801AD948 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D64C (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801AF3D0 (--4-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Insert(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v4; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rax

  v4 = 0;
  EnterCriticalSection(&stru_1804051B8);
  if ( byte_1804051B4 )
  {
    v4 = -2147023781;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147023781, 0x97u, 0LL);
  }
  else
  {
    v5 = operator new(0x18uLL);
    v6 = v5;
    if ( v5 )
    {
      *v5 = 0LL;
      v5[1] = 0LL;
      v5[2] = 0LL;
      Microsoft::WRL::ComPtr<CManipulationFrame>::operator=(v5 + 2, a3);
      v7 = off_1804051A8;
      if ( *off_1804051A8 != (_UNKNOWN *)&CManipulationManager::s_InputQueue )
        __fastfail(3u);
      *v6 = &CManipulationManager::s_InputQueue;
      v6[1] = v7;
      *v7 = v6;
      ++dword_1804051B0;
      off_1804051A8 = (_UNKNOWN **)v6;
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x9Cu, 0LL);
    }
  }
  LeaveCriticalSection(&stru_1804051B8);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(a3);
  return v4;
}
