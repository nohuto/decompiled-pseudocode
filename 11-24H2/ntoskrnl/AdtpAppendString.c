/*
 * XREFs of AdtpAppendString @ 0x140811740
 * Callers:
 *     AdtpAppendZString @ 0x1408118F4 (AdtpAppendZString.c)
 *     AdtpBuildObjectTypeStrings @ 0x140AB2284 (AdtpBuildObjectTypeStrings.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpAppendString(__int64 a1, __int64 a2, UNICODE_STRING *a3, _DWORD *a4)
{
  __int64 v4; // rdi
  __int64 result; // rax
  wchar_t *Buffer; // r15
  unsigned int v9; // ebx
  unsigned __int16 Length; // si
  UNICODE_STRING *v11; // rcx
  unsigned __int16 v12; // dx
  bool v13; // zf
  unsigned __int16 v14; // ax
  int v15; // eax
  unsigned int v16; // r12d
  void *v17; // rcx
  const void *v18; // rdx
  UNICODE_STRING Source; // [rsp+20h] [rbp-48h] BYREF
  void *Pool2; // [rsp+80h] [rbp+18h]

  v4 = (unsigned int)*a4;
  Source = *a3;
  if ( (_DWORD)v4 )
    return 0LL;
  Buffer = Source.Buffer;
  v9 = 0;
  Length = Source.Length;
  while ( Length )
  {
    if ( *(_BYTE *)(v4 + a2) )
    {
      v11 = (UNICODE_STRING *)(a1 + 16 * v4);
      if ( v11->Length != 0xFFFE )
      {
        v12 = v11->MaximumLength - v11->Length;
        v13 = *Buffer == 37;
        Source = 0LL;
        if ( !v13 || v12 >= Length )
        {
          Source.Buffer = Buffer;
          v14 = Length;
          if ( v12 < Length )
            v14 = v12;
          Source.Length = v14;
          Length -= v14;
          Buffer = (wchar_t *)((char *)Buffer + v14);
          RtlAppendUnicodeStringToString(v11, &Source);
        }
      }
    }
    if ( !Length )
      break;
    v15 = *(unsigned __int16 *)(a1 + 16 * v4);
    if ( (unsigned __int16)v15 >= 0xFFFEu || *Buffer == 37 && (unsigned int)Length + v15 >= 0xFFFE )
      break;
    v16 = Length;
    if ( (unsigned int)*(unsigned __int16 *)(a1 + 16 * v4 + 2) + 1024 > Length )
      v16 = *(unsigned __int16 *)(a1 + 16 * v4 + 2) + 1024;
    if ( v16 >= 0xFFFE )
      v16 = 65534;
    Pool2 = (void *)ExAllocatePool2(0x100uLL, v16, 0x6B416553u);
    v17 = Pool2;
    if ( !Pool2 )
    {
      v9 = -1073741801;
      break;
    }
    v18 = *(const void **)(a1 + 16 * v4 + 8);
    if ( v18 )
    {
      memmove(Pool2, v18, *(unsigned __int16 *)(a1 + 16 * v4));
      if ( *(_BYTE *)(v4 + a2) )
        ExFreePoolWithTag(*(PVOID *)(a1 + 16 * v4 + 8), 0);
      v17 = Pool2;
    }
    *(_QWORD *)(a1 + 16 * v4 + 8) = v17;
    *(_WORD *)(a1 + 16 * v4 + 2) = v16;
    *(_BYTE *)(v4 + a2) = 1;
  }
  result = v9;
  *a4 = 0;
  return result;
}
