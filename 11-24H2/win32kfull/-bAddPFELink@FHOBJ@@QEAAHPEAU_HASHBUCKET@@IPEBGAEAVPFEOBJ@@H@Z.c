/*
 * XREFs of ?bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEBGAEAVPFEOBJ@@H@Z @ 0x140146448
 * Callers:
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1400FE730 (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 * Callees:
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x140146870 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ?efstyCompute@PFEOBJ@@QEAA?AW4_ENUMFONTSTYLE@@XZ @ 0x1401468DC (-efstyCompute@PFEOBJ@@QEAA-AW4_ENUMFONTSTYLE@@XZ.c)
 */

__int64 __fastcall FHOBJ::bAddPFELink(
        FHOBJ *this,
        struct _HASHBUCKET *a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        struct PFEOBJ *a5,
        int a6)
{
  __int64 v7; // r13
  _QWORD *v10; // rax
  unsigned int v11; // edi
  _QWORD *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // r9
  char v18; // al
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx

  v7 = a3;
  v10 = (_QWORD *)Win32AllocPoolZInit(16LL, 1802398791LL);
  v11 = 0;
  v12 = v10;
  if ( !v10 )
  {
LABEL_12:
    LOBYTE(v11) = v12 != 0LL;
    return v11;
  }
  *v10 = 0LL;
  v10[1] = *(_QWORD *)a5;
  if ( a2 && (a6 || (*((_DWORD *)a2 + 8) & 2) == 0) )
  {
    if ( (unsigned int)PFEOBJ::efstyCompute(a5) || (*((_DWORD *)a2 + 8) & 4) != 0 )
    {
      **((_QWORD **)a2 + 2) = v12;
      *((_QWORD *)a2 + 2) = v12;
    }
    else
    {
      *v12 = *((_QWORD *)a2 + 1);
      *((_DWORD *)a2 + 8) |= 4u;
      *((_QWORD *)a2 + 1) = v12;
    }
    if ( (PFEOBJ::flFontType(a5) & 4) != 0 )
      ++*((_DWORD *)a2 + 6);
    if ( (PFEOBJ::flFontType(a5) & 1) != 0 )
      ++*((_DWORD *)a2 + 7);
    goto LABEL_12;
  }
  v13 = Win32AllocPoolZInit(128LL, 1650550855LL);
  v14 = v13;
  if ( v13 )
  {
    *(_QWORD *)(v13 + 16) = v12;
    *(_QWORD *)(v13 + 8) = v12;
    v15 = *((_QWORD *)this + 1);
    if ( *(_QWORD *)(v15 + 24) )
    {
      *(_QWORD *)(v14 + 40) = *(_QWORD *)(v15 + 32);
      *(_QWORD *)(v14 + 48) = 0LL;
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 32LL) + 48LL) = v14;
      *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v14;
    }
    else
    {
      *(_QWORD *)(v15 + 24) = v14;
      *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v14;
      *(_QWORD *)(v14 + 40) = 0LL;
      *(_QWORD *)(v14 + 48) = 0LL;
    }
    *(_DWORD *)(v14 + 56) = *(_DWORD *)(*(_QWORD *)a5 + 80LL);
    *(_DWORD *)(v14 + 32) = a6 != 0 ? 2 : 0;
    v16 = PFEOBJ::flFontType(a5);
    *(_DWORD *)(v17 + 24) = (v16 >> 2) & 1;
    v18 = PFEOBJ::flFontType(a5);
    *(_DWORD *)(v19 + 28) = v18 & 1;
    if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 2 )
    {
      *(_QWORD *)(v19 + 60) = *(_QWORD *)(*(_QWORD *)a5 + 84LL);
    }
    else
    {
      v23 = 32LL;
      v24 = v19 - (_QWORD)a4;
      do
      {
        *(const unsigned __int16 *)((char *)a4 + v24 + 60) = *a4;
        ++a4;
        --v23;
      }
      while ( v23 );
    }
    v20 = *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v7 + 40);
    *(_QWORD *)v19 = v20;
    if ( v20 )
      ++*(_DWORD *)(*((_QWORD *)this + 1) + 16LL);
    *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v7 + 40) = v19;
    ++*(_DWORD *)(*((_QWORD *)this + 1) + 12LL);
    if ( !(unsigned int)PFEOBJ::efstyCompute(a5) )
      *(_DWORD *)(v21 + 32) |= 4u;
    goto LABEL_12;
  }
  Win32FreePool(v12);
  return 0LL;
}
