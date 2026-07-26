/*
 * XREFs of ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x140160C40
 * Callers:
 *     ?ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z @ 0x140135680 (-ndisCheckAlwaysStartFlag@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ?ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013E934 (-ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z @ 0x1401425B8 (-QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z.c)
 *     ?ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z @ 0x140160990 (-ndisCheckIfDeviceNeedsUpdates@@YAJAEAVKRegKey@@AEA_N@Z.c)
 *     ?ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z @ 0x140160A20 (-ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z.c)
 *     ?ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x140160AF0 (-ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z @ 0x140160BF0 (-QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueUlong(KRegKey *this, struct _UNICODE_STRING *a2, unsigned int *a3)
{
  void *m_ptr; // rcx
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-38h] BYREF
  __int128 KeyValueInformation; // [rsp+38h] [rbp-30h] BYREF
  int v8; // [rsp+48h] [rbp-20h]

  m_ptr = this->m_ptr;
  v8 = 0;
  ResultLength = 0;
  KeyValueInformation = 0LL;
  result = ZwQueryValueKey(m_ptr, a2, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
  if ( result >= 0 )
  {
    if ( DWORD1(KeyValueInformation) == 4 )
    {
      if ( DWORD2(KeyValueInformation) == 4 )
      {
        *a3 = HIDWORD(KeyValueInformation);
        return 0;
      }
      else
      {
        return -1073741789;
      }
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
