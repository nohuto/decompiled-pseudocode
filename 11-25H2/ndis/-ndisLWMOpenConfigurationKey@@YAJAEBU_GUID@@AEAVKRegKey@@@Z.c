/*
 * XREFs of ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x140168ED0
 * Callers:
 *     NdisOpenConfiguration @ 0x14004F910 (NdisOpenConfiguration.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140168A20 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1400812F0 (WPP_RECORDER_SF__guid_.c)
 *     WPP_RECORDER_SF__guid_d @ 0x140081440 (WPP_RECORDER_SF__guid_d.c)
 *     RtlUnicodeStringInitWorker @ 0x1400A0BEC (RtlUnicodeStringInitWorker.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     ndisLWMBuildConfigurationKeyPath @ 0x140169030 (ndisLWMBuildConfigurationKeyPath.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x140169240 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 */

__int64 __fastcall ndisLWMOpenConfigurationKey(const struct _GUID *a1, KRegKey *this)
{
  __int64 result; // rax
  size_t v5; // r8
  ULONG v6; // r9d
  NTSTATUS inited; // ebx
  unsigned __int16 v8; // r9
  char v9[8]; // [rsp+28h] [rbp-250h]
  char v10[4]; // [rsp+30h] [rbp-248h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-238h] BYREF
  wchar_t pszSrc[256]; // [rsp+50h] [rbp-228h] BYREF

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x8Cu,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (__int64)a1);
  result = ndisLWMBuildConfigurationKeyPath((__int64)a1, (__int64)pszSrc);
  inited = result;
  if ( (int)result >= 0 )
  {
    DestinationString = 0LL;
    inited = RtlUnicodeStringInitWorker(&DestinationString, pszSrc, v5, v6);
    if ( inited >= 0 )
    {
      inited = KRegKey::Open(this, 0xF003Fu, &DestinationString, 0LL);
      if ( inited >= 0 )
        goto LABEL_8;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return (unsigned int)inited;
    v8 = 142;
    *(_DWORD *)v9 = inited;
LABEL_14:
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      v8,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      *(_QWORD *)v9);
LABEL_8:
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v10 = inited;
      WPP_RECORDER_SF__guid_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x8Fu,
        (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
        (__int64)a1,
        *(_DWORD *)v10);
    }
    return (unsigned int)inited;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v8 = 141;
    *(_DWORD *)v9 = result;
    goto LABEL_14;
  }
  return result;
}
