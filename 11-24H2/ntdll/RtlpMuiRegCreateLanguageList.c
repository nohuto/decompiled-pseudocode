/*
 * XREFs of RtlpMuiRegCreateLanguageList @ 0x18007E2D0
 * Callers:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800322A0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpQueryDefaultUILanguage @ 0x180035CC0 (RtlpQueryDefaultUILanguage.c)
 *     RtlpSetProcUserMachineLangList @ 0x180036910 (RtlpSetProcUserMachineLangList.c)
 *     InitializeTEBUserLangList @ 0x180036A80 (InitializeTEBUserLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180037120 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpMuiRegDupLanguageList @ 0x18007D0E0 (RtlpMuiRegDupLanguageList.c)
 *     RtlpInitializeUserList @ 0x18007D9E0 (RtlpInitializeUserList.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007DD80 (RtlGetSystemPreferredUILanguages.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18007EF80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x18007FDF0 (RtlpLoadUserUIByPolicy.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180106C70 (RtlpLoadMachineUIByPolicy.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpMuiRegCreateLanguageList(int a1, char a2, __int64 a3)
{
  __int64 v3; // rax
  __int16 v6; // di
  __int64 result; // rax
  unsigned int v8; // ebx

  v3 = 4LL;
  if ( a1 >= 1 )
    v3 = (unsigned int)a1;
  v6 = v3;
  if ( (unsigned __int64)(6 * v3) > 0xFFFFFFFF )
    return 0LL;
  v8 = 6 * v3 + 64;
  if ( v8 < 0x40 )
    return 0LL;
  result = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v8);
  if ( !result )
    return 0LL;
  *(_DWORD *)result = v8;
  *(_WORD *)(result + 4) = 0;
  *(_QWORD *)(result + 24) = result + 64;
  *(_DWORD *)(result + 40) = 0;
  *(_WORD *)(result + 6) = v6;
  *(_BYTE *)(result + 8) = a2;
  *(_QWORD *)(result + 16) = a3;
  return result;
}
