/*
 * XREFs of AdtpBuildStringListString @ 0x140AB7404
 * Callers:
 *     AdtpPackageParameters @ 0x140448568 (AdtpPackageParameters.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall AdtpBuildStringListString(
        unsigned int *a1,
        __int64 a2,
        wchar_t **a3,
        __int64 a4,
        _DWORD *a5,
        char *a6)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  unsigned __int16 *v10; // rcx
  int v11; // eax
  unsigned int v13; // edi
  __int64 v14; // rax
  wchar_t *Pool2; // rbp
  char v16; // cl
  unsigned int v17; // r14d
  unsigned __int16 Length; // ax
  __int64 v19; // rdi
  const UNICODE_STRING *v20; // rdi
  UNICODE_STRING Destination; // [rsp+20h] [rbp-28h] BYREF

  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v8 = 2;
  if ( a1 && *a1 )
  {
    v9 = *a1;
    v10 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 8LL);
    do
    {
      v11 = *v10;
      v10 += 12;
      v8 += v11 + 8;
      --v9;
    }
    while ( v9 );
    if ( v8 > 0xFFFF )
      return 3221225485LL;
    v13 = v8 >> 1;
    v14 = (unsigned int)*a5;
    if ( (unsigned int)v14 + v13 >= 0x400 )
    {
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 2LL * v13, 0x6B416553u);
      if ( !Pool2 )
        return 3221225495LL;
      v16 = 1;
    }
    else
    {
      *a5 = v14 + v13;
      Pool2 = (wchar_t *)(a4 + 2 * v14);
      v16 = 0;
    }
    v17 = 0;
    *a6 = v16;
    Length = 0;
    Destination.MaximumLength = 2 * v13;
    v19 = *((_QWORD *)a1 + 1);
    Destination.Length = 0;
    Destination.Buffer = Pool2;
    if ( *a1 )
    {
      v20 = (const UNICODE_STRING *)(v19 + 8);
      do
      {
        RtlAppendUnicodeToString(&Destination, L"\r\n\t\t");
        RtlAppendUnicodeStringToString(&Destination, v20);
        ++v17;
        v20 = (const UNICODE_STRING *)((char *)v20 + 24);
      }
      while ( v17 < *a1 );
      Length = Destination.Length;
    }
    if ( a3 )
    {
      *a3 = Pool2;
      a3[1] = (wchar_t *)((unsigned int)Length + 2);
    }
    else
    {
      MEMORY[0] = Destination;
    }
  }
  else if ( a3 )
  {
    a3[1] = (wchar_t *)4;
    *a3 = (wchar_t *)byte_14001DF78;
  }
  return 0LL;
}
