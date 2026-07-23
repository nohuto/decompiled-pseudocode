/*
 * XREFs of RtlIsNameLegalDOS8Dot3 @ 0x180143C60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsUtf8Process @ 0x18008D5B0 (RtlpIsUtf8Process.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x18013A680 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

BOOLEAN __stdcall RtlIsNameLegalDOS8Dot3(PUNICODE_STRING Name, POEM_STRING OemName, PBOOLEAN NameContainsSpaces)
{
  char v3; // bp
  BOOLEAN v4; // di
  bool v5; // r15
  __int64 v6; // r14
  __int64 v9; // rdx
  _UNICODE_STRING *v10; // rcx
  char **p_Buffer; // r10
  unsigned int Length; // ebx
  __int64 v13; // r8
  unsigned int i; // edx
  int v16; // eax
  signed __int32 v17[8]; // [rsp+0h] [rbp-88h] BYREF
  __int128 v18; // [rsp+20h] [rbp-68h] BYREF
  char v19; // [rsp+30h] [rbp-58h] BYREF

  v3 = 0;
  v4 = 0;
  v18 = 0LL;
  v5 = 0;
  v6 = 0LL;
  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v17, 0);
    v6 = qword_1801CC028;
    v5 = CodePageTable.DBCSCodePage != 0;
  }
  if ( v10->Length > 0x18u )
    return 0;
  if ( !v9 )
  {
    LODWORD(v18) = 786432;
    *((_QWORD *)&v18 + 1) = &v19;
    OemName = (POEM_STRING)&v18;
  }
  if ( RtlUpcaseUnicodeStringToCountedOemString(OemName, v10, 0) < 0 )
    return 0;
  p_Buffer = &OemName->Buffer;
  if ( OemName->Length != 1 )
  {
    if ( OemName->Length != 2 || **p_Buffer != 46 || (*p_Buffer)[1] != 46 )
      goto LABEL_9;
LABEL_20:
    if ( NameContainsSpaces )
      *NameContainsSpaces = 0;
    return 1;
  }
  if ( **p_Buffer == 46 )
    goto LABEL_20;
LABEL_9:
  Length = OemName->Length;
  LOBYTE(v13) = 0;
  for ( i = 0; i < Length; ++i )
  {
    v13 = (unsigned __int8)(*p_Buffer)[i];
    if ( v5 && *(_WORD *)(v6 + 2 * v13) )
    {
      if ( !v3 && i >= 7 || i == Length - 1 )
        return 0;
      ++i;
    }
    else
    {
      if ( (unsigned __int8)v13 < 0x80u )
      {
        v16 = RtlFatIllegalTable[(unsigned __int64)(unsigned __int8)(*p_Buffer)[i] >> 5];
        if ( _bittest(&v16, v13 & 0x1F) )
          return 0;
      }
      if ( (_BYTE)v13 == 32 )
      {
        v4 = 1;
      }
      else if ( (_BYTE)v13 == 46 )
      {
        if ( v3 || !i || (*p_Buffer)[i - 1] == 32 || Length - i - 1 > 3 )
          return 0;
        v3 = 1;
      }
      if ( i >= 8 && !v3 )
        return 0;
    }
  }
  if ( (_BYTE)v13 != 32 && (_BYTE)v13 != 46 )
  {
    if ( NameContainsSpaces )
      *NameContainsSpaces = v4;
    return 1;
  }
  return 0;
}
