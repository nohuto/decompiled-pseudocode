/*
 * XREFs of _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$5 @ 0x1400933CF
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x14004534C (--1-$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 312) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 312) &= ~2u;
    return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)(a2 + 64));
  }
  return result;
}
