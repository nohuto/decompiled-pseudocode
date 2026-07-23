/*
 * XREFs of RtlpDetermineDosPathNameType4 @ 0x1800A7194
 * Callers:
 *     RtlpGetLengthWithoutLastPathElement @ 0x1800A7088 (RtlpGetLengthWithoutLastPathElement.c)
 * Callees:
 *     RtlDetermineDosPathNameType_Ustr @ 0x1800944C0 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlPrefixUnicodeString @ 0x1800A64C0 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1800A7500 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall RtlpDetermineDosPathNameType4(__int64 a1, _UNICODE_STRING *a2, _DWORD *a3, int *a4)
{
  unsigned int v4; // ebx
  char v7; // r14
  char v8; // r12
  bool v9; // r15
  char v10; // bp
  int v12; // eax
  bool v13; // zf
  _DWORD *v14; // r8
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  _QWORD v18[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !a2 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  v12 = RtlDetermineDosPathNameType_Ustr(&a2->Length);
  v13 = a2->Length == 4;
  *v14 = v12;
  if ( v13 )
    goto LABEL_26;
  if ( RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtRoot, a2, 1u)
    || RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtRootSlash, a2, 1u) )
  {
    v10 = 1;
  }
  else if ( !RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpWin32NtRootSlash, a2, 1u) )
  {
    return v4;
  }
  v7 = 1;
  if ( !RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtUncRoot, a2, 1u)
    && !RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtUncRootSlash, a2, 1u) )
  {
    if ( RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpWin32NtUncRootSlash, a2, 1u) )
      goto LABEL_17;
    if ( !v10 )
    {
      v16 = (__int64)(a2->Buffer + 4);
      v18[0] = *(_QWORD *)&a2->Length;
      v18[1] = v16;
      LOWORD(v18[0]) -= 8;
      WORD1(v18[0]) -= 8;
      v17 = RtlDetermineDosPathNameType_Ustr((unsigned __int16 *)v18);
      v9 = v17 == 2;
      if ( v17 != 2 )
        *a4 |= 0x200u;
      goto LABEL_18;
    }
LABEL_26:
    *a4 |= 0x400u;
    v15 = *a4;
    if ( !v7 )
      goto LABEL_19;
    goto LABEL_18;
  }
  v10 = 1;
LABEL_17:
  v8 = 1;
  if ( v10 )
    goto LABEL_26;
LABEL_18:
  *a4 |= 0x10u;
  v15 = *a4;
LABEL_19:
  if ( v8 )
  {
    v15 |= 0x40u;
    *a4 = v15;
  }
  if ( v9 )
    *a4 = v15 | 0x20;
  return v4;
}
