/*
 * XREFs of ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x14033E3F8
 * Callers:
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x14033CD38 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_GCCD_SET_STRING_ID@@QEAAPEAXI@Z @ 0x14001EE50 (--_GCCD_SET_STRING_ID@@QEAAPEAXI@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x14004C948 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x14033F138 (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x14034028C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x14034086C (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DpiPersistence::SortMonitorSetIdAndAppendHash(
        struct _UNICODE_STRING *this,
        struct _UNICODE_STRING *a2)
{
  CCD_SET_STRING_ID *v3; // rax
  CCD_SET_STRING_ID *v4; // rbx
  const struct _STRING *ConnectedSetStr; // rax
  int v6; // eax
  __int64 v7; // rdi
  ULONG v9; // r8d
  struct _UNICODE_STRING v10; // [rsp+50h] [rbp-18h] BYREF

  v10 = 0LL;
  v3 = (CCD_SET_STRING_ID *)operator new(0x38uLL, 0x63644356u, 256LL);
  if ( v3 )
    v4 = CCD_SET_STRING_ID::CCD_SET_STRING_ID(v3, this);
  else
    v4 = 0LL;
  ConnectedSetStr = CCD_SET_STRING_ID::GetConnectedSetStr(v4);
  v6 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&v10, ConnectedSetStr);
  v7 = v6;
  if ( v6 >= 0 )
  {
    memset(this->Buffer, 0, this->MaximumLength);
    this->Length = 0;
    RtlUnicodeStringCopy(this, &v10, v9);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10.Buffer);
    v10 = 0LL;
    if ( v4 )
      CCD_SET_STRING_ID::`scalar deleting destructor'(v4);
  }
  else
  {
    WdLogSingleEntry1(2LL, v6);
    WdLogGlobalForLineNumber = 438;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"_CcdCreateKeyFromSetIdStr failed: (Status = 0x%I64x)",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v7;
}
