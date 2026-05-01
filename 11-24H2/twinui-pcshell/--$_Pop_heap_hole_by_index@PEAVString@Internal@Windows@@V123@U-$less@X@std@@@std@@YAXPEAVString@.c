/*
 * XREFs of ??$_Pop_heap_hole_by_index@PEAVString@Internal@Windows@@V123@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@_J1$$QEAV123@U?$less@X@0@@Z @ 0x1803145C4
 * Callers:
 *     ??$_Make_heap_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x1802BD808 (--$_Make_heap_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal.c)
 *     ??$_Pop_heap_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x1803146E4 (--$_Pop_heap_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@.c)
 * Callees:
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x1800A95C0 (-Release@String@Internal@Windows@@QEAAXXZ.c)
 *     ??MInternal@Windows@@YA_NAEBVString@01@0@Z @ 0x1800A9740 (--MInternal@Windows@@YA_NAEBVString@01@0@Z.c)
 */

HSTRING __fastcall std::_Pop_heap_hole_by_index<Windows::Internal::String *,Windows::Internal::String,std::less<void>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        HSTRING *a4)
{
  __int64 v5; // rbp
  __int64 v7; // rdi
  __int64 i; // r14
  HSTRING *v11; // rbx
  HSTRING *v12; // rbx
  __int64 v13; // rbp
  HSTRING *v14; // r14
  HSTRING *v15; // rbx
  HSTRING result; // rax

  v5 = (a3 - 1) >> 1;
  v7 = a2;
  for ( i = a2; i < v5; *(_QWORD *)(a1 + 8 * i) = 0LL )
  {
    v11 = (HSTRING *)(a1 + 8 * v7);
    i = !Windows::Internal::operator<((HSTRING *)(a1 + 16 + 16 * i), (HSTRING *)(a1 + 16 + 16 * i - 8)) + 2 * i + 1;
    Windows::Internal::String::Release(v11);
    v7 = i;
    *v11 = *(HSTRING *)(a1 + 8 * i);
  }
  if ( i == v5 && (a3 & 1) == 0 )
  {
    v12 = (HSTRING *)(a1 + 8 * v7);
    Windows::Internal::String::Release(v12);
    v7 = a3 - 1;
    *v12 = *(HSTRING *)(a1 + 8 * a3 - 8);
    *(_QWORD *)(a1 + 8 * a3 - 8) = 0LL;
  }
  if ( a2 < v7 )
  {
    do
    {
      v13 = (v7 - 1) >> 1;
      v14 = (HSTRING *)(a1 + 8 * v13);
      if ( !Windows::Internal::operator<(v14, a4) )
        break;
      v15 = (HSTRING *)(a1 + 8 * v7);
      Windows::Internal::String::Release(v15);
      v7 = (v7 - 1) >> 1;
      *v15 = *v14;
      *v14 = 0LL;
    }
    while ( a2 < v13 );
  }
  Windows::Internal::String::Release((HSTRING *)(a1 + 8 * v7));
  result = *a4;
  *(_QWORD *)(a1 + 8 * v7) = *a4;
  *a4 = 0LL;
  return result;
}
