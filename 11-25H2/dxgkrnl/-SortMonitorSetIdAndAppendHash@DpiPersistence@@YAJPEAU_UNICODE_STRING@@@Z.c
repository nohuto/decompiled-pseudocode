/*
 * XREFs of ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x140369558
 * Callers:
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x140368638 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??_GCCD_SET_STRING_ID@@QEAAPEAXI@Z @ 0x14000F9C0 (--_GCCD_SET_STRING_ID@@QEAAPEAXI@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x14004CEFC (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x14036A434 (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x14036BE7C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x14036C45C (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DpiPersistence::SortMonitorSetIdAndAppendHash(
        struct _UNICODE_STRING *this,
        struct _UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4)
{
  CCD_SET_STRING_ID *v5; // rax
  CCD_SET_STRING_ID *v6; // rbx
  const struct _STRING *ConnectedSetStr; // rax
  int v8; // eax
  __int64 v9; // rdi
  ULONG v11; // r8d
  struct _UNICODE_STRING v12; // [rsp+50h] [rbp-18h] BYREF

  v12 = 0LL;
  v5 = (CCD_SET_STRING_ID *)operator new(0x38uLL, 0x63644356u, 256LL, a4);
  if ( v5 )
    v6 = CCD_SET_STRING_ID::CCD_SET_STRING_ID(v5, this);
  else
    v6 = 0LL;
  ConnectedSetStr = CCD_SET_STRING_ID::GetConnectedSetStr(v6);
  v8 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&v12, ConnectedSetStr);
  v9 = v8;
  if ( v8 >= 0 )
  {
    memset(this->Buffer, 0, this->MaximumLength);
    this->Length = 0;
    RtlUnicodeStringCopy(this, &v12, v11);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v12.Buffer);
    v12 = 0LL;
    if ( v6 )
      CCD_SET_STRING_ID::`scalar deleting destructor'(v6);
  }
  else
  {
    WdLogSingleEntry1(2LL, v8);
    WdLogGlobalForLineNumber = 438;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"_CcdCreateKeyFromSetIdStr failed: (Status = 0x%I64x)",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v9;
}
