/*
 * XREFs of _CcdRetrieveSetIdFromRegistry @ 0x140340478
 * Callers:
 *     ?GetSetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x14033E82C (-GetSetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x14033F0C8 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     _CcdLazyRetrieveSetIdFromRegistry @ 0x14033F488 (_CcdLazyRetrieveSetIdFromRegistry.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x14031B404 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     _CcdRetrieveValueFromRegistry @ 0x1403405FC (_CcdRetrieveValueFromRegistry.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x14034086C (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x140340D4C (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CcdRetrieveSetIdFromRegistry(HANDLE KeyHandle, const WCHAR *a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // edi
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v6 = CcdRetrieveValueFromRegistry(KeyHandle, &DestinationString);
  v7 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry4(2LL, v6, KeyHandle, a2, a3);
    WdLogGlobalForLineNumber = 672;
  }
  else
  {
    WdLogSingleEntry4(2LL, MEMORY[4], KeyHandle, a2, a3);
    WdLogGlobalForLineNumber = 680;
    v7 = -1073741788;
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
  return v7;
}
