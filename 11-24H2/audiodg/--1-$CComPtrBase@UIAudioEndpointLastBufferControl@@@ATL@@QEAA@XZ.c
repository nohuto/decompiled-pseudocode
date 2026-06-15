/*
 * XREFs of ??1?$CComPtrBase@UIAudioEndpointLastBufferControl@@@ATL@@QEAA@XZ @ 0x14000FDC0
 * Callers:
 *     ?Process@CAudioProcessor@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x14000F620 (-Process@CAudioProcessor@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComPtrBase<IAudioEndpointLastBufferControl>::~CComPtrBase<IAudioEndpointLastBufferControl>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
