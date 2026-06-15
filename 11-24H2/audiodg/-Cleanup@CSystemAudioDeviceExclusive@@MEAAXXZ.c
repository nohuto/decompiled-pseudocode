/*
 * XREFs of ?Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ @ 0x14006F2B0
 * Callers:
 *     ??1CSystemAudioDeviceExclusive@@UEAA@XZ @ 0x14006EFE4 (--1CSystemAudioDeviceExclusive@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAXXZ @ 0x14000E8DC (-Release@-$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAXXZ.c)
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x1400299B8 (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSystemAudioDeviceExclusive::Cleanup(CSystemAudioDeviceExclusive *this)
{
  char *v2; // rcx
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_OWORD *)((char *)this + 104);
  EtwEventActivityIdControl(4LL, &v3);
  if ( *((_DWORD *)this + 59) )
    CSystemAudioDeviceCollection::Remove(this);
  ATL::CComPtrBase<IAudioMediaType>::Release((_QWORD *)this + 11);
  v2 = (char *)*((_QWORD *)this + 26);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 26) = 0LL;
  }
  EtwEventActivityIdControl(4LL, &v3);
}
