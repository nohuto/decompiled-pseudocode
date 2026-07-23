/*
 * XREFs of PiFindDevInstMatch @ 0x1409B6CA8
 * Callers:
 *     PiProcessDriverInstance @ 0x1409B69D0 (PiProcessDriverInstance.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140418B60 (RtlStringCchPrintfExW.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiFindDevInstMatch(
        void *a1,
        const UNICODE_STRING *a2,
        unsigned int *a3,
        __int64 a4,
        NTSTRSAFE_PWSTR ppszDestEnd)
{
  NTSTRSAFE_PWSTR v5; // r13
  unsigned int v6; // ebx
  unsigned int v9; // r12d
  NTSTATUS RegistryValue; // eax
  PVOID v11; // rcx
  unsigned __int16 *Pool2; // rdi
  wchar_t *v13; // r14
  unsigned int i; // esi
  __int64 v15; // rax
  NTSTATUS v16; // eax
  unsigned int v17; // edx
  wchar_t *v18; // r8
  wchar_t *v19; // rcx
  wchar_t *v20; // rdx
  unsigned __int16 v21; // ax
  UNICODE_STRING v22; // xmm0
  wchar_t *v24; // rcx
  __int64 v25; // [rsp+30h] [rbp-48h]
  PVOID P; // [rsp+40h] [rbp-38h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-30h] BYREF
  UNICODE_STRING String1; // [rsp+58h] [rbp-20h] BYREF
  ULONG ResultLength; // [rsp+D0h] [rbp+58h] BYREF
  ULONG Length; // [rsp+D8h] [rbp+60h]

  v5 = ppszDestEnd;
  v6 = 0;
  *(_WORD *)a4 = 0;
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_DWORD *)v5 = -1;
  *a3 = 0;
  ResultLength = 0;
  Length = 256;
  ValueName = 0LL;
  P = 0LL;
  v9 = 0;
  String1 = 0LL;
  RegistryValue = IopGetRegistryValue(a1, L"Count", 0, &P);
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue != -1073741772 )
      return (unsigned int)RegistryValue;
    return v6;
  }
  v11 = P;
  if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
  {
    v9 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    *a3 = v9;
  }
  ExFreePoolWithTag(v11, 0);
  Pool2 = (unsigned __int16 *)ExAllocatePool2(0x100uLL, 0x100uLL, 0x20207050u);
  if ( !Pool2 )
    return 3221225626LL;
  v13 = (wchar_t *)ExAllocatePool2(0x100uLL, 0x14uLL, 0x20207050u);
  if ( !v13 )
  {
    v24 = Pool2;
LABEL_25:
    ExFreePoolWithTag(v24, 0);
    return 3221225626LL;
  }
  for ( i = 0; i < v9; ++i )
  {
    LODWORD(v25) = i;
    ppszDestEnd = v13;
    RtlStringCchPrintfExW(v13, 0xAuLL, &ppszDestEnd, 0LL, 0, L"%u", v25);
    ValueName.MaximumLength = 20;
    v15 = ppszDestEnd - v13;
    if ( (_DWORD)v15 == -1 )
      ValueName.Length = 20;
    else
      ValueName.Length = 2 * v15;
    ValueName.Buffer = v13;
    v16 = ZwQueryValueKey(a1, &ValueName, KeyValueFullInformation, Pool2, Length, &ResultLength);
    if ( v16 < 0 )
    {
      if ( v16 == -2147483643 || v16 == -1073741789 )
      {
        ExFreePoolWithTag(Pool2, 0);
        Length = ResultLength;
        Pool2 = (unsigned __int16 *)ExAllocatePool2(0x100uLL, ResultLength, 0x20207050u);
        if ( !Pool2 )
        {
          v24 = v13;
          goto LABEL_25;
        }
        --i;
      }
    }
    else if ( *((_DWORD *)Pool2 + 1) == 1 )
    {
      v17 = *((_DWORD *)Pool2 + 3);
      if ( v17 > 2 )
      {
        v18 = (unsigned __int16 *)((char *)Pool2 + *((unsigned int *)Pool2 + 2));
        v19 = v18;
        v20 = &v18[(unsigned __int64)v17 >> 1];
        if ( v18 < v20 )
        {
          do
          {
            if ( !*v19 )
              break;
            ++v19;
          }
          while ( v19 < v20 );
        }
        v21 = Pool2[6];
        String1.Length = (_WORD)v19 - (_WORD)v18;
        String1.Buffer = v18;
        String1.MaximumLength = v21;
        if ( RtlEqualUnicodeString(&String1, a2, 1u) )
        {
          v22 = ValueName;
          *(_DWORD *)v5 = i;
          *(UNICODE_STRING *)a4 = v22;
          break;
        }
      }
    }
  }
  ExFreePoolWithTag(Pool2, 0);
  if ( !*(_WORD *)a4 )
    ExFreePoolWithTag(v13, 0);
  return 0LL;
}
