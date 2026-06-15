/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001C460
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBrokerDevice@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x14001B9EC (--$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBroke.c)
 *     ?Release@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAKXZ @ 0x14004D700 (-Release@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAKXZ.c)
 *     ??1?$ComPtr@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x140057A54 (--1-$ComPtr@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x14007E6C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAud_ea_14007E6C0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x14007E6D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAud_ea_14007E6D0.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x14001CA2C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice,Microsoft::WRL::FtmBase>::Release(
        __int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 56);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_5;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_5:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 80LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
