/*
 * XREFs of sub_1407B98D8 @ 0x1407B98D8
 * Callers:
 *     ExpQueryLicenseValueFromBlobHelper @ 0x1404AA410 (ExpQueryLicenseValueFromBlobHelper.c)
 * Callees:
 *     bsearch @ 0x1404FC020 (bsearch.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall sub_1407B98D8(__int64 a1, const void *a2, _DWORD *a3, void *a4, unsigned int a5, _DWORD *a6)
{
  void *v8; // rax
  unsigned __int16 *v10; // rdx

  v8 = bsearch(
         a2,
         (const void *)(a1 + 24),
         *(unsigned int *)(a1 + 46824),
         0x10uLL,
         (int (__cdecl *)(const void *, const void *))sub_1407B9180);
  if ( v8 )
  {
    v10 = (unsigned __int16 *)*((_QWORD *)v8 + 1);
    *a6 = v10[3];
    if ( a3 )
      *a3 = v10[2];
    if ( v10[3] <= a5 )
    {
      if ( a4 )
        memmove(a4, (char *)v10 + v10[1] + 16, v10[3]);
      return 0;
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    return (unsigned int)-1073741772;
  }
}
