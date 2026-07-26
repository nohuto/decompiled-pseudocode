/*
 * XREFs of ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x14015BF80
 * Callers:
 *     NdisOpenConfiguration @ 0x140076B10 (NdisOpenConfiguration.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14015BAD0 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1400657A0 (WPP_RECORDER_SF__guid_.c)
 *     WPP_RECORDER_SF__guid_d @ 0x1400658F0 (WPP_RECORDER_SF__guid_d.c)
 *     RtlUnicodeStringInitWorker @ 0x140096778 (RtlUnicodeStringInitWorker.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ndisLWMBuildConfigurationKeyPath @ 0x14015C0E0 (ndisLWMBuildConfigurationKeyPath.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x14015C2F0 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 */

__int64 __fastcall ndisLWMOpenConfigurationKey(const struct _GUID *a1, KRegKey *this)
{
  __int64 result; // rax
  int v5; // edx
  size_t v6; // r8
  ULONG v7; // r9d
  NTSTATUS inited; // ebx
  int v9; // r9d
  char v10; // [rsp+28h] [rbp-250h]
  char v11[4]; // [rsp+30h] [rbp-248h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-238h] BYREF
  wchar_t pszSrc[256]; // [rsp+50h] [rbp-228h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x90u,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (__int64)a1);
  result = ndisLWMBuildConfigurationKeyPath((__int64)a1, (__int64)pszSrc);
  inited = result;
  if ( (int)result >= 0 )
  {
    DestinationString = 0LL;
    inited = RtlUnicodeStringInitWorker(&DestinationString, pszSrc, v6, v7);
    if ( inited >= 0 )
    {
      inited = KRegKey::Open(this, 0xF003Fu, &DestinationString, 0LL);
      if ( inited >= 0 )
        goto LABEL_8;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)inited;
    v9 = 146;
    v10 = inited;
LABEL_14:
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      1,
      v9,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      v10);
LABEL_8:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v11 = inited;
      WPP_RECORDER_SF__guid_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x93u,
        (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
        (__int64)a1,
        *(_DWORD *)v11);
    }
    return (unsigned int)inited;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = 145;
    v10 = result;
    goto LABEL_14;
  }
  return result;
}
