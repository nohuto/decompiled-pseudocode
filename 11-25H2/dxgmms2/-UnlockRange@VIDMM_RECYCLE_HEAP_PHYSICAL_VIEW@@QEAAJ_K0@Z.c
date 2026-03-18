/*
 * XREFs of ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1400C5C60
 * Callers:
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1400C5A0C (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?RemoveFromLockedRanges@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x14003C36C (-RemoveFromLockedRanges@VIDMM_MDL_RANGE@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1400C0960 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z @ 0x1400C4400 (-InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C4888 (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmUnmapView@@YAXPEAU_EPROCESS@@PEAX@Z @ 0x1400CE1B0 (-VidMmUnmapView@@YAXPEAU_EPROCESS@@PEAX@Z.c)
 *     ?LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z @ 0x1400FECB8 (-LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v3; // rax
  unsigned __int64 *v5; // rdi
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v6; // rdx
  int v7; // r9d
  bool v8; // zf
  unsigned __int64 *v9; // rbp
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r15
  char v12; // bl
  VIDMM_MDL_RANGE *v13; // r8
  void *v14; // r8
  unsigned int v15; // ebx
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v17; // rdx
  PVOID v18; // r13
  unsigned __int64 v19; // r12
  int v20; // ecx
  char *v21; // rbx
  int v22; // r13d
  __int64 v23; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  void *v25; // r13
  int v26; // eax
  int v27; // eax
  __int64 v28; // r9
  struct _EPROCESS *v29; // r15
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  unsigned __int64 *v32; // rbx
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  unsigned __int64 v38; // rcx
  char v39; // si
  unsigned __int64 v40; // rbx
  VIDMM_MDL_RANGE *v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rax
  void *v44; // r8
  VIDMM_MDL_RANGE *v45; // rax
  PMDL *v46; // r14
  unsigned __int64 v47; // r9
  VIDMM_MDL_RANGE *v48; // rax
  enum _LOCK_OPERATION v49; // r8d
  VIDMM_MDL_RANGE *v50; // rsi
  unsigned __int64 v51; // rcx
  enum _LOCK_OPERATION v52; // r8d
  unsigned __int64 v53; // rcx
  struct VIDMM_MDL_RANGE *v54; // r15
  unsigned __int64 v55; // rcx
  struct VIDMM_MDL_RANGE *v56; // rdx
  char v57; // bl
  VIDMM_MDL_RANGE *v58; // r8
  void *v59; // r8
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v60; // r8
  unsigned int *v61; // rcx
  __int64 v62; // rdx
  __int64 CurrentProcess; // rax
  int v64; // ecx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  unsigned __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rcx
  NTSTATUS v73; // eax
  unsigned int v74; // r13d
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  int v78; // [rsp+48h] [rbp-90h]
  PVOID Section; // [rsp+60h] [rbp-78h]
  unsigned int Sectiona; // [rsp+60h] [rbp-78h]
  unsigned int Sectionb; // [rsp+60h] [rbp-78h]
  int Sectionc; // [rsp+60h] [rbp-78h]
  PVOID MappedBase; // [rsp+68h] [rbp-70h] BYREF
  unsigned __int64 v84; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v85; // [rsp+78h] [rbp-60h] BYREF
  ULONG_PTR ViewSize; // [rsp+80h] [rbp-58h] BYREF
  VIDMM_MDL_RANGE *v87; // [rsp+88h] [rbp-50h]
  struct VIDMM_MDL_RANGE *v88; // [rsp+90h] [rbp-48h]
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v89; // [rsp+E0h] [rbp+8h]
  unsigned __int64 v90; // [rsp+F0h] [rbp+18h]
  char v91; // [rsp+F8h] [rbp+20h]

  v90 = a3;
  v89 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)this;
  v3 = this[1];
  v5 = 0LL;
  v6 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(this + 1);
  v7 = -1;
  if ( v3 == (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(this + 1) )
    goto LABEL_2;
  while ( 2 )
  {
    while ( 1 )
    {
      v8 = v7 == 0;
      if ( v7 >= 0 )
        break;
      v5 = (unsigned __int64 *)((char *)v3 - 24);
      if ( *((_QWORD *)v3 - 1) > a2 )
        v7 = *((_QWORD *)v3 - 2) >= a3;
      else
        v7 = -1;
      v3 = *(VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **)v3;
      if ( v3 == v6 )
      {
        v8 = v7 == 0;
        break;
      }
    }
    if ( !v8 )
    {
LABEL_2:
      g_DxgMmsBugcheckExportIndex = 1;
      v3 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)WdLogSingleEntry5(0LL, 270LL, 52LL, 9LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 195;
      continue;
    }
    break;
  }
  v9 = v5;
  v10 = v5[1];
  if ( v5[2] < a3 )
  {
    do
    {
      v33 = v9[3];
      v34 = v9[5] + 8;
      v9 = (unsigned __int64 *)(v33 - 24);
      if ( v33 == v34 )
        v9 = 0LL;
    }
    while ( v9[2] < a3 );
    this = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **)v89;
  }
  v11 = v9[2];
  if ( v10 < a2 || v11 > a3 )
  {
    v17 = *this;
    v18 = 0LL;
    v91 = 0;
    v19 = v11 - v10;
    v20 = **((_DWORD **)*this + 4);
    if ( (unsigned int)(v20 - 3) > 3 || (unsigned int)(v20 - 5) <= 1 )
    {
      v21 = (char *)v5[1];
      goto LABEL_30;
    }
    v22 = 4;
    v85 = v11 - v10;
    v84 = v10;
    MappedBase = 0LL;
    if ( v20 != 4 )
      v22 = 1028;
    v91 = 0;
    Section = (PVOID)*((_QWORD *)v17 + 7);
    if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
    {
      v25 = (void *)*((_QWORD *)v17 + 7);
      v26 = -1073741823;
    }
    else
    {
      v23 = ((__int64 (*)(void))PsGetCurrentProcess)();
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      v78 = v22;
      v25 = Section;
      v26 = (*((__int64 (__fastcall **)(PVOID, __int64, PVOID *, _QWORD, unsigned __int64, unsigned __int64 *, unsigned __int64 *, int, _DWORD, int))VirtualMemoryInterface
             + 3))(
              Section,
              v23,
              &MappedBase,
              0LL,
              v11 - v10,
              &v84,
              &v85,
              2,
              0,
              v78);
      if ( v26 >= 0 )
      {
        v18 = MappedBase;
        a3 = v90;
        v21 = (char *)MappedBase + v10 - v84;
        goto LABEL_30;
      }
    }
    _InterlockedIncrement(&dword_1400817A0);
    WdLogSingleEntry2(6LL, 0LL, v26);
    WdLogGlobalForLineNumber = 987;
    DxgkLogInternalTriageEvent(v72, 262145LL);
    ViewSize = 0LL;
    v73 = MmMapViewInSystemSpace(v25, &MappedBase, &ViewSize);
    v74 = v73;
    if ( v73 < 0 )
    {
      _InterlockedIncrement(&dword_1400817A0);
      WdLogSingleEntry1(6LL, v73);
      WdLogGlobalForLineNumber = 1012;
      DxgkLogInternalTriageEvent(v75, 262145LL);
      MappedBase = 0LL;
      _InterlockedIncrement(&dword_1400817A0);
      WdLogSingleEntry4(6LL, v11 - v10, v5[1]);
      WdLogGlobalForLineNumber = 6266;
      DxgkLogInternalTriageEvent(v76, 262145LL);
      return v74;
    }
    v18 = MappedBase;
    a3 = v90;
    v91 = 1;
    v21 = (char *)MappedBase + v10;
LABEL_30:
    if ( v10 < a2 )
    {
      if ( v11 <= a3 )
      {
        v37 = VIDMM_MDL_RANGE::LockUnlock((VIDMM_MDL_RANGE *)v5, v21, v5[1], a2);
        v15 = v37;
        Sectionb = v37;
        if ( v37 < 0 )
        {
          _InterlockedIncrement(&dword_14008176C);
          WdLogSingleEntry1(6LL, v37);
          v29 = 0LL;
          WdLogGlobalForLineNumber = 6288;
          DxgkLogInternalTriageEvent(v65, 262145LL);
          goto LABEL_73;
        }
        if ( v5 != v9 )
        {
          v38 = v5[3];
          v39 = 0;
          v29 = 0LL;
          v40 = v38 - 24;
          if ( v38 == v5[5] + 8 )
            v40 = 0LL;
          do
          {
            MmUnlockPages(*(PMDL *)v40);
            IoFreeMdl(*(PMDL *)v40);
            *(_QWORD *)v40 = 0LL;
            v41 = (VIDMM_MDL_RANGE *)v40;
            if ( (unsigned __int64 *)v40 == v9 )
            {
              v39 = 1;
            }
            else
            {
              v42 = *(_QWORD *)(v40 + 24);
              v43 = *(_QWORD *)(v40 + 40) + 8LL;
              v40 = v42 - 24;
              if ( v42 == v43 )
                v40 = 0LL;
            }
            VIDMM_MDL_RANGE::RemoveFromLockedRanges(v41);
            if ( v44 )
              operator delete(v44);
          }
          while ( !v39 );
          v15 = Sectionb;
          goto LABEL_73;
        }
LABEL_72:
        v29 = 0LL;
LABEL_73:
        v60 = v89;
        v61 = *(unsigned int **)(*(_QWORD *)v89 + 32LL);
        v62 = *v61;
        if ( (unsigned int)(v62 - 3) <= 3 && (unsigned int)(v62 - 5) > 1 )
        {
          if ( !v91 )
          {
            CurrentProcess = PsGetCurrentProcess(v61, v62, v89, v28);
            v60 = v89;
            v29 = (struct _EPROCESS *)CurrentProcess;
          }
          v64 = dword_1400814E4;
          if ( (unsigned __int64)qword_1400812D8 > 0x53333333 )
            v64 = dword_1400814D4;
          if ( v19 > (unsigned int)(v64 << 20) )
            VidMmUnmapViewAsync(v29, *(PVOID *)(*(_QWORD *)v60 + 56LL), v18);
          else
            VidMmUnmapView(v29, v18);
        }
        return v15;
      }
    }
    else if ( v11 > a3 )
    {
      v27 = VIDMM_MDL_RANGE::LockUnlock((VIDMM_MDL_RANGE *)v9, &v21[a3 - v5[1]], a3, v9[2]);
      v15 = v27;
      Sectiona = v27;
      if ( v27 < 0 )
      {
        _InterlockedIncrement(&dword_14008176C);
        WdLogSingleEntry1(6LL, v27);
        v29 = 0LL;
        WdLogGlobalForLineNumber = 6344;
        DxgkLogInternalTriageEvent(v77, 262145LL);
      }
      else
      {
        v29 = 0LL;
        if ( v5 != v9 )
        {
          do
          {
            MmUnlockPages((PMDL)*v5);
            IoFreeMdl((PMDL)*v5);
            v30 = v5[3];
            v31 = v5[5] + 8;
            *v5 = 0LL;
            v32 = (unsigned __int64 *)(v30 - 24);
            if ( v30 == v31 )
              v32 = 0LL;
            VIDMM_MDL_RANGE::RemoveFromLockedRanges((VIDMM_MDL_RANGE *)v5);
            operator delete(v5);
            v5 = v32;
          }
          while ( v32 != v9 );
          v15 = Sectiona;
        }
      }
      goto LABEL_73;
    }
    v45 = (VIDMM_MDL_RANGE *)operator new(48LL, 0x32316956u, 258LL);
    v87 = v45;
    v46 = (PMDL *)v45;
    if ( !v45 )
    {
      _InterlockedIncrement(&dword_14008176C);
      WdLogSingleEntry0(6LL);
      v29 = 0LL;
      WdLogGlobalForLineNumber = 6389;
      DxgkLogInternalTriageEvent(v67, 262145LL);
      v15 = -1073741801;
      goto LABEL_73;
    }
    v47 = v5[1];
    v29 = 0LL;
    *(_QWORD *)v45 = 0LL;
    *((_QWORD *)v45 + 1) = v47;
    *((_QWORD *)v45 + 2) = a2;
    *((_QWORD *)v45 + 5) = v89;
    *((_QWORD *)v45 + 3) = 0LL;
    *((_QWORD *)v45 + 4) = 0LL;
    v48 = (VIDMM_MDL_RANGE *)operator new(48LL, 0x32316956u, 258LL);
    v50 = v48;
    if ( !v48 )
    {
      _InterlockedIncrement(&dword_14008176C);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 6400;
      DxgkLogInternalTriageEvent(v71, 262145LL);
      operator delete(v46);
      v15 = -1073741801;
      goto LABEL_73;
    }
    v51 = v9[2];
    *(_QWORD *)v48 = 0LL;
    *((_QWORD *)v48 + 1) = v90;
    *((_QWORD *)v48 + 2) = v51;
    *((_QWORD *)v48 + 5) = v89;
    *((_QWORD *)v48 + 3) = 0LL;
    *((_QWORD *)v48 + 4) = 0LL;
    if ( (int)VIDMM_MDL_RANGE::Lock((VIDMM_MDL_RANGE *)v46, v21, v49, 0LL, 0LL) < 0 )
    {
      _InterlockedIncrement(&dword_14008176C);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 6418;
      DxgkLogInternalTriageEvent(v68, 262145LL);
    }
    else
    {
      Sectionc = VIDMM_MDL_RANGE::Lock(v50, &v21[v90 - v5[1]], v52, 0LL, 0LL);
      if ( Sectionc >= 0 )
      {
        v53 = v5[4];
        v8 = v53 == v5[5] + 8;
        v54 = (struct VIDMM_MDL_RANGE *)(v53 - 24);
        v55 = v9[3];
        if ( v8 )
          v54 = 0LL;
        v56 = (struct VIDMM_MDL_RANGE *)(v55 - 24);
        if ( v55 == v9[5] + 8 )
          v56 = 0LL;
        v57 = 0;
        v88 = v56;
        do
        {
          MmUnlockPages((PMDL)*v5);
          IoFreeMdl((PMDL)*v5);
          *v5 = 0LL;
          v58 = (VIDMM_MDL_RANGE *)v5;
          if ( v5 == v9 )
          {
            v57 = 1;
          }
          else
          {
            v69 = v5[3];
            v70 = v5[5] + 8;
            v5 = (unsigned __int64 *)(v69 - 24);
            if ( v69 == v70 )
              v5 = 0LL;
          }
          VIDMM_MDL_RANGE::RemoveFromLockedRanges(v58);
          if ( v59 )
            operator delete(v59);
        }
        while ( !v57 );
        VIDMM_MDL_RANGE::InsertBetween(v87, v54, v50);
        VIDMM_MDL_RANGE::InsertBetween(v50, v87, v88);
        v15 = Sectionc;
        goto LABEL_72;
      }
      _InterlockedIncrement(&dword_14008176C);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 6438;
      DxgkLogInternalTriageEvent(v66, 262145LL);
      MmUnlockPages(*v46);
      IoFreeMdl(*v46);
      *v46 = 0LL;
    }
    operator delete(v46);
    operator delete(v50);
    v15 = -1073741801;
    goto LABEL_73;
  }
  v12 = 0;
  do
  {
    MmUnlockPages((PMDL)*v5);
    IoFreeMdl((PMDL)*v5);
    *v5 = 0LL;
    v13 = (VIDMM_MDL_RANGE *)v5;
    if ( v5 == v9 )
    {
      v12 = 1;
    }
    else
    {
      v35 = v5[3];
      v36 = v5[5] + 8;
      v5 = (unsigned __int64 *)(v35 - 24);
      if ( v35 == v36 )
        v5 = 0LL;
    }
    VIDMM_MDL_RANGE::RemoveFromLockedRanges(v13);
    if ( v14 )
      operator delete(v14);
  }
  while ( !v12 );
  return 0;
}
