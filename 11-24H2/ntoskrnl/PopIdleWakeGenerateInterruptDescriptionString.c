/*
 * XREFs of PopIdleWakeGenerateInterruptDescriptionString @ 0x140A7C204
 * Callers:
 *     PopIdleWakeGenerateDescriptionString @ 0x140AA0228 (PopIdleWakeGenerateDescriptionString.c)
 * Callees:
 *     RtlUnicodeStringCat @ 0x1403DA240 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCatString @ 0x1404105C0 (RtlUnicodeStringCatString.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringCopyString @ 0x14045D760 (RtlUnicodeStringCopyString.c)
 *     MmEnumerateSystemImages @ 0x1404F8410 (MmEnumerateSystemImages.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopGenerateDeviceFriendlyName @ 0x140A7C424 (PopGenerateDeviceFriendlyName.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopIdleWakeGenerateInterruptDescriptionString(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rbx
  UNICODE_STRING *v3; // rsi
  unsigned int v6; // ebp
  unsigned int i; // edi
  __int64 v8; // rcx
  const WCHAR *v9; // rdx
  unsigned int j; // ecx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rdi
  unsigned int v15; // edx
  unsigned __int16 *v16; // r9
  __int64 v17; // rcx
  ULONG_PTR v18; // rdi
  __int64 Pool2; // rax
  unsigned int k; // edi
  PCWSTR SourceString[2]; // [rsp+20h] [rbp-68h]
  __int64 v22; // [rsp+30h] [rbp-58h] BYREF
  __int128 v23; // [rsp+38h] [rbp-50h]
  __int64 v24; // [rsp+48h] [rbp-40h]

  v2 = (unsigned int *)(a2 + 784);
  v22 = 0LL;
  v23 = 0LL;
  v24 = a2 + 784;
  v3 = (UNICODE_STRING *)(a2 + 768);
  v6 = 0;
  for ( i = 0; i < 3; ++i )
  {
    v8 = *(_QWORD *)(a1 + 8LL * i + 32);
    if ( v8 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL);
      if ( !v12 )
        return 3221225485LL;
      result = PopGenerateDeviceFriendlyName(v12, 3LL, &v2[4 * *v2 + 2]);
      if ( (int)result < 0 )
        return result;
      *((_BYTE *)v2 + *v2 + 56) = 1;
LABEL_14:
      ++*v2;
    }
    else
    {
      v9 = *(const WCHAR **)(a1 + 8LL * i + 8);
      if ( v9 )
      {
        for ( j = 0; j < 4; ++j )
        {
          *(_OWORD *)SourceString = *((_OWORD *)&PopIdleWakeNTIsrFunctions + j);
          if ( v9 == SourceString[0] )
          {
            RtlInitUnicodeString((PUNICODE_STRING)&v2[4 * *v2 + 2], SourceString[1]);
            *((_BYTE *)v2 + *v2 + 56) = 0;
            goto LABEL_14;
          }
        }
        v11 = v6++;
        *(&v22 + v11) = (__int64)v9;
      }
    }
  }
  if ( !v6
    || (result = MmEnumerateSystemImages((__int64)PopIdleWakeSystemImageCallback, (__int64)&v22), (int)result >= 0) )
  {
    v14 = 0LL;
    v15 = 0;
    if ( *v2 )
    {
      v16 = (unsigned __int16 *)(v2 + 2);
      do
      {
        v17 = v14 + 4;
        if ( !v15 )
          v17 = v14;
        v14 = v17 + *v16;
        v16 += 8;
        ++v15;
      }
      while ( v15 < *v2 );
    }
    v18 = v14 + 24;
    if ( v18 <= 0xFFFF )
    {
      Pool2 = ExAllocatePool2(0x100uLL, v18, 0x67696450u);
      v3->Buffer = (wchar_t *)Pool2;
      if ( Pool2 )
      {
        *(_BYTE *)(a2 + 760) = 1;
        v3->Length = 0;
        v3->MaximumLength = v18;
        RtlUnicodeStringCopyString(v3, L"Interrupt: ");
        for ( k = 0; k < *v2; ++k )
        {
          if ( k )
            RtlUnicodeStringCatString(v3, L", ");
          RtlUnicodeStringCat(v3, (PCUNICODE_STRING)&v2[4 * k + 2]);
        }
        return 0LL;
      }
      else
      {
        return 3221225626LL;
      }
    }
    else
    {
      return 2147483653LL;
    }
  }
  return result;
}
