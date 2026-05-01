/*
 * XREFs of ??$_Pop_heap_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x1803146E4
 * Callers:
 *     ??$_Sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0_JU?$less@X@0@@Z @ 0x1800A7C34 (--$_Sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x18001BF54 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x1800A95C0 (-Release@String@Internal@Windows@@QEAAXXZ.c)
 *     ??$_Pop_heap_hole_by_index@PEAVString@Internal@Windows@@V123@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@_J1$$QEAV123@U?$less@X@0@@Z @ 0x1803145C4 (--$_Pop_heap_hole_by_index@PEAVString@Internal@Windows@@V123@U-$less@X@std@@@std@@YAXPEAVString@.c)
 */

void __fastcall std::_Pop_heap_unchecked<Windows::Internal::String *,std::less<void>>(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rdi
  HSTRING v4; // rax
  HSTRING v5; // [rsp+40h] [rbp+8h] BYREF

  if ( (__int64)((a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF8uLL) >= 16 )
  {
    v3 = (_QWORD *)(a2 - 8);
    v4 = *(HSTRING *)(a2 - 8);
    *v3 = 0LL;
    v5 = v4;
    Windows::Internal::String::Release((HSTRING *)(a2 - 8));
    *v3 = *a1;
    *a1 = 0LL;
    std::_Pop_heap_hole_by_index<Windows::Internal::String *,Windows::Internal::String,std::less<void>>(
      (__int64)a1,
      0LL,
      v3 - a1,
      &v5);
    Windows::Internal::String::~String(&v5);
  }
}
