/*
 * XREFs of ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180077BBC
 * Callers:
 *     ?SerializeForRPC@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x18006F5F0 (-SerializeForRPC@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z.c)
 *     ??1CCrossProcessBaseMemory@@IEAA@XZ @ 0x180079F9C (--1CCrossProcessBaseMemory@@IEAA@XZ.c)
 *     ??1CAudioDGProcess@@QEAA@XZ @ 0x1800CC294 (--1CAudioDGProcess@@QEAA@XZ.c)
 *     ?CheckBtAudioStreamContextSupported@CBtAudioResourceManager@@AEBAJXZ @ 0x1800D25A0 (-CheckBtAudioStreamContextSupported@CBtAudioResourceManager@@AEBAJXZ.c)
 *     ?SendBtAudioStreamContext@CBtAudioResourceManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4BTAudio_StreamContext@@@Z @ 0x1800D2B60 (-SendBtAudioStreamContext@CBtAudioResourceManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_000.c)
 *     ??1CSebNotifier@@QEAA@XZ @ 0x1801039FC (--1CSebNotifier@@QEAA@XZ.c)
 *     ?FilterInstantiate2@@YAJPEBGKPEAPEAX@Z @ 0x180125540 (-FilterInstantiate2@@YAJPEBGKPEAPEAX@Z.c)
 *     _lambda_7ee6381ccef9550c878152fb933ee002_::operator() @ 0x1801474BC (_lambda_7ee6381ccef9550c878152fb933ee002_--operator().c)
 *     __lambda_7ee6381ccef9550c878152fb933ee002_::operator()_::_1_::dtor$0 @ 0x180168CF7 (__lambda_7ee6381ccef9550c878152fb933ee002_--operator()_--_1_--dtor$0.c)
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
