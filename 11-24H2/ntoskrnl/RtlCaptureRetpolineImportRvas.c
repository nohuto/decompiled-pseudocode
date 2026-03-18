/*
 * XREFs of RtlCaptureRetpolineImportRvas @ 0x14042C560
 * Callers:
 *     RtlUpdateImportRelocationsInImage @ 0x1406A30A8 (RtlUpdateImportRelocationsInImage.c)
 *     MiCaptureRetpolineImportInfo @ 0x140A877D0 (MiCaptureRetpolineImportInfo.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14042CC7C (RtlpImageDirectoryEntryToDataEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlCaptureRetpolineImportRvas(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int *a6)
{
  unsigned int v6; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rsi
  unsigned int *v13; // r14
  unsigned int v14; // edx
  unsigned int v15; // ebp
  __int64 v17; // r12
  __int64 v18; // rcx
  int v19; // r15d
  unsigned int v21; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v22; // [rsp+38h] [rbp-30h] BYREF
  __int64 v23; // [rsp+78h] [rbp+10h]

  v23 = a2;
  v6 = 0;
  v21 = 0;
  v22 = 0LL;
  LOBYTE(a2) = 1;
  RtlpImageDirectoryEntryToDataEx(a1, a2, 12, (unsigned int)&v21, (__int64)&v22);
  v12 = v22;
  if ( v22 )
  {
    if ( (unsigned __int64)v22 + v21 <= a1 + a3 )
    {
      v13 = a6;
      v14 = v21 >> 3;
      v15 = 4 * (v21 >> 3);
      if ( v15 <= *a6 )
      {
        if ( v14 )
        {
          v17 = v14;
          do
          {
            *a5 = 0;
            v18 = *v12;
            if ( *v12 )
            {
              v19 = v18 - v23;
              if ( (unsigned __int64)(v18 - v23 + 0x80000000LL) <= 0xFFFFFFFF
                && (!a4 || (unsigned int)guard_dispatch_icall_no_overrides(v18, 0xFFFFFFFFLL, v10, v11)) )
              {
                *a5 = v19;
              }
            }
            ++v12;
            ++a5;
            --v17;
          }
          while ( v17 );
          v13 = a6;
        }
      }
      else
      {
        v6 = -1073741789;
      }
      *v13 = v15;
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
