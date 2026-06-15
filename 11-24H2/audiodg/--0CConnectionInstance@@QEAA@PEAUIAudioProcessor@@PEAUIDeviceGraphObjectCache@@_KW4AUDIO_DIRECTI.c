/*
 * XREFs of ??0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@_KW4AUDIO_DIRECTION@@PEAVCProcessNode@@4@Z @ 0x140027100
 * Callers:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x140004960 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ??4?$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z @ 0x140026C00 (--4-$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z.c)
 */

__int64 __fastcall CConnectionInstance::CConnectionInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6)
{
  _QWORD *v7; // rcx

  v7 = (_QWORD *)(a1 + 48);
  *v7 = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 16) = a5;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 24) = a6;
  *(_QWORD *)(a1 + 8) = a4;
  ATL::CComPtr<IDeviceGraphObjectCache>::operator=(v7, a3);
  if ( a4 >= 0xFFFFFFFFFFFFFFFEuLL )
    *(_QWORD *)(a1 + 64) = a4;
  return a1;
}
