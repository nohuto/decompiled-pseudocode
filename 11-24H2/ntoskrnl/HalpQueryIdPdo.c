/*
 * XREFs of HalpQueryIdPdo @ 0x1406FCA90
 * Callers:
 *     HalpDispatchPnp @ 0x140A73220 (HalpDispatchPnp.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall HalpQueryIdPdo(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rcx
  int v5; // edx
  const wchar_t *v6; // rdi
  size_t v7; // rbx
  int v8; // ecx
  int v9; // ecx
  __int64 result; // rax
  _WORD *Pool2; // rax
  _WORD *v12; // rsi

  v3 = *(_QWORD *)(a1 + 64);
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 == 2 )
      {
        v6 = (const wchar_t *)&HalInstanceIdString;
        v7 = 4LL;
        goto LABEL_12;
      }
      return 3221225659LL;
    }
  }
  v8 = *(_DWORD *)(v3 + 32) - 129;
  if ( v8 )
  {
    v9 = v8 - 2;
    if ( v9 )
    {
      if ( v9 != 1 )
        return 3221225659LL;
      v6 = L"ACPI_HAL\\PRM";
      v7 = 26LL;
    }
    else
    {
      v6 = L"ACPI_HAL\\UEFI";
      v7 = 28LL;
    }
  }
  else
  {
    v6 = L"ACPI_HAL\\PNP0C08";
    v7 = 52LL;
  }
LABEL_12:
  Pool2 = (_WORD *)ExAllocatePool2(0x100uLL, v7 + 2, 0x706C6148u);
  v12 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, v6, v7);
  result = 0LL;
  v12[v7 >> 1] = 0;
  *a3 = v12;
  return result;
}
