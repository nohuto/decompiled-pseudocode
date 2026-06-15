/*
 * XREFs of ?Allocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@HH@Z @ 0x18004E3E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::Allocate(ATL::CAtlStringMgr *this, int a2, int a3)
{
  signed int v4; // ebx
  struct ATL::CStringData *result; // rax
  unsigned __int64 v6; // rcx

  if ( a2 < 0 )
    return 0LL;
  if ( 0x7FFFFFFF - a2 < 1 )
    return 0LL;
  v4 = (a2 + 8) & 0xFFFFFFF8;
  if ( a2 >= v4 )
    return 0LL;
  if ( v4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v4 < a3 )
      return 0LL;
    v6 = a3 * (__int64)v4;
    if ( v6 > 0xFFFFFFFFFFFFFFE7uLL )
      return 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  result = (struct ATL::CStringData *)(***((__int64 (__fastcall ****)(_QWORD, __int64))this + 1))(
                                        *((_QWORD *)this + 1),
                                        v6 + 24);
  if ( !result )
    return 0LL;
  *(_QWORD *)result = this;
  *((_DWORD *)result + 3) = v4 - 1;
  *((_DWORD *)result + 4) = 1;
  *((_DWORD *)result + 2) = 0;
  return result;
}
