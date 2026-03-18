/*
 * XREFs of ?_GetAppOverrideKey@MonitorUsageState@DxgMonitor@@AEBAJAEBU_UNICODE_STRING@@PEA_K@Z @ 0x14027D634
 * Callers:
 *     ?GetAppOverride@MonitorUsageState@DxgMonitor@@QEBA_NU_GUID@@@Z @ 0x14027D294 (-GetAppOverride@MonitorUsageState@DxgMonitor@@QEBA_NU_GUID@@@Z.c)
 *     ?SetAppOverride@MonitorUsageState@DxgMonitor@@QEAAJU_GUID@@0I_K_NPEBU_UNICODE_STRING@@@Z @ 0x14027D390 (-SetAppOverride@MonitorUsageState@DxgMonitor@@QEAAJU_GUID@@0I_K_NPEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MonitorUsageState::_GetAppOverrideKey(
        DxgMonitor::MonitorUsageState *this,
        const struct _UNICODE_STRING *a2,
        unsigned __int64 *a3)
{
  WCHAR *v6; // rbx
  unsigned int v7; // esi
  unsigned __int64 v8; // rax
  WCHAR *v9; // rdi
  __int64 v10; // rdx
  NTSTATUS appended; // edi
  unsigned int Length; // esi
  unsigned __int64 v13; // rax
  __int64 result; // rax
  ULONG HashValue[2]; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING String; // [rsp+38h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF

  v6 = 0LL;
  v7 = 130;
  while ( 1 )
  {
    v7 *= 2;
    v8 = 2LL * v7;
    v9 = v6;
    if ( !is_mul_ok(v7, 2uLL) )
      v8 = -1LL;
    v6 = (WCHAR *)operator new[](v8, 0x4D677844u, 256LL);
    if ( v9 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
    if ( !v6 )
      break;
    LOBYTE(v10) = 1;
    appended = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, WCHAR *))(**(_QWORD **)this + 96LL))(
                 *(_QWORD *)this,
                 v10,
                 v7,
                 v6);
    if ( appended >= 0 )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, v6);
      DestinationString.MaximumLength = 2 * v7 - 2;
      appended = RtlAppendUnicodeStringToString(&DestinationString, a2);
    }
    if ( appended != -2147483643 && appended != -1073741789 )
    {
      if ( appended < 0 )
      {
        WdLogSingleEntry2(2LL, this, appended);
        WdLogGlobalForLineNumber = 416;
LABEL_22:
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
        return (unsigned int)appended;
      }
      *(_QWORD *)HashValue = 0LL;
      String = 0LL;
      RtlInitUnicodeString(&String, v6);
      Length = String.Length;
      String.Length = (String.Length >> 1) & 0xFFFE;
      appended = RtlHashUnicodeString(&String, 1u, 0, HashValue);
      if ( appended < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 443;
      }
      if ( Length <= 2 )
      {
        if ( appended < 0 )
          goto LABEL_22;
      }
      else
      {
        String.MaximumLength -= String.Length;
        v13 = (unsigned __int64)String.Length >> 1;
        String.Length = Length - String.Length;
        String.Buffer = &v6[v13];
        appended = RtlHashUnicodeString(&String, 1u, 0, &HashValue[1]);
        if ( appended < 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 453;
          goto LABEL_22;
        }
      }
      *a3 = *(_QWORD *)HashValue;
      goto LABEL_22;
    }
    appended = -1073741789;
    if ( v7 >= 0x410 )
      goto LABEL_22;
  }
  WdLogSingleEntry0(6LL);
  result = 3221225495LL;
  WdLogGlobalForLineNumber = 391;
  return result;
}
