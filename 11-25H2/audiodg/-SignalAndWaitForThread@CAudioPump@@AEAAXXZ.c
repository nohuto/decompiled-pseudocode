/*
 * XREFs of ?SignalAndWaitForThread@CAudioPump@@AEAAXXZ @ 0x14001E024
 * Callers:
 *     ??1CAudioPump@@QEAA@XZ @ 0x14001CAE8 (--1CAudioPump@@QEAA@XZ.c)
 *     ?Stop@CAudioPump@@UEAAJXZ @ 0x14001DDA0 (-Stop@CAudioPump@@UEAAJXZ.c)
 *     ?Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z @ 0x140021AF0 (-Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIAudioStreamingResourceRegistration@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14001E0E0 (-reset@-$com_ptr_t@UIAudioStreamingResourceRegistration@@Uerr_returncode_policy@wil@@@wil@@QEAAX.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x14001E110 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAudioPump::SignalAndWaitForThread(CAudioPump *this, void *a2)
{
  *((_BYTE *)this + 76) = 1;
  wil::details::SetEvent(*((wil::details **)this + 35), a2);
  if ( *((_QWORD *)this + 587) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 586) + 48LL))(*((_QWORD *)this + 586));
    *((_QWORD *)this + 587) = 0LL;
  }
  wil::com_ptr_t<IAudioStreamingResourceRegistration,wil::err_returncode_policy>::reset((char *)this + 4688);
  WaitForSingleObjectEx(*((HANDLE *)this + 15), 0xFFFFFFFF, 0);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (char *)this + 120,
    0LL);
}
