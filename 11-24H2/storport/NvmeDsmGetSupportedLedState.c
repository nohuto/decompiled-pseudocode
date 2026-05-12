/*
 * XREFs of NvmeDsmGetSupportedLedState @ 0x140087E18
 * Callers:
 *     NvmeAdapterSetLedStateByAcpiDsm @ 0x1400877CC (NvmeAdapterSetLedStateByAcpiDsm.c)
 * Callees:
 *     RaDsmLedStatusToNtStatus @ 0x140089E40 (RaDsmLedStatusToNtStatus.c)
 *     RaidEvaluateDsmLedState @ 0x14008C01C (RaidEvaluateDsmLedState.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeDsmGetSupportedLedState(struct _DEVICE_OBJECT *a1)
{
  _DWORD *DeviceExtension; // rbx
  int v3; // eax
  unsigned int v4; // edx
  __int64 Src; // [rsp+30h] [rbp-38h] BYREF
  __int128 v6; // [rsp+38h] [rbp-30h]
  __int64 v7; // [rsp+48h] [rbp-20h]

  DeviceExtension = a1->DeviceExtension;
  v7 = 0LL;
  v6 = 0LL;
  if ( !DeviceExtension )
    return 3221225473LL;
  if ( (DeviceExtension[36] & 0x20000) != 0 )
    return 0LL;
  LODWORD(Src) = 24;
  v3 = RaidEvaluateDsmLedState(a1, (__int64)&Src);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( (unsigned int)Src >= 0x18 && (_DWORD)v6 == 1114596673 && DWORD2(v6) && WORD6(v6) == 2 )
    {
      if ( (_WORD)v7 )
      {
        return (unsigned int)RaDsmLedStatusToNtStatus((unsigned __int16)v7, (unsigned int)v3);
      }
      else
      {
        *(_DWORD *)(*((_QWORD *)DeviceExtension + 72) + 156LL) = HIDWORD(v7);
        *((_QWORD *)DeviceExtension + 18) |= 0x20000uLL;
      }
    }
    else
    {
      return (unsigned int)-1072431089;
    }
  }
  return v4;
}
