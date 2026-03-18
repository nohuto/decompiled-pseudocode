/*
 * XREFs of PiFindDevInstMatch @ 0x1409B1728
 * Callers:
 *     PiProcessDriverInstance @ 0x1409B1BC0 (PiProcessDriverInstance.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x14042CC40 (RtlStringCchPrintfExW.c)
 *     ZwQueryValueKey @ 0x14069B420 (ZwQueryValueKey.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  int RegistryValue; // eax
  unsigned __int16 *Pool2; // rdi
  wchar_t *v12; // r14
  unsigned int i; // esi
  __int64 v14; // rax
  NTSTATUS v15; // eax
  unsigned int v16; // edx
  wchar_t *v17; // r8
  wchar_t *v18; // rcx
  wchar_t *v19; // rdx
  unsigned __int16 v20; // ax
  UNICODE_STRING v21; // xmm0
  wchar_t *v23; // rcx
  __int64 v24; // [rsp+30h] [rbp-48h]
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
  v9 = 0;
  String1 = 0LL;
  RegistryValue = IopGetRegistryValue(a1);
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue != -1073741772 )
      return (unsigned int)RegistryValue;
    return v6;
  }
  if ( MEMORY[4] == 4 && MEMORY[0xC] >= 4u )
  {
    v9 = *(_DWORD *)MEMORY[8];
    *a3 = v9;
  }
  ExFreePoolWithTag(0LL, 0);
  Pool2 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225626LL;
  v12 = (wchar_t *)ExAllocatePool2(0x100uLL);
  if ( !v12 )
  {
    v23 = Pool2;
LABEL_25:
    ExFreePoolWithTag(v23, 0);
    return 3221225626LL;
  }
  for ( i = 0; i < v9; ++i )
  {
    LODWORD(v24) = i;
    ppszDestEnd = v12;
    RtlStringCchPrintfExW(v12, 0xAuLL, &ppszDestEnd, 0LL, 0, L"%u", v24);
    ValueName.MaximumLength = 20;
    v14 = ppszDestEnd - v12;
    if ( (_DWORD)v14 == -1 )
      ValueName.Length = 20;
    else
      ValueName.Length = 2 * v14;
    ValueName.Buffer = v12;
    v15 = ZwQueryValueKey(a1, &ValueName, KeyValueFullInformation, Pool2, Length, &ResultLength);
    if ( v15 < 0 )
    {
      if ( v15 == -2147483643 || v15 == -1073741789 )
      {
        ExFreePoolWithTag(Pool2, 0);
        Length = ResultLength;
        Pool2 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
        {
          v23 = v12;
          goto LABEL_25;
        }
        --i;
      }
    }
    else if ( *((_DWORD *)Pool2 + 1) == 1 )
    {
      v16 = *((_DWORD *)Pool2 + 3);
      if ( v16 > 2 )
      {
        v17 = (unsigned __int16 *)((char *)Pool2 + *((unsigned int *)Pool2 + 2));
        v18 = v17;
        v19 = &v17[(unsigned __int64)v16 >> 1];
        if ( v17 < v19 )
        {
          do
          {
            if ( !*v18 )
              break;
            ++v18;
          }
          while ( v18 < v19 );
        }
        v20 = Pool2[6];
        String1.Length = (_WORD)v18 - (_WORD)v17;
        String1.Buffer = v17;
        String1.MaximumLength = v20;
        if ( RtlEqualUnicodeString(&String1, a2, 1u) )
        {
          v21 = ValueName;
          *(_DWORD *)v5 = i;
          *(UNICODE_STRING *)a4 = v21;
          break;
        }
      }
    }
  }
  ExFreePoolWithTag(Pool2, 0);
  if ( !*(_WORD *)a4 )
    ExFreePoolWithTag(v12, 0);
  return 0LL;
}
