/*
 * XREFs of ?createrec@PATH_CORE@@AEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@PEBU_POINTFIX@@@Z @ 0x14006A178
 * Callers:
 *     ?bAppend@PATH_CORE@@QEAA_NAEBV1@PEBU_POINTFIX@@@Z @ 0x140069A50 (-bAppend@PATH_CORE@@QEAA_NAEBV1@PEBU_POINTFIX@@@Z.c)
 *     ?addpoints@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@@Z @ 0x140069F84 (-addpoints@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@PEAUPATHDATAL@@@Z.c)
 * Callees:
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z @ 0x140069C9C (--$read@U_POINTFIX@@@-$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z.c)
 *     ?bXformRound@EXFORMOBJR@@QEBA_NAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x14006A3E0 (-bXformRound@EXFORMOBJR@@QEBA_NAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 *     ?newpathalloc@@YAPEAVPATHALLOC@@XZ @ 0x14008F6F0 (-newpathalloc@@YAPEAVPATHALLOC@@XZ.c)
 *     ?vInclude@ERECTFX@@QEAAXAEAU_POINTFIX@@@Z @ 0x1400E16A4 (-vInclude@ERECTFX@@QEAAXAEAU_POINTFIX@@@Z.c)
 *     ?ssizet_add_to_sizet@?$umptr@U_POINTL@@@@SA_N_K_JPEA_K@Z @ 0x1400EE4FC (-ssizet_add_to_sizet@-$umptr@U_POINTL@@@@SA_N_K_JPEA_K@Z.c)
 *     vOffsetPoints @ 0x1400F8F50 (vOffsetPoints.c)
 *     ?reinit@PATH_CORE@@QEAAXXZ @ 0x14019DC94 (-reinit@PATH_CORE@@QEAAXXZ.c)
 */

bool __fastcall PATH_CORE::createrec(
        struct PATHALLOC **this,
        const struct EXFORMOBJR *a2,
        __int64 a3,
        const struct _POINTFIX *a4)
{
  struct PATHALLOC *v4; // r14
  struct PATHDATAL *v5; // rdi
  const struct EXFORMOBJR *v7; // r10
  unsigned __int64 v9; // rcx
  char *v10; // rax
  int v11; // r9d
  unsigned int v12; // r15d
  bool result; // al
  __int64 v14; // rsi
  unsigned int v15; // ebp
  int v16; // r9d
  struct PATHALLOC *v17; // rax
  __int64 v18; // rcx
  struct PATHALLOC *v19; // r11
  struct _POINTFIX *v20; // rdx
  ERECTFX *v21; // rcx
  struct _POINTFIX *v22; // rdx
  __int64 v23; // r8
  struct PATHALLOC *v24; // rax
  unsigned __int64 v25; // [rsp+70h] [rbp+8h] BYREF
  const struct EXFORMOBJR *v26; // [rsp+78h] [rbp+10h]

  v26 = a2;
  v4 = *this;
  v5 = (struct PATHDATAL *)a3;
  LODWORD(a3) = 0;
  v7 = a2;
  if ( *this )
  {
    v9 = *((_QWORD *)v4 + 1) + 24LL;
    v10 = (char *)v4 + *((unsigned int *)v4 + 4);
    if ( (unsigned __int64)v10 > v9 )
      a3 = (__int64)&v10[-v9] >> 3;
  }
  v11 = *((_DWORD *)v5 + 8);
  v12 = (_DWORD)this[6] & 1;
  if ( (v11 & 0x10) != 0 && (_DWORD)a3 )
    LODWORD(a3) = 3 * (((unsigned int)a3 - v12) / 3) + v12;
  if ( (unsigned int)a3 < v12 + *((_DWORD *)v5 + 9) && (unsigned int)a3 < 8 )
  {
    v4 = newpathalloc();
    if ( !v4 )
    {
      EngSetLastError(8u);
LABEL_11:
      PATH_CORE::reinit((PATH_CORE *)this);
      return 0;
    }
    v7 = v26;
    *(_QWORD *)v4 = *this;
    *this = v4;
    v11 = *((_DWORD *)v5 + 8);
    LODWORD(a3) = (unsigned int)((_DWORD)v4 + *((_DWORD *)v4 + 4) - *((_DWORD *)v4 + 2) - 24) >> 3;
    if ( (v11 & 0x10) != 0 )
      LODWORD(a3) = a3 - (((unsigned int)((_DWORD)v4 + *((_DWORD *)v4 + 4) - *((_DWORD *)v4 + 2) - 24) >> 3) - v12) % 3;
  }
  v14 = *((_QWORD *)v4 + 1);
  v15 = v12 + *((_DWORD *)v5 + 9);
  if ( (unsigned int)a3 <= v15 )
    v15 = a3;
  v16 = v11 | 2;
  *(_QWORD *)v14 = 0LL;
  *(_DWORD *)(v14 + 16) = v16;
  *(_DWORD *)(v14 + 20) = v15;
  *(_QWORD *)(v14 + 8) = this[2];
  if ( v12 )
  {
    --v15;
    *(_QWORD *)(v14 + 24) = this[5];
    *(_DWORD *)(v14 + 16) = v16 | (_DWORD)this[6] & 5;
    *((_DWORD *)this + 12) &= 0xFFFFFFFA;
  }
  else
  {
    v17 = this[2];
    if ( v17 )
      *((_DWORD *)v17 + 4) &= ~2u;
  }
  if ( a4 )
  {
    vOffsetPoints(v14 + 8 * (v12 + 3), (_DWORD)v5, v15, a4->x, a4->y);
  }
  else if ( v7 )
  {
    EXFORMOBJR::bXformRound(v7, v5, v14 + 8 * (v12 + 3LL), v15);
  }
  else
  {
    umptr_r<_POINTL>::read<_POINTFIX>((__int64)v5, (void *)(v14 + 8 * (v12 + 3LL)), v15);
  }
  if ( *((_BYTE *)v5 + 25) || *((_BYTE *)v5 + 24) )
    goto LABEL_11;
  *((_DWORD *)v5 + 9) -= v15;
  v18 = *((_QWORD *)v5 + 2);
  v25 = 0LL;
  if ( (unsigned __int8)umptr<_POINTL>::ssizet_add_to_sizet(v18, v15, &v25) && v25 <= *((_QWORD *)v5 + 1) )
    *((_QWORD *)v5 + 2) = v25;
  else
    *((_BYTE *)v5 + 24) = 1;
  *((_DWORD *)v5 + 8) &= 0xFFFFFFFA;
  v20 = (struct _POINTFIX *)(v14 + 24);
  v21 = (ERECTFX *)(this + 3);
  if ( this[2] == v19 )
  {
    *(_DWORD *)v21 = v20->x;
    *((_DWORD *)this + 8) = v20->x;
    *((_DWORD *)this + 7) = *(_DWORD *)(v14 + 28);
    *((_DWORD *)this + 9) = *(_DWORD *)(v14 + 28);
  }
  if ( v12 + v15 )
  {
    do
    {
      ERECTFX::vInclude(v21, v20);
      v20 = v22 + 1;
    }
    while ( v23 != 1 );
  }
  v24 = this[2];
  if ( v24 )
    *(_QWORD *)v24 = v14;
  else
    this[1] = (struct PATHALLOC *)v14;
  this[2] = (struct PATHALLOC *)v14;
  result = 1;
  *((_QWORD *)v4 + 1) = v14 + 8 * (*(unsigned int *)(v14 + 20) + 3LL);
  return result;
}
