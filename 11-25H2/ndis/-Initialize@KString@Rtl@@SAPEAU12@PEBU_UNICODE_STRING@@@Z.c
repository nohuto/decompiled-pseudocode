/*
 * XREFs of ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x140171E40
 * Callers:
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14014D108 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wi.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x140168BD0 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x14016A440 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x140172190 (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x140174B50 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 * Callees:
 *     memmove @ 0x1400EE080 (memmove.c)
 */

struct Rtl::KString *__fastcall Rtl::KString::Initialize(const struct _UNICODE_STRING *a1)
{
  _WORD *PoolWithTag; // rax
  _WORD *v3; // rbx
  unsigned int MaximumLength; // edx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a1->MaximumLength + 16LL, 0x7274534Bu);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  *PoolWithTag = a1->Length;
  MaximumLength = a1->MaximumLength;
  PoolWithTag[1] = MaximumLength;
  *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 8;
  memmove(PoolWithTag + 8, a1->Buffer, MaximumLength);
  return (struct Rtl::KString *)v3;
}
