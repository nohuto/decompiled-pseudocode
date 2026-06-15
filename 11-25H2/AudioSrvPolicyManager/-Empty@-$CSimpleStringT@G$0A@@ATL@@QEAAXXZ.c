/*
 * XREFs of ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x18001A94C
 * Callers:
 *     ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x180018810 (--4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001B714 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180010078 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001EAA4 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CSimpleStringT<unsigned short,0>::Empty(_QWORD *a1)
{
  ATL::CStringData *v2; // rcx
  __int64 v3; // rdi

  v2 = (ATL::CStringData *)(*a1 - 24LL);
  v3 = *(_QWORD *)v2;
  if ( *((_DWORD *)v2 + 2) )
  {
    if ( *((int *)v2 + 4) >= 0 )
    {
      ATL::CStringData::Release(v2);
      *a1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3) + 24;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, 0LL);
    }
  }
}
