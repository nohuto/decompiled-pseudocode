/*
 * XREFs of RtlpMuiRegCreateLanguageList @ 0x180089780
 * Callers:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18005AD70 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpSetProcUserMachineLangList @ 0x18005D1B0 (RtlpSetProcUserMachineLangList.c)
 *     InitializeTEBUserLangList @ 0x18005D320 (InitializeTEBUserLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18005D9C0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpInitializeUserList @ 0x180087740 (RtlpInitializeUserList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180087AE0 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x180088B20 (RtlpLoadUserUIByPolicy.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180089230 (RtlGetSystemPreferredUILanguages.c)
 *     RtlpMuiRegDupLanguageList @ 0x18008A6F8 (RtlpMuiRegDupLanguageList.c)
 *     RtlpQueryDefaultUILanguage @ 0x18008D650 (RtlpQueryDefaultUILanguage.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180109580 (RtlpLoadMachineUIByPolicy.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
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
