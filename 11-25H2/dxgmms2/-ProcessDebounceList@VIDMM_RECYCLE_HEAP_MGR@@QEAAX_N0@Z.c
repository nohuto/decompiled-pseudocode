/*
 * XREFs of ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1400C5784
 * Callers:
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1400B4EC8 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX3PEAEEE@Z @ 0x1400EC4F0 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@.c)
 *     ?FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ @ 0x140104E50 (-FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x1400388CC (-UpdateOutstandingUnlock@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x140038A90 (-IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ.c)
 *     ?UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x14003C20C (-UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1400C5A0C (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C666C (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C678C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1400C73F4 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1400C80B0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(VIDMM_RECYCLE_HEAP_MGR *this, char a2, char a3)
{
  char *v4; // r15
  char *v5; // rsi
  char *v8; // rdi
  struct VIDMM_RECYCLE_BLOCK *v9; // rdx
  bool v10; // al
  char *v11; // rbx
  __int64 v12; // rax
  char **v13; // rcx
  int v14; // eax
  int v15; // eax
  unsigned __int8 v16; // dl
  char **v17; // rax
  _QWORD *v18; // rbx
  VIDMM_RECYCLE_HEAP_MGR *v19; // rbx
  bool IsOverLimits; // al
  VIDMM_RECYCLE_HEAP_MGR *v21; // rcx
  struct VIDMM_RECYCLE_RANGE *v22; // rdi
  unsigned __int8 v23; // dl
  VIDMM_RECYCLE_MULTIRANGE *v24; // rcx
  VIDMM_RECYCLE_MULTIRANGE *v25; // rcx
  __int64 v26; // rcx
  struct VIDMM_RECYCLE_RANGE *v27; // rdx
  _QWORD *v28; // rax
  _QWORD *v29; // r8
  _QWORD *v30; // [rsp+20h] [rbp-10h] BYREF
  char *v31; // [rsp+28h] [rbp-8h]
  bool v32; // [rsp+70h] [rbp+40h] BYREF
  int v33; // [rsp+88h] [rbp+58h] BYREF

  v31 = (char *)&v30;
  v4 = (char *)this + 1544;
  v5 = (char *)*((_QWORD *)this + 193);
  v30 = &v30;
  while ( 1 )
  {
    v8 = v5;
    if ( v5 == v4 )
      break;
    v9 = VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock;
    v10 = VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit >= (__int64)((unsigned __int64)(unsigned int)dword_1400814F0 << 20)
       || (__int64)VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock >= (__int64)((unsigned __int64)(unsigned int)dword_1400814F4 << 20);
    v11 = v5 - 104;
    if ( a3 )
    {
      if ( !v10 )
        break;
    }
    else if ( a2 && *((_QWORD *)v11 + 12) > *((_QWORD *)this + 197) )
    {
      break;
    }
    v12 = *(_QWORD *)v5;
    v5 = (char *)v12;
    if ( *(char **)(v12 + 8) != v8 || (v13 = (char **)*((_QWORD *)v8 + 1), *v13 != v8) )
LABEL_16:
      __fastfail(3u);
    *v13 = (char *)v12;
    *(_QWORD *)(v12 + 8) = v13;
    *((_QWORD *)v11 + 14) = 0LL;
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)v11 + 12) = 0LL;
    v14 = *((_DWORD *)v11 + 16);
    if ( v14 == 5 )
    {
      VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingDecommit(*((_QWORD *)v11 + 4) - *((_QWORD *)v11 + 5), v9);
    }
    else if ( (unsigned int)(v14 - 3) <= 1 )
    {
      VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingUnlock(*((_QWORD *)v11 + 4) - *((_QWORD *)v11 + 5), v9);
    }
    v32 = 0;
    v15 = VIDMM_RECYCLE_RANGE::DebouncedUnlock((VIDMM_RECYCLE_RANGE *)v11, &v32);
    if ( v15 < 0 )
    {
      WdLogSingleEntry3(3LL, v11, v15, **((_QWORD **)this + 1));
      v17 = (char **)v31;
      WdLogGlobalForLineNumber = 10922;
      if ( *(_QWORD ***)v31 != &v30 )
        goto LABEL_16;
      *((_QWORD *)v8 + 1) = v31;
      *(_QWORD *)v8 = &v30;
      *v17 = v8;
      v31 = v8;
    }
    if ( !v32 )
    {
      v25 = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v11 + 17);
      if ( v25 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v25, v16);
    }
  }
  v18 = v30;
  while ( v18 != &v30 )
  {
    v26 = *v18;
    v27 = (struct VIDMM_RECYCLE_RANGE *)(v18 - 13);
    v28 = v18;
    v18 = (_QWORD *)v26;
    if ( *(_QWORD **)(v26 + 8) != v28 )
      goto LABEL_16;
    v29 = (_QWORD *)v28[1];
    if ( (_QWORD *)*v29 != v28 )
      goto LABEL_16;
    *v29 = v26;
    *(_QWORD *)(v26 + 8) = v29;
    *((_QWORD *)v27 + 14) = 0LL;
    *v28 = 0LL;
    VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(this, v27);
  }
  v19 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 195);
  while ( v19 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1560) )
  {
    IsOverLimits = VIDMM_RECYCLE_HEAP_MGR::IsOverLimits();
    v22 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v19 - 104);
    if ( a3 )
    {
      if ( !IsOverLimits )
        return;
    }
    else if ( a2 && *((_QWORD *)v22 + 12) > *((_QWORD *)this + 197) )
    {
      return;
    }
    v19 = *(VIDMM_RECYCLE_HEAP_MGR **)v19;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v21, v22);
    v33 = 0;
    VIDMM_RECYCLE_RANGE::DebouncedDecommit(v22, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v33);
    if ( !v33 )
    {
      v24 = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v22 + 17);
      if ( v24 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v24, v23);
    }
  }
}
