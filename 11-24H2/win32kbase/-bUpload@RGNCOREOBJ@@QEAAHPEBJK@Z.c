/*
 * XREFs of ?bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z @ 0x140064C10
 * Callers:
 *     <none>
 * Callees:
 *     ?vSet@RGNCOREOBJ@@QEAAXXZ @ 0x1400288AC (-vSet@RGNCOREOBJ@@QEAAXXZ.c)
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x140029050 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140029120 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?RegionCore_upload@Win32kRS@@YAHPEAVREGION_CORE@@PEBJK@Z @ 0x140064ED8 (-RegionCore_upload@Win32kRS@@YAHPEAVREGION_CORE@@PEBJK@Z.c)
 *     ?bExpand@RGNCOREOBJ@@QEAA_NK@Z @ 0x140065A98 (-bExpand@RGNCOREOBJ@@QEAA_NK@Z.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140065B50 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall RGNCOREOBJ::bUpload(Win32kRS **this, struct REGION_CORE *a2, const int *a3)
{
  struct REGION_CORE *v3; // r14
  REGION_CORE *v4; // r9
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  struct REGION_CORE *v9; // rdx
  __int64 v10; // rax
  struct REGION_CORE *v11; // rdi
  int v12; // r12d
  struct REGION_CORE *v13; // rdx
  struct SCAN *pScan; // rsi
  _DWORD *v15; // rax
  signed int v16; // ebp
  int v17; // ebx
  int v18; // r13d
  _DWORD *v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  struct REGION_CORE *v22; // rdx
  REGION_CORE *v23; // rdi
  int v24; // ebx
  unsigned int v25; // eax
  unsigned int v26; // r8d
  __int64 v27; // rdi
  unsigned __int64 v28; // rax
  int v29; // eax
  unsigned __int64 v30; // [rsp+20h] [rbp-48h]
  _DWORD *v31; // [rsp+28h] [rbp-40h]
  unsigned __int64 v32; // [rsp+28h] [rbp-40h]
  __int128 v33; // [rsp+30h] [rbp-38h]
  struct REGION_CORE *v34; // [rsp+88h] [rbp+20h]

  v3 = a2;
  v4 = *this;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    return Win32kRS::RegionCore_upload(*this, a2, a3, (unsigned int)v4);
  v7 = (unsigned int)a3;
  v8 = 4 * ((unsigned int)a3 + 4LL * (((int)a3 + 2) / 3u) + ((int)a3 + 2) / 3u) + 32;
  if ( REGION_CORE::get_sizeScanAlloc(v4) < v8 && (v8 >= 0xFFFFFFFF || !RGNCOREOBJ::bExpand((RGNCOREOBJ *)this, v8)) )
    return 0LL;
  RGNCOREOBJ::vSet(this, v9);
  v10 = 4 * v7;
  v11 = (struct REGION_CORE *)((char *)v3 + 4 * v7);
  v30 = v10;
  v34 = v11;
  v12 = 1;
  pScan = REGION_CORE::get_pScan(*this, v13);
  v15 = (_DWORD *)((char *)v3 + 4);
  v16 = 0x80000000;
  v17 = *((_DWORD *)v3 + 1);
  v18 = 0x7FFFFFFF;
  LODWORD(v33) = 0x7FFFFFFF;
  DWORD2(v33) = 0x80000000;
  v19 = (_DWORD *)((char *)pScan + 12);
  v31 = (_DWORD *)((char *)v3 + 4);
  if ( v17 == 0x80000000 )
  {
    v27 = (unsigned int)(2 * *(_DWORD *)v3);
    *(_DWORD *)pScan = v27;
    *((_DWORD *)pScan + 1) = *v15;
    *((_DWORD *)pScan + 2) = *((_DWORD *)v3 + 2);
    memmove(v19, (char *)v3 + 12, 4 * v27);
    v28 = 4 * v27 + 12;
    *(_DWORD *)((char *)pScan + v28) = v27;
    v17 = *((_DWORD *)pScan + 2);
    if ( v30 >= v28 )
    {
      v11 = v34;
      v19 = (_DWORD *)((char *)pScan + 12);
      v3 = (struct REGION_CORE *)((char *)v3 + v28);
      v15 = v31;
      goto LABEL_6;
    }
    return 0LL;
  }
  *((_DWORD *)pScan + 2) = v17;
LABEL_6:
  DWORD1(v33) = *v15;
  if ( *(_DWORD *)pScan )
  {
    v18 = *v19;
    LODWORD(v33) = *v19;
    v16 = *((_DWORD *)pScan + (unsigned int)(*(_DWORD *)pScan - 1) + 3);
    DWORD2(v33) = v16;
  }
  while ( 1 )
  {
    v20 = v11 - v3;
    if ( v11 == v3 )
      break;
    if ( v20 < 0xC )
      return 0LL;
    v21 = (unsigned int)(2 * *(_DWORD *)v3);
    v32 = 4 * v21 + 12;
    if ( v20 < v32 )
      return 0LL;
    if ( *((_DWORD *)v3 + 1) != v17 )
    {
      ++v12;
      pScan = (struct SCAN *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
      *((_DWORD *)pScan + 1) = v17;
      v29 = *((_DWORD *)v3 + 1);
      *(_DWORD *)pScan = 0;
      *((_DWORD *)pScan + 2) = v29;
      *((_DWORD *)pScan + 3) = 0;
    }
    ++v12;
    pScan = (struct SCAN *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
    *((_DWORD *)pScan + 1) = *((_DWORD *)v3 + 1);
    v17 = *((_DWORD *)v3 + 2);
    *((_DWORD *)pScan + 2) = v17;
    *(_DWORD *)pScan = v21;
    memmove((char *)pScan + 12, (char *)v3 + 12, 4 * v21);
    v3 = (struct REGION_CORE *)((char *)v3 + v32);
    *((_DWORD *)pScan + v21 + 3) = v21;
    if ( (_DWORD)v21 )
    {
      if ( v18 >= *((_DWORD *)pScan + 3) )
        v18 = *((_DWORD *)pScan + 3);
      LODWORD(v33) = v18;
      if ( v16 <= *((_DWORD *)pScan + (unsigned int)(v21 - 1) + 3) )
        v16 = *((_DWORD *)pScan + (unsigned int)(v21 - 1) + 3);
      DWORD2(v33) = v16;
    }
    v11 = v34;
  }
  HIDWORD(v33) = v17;
  if ( v17 != 0x7FFFFFFF )
  {
    ++v12;
    pScan = (struct SCAN *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
    *(_DWORD *)pScan = 0;
    *((_DWORD *)pScan + 1) = v17;
    *((_DWORD *)pScan + 2) = 0x7FFFFFFF;
    *((_DWORD *)pScan + 3) = 0;
  }
  *(_OWORD *)((char *)*this + 28) = v33;
  *((_DWORD *)*this + 6) = v12;
  v22 = (struct REGION_CORE *)*(unsigned int *)pScan;
  v23 = *this;
  v24 = (_DWORD)pScan + 4 * (_DWORD)v22 + 16;
  v25 = (unsigned int)REGION_CORE::get_pScan(*this, v22);
  REGION_CORE::set_sizeScan(v23, (struct REGION_CORE *)(v24 - v25), v26);
  return 1LL;
}
