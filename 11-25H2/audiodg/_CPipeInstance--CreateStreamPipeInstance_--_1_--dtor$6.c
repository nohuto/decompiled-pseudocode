/*
 * XREFs of _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$6 @ 0x1400932A6
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x14004534C (--1-$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CPipeInstance::CreateStreamPipeInstance_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 72) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 72) &= ~1u;
    return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)(a2 + 112));
  }
  return result;
}
