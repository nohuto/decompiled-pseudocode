/*
 * XREFs of ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x14000CEE0
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401211B0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x14000D9F4 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x140109048 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140174090 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 */

__int64 __fastcall DC::bMakeInfoDC(DC *this, int a2)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  struct SURFACE *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v2 = *((_DWORD *)this + 9);
  v3 = 0;
  if ( (v2 & 1) == 0 )
  {
    if ( a2 )
    {
      if ( (v2 & 0x200000) == 0 && (v2 & 0x800) == 0 && !*((_DWORD *)this + 8) )
      {
        *((_DWORD *)this + 8) = 2;
        *((_DWORD *)this + 9) = v2 | 0x800;
        *((_QWORD *)this + 262) = *((_QWORD *)this + 62);
        DC::pSurface(this, 0LL);
        v5 = *((_QWORD *)this + 6);
        v11 = v5;
        if ( (*(_DWORD *)(v5 + 40) & 0x20000) != 0 )
          v6 = *(_QWORD *)(v5 + 1700);
        else
          v6 = *(_QWORD *)(v5 + 2136);
        if ( (_DWORD)v6 == *((_DWORD *)this + 128) )
        {
          v7 = (*(_DWORD *)(v5 + 40) & 0x20000) != 0 ? *(_QWORD *)(v5 + 1700) : *(_QWORD *)(v5 + 2136);
          if ( HIDWORD(v7) == HIDWORD(*((_QWORD *)this + 64)) )
            return 1;
        }
        *((_QWORD *)this + 64) = **(_QWORD **)&PDEVOBJ::sizl((PDEVOBJ *)&v11);
        goto LABEL_19;
      }
    }
    else if ( (v2 & 0x800) != 0 && *((_DWORD *)this + 8) == 2 )
    {
      v9 = (struct SURFACE *)*((_QWORD *)this + 262);
      *((_DWORD *)this + 9) = v2 & 0xFFFFF7FF;
      *((_DWORD *)this + 8) = 0;
      DC::pSurface(this, v9);
      v10 = *((_QWORD *)this + 62);
      *((_QWORD *)this + 262) = 0LL;
      if ( !v10 || *(_QWORD *)(v10 + 56) == *((_QWORD *)this + 64) )
        return 1;
      *((_QWORD *)this + 64) = *(_QWORD *)(v10 + 56);
LABEL_19:
      DC::bSetDefaultRegion(this);
      return 1;
    }
  }
  return v3;
}
