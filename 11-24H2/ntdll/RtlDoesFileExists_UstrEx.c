/*
 * XREFs of RtlDoesFileExists_UstrEx @ 0x180076D70
 * Callers:
 *     RtlDoesFileExists_UEx @ 0x180076D10 (RtlDoesFileExists_UEx.c)
 *     RtlDosSearchPath_Ustr @ 0x180076EC0 (RtlDosSearchPath_Ustr.c)
 *     sxsisol_RespectDotLocal @ 0x18010BDCC (sxsisol_RespectDotLocal.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180059C40 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlReleaseRelativeName @ 0x180077830 (RtlReleaseRelativeName.c)
 *     ZwQueryAttributesFile @ 0x180162430 (ZwQueryAttributesFile.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

bool __fastcall RtlDoesFileExists_UstrEx(unsigned __int16 *a1, char a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rdi
  int AttributesFile; // ebx
  __int128 v7; // [rsp+40h] [rbp-39h] BYREF
  __int128 v8; // [rsp+50h] [rbp-29h] BYREF
  __int128 v9; // [rsp+60h] [rbp-19h]
  _DWORD v10[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v11; // [rsp+78h] [rbp-1h]
  __int128 *v12; // [rsp+80h] [rbp+7h]
  int v13; // [rsp+88h] [rbp+Fh]
  int v14; // [rsp+8Ch] [rbp+13h]
  __int128 v15; // [rsp+90h] [rbp+17h]
  _OWORD v16[2]; // [rsp+A0h] [rbp+27h] BYREF
  __int64 v17; // [rsp+C0h] [rbp+47h]

  v2 = 0LL;
  v10[1] = 0;
  v14 = 0;
  v17 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  memset(v16, 0, sizeof(v16));
  if ( (int)RtlpDosPathNameToRelativeNtPathName(2, a1, 0LL, (unsigned __int16 *)&v7, 0LL, 0LL, (__int64)&v8) < 0 )
    return 0;
  v4 = *((_QWORD *)&v7 + 1);
  if ( (_WORD)v8 )
  {
    v2 = v9;
    v7 = v8;
  }
  else
  {
    *(_QWORD *)&v9 = 0LL;
  }
  v10[0] = 48;
  v12 = &v7;
  v11 = v2;
  v13 = 64;
  v15 = 0LL;
  AttributesFile = ZwQueryAttributesFile(v10, v16);
  RtlReleaseRelativeName(&v8);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  if ( AttributesFile >= 0 )
    return 1;
  return (AttributesFile == -1073741757 || AttributesFile == -1073741790) && a2 != 0;
}
