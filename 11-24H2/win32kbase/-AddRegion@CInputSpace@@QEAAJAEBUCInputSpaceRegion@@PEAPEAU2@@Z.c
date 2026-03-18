/*
 * XREFs of ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x140131698
 * Callers:
 *     NtConfigureInputSpace @ 0x1401B7710 (NtConfigureInputSpace.c)
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1401F4428 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall CInputSpace::AddRegion(
        CInputSpace *this,
        const struct CInputSpaceRegion *a2,
        struct CInputSpaceRegion **a3)
{
  __int64 v6; // rax
  CInputSpace *v7; // r8
  struct CInputSpaceRegion *v8; // rdx
  __int64 v9; // rax
  struct CInputSpaceRegion *v10; // rcx
  __int128 v11; // xmm1
  CInputSpace **v12; // rcx

  if ( a3 )
    *a3 = 0LL;
  v6 = Win32AllocPoolZInitImpl(256LL, 0x2D8uLL, 0x496E436Fu);
  v7 = (CInputSpace *)v6;
  if ( !v6 )
    return 3221225495LL;
  v8 = (struct CInputSpaceRegion *)(v6 + 16);
  v9 = 5LL;
  v10 = v8;
  do
  {
    *(_OWORD *)v10 = *(_OWORD *)a2;
    *((_OWORD *)v10 + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)v10 + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)v10 + 3) = *((_OWORD *)a2 + 3);
    *((_OWORD *)v10 + 4) = *((_OWORD *)a2 + 4);
    *((_OWORD *)v10 + 5) = *((_OWORD *)a2 + 5);
    *((_OWORD *)v10 + 6) = *((_OWORD *)a2 + 6);
    v10 = (struct CInputSpaceRegion *)((char *)v10 + 128);
    v11 = *((_OWORD *)a2 + 7);
    a2 = (const struct CInputSpaceRegion *)((char *)a2 + 128);
    *((_OWORD *)v10 - 1) = v11;
    --v9;
  }
  while ( v9 );
  *(_OWORD *)v10 = *(_OWORD *)a2;
  *((_OWORD *)v10 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)v10 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)v10 + 3) = *((_OWORD *)a2 + 3);
  *((_QWORD *)v10 + 8) = *((_QWORD *)a2 + 8);
  v12 = (CInputSpace **)*((_QWORD *)this + 183);
  if ( *v12 != (CInputSpace *)((char *)this + 1456) )
    __fastfail(3u);
  *(_QWORD *)v7 = (char *)this + 1456;
  *((_QWORD *)v7 + 1) = v12;
  *v12 = v7;
  *((_QWORD *)this + 183) = v7;
  ++*((_DWORD *)this + 363);
  if ( a3 )
    *a3 = v8;
  return 0LL;
}
