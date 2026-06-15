/*
 * XREFs of ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x140028B80
 * Callers:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x14002A48C (--1CSubmixImpl@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000EDB0 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400295F4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSubmixImpl::DisconnectFromRightSubmix(CSubmixImpl *this, struct ISubmix *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v5 = 0LL;
  (**(void (__fastcall ***)(struct ISubmix *, GUID *, __int64 *))a2)(
    a2,
    &GUID_57386a31_7482_4b2f_89c9_c3dcf849c66d,
    &v5);
  if ( v5 )
  {
    (*(void (__fastcall **)(CSubmixImpl *))(*(_QWORD *)this + 144LL))(this);
    (*(void (__fastcall **)(__int64, CSubmixImpl *))(*(_QWORD *)v5 + 80LL))(v5, this);
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((__int64 *)this + 38);
  PublishDeviceGraphWnfState();
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v4 )
    LeaveCriticalSection(v4);
}
