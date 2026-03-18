/*
 * XREFs of RtlCopySidAndAttributesArray @ 0x1409A7A90
 * Callers:
 *     SepCreateTokenEx @ 0x1403645F4 (SepCreateTokenEx.c)
 *     SeQueryInformationToken @ 0x14090D870 (SeQueryInformationToken.c)
 *     CmpBuildAdminInformation @ 0x1409A773C (CmpBuildAdminInformation.c)
 *     SepFilterToken @ 0x140AD2664 (SepFilterToken.c)
 *     NtQueryInformationToken @ 0x140AD3370 (NtQueryInformationToken.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

__int64 __fastcall RtlCopySidAndAttributesArray(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        char *a5,
        _QWORD *a6,
        unsigned int *a7)
{
  unsigned int i; // ebx
  unsigned int v13; // esi
  unsigned __int8 *v14; // rdx
  unsigned int v15; // eax

  for ( i = 0; ; ++i )
  {
    if ( i >= a1 )
    {
      *a6 = a5;
      *a7 = a3;
      return 0LL;
    }
    v13 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a2 + 16LL * i) + 1LL) + 8;
    if ( v13 > a3 )
      break;
    *(_QWORD *)(a4 + 16LL * i) = a5;
    a3 -= v13;
    *(_DWORD *)(a4 + 16LL * i + 8) = *(_DWORD *)(a2 + 16LL * i + 8);
    v14 = *(unsigned __int8 **)(a2 + 16LL * i);
    v15 = 4 * v14[1] + 8;
    if ( v15 <= v13 )
      memmove(a5, v14, v15);
    a5 += v13;
  }
  return 3221225507LL;
}
