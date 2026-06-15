/*
 * XREFs of ?TryRetrieveNotificationDeviceId@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14001BB98
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14001B8B8 (-RuntimeClassInitialize@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x14001BF94 (-KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@K.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::TryRetrieveNotificationDeviceId(
        Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *this)
{
  KSIDENTIFIER v3; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v5; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0;
  *(&v3.Alignment + 2) = 0x100000003LL;
  v3.Set = GUID_c034fdb0_ff75_47c8_aa3c_ee46716b50c6;
  if ( Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::KsSendProperty(
         this,
         &v3,
         0x18u,
         (char *)this + 120,
         0x10u,
         &v5) < 0 )
    return 0LL;
  if ( v5 >= 0x10 )
  {
    *((_BYTE *)this + 136) = 1;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x833,
    (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)0x80004005LL);
  return 2147500037LL;
}
