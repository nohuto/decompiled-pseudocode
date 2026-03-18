/*
 * XREFs of AslStringUpcaseToMultiByteN @ 0x140828E8C
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x1408253D8 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14082BC3C (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     RtlUpcaseUnicodeString @ 0x140827CF0 (RtlUpcaseUnicodeString.c)
 *     AslFree @ 0x14082AD34 (AslFree.c)
 *     AslAlloc @ 0x14082B9C0 (AslAlloc.c)
 */

__int64 __fastcall AslStringUpcaseToMultiByteN(__int64 a1, __int64 a2, const WCHAR *a3)
{
  unsigned __int16 MaximumLength; // bx
  __int64 v5; // rcx
  __int64 v6; // rcx
  NTSTATUS v7; // ebx
  __int64 v8; // rax
  wchar_t *Buffer; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  UNICODE_STRING v13; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  *(_QWORD *)&v13.Length = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  MaximumLength = DestinationString.MaximumLength;
  v13.Buffer = (wchar_t *)AslAlloc(v5, DestinationString.MaximumLength);
  if ( v13.Buffer )
  {
    v13.MaximumLength = MaximumLength;
    v13.Length = 0;
    v7 = RtlUpcaseUnicodeString(&v13, &DestinationString, 0);
    if ( v7 < 0 )
    {
      AslLogCallPrintf(1LL);
    }
    else
    {
      v8 = 0LL;
      Buffer = v13.Buffer;
      v10 = 0LL;
      v11 = (unsigned __int64)v13.Length >> 1;
      while ( 1 )
      {
        if ( v10 >= v11 )
        {
          *(_BYTE *)(a1 + v8) = 0;
          v7 = 0;
          goto LABEL_9;
        }
        v6 = Buffer[v10];
        *(_BYTE *)(a1 + v8) = v6;
        if ( (unsigned __int64)++v8 >= 0x104 )
          break;
        LOWORD(v6) = BYTE1(v6);
        if ( (_BYTE)v6 )
        {
          *(_BYTE *)(v8 + a1) = v6;
          if ( (unsigned __int64)++v8 >= 0x104 )
            break;
        }
        ++v10;
      }
      v7 = -1073741789;
      AslLogCallPrintf(1LL);
    }
  }
  else
  {
    v7 = -1073741801;
    AslLogCallPrintf(1LL);
  }
LABEL_9:
  AslFree(v6);
  return (unsigned int)v7;
}
