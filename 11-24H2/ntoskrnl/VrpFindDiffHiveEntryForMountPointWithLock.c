/*
 * XREFs of VrpFindDiffHiveEntryForMountPointWithLock @ 0x14083F834
 * Callers:
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14092CA0C (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpFindDiffHiveEntryForMountPoint @ 0x14092CD9C (VrpFindDiffHiveEntryForMountPoint.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall VrpFindDiffHiveEntryForMountPointWithLock(PCUNICODE_STRING String1)
{
  __int64 v1; // rdi
  wchar_t *Buffer; // rbx
  unsigned __int64 v3; // rax
  __int64 v5; // rsi
  wchar_t *v6; // rbp
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 v9; // rbx
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF
  WCHAR v12; // [rsp+50h] [rbp+8h]
  __int64 v13; // [rsp+50h] [rbp+8h]

  v1 = 0LL;
  Buffer = String1->Buffer;
  v3 = (unsigned __int64)String1->Length >> 1;
  String2 = 0LL;
  v5 = 314159LL;
  v6 = &Buffer[v3];
  while ( Buffer < v6 )
  {
    v12 = RtlUpcaseUnicodeChar(*Buffer++);
    v5 = HIBYTE(v12) + 37 * ((unsigned __int8)v12 + 37 * v5);
  }
  v7 = -1LL << (dword_140EF00F4 & 0x1F);
  v8 = v5 & v7;
  if ( !((unsigned int)dword_140EF00F4 >> 5) )
    goto LABEL_12;
  v13 = v5 & v7;
  v9 = qword_140EF00F8
     + 8LL
     * ((37
       * (BYTE6(v13)
        + 37
        * (BYTE5(v13)
         + 37
         * (BYTE4(v13)
          + 37 * (BYTE3(v13) + 37 * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v8 + 11623883)))))))
       + HIBYTE(v13)) & (((unsigned int)dword_140EF00F4 >> 5) - 1));
  do
  {
    v9 = *(_QWORD *)v9;
    if ( (v9 & 1) != 0 )
      goto LABEL_12;
  }
  while ( v8 != (v7 & *(_QWORD *)(v9 + 8)) );
LABEL_8:
  while ( v9 )
  {
    String2.Buffer = (wchar_t *)(v9 + 68);
    String2.Length = *(_WORD *)(v9 + 64);
    String2.MaximumLength = String2.Length;
    if ( RtlEqualUnicodeString(String1, &String2, 1u) )
      return v9;
    while ( 1 )
    {
      v9 = *(_QWORD *)v9;
      if ( (v9 & 1) != 0 )
        break;
      if ( (v5 & (-1LL << (dword_140EF00F4 & 0x1F))) == ((-1LL << (dword_140EF00F4 & 0x1F)) & *(_QWORD *)(v9 + 8)) )
        goto LABEL_8;
    }
LABEL_12:
    v9 = 0LL;
  }
  return v1;
}
