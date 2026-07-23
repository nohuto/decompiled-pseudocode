/*
 * XREFs of RtlDoesFileExists_UEx @ 0x1800935F0
 * Callers:
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180003A80 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlDosSearchPath_U @ 0x180004710 (RtlDosSearchPath_U.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x180092FD0 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlDoesFileExists_U @ 0x180105220 (RtlDoesFileExists_U.c)
 *     RtlpCheckDeviceName @ 0x18010F840 (RtlpCheckDeviceName.c)
 * Callees:
 *     RtlDoesFileExists_UstrEx @ 0x180093650 (RtlDoesFileExists_UstrEx.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 */

char __fastcall RtlDoesFileExists_UEx(const wchar_t *a1, __int64 a2)
{
  char v2; // bl
  size_t v3; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = 0LL;
  v2 = a2;
  v5[1] = a1;
  if ( !a1 )
    goto LABEL_4;
  v3 = wcslen(a1);
  if ( v3 <= 0x7FFE )
  {
    LOWORD(v5[0]) = 2 * v3;
    WORD1(v5[0]) = 2 * v3 + 2;
LABEL_4:
    LOBYTE(a2) = v2;
    return RtlDoesFileExists_UstrEx(v5, a2);
  }
  return 0;
}
