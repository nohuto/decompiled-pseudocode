/*
 * XREFs of ?reset@?$com_ptr_t@UIAudioStreamingResourceRegistration@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14001E0E0
 * Callers:
 *     ?SignalAndWaitForThread@CAudioPump@@AEAAXXZ @ 0x14001E024 (-SignalAndWaitForThread@CAudioPump@@AEAAXXZ.c)
 *     ?Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z @ 0x140021AF0 (-Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<IAudioStreamingResourceRegistration,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
