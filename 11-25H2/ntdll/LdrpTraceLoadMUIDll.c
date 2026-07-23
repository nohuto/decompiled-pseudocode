/*
 * XREFs of LdrpTraceLoadMUIDll @ 0x1800A3730
 * Callers:
 *     LdrResSearchResource @ 0x180003A20 (LdrResSearchResource.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001BB80 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpAccessResourceData @ 0x18001D9D0 (LdrpAccessResourceData.c)
 *     RtlpResUltimateFallbackInfo @ 0x180089920 (RtlpResUltimateFallbackInfo.c)
 *     LdrResFallbackLangList @ 0x18008ADF0 (LdrResFallbackLangList.c)
 *     LdrpResFileSize @ 0x1800A3598 (LdrpResFileSize.c)
 *     LdrpResGetMappingSize @ 0x1800A3820 (LdrpResGetMappingSize.c)
 *     LdrResGetRCConfig @ 0x1800A3B50 (LdrResGetRCConfig.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A4170 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800A4B20 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetResourceDirectory @ 0x1800A60A0 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceHandle @ 0x1800A66CC (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFilePath @ 0x1800E65B8 (LdrpResValidateFilePath.c)
 *     LdrFindResource_U @ 0x1800E93C0 (LdrFindResource_U.c)
 *     LdrFindResourceEx_U @ 0x1800FA500 (LdrFindResourceEx_U.c)
 *     LdrResRelease @ 0x18010E1A0 (LdrResRelease.c)
 *     LdrpResMapFile @ 0x1801110E4 (LdrpResMapFile.c)
 *     LdrpMUIEtwOutput @ 0x180118730 (LdrpMUIEtwOutput.c)
 * Callees:
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
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
