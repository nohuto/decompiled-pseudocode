/*
 * XREFs of LdrpTraceLoadMUIDll @ 0x1800790FC
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18005FF20 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpAccessResourceData @ 0x180061D70 (LdrpAccessResourceData.c)
 *     LdrpResGetResourceDirectory @ 0x1800789A0 (LdrpResGetResourceDirectory.c)
 *     LdrpResFileSize @ 0x180078EC0 (LdrpResFileSize.c)
 *     LdrpResGetMappingSize @ 0x1800791F0 (LdrpResGetMappingSize.c)
 *     LdrResGetRCConfig @ 0x1800795B0 (LdrResGetRCConfig.c)
 *     LdrpResSearchResourceMappedFile @ 0x180079BD0 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x18007A580 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrResFallbackLangList @ 0x18007BF40 (LdrResFallbackLangList.c)
 *     RtlpResUltimateFallbackInfo @ 0x18007D820 (RtlpResUltimateFallbackInfo.c)
 *     LdrResSearchResource @ 0x1800983B0 (LdrResSearchResource.c)
 *     LdrpResSearchResourceHandle @ 0x1800D1ACC (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFilePath @ 0x1800E7188 (LdrpResValidateFilePath.c)
 *     LdrFindResource_U @ 0x1800E7C80 (LdrFindResource_U.c)
 *     LdrFindResourceEx_U @ 0x1800F88E0 (LdrFindResourceEx_U.c)
 *     LdrResRelease @ 0x18010BB50 (LdrResRelease.c)
 *     LdrpResMapFile @ 0x18010E614 (LdrpResMapFile.c)
 *     LdrpMUIEtwOutput @ 0x18011554C (LdrpMUIEtwOutput.c)
 * Callees:
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpTraceLoadMUIDll(unsigned __int16 *a1, unsigned int a2)
{
  __int64 v2; // rbp
  unsigned __int16 v4; // ax
  unsigned int v5; // edi
  _OWORD v7[3]; // [rsp+20h] [rbp-278h] BYREF
  _WORD v8[272]; // [rsp+50h] [rbp-248h] BYREF

  v2 = a2;
  memset_thunk_772440563353939046(v8, 0, 0x218uLL);
  v4 = *a1 & 0xFFFE;
  memset(v7, 0, sizeof(v7));
  if ( v4 >= 0x212u )
    v5 = 265;
  else
    v5 = *a1 >> 1;
  memmove(v8, *((const void **)a1 + 1), 2LL * v5);
  v8[v5] = 0;
  BYTE4(v7[0]) = 0;
  LOWORD(v7[0]) = 2 * (v5 + 25);
  *(_OWORD *)((char *)&v7[1] + 8) = LoadMUIDllGuid;
  return NtTraceEvent(v2, 256LL, 48LL, v7);
}
