/*
 * XREFs of _PnpMultiSzDeleteString @ 0x1409AB74C
 * Callers:
 *     _CmGetDeviceSiblings @ 0x1409AB1F4 (_CmGetDeviceSiblings.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     _PnpMultiSzGetLen @ 0x1409AD600 (_PnpMultiSzGetLen.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall PnpMultiSzDeleteString(wchar_t *a1, wchar_t *Str2)
{
  wchar_t *v3; // rbx
  int v4; // eax
  __int64 v5; // rcx
  wchar_t *v6; // rdi
  unsigned int v8; // eax
  unsigned int v9; // ebp
  void *Pool2; // rax
  void *v11; // rsi

  v3 = a1;
  if ( a1 && Str2 )
  {
    while ( 1 )
    {
      if ( !*v3 )
        return 1;
      v4 = wcsicmp(v3, Str2);
      v5 = -1LL;
      do
        ++v5;
      while ( v3[v5] );
      if ( !v4 )
        break;
      v3 += v5 + 1;
    }
    v6 = &v3[v5];
    if ( !v6[1] )
    {
      *(_DWORD *)v3 = 0;
      return 1;
    }
    v8 = 2 * PnpMultiSzGetLen(v6 + 1);
    if ( v8 )
    {
      v9 = v8;
      Pool2 = (void *)ExAllocatePool2(0x100uLL, v8, 0x52504E50u);
      v11 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, v6 + 1, v9);
        memmove(v3, v11, v9);
        ExFreePoolWithTag(v11, 0);
        return 1;
      }
    }
  }
  return 0;
}
