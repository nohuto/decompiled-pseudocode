/*
 * XREFs of ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180067A5C
 * Callers:
 *     ?SerializeForRPC@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x1800607F0 (-SerializeForRPC@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z.c)
 *     ??1CCrossProcessBaseMemory@@IEAA@XZ @ 0x180068ABC (--1CCrossProcessBaseMemory@@IEAA@XZ.c)
 *     ?LooksLikeWeAreHung@CAudioHealthMonitor@@UEAAXKPEBG@Z @ 0x1800B45A0 (-LooksLikeWeAreHung@CAudioHealthMonitor@@UEAAXKPEBG@Z.c)
 *     ??1CAudioDGProcess@@QEAA@XZ @ 0x1800CB964 (--1CAudioDGProcess@@QEAA@XZ.c)
 *     ??1CAudioHealthMonitor@@QEAA@XZ @ 0x1800CB9B4 (--1CAudioHealthMonitor@@QEAA@XZ.c)
 *     ?CheckBtAudioStreamContextSupported@CBtAudioResourceManager@@AEBAJXZ @ 0x1800D9AA0 (-CheckBtAudioStreamContextSupported@CBtAudioResourceManager@@AEBAJXZ.c)
 *     ?SendBtAudioStreamContext@CBtAudioResourceManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4BTAudio_StreamContext@@@Z @ 0x1800DA060 (-SendBtAudioStreamContext@CBtAudioResourceManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_000.c)
 *     ??1CSebNotifier@@QEAA@XZ @ 0x180109B4C (--1CSebNotifier@@QEAA@XZ.c)
 *     ?FilterInstantiate2@@YAJPEBGKPEAPEAX@Z @ 0x18012D1E0 (-FilterInstantiate2@@YAJPEBGKPEAPEAX@Z.c)
 *     _lambda_f5f4f75dc837a2f22584ae1b4b94d09e_::operator() @ 0x18015041C (_lambda_f5f4f75dc837a2f22584ae1b4b94d09e_--operator().c)
 *     _CAudioHealthMonitor::CAudioHealthMonitor_::_1_::dtor$1 @ 0x18016D382 (_CAudioHealthMonitor--CAudioHealthMonitor_--_1_--dtor$1.c)
 *     _CAudioHealthMonitor::LooksLikeWeAreHung_::_1_::dtor$1 @ 0x18016D3C0 (_CAudioHealthMonitor--LooksLikeWeAreHung_--_1_--dtor$1.c)
 *     __lambda_f5f4f75dc837a2f22584ae1b4b94d09e_::operator()_::_1_::dtor$0 @ 0x1801724A9 (__lambda_f5f4f75dc837a2f22584ae1b4b94d09e_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(
        void **a1)
{
  char *v1; // rcx
  int result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v1);
  return result;
}
