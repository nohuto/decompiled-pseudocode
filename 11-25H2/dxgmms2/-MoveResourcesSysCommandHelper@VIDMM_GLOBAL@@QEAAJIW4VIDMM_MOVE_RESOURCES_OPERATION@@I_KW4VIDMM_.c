/*
 * XREFs of ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x140110C84
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400DE3C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ @ 0x14004CBC0 (-GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ.c)
 *     ?GetActiveVprStart@VIDMM_SEGMENT@@QEBA_KXZ @ 0x14004CBE8 (-GetActiveVprStart@VIDMM_SEGMENT@@QEBA_KXZ.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z @ 0x140090F80 (-TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x140093400 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@33W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x140110E58 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_S.c)
 *     ?TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ @ 0x140111974 (-TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::MoveResourcesSysCommandHelper(
        VIDMM_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v5; // rax
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  VIDMM_SEGMENT *v16; // rcx
  unsigned __int64 ActiveVprEnd; // rbx
  __int64 v18; // rcx
  void (__fastcall *v19)(__int64, unsigned __int64, _QWORD); // rax
  unsigned __int64 v20; // rdx
  VIDMM_SEGMENT *v21; // rcx
  unsigned __int64 v23; // [rsp+80h] [rbp+8h] BYREF
  char v24; // [rsp+88h] [rbp+10h]

  v5 = *((_QWORD *)a1 + 5029);
  a5 = 0LL;
  v24 = 0;
  v8 = *(_QWORD *)(v5 + 8LL * a2);
  if ( a3 - 3 <= 1 )
  {
    VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(a1);
    v13 = 0LL;
    if ( !*(_DWORD *)(v8 + 64) )
      return 0;
    while ( 1 )
    {
      v14 = *(_QWORD *)(v8 + 1648);
      v15 = *(_QWORD *)(v14 + 8 * v13);
      if ( a3 != 3 )
        break;
      VIDMM_SEGMENT::TrimAllMarkedForEvictionAllocations(*(VIDMM_SEGMENT **)(v14 + 8 * v13));
      if ( (*(_BYTE *)(v15 + 106) & 1) != 0 )
      {
        VIDMM_SEGMENT::GetActiveVprStart((VIDMM_SEGMENT *)v15);
        ActiveVprEnd = VIDMM_SEGMENT::GetActiveVprEnd(v16);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 128LL))(v18, 0LL);
        v19 = *(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v15 + 128LL);
        goto LABEL_8;
      }
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v15 + 128LL))(v15, 0LL, *(_QWORD *)(v15 + 72));
LABEL_14:
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= *(_DWORD *)(v8 + 64) )
        return 0;
    }
    if ( (*(_BYTE *)(v15 + 106) & 1) != 0 )
    {
      VIDMM_SEGMENT::GetActiveVprStart(*(VIDMM_SEGMENT **)(v14 + 8 * v13));
      ActiveVprEnd = VIDMM_SEGMENT::GetActiveVprEnd(v21);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 136LL))(v15, 0LL);
      v19 = *(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v15 + 136LL);
LABEL_8:
      v20 = ActiveVprEnd;
    }
    else
    {
      v20 = 0LL;
      v19 = *(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v15 + 136LL);
    }
    v19(v15, v20, *(_QWORD *)(v15 + 72));
    goto LABEL_14;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 1648) + 8LL * a4);
  v23 = *(_QWORD *)(v9 + 72);
  VIDMM_SEGMENT::TrimMarkedForEvictionAllocations((VIDMM_PHYSICAL_ADAPTER **)v9, &v23);
  v11 = VIDMM_GLOBAL::MoveResources(a1, v10, a3, v9);
  v12 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry1(3LL, v11);
    WdLogGlobalForLineNumber = 28232;
  }
  return v12;
}
