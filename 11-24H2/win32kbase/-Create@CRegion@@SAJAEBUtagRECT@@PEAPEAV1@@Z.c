/*
 * XREFs of ?Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x1401299B0
 * Callers:
 *     ?CreateRegionFromRect@@YAJAEBUtagRECT@@PEAPEAUIRegion@@@Z @ 0x140129980 (-CreateRegionFromRect@@YAJAEBUtagRECT@@PEAPEAUIRegion@@@Z.c)
 * Callees:
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x140019A04 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CRegion::Create(const struct tagRECT *a1, struct CRegion **a2)
{
  int v4; // edi
  __int64 Pool2; // rax
  struct CRegion *v6; // rbx

  *a2 = 0LL;
  v4 = -1073741801;
  Pool2 = ExAllocatePool2(256LL, 24LL, 1852273223LL);
  v6 = (struct CRegion *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 12) = 0;
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)Pool2 = &CRegion::`vftable';
    *(_DWORD *)(Pool2 + 8) = 1;
    v4 = CRegion::InitializeFromRect((CRegion *)Pool2, a1);
    if ( v4 < 0 )
      (**(void (__fastcall ***)(struct CRegion *))v6)(v6);
    else
      *a2 = v6;
  }
  return (unsigned int)v4;
}
