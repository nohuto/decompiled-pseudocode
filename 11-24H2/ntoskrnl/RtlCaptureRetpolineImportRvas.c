/*
 * XREFs of RtlCaptureRetpolineImportRvas @ 0x1402F0074
 * Callers:
 *     RtlUpdateImportRelocationsInImage @ 0x1406A40F8 (RtlUpdateImportRelocationsInImage.c)
 *     MiCaptureRetpolineImportInfo @ 0x140A83CC0 (MiCaptureRetpolineImportInfo.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1402EECFC (RtlpImageDirectoryEntryToDataEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlCaptureRetpolineImportRvas(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int *a6)
{
  unsigned int v6; // ebx
  __int64 *v10; // rsi
  unsigned int *v11; // r14
  unsigned int v12; // edx
  unsigned int v13; // ebp
  __int64 v15; // r12
  __int64 v16; // rcx
  int v17; // r15d
  unsigned int v19; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v20; // [rsp+38h] [rbp-30h] BYREF

  v6 = 0;
  v19 = 0;
  v20 = 0LL;
  RtlpImageDirectoryEntryToDataEx(a1, 1, 0xCu, &v19, &v20);
  v10 = v20;
  if ( v20 )
  {
    if ( (unsigned __int64)v20 + v19 <= a1 + a3 )
    {
      v11 = a6;
      v12 = v19 >> 3;
      v13 = 4 * (v19 >> 3);
      if ( v13 <= *a6 )
      {
        if ( v12 )
        {
          v15 = v12;
          do
          {
            *a5 = 0;
            v16 = *v10;
            if ( *v10 )
            {
              v17 = v16 - a2;
              if ( (unsigned __int64)(v16 - a2 + 0x80000000LL) <= 0xFFFFFFFF
                && (!a4 || (unsigned int)guard_dispatch_icall_no_overrides(v16, 0xFFFFFFFFLL)) )
              {
                *a5 = v17;
              }
            }
            ++v10;
            ++a5;
            --v15;
          }
          while ( v15 );
          v11 = a6;
        }
      }
      else
      {
        v6 = -1073741789;
      }
      *v11 = v13;
    }
    else
    {
      return (unsigned int)-1073741701;
    }
  }
  else
  {
    *a6 = 0;
  }
  return v6;
}
