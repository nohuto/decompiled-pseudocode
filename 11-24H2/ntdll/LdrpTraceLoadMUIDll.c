/*
 * XREFs of LdrpTraceLoadMUIDll @ 0x18009540C
 * Callers:
 *     LdrResFallbackLangList @ 0x180011F70 (LdrResFallbackLangList.c)
 *     LdrResSearchResource @ 0x18002D200 (LdrResSearchResource.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180075B00 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpAccessResourceData @ 0x180077950 (LdrpAccessResourceData.c)
 *     LdrpResFileSize @ 0x180095274 (LdrpResFileSize.c)
 *     LdrpResGetMappingSize @ 0x180095500 (LdrpResGetMappingSize.c)
 *     RtlpResUltimateFallbackInfo @ 0x18009582C (RtlpResUltimateFallbackInfo.c)
 *     LdrResGetRCConfig @ 0x1800959F0 (LdrResGetRCConfig.c)
 *     LdrpResSearchResourceMappedFile @ 0x180096010 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800969C0 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetResourceDirectory @ 0x180097F40 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceHandle @ 0x18009856C (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFilePath @ 0x1800E2638 (LdrpResValidateFilePath.c)
 *     LdrFindResource_U @ 0x1800E2990 (LdrFindResource_U.c)
 *     LdrFindResourceEx_U @ 0x1800F34B0 (LdrFindResourceEx_U.c)
 *     LdrResRelease @ 0x180106520 (LdrResRelease.c)
 *     LdrpResMapFile @ 0x180109564 (LdrpResMapFile.c)
 *     LdrpMUIEtwOutput @ 0x1801107C8 (LdrpMUIEtwOutput.c)
 * Callees:
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall LdrpTraceLoadMUIDll(unsigned __int16 *a1, unsigned int a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int16 v4; // ax
  unsigned int v5; // edi
  _OWORD Fields[3]; // [rsp+20h] [rbp-278h] BYREF
  _WORD v8[272]; // [rsp+50h] [rbp-248h] BYREF

  v2 = a2;
  memset_thunk_772440563353939046(v8, 0, 0x218uLL);
  v4 = *a1 & 0xFFFE;
  memset(Fields, 0, sizeof(Fields));
  if ( v4 >= 0x212u )
    v5 = 265;
  else
    v5 = *a1 >> 1;
  memmove(v8, *((const void **)a1 + 1), 2LL * v5);
  v8[v5] = 0;
  BYTE4(Fields[0]) = 0;
  LOWORD(Fields[0]) = 2 * (v5 + 25);
  *(GUID *)((char *)&Fields[1] + 8) = LoadMUIDllGuid;
  return NtTraceEvent((HANDLE)v2, 0x100u, 0x30u, Fields);
}
