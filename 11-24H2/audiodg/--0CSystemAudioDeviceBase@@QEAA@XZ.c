/*
 * XREFs of ??0CSystemAudioDeviceBase@@QEAA@XZ @ 0x1400422D0
 * Callers:
 *     ??0CSystemAudioDeviceSharedBase@@QEAA@XZ @ 0x140042234 (--0CSystemAudioDeviceSharedBase@@QEAA@XZ.c)
 *     ??0CSystemAudioDeviceExclusive@@QEAA@XZ @ 0x14006EEA0 (--0CSystemAudioDeviceExclusive@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CSystemAudioDeviceBase *__fastcall CSystemAudioDeviceBase::CSystemAudioDeviceBase(CSystemAudioDeviceBase *this)
{
  __int64 v2; // rcx
  CSystemAudioDeviceBase *result; // rax

  *(_QWORD *)this = &CSystemAudioDeviceBase::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &CSystemAudioDeviceBase::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 3) = &CSystemAudioDeviceSharedBase::`vftable'{for `ISubmix'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 1, 0, 0);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  v2 = *((_QWORD *)this + 15);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 15) = 0LL;
  }
  *((_DWORD *)this + 20) = 0;
  result = this;
  *((_DWORD *)this + 25) = 1;
  *(GUID *)((char *)this + 104) = GUID_00000000_0000_0000_0000_000000000000;
  return result;
}
