/*
 * XREFs of ?KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x14001BF94
 * Callers:
 *     ?TryRetrieveNotificationDeviceId@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14001BB98 (-TryRetrieveNotificationDeviceId@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 *     ?GetAudioModules@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x14001BC40 (-GetAudioModules@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAU-$IVector@PEAV.c)
 *     ?SendCommand@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@PEAUIBuffer@Streams@Storage@5@PEAPEAU7895@@Z @ 0x14007CE00 (-SendCommand@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule.c)
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x14001C0B8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140045738 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::KsSendProperty(
        RTL_SRWLOCK *this,
        struct KSIDENTIFIER *a2,
        DWORD a3,
        void *a4,
        DWORD nOutBufferSize,
        unsigned int *lpBytesReturned)
{
  PVOID Ptr; // rcx
  RTL_SRWLOCK *v11; // rbx
  bool v12; // zf
  wil::details *v13; // rcx
  unsigned int LastErrorFailHr; // edi
  __int64 result; // rax
  RTL_SRWLOCK *v16; // [rsp+60h] [rbp+8h] BYREF

  Ptr = this[12].Ptr;
  if ( Ptr )
  {
    result = (*(__int64 (__fastcall **)(PVOID, struct KSIDENTIFIER *, _QWORD))(*(_QWORD *)Ptr + 24LL))(Ptr, a2, a3);
    if ( (int)result < 0 )
      return result;
    return 0LL;
  }
  v11 = this + 25;
  AcquireSRWLockExclusive(this + 25);
  v12 = LOBYTE(this[26].Ptr) == 0;
  v16 = this + 25;
  if ( v12 )
  {
    if ( !DeviceIoControl(this[14].Ptr, 0x2F0003u, a2, a3, a4, nOutBufferSize, lpBytesReturned, 0LL) )
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v13);
      if ( v11 )
        ReleaseSRWLockExclusive(v11);
      return LastErrorFailHr;
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v16);
    return 0LL;
  }
  if ( this != (RTL_SRWLOCK *)-200LL )
    ReleaseSRWLockExclusive(this + 25);
  return 2147944017LL;
}
