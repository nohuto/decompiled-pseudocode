/*
 * XREFs of RtlDoesFileExists_UstrEx @ 0x1800A2500
 * Callers:
 *     sxsisol_RespectDotLocal @ 0x1800A0C84 (sxsisol_RespectDotLocal.c)
 *     RtlDoesFileExists_UEx @ 0x1800A24A0 (RtlDoesFileExists_UEx.c)
 *     RtlDosSearchPath_Ustr @ 0x1800A2650 (RtlDosSearchPath_Ustr.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlReleaseRelativeName @ 0x1800A2FC0 (RtlReleaseRelativeName.c)
 *     ZwQueryAttributesFile @ 0x1801639C0 (ZwQueryAttributesFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

bool __fastcall RtlDoesFileExists_UstrEx(unsigned __int16 *a1, char a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  int AttributesFile; // ebx
  __int64 v6; // r9
  __int128 v8; // [rsp+40h] [rbp-39h] BYREF
  __int128 v9; // [rsp+50h] [rbp-29h] BYREF
  __int128 v10; // [rsp+60h] [rbp-19h]
  _DWORD v11[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v12; // [rsp+78h] [rbp-1h]
  __int128 *v13; // [rsp+80h] [rbp+7h]
  int v14; // [rsp+88h] [rbp+Fh]
  int v15; // [rsp+8Ch] [rbp+13h]
  __int128 v16; // [rsp+90h] [rbp+17h]
  _OWORD v17[2]; // [rsp+A0h] [rbp+27h] BYREF
  __int64 v18; // [rsp+C0h] [rbp+47h]

  v2 = 0LL;
  v11[1] = 0;
  v15 = 0;
  v18 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  memset(v17, 0, sizeof(v17));
  if ( (int)RtlpDosPathNameToRelativeNtPathName(2, a1, 0LL, (unsigned __int16 *)&v8, 0LL, 0LL, (__int64)&v9) < 0 )
    return 0;
  v4 = *((_QWORD *)&v8 + 1);
  if ( (_WORD)v9 )
  {
    v2 = v10;
    v8 = v9;
  }
  else
  {
    *(_QWORD *)&v10 = 0LL;
  }
  v11[0] = 48;
  v13 = &v8;
  v12 = v2;
  v14 = 64;
  v16 = 0LL;
  AttributesFile = ZwQueryAttributesFile(v11, v17);
  RtlReleaseRelativeName(&v9);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4, v6);
  if ( AttributesFile >= 0 )
    return 1;
  return (AttributesFile == -1073741757 || AttributesFile == -1073741790) && a2 != 0;
}
