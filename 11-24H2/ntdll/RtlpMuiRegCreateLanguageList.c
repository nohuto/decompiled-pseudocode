/*
 * XREFs of RtlpMuiRegCreateLanguageList @ 0x1800CA3B0
 * Callers:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180013360 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpQueryDefaultUILanguage @ 0x180015F40 (RtlpQueryDefaultUILanguage.c)
 *     RtlpSetProcUserMachineLangList @ 0x180016B90 (RtlpSetProcUserMachineLangList.c)
 *     InitializeTEBUserLangList @ 0x180016D00 (InitializeTEBUserLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x1800173A0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpInitializeUserList @ 0x1800C87E0 (RtlpInitializeUserList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800C8B80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x1800C9BA0 (RtlpLoadUserUIByPolicy.c)
 *     RtlpMuiRegDupLanguageList @ 0x1800C9DCC (RtlpMuiRegDupLanguageList.c)
 *     RtlGetSystemPreferredUILanguages @ 0x1800C9E60 (RtlGetSystemPreferredUILanguages.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180101BA0 (RtlpLoadMachineUIByPolicy.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 */

_WORD *__fastcall RtlpMuiRegCreateLanguageList(int a1, char a2, __int64 a3)
{
  __int64 v3; // rax
  __int16 v6; // di
  _WORD *result; // rax
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
  result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v8);
  if ( !result )
    return 0LL;
  *(_DWORD *)result = v8;
  result[2] = 0;
  *((_QWORD *)result + 3) = result + 32;
  *((_DWORD *)result + 10) = 0;
  result[3] = v6;
  *((_BYTE *)result + 8) = a2;
  *((_QWORD *)result + 2) = a3;
  return result;
}
