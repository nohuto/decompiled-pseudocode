/*
 * XREFs of ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EEEW4VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1400CE7B0
 * Callers:
 *     ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EEEW4VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1400CE680 (-ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EEEW4VIDMM_PLACEMENT_RESTR.c)
 * Callees:
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x140005BFC (McTemplateK0pqx_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qpxxtqqq_EtwWriteTransfer @ 0x14003B07C (McTemplateK0qpxxtqqq_EtwWriteTransfer.c)
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1400418F0 (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EE@Z @ 0x1400CF1C8 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EE@Z.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1400CF658 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1400CF710 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveResource(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        int a6,
        unsigned __int64 a7)
{
  __int64 v8; // rbp
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // r13
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rax
  unsigned int v18; // r12d
  _QWORD *v19; // rsi
  unsigned __int64 v20; // rcx
  int v21; // esi
  int v22; // r15d
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r14
  __int64 v25; // rdx
  int v27; // ecx
  __int64 v28; // r14
  __int64 v29; // rdx
  __int64 v30; // r15
  bool v31; // cl
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r10
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r10
  __int64 v41; // r11
  __int64 v42; // r14
  __int64 v43; // rcx
  __int64 v44; // rcx
  _QWORD *v45; // rax
  unsigned __int8 v46; // dl
  unsigned __int64 v47; // r10
  unsigned __int64 v48; // r11
  unsigned __int64 v49; // r12
  _QWORD *v50; // rax
  unsigned __int64 v51; // r14
  unsigned int v52; // r9d
  _QWORD *v53; // rax
  int v54; // [rsp+28h] [rbp-90h]
  int v55; // [rsp+30h] [rbp-88h]
  int v56; // [rsp+40h] [rbp-78h]
  unsigned __int64 v57; // [rsp+60h] [rbp-58h]
  unsigned __int64 v58; // [rsp+68h] [rbp-50h]
  unsigned int v59; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v60; // [rsp+C8h] [rbp+10h]
  unsigned __int8 v61; // [rsp+D0h] [rbp+18h]

  v61 = a3;
  v8 = *(_QWORD *)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(a1);
    WdLogGlobalForLineNumber = 1314;
    v12 = WdLogNewEntry5_WdTrace(v11);
    *(_QWORD *)(v12 + 24) = a1;
    *(_QWORD *)(v12 + 32) = a2;
    WdLogGlobalForLineNumber = 1317;
  }
  if ( (byte_140081241 & 1) != 0 )
    McTemplateK0qpxxtqqq_EtwWriteTransfer(
      a1,
      a2,
      a3,
      (unsigned __int16)(*(_WORD *)(a1 + 40) + 1),
      v8,
      v54,
      v55,
      a4,
      v56,
      a6);
  v13 = *(unsigned int *)(a1 + 104);
  if ( (v13 & 0x20) != 0 )
    v14 = *(_QWORD *)(a2 + 24);
  else
    v14 = *(_QWORD *)(a2 + 16);
  v15 = *(unsigned int *)(a2 + 32);
  v16 = 1LL;
  v59 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a1 + 452) != 1 || a6 != 5 && (*(_DWORD *)(v8 + 24) & 0x800) == 0 )
  {
    v17 = *(_QWORD *)(a1 + 256);
    v18 = 0;
    v19 = *(_QWORD **)(v8 + 352);
    if ( v17 + v14 > *(_QWORD *)(a1 + 248) || v17 + v14 < v17 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdTrace(v13);
        v53[3] = a1;
        v53[4] = v14;
        v53[5] = *(_QWORD *)(a1 + 256);
        v53[6] = *(_QWORD *)(a1 + 248);
        WdLogGlobalForLineNumber = 1158;
      }
    }
    else
    {
      if ( (v13 & 0x1001) == 0 || (v20 = *(_QWORD *)(*v19 + 56LL), v20 + v14 <= v19[2]) && v20 + v14 >= v20 )
      {
        v21 = 0;
        goto LABEL_14;
      }
      if ( g_IsInternalReleaseOrDbg )
      {
        v50 = (_QWORD *)WdLogNewEntry5_WdTrace(v20);
        v50[3] = a1;
        v50[4] = v14;
        v50[5] = *(_QWORD *)(*v19 + 56LL);
        v50[6] = v19[2];
        WdLogGlobalForLineNumber = 1170;
      }
    }
    v21 = VIDMM_SEGMENT::TrimOfferLists(a1, 2LL, v14, *(unsigned int *)(a2 + 32));
    if ( v21 < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v23);
        WdLogGlobalForLineNumber = 1374;
      }
      goto LABEL_49;
    }
    v15 = v59;
    v16 = 1LL;
LABEL_14:
    v22 = 5;
    v23 = *(unsigned int *)(a1 + 104);
    if ( (*(_DWORD *)(v8 + 24) & 0x800) == 0 )
      v22 = a6;
    if ( (v23 & 0x1000) != 0 )
    {
      *(_QWORD *)(a2 + 96) = 0LL;
      *(_QWORD *)(a2 + 88) = 1LL;
      goto LABEL_28;
    }
    v24 = 0LL;
    v60 = *(_QWORD *)(a1 + 72);
    if ( v22 == 3 )
    {
      v46 = 1;
      v61 = 1;
    }
    else if ( v22 == 4 )
    {
      v52 = dword_14008131C;
      if ( (v23 & 0x1001) == 0 )
        v52 = dword_140081318;
      if ( (*(_DWORD *)(v8 + 28) & 0x800) != 0 )
      {
        if ( a7 == -1LL )
        {
          v60 = *(_QWORD *)(a1 + 72);
        }
        else
        {
          v23 = a7 + v14;
          v60 = a7 + v14;
        }
        v46 = 0;
        v61 = 0;
        if ( a7 != -1LL )
          v24 = a7;
      }
      else
      {
        v23 = *(_QWORD *)(a1 + 72) / 0x64uLL;
        if ( *(_BYTE *)(a1 + 489) )
        {
          v60 = (v23 * v52 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          v46 = 1;
          v61 = 1;
        }
        else
        {
          v24 = (v23 * (100 - v52) + 4095) & 0xFFFFFFFFFFFFF000uLL;
          v46 = 0;
          v61 = 0;
        }
      }
    }
    else if ( v22 == 7 )
    {
      v46 = 0;
      v61 = 0;
    }
    else if ( v22 == 5 )
    {
      v24 = *(_QWORD *)(a1 + 424);
      v60 = v24 + *(_QWORD *)(a1 + 432);
      v46 = 0;
      v61 = 0;
    }
    else
    {
      if ( v22 == 6 )
      {
        v25 = *(_QWORD *)(a1 + 424);
        if ( *(_DWORD *)(a1 + 452) == 1 )
        {
          v23 = *(_QWORD *)(a1 + 456) - v25;
          v24 = (*(_QWORD *)(a1 + 456) - v14) & ~(*(_QWORD *)(a1 + 440) | ((unsigned int)v15 - 1LL));
          if ( v23 < v14 )
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              WdLogNewEntry5_WdTrace(v23);
              WdLogGlobalForLineNumber = 1477;
            }
            return 3221225473LL;
          }
          v60 = *(_QWORD *)(a1 + 464);
          v46 = 0;
          v61 = 0;
          goto LABEL_57;
        }
        v60 = v25 + *(_QWORD *)(a1 + 432);
        v24 = *(_QWORD *)(a1 + 424);
      }
      v46 = v61;
    }
LABEL_57:
    v16 = v60;
    v47 = v24;
    v48 = v60;
    v58 = v60;
    v57 = v24;
    v21 = -1073741823;
    while ( 1 )
    {
      if ( v21 >= 0 )
        goto LABEL_29;
      if ( v22 == 7 && *(_DWORD *)(a1 + 452) == 1 )
      {
        v23 = *(_QWORD *)(a1 + 424);
        if ( v18 )
        {
          v16 = *(_QWORD *)(a1 + 424);
          v24 = v47;
          if ( v48 < v23 )
            v16 = v48;
          v60 = v16;
        }
        else
        {
          v24 = v23 + *(_QWORD *)(a1 + 432);
          if ( v47 > v24 )
            v24 = v47;
        }
        if ( v24 >= v16 )
          goto LABEL_66;
      }
      else if ( (**(_DWORD **)(v8 + 392) & 0x20000) == 0 && *(_DWORD *)(a1 + 452) == 1 && *(_QWORD *)(a1 + 472) )
      {
        if ( v46 )
        {
          if ( v18 )
          {
            v16 = v48;
            v60 = v48;
            if ( v24 <= *(_QWORD *)(a1 + 464) )
              v24 = *(_QWORD *)(a1 + 464);
          }
          else if ( *(_QWORD *)(a1 + 456) < v16 )
          {
            v16 = *(_QWORD *)(a1 + 456);
            v60 = v16;
          }
        }
        else if ( v18 )
        {
          v51 = v60;
          if ( *(_QWORD *)(a1 + 456) < v60 )
            v51 = *(_QWORD *)(a1 + 456);
          v60 = v51;
          v24 = v47;
          v16 = v60;
        }
        else if ( v24 <= *(_QWORD *)(a1 + 464) )
        {
          v24 = *(_QWORD *)(a1 + 464);
        }
        if ( v24 >= v16 )
          goto LABEL_66;
      }
      else if ( v18 )
      {
        goto LABEL_49;
      }
      v21 = VIDMM_LINEAR_POOL::Allocate(
              *(VIDMM_LINEAR_POOL **)(a1 + 208),
              v14,
              v15,
              v46,
              v24,
              v16,
              a4,
              a5,
              (struct VIDMM_PHYSICAL_ALLOC *)a2,
              (union _LARGE_INTEGER *)(a2 + 96),
              (void **)(a2 + 88));
      if ( v21 < 0 )
      {
        v21 = VIDMM_SEGMENT::TrimOfferLists(a1, 1LL, v14, *(unsigned int *)(a2 + 32));
        if ( v21 >= 0 )
          v21 = VIDMM_LINEAR_POOL::Allocate(
                  *(VIDMM_LINEAR_POOL **)(a1 + 208),
                  v14,
                  v59,
                  v61,
                  v24,
                  v60,
                  a4,
                  a5,
                  (struct VIDMM_PHYSICAL_ALLOC *)a2,
                  (union _LARGE_INTEGER *)(a2 + 96),
                  (void **)(a2 + 88));
      }
      v16 = v60;
      v47 = v57;
      v48 = v58;
LABEL_66:
      v15 = v59;
      ++v18;
      v46 = v61;
      if ( v18 >= 2 )
        goto LABEL_28;
    }
  }
  v21 = VIDMM_SEGMENT::ReserveVPRResource((VIDMM_SEGMENT *)a1, (struct VIDMM_PHYSICAL_ALLOC *)a2, a4, a5);
LABEL_28:
  if ( v21 < 0 )
  {
LABEL_49:
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v23) + 24) = v21;
      WdLogGlobalForLineNumber = 1674;
    }
    goto LABEL_43;
  }
LABEL_29:
  v27 = *(_DWORD *)(v8 + 24);
  v28 = *(_QWORD *)(a2 + 16);
  v29 = *(unsigned int *)(a1 + 408);
  v30 = **(_QWORD **)(v8 + 352);
  *(_QWORD *)(a1 + 264) += v28;
  v31 = (v27 & 0x200) != 0;
  if ( (_DWORD)v29 != -1 && !v31 )
  {
    v49 = *(_QWORD *)(a1 + 272);
    *(_QWORD *)(a1 + 272) = v28 + v49;
    if ( v28 + v49 > qword_1400815C8 && v49 <= qword_1400815C8 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, unsigned __int64))(*(_QWORD *)(a1 + 24) + 40016LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40080LL),
        v29,
        v15,
        v16);
    if ( !v49 )
      VIDMM_GLOBAL::NotifyMemorySegmentActive(*(VIDMM_GLOBAL **)(a1 + 24), (struct VIDMM_SEGMENT *)a1);
  }
  v32 = *(_QWORD *)(a1 + 24);
  v33 = *(unsigned __int16 *)(a1 + 420);
  v34 = *(int *)(a1 + 516);
  v35 = *(_QWORD *)(*(_QWORD *)(v32 + 40232) + 8 * v33);
  if ( (*(_BYTE *)(v35 + 24 * v34 + 552) & 1) != 0 )
    v36 = *(_QWORD *)(384LL * *(unsigned int *)(*(_QWORD *)(v32 + 24) + 240LL) + *(_QWORD *)(v30 + 40) + 24) + 344 * v33;
  else
    v36 = v35 + 344 * v34 + 584;
  *(_QWORD *)(v36 + 128) += v28;
  v37 = *(_QWORD *)(a1 + 24);
  v38 = *(_QWORD *)(a2 + 16);
  v39 = *(unsigned __int16 *)(a1 + 420);
  v40 = **(_QWORD **)(v8 + 352);
  *(_QWORD *)(a1 + 256) += v38;
  v41 = *(int *)(a1 + 516);
  v42 = *(_QWORD *)(*(_QWORD *)(v37 + 40232) + 8 * v39);
  if ( (*(_BYTE *)(v42 + 24 * v41 + 552) & 1) != 0 )
    v43 = *(_QWORD *)(384LL * *(unsigned int *)(*(_QWORD *)(v37 + 24) + 240LL) + *(_QWORD *)(v40 + 40) + 24) + 344 * v39;
  else
    v43 = v42 + 344 * v41 + 584;
  *(_QWORD *)(v43 + 120) += v38;
  if ( (byte_140081241 & 1) != 0 )
    McTemplateK0pqx_EtwWriteTransfer();
  ++*(_DWORD *)(a1 + 360);
  ++*(_DWORD *)(a1 + 364);
  if ( (*(_DWORD *)(a1 + 104) & 0x1001) == 0 )
    goto LABEL_41;
  v44 = *(_QWORD *)(v8 + 360);
  if ( v44 )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(v44 + 44)) == 1 )
      _InterlockedAdd64((volatile signed __int64 *)(**(_QWORD **)(v8 + 352) + 56LL), *(_QWORD *)(a2 + 16));
    if ( _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 360) + 40LL)) != 1 )
      goto LABEL_40;
  }
  else
  {
    _InterlockedAdd64((volatile signed __int64 *)(**(_QWORD **)(v8 + 352) + 56LL), *(_QWORD *)(a2 + 16));
  }
  _InterlockedAdd64((volatile signed __int64 *)(**(_QWORD **)(v8 + 352) + 64LL), *(_QWORD *)(a2 + 16));
LABEL_40:
  v43 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(v43 + 40216) += *(_QWORD *)(a2 + 16);
LABEL_41:
  *(_QWORD *)(a2 + 104) = a1;
  if ( g_IsInternalReleaseOrDbg )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdTrace(v43);
    v45[3] = *(_QWORD *)(a2 + 88);
    v45[4] = *(int *)(a2 + 100);
    v45[5] = *(unsigned int *)(a2 + 96);
    WdLogGlobalForLineNumber = 1669;
  }
LABEL_43:
  if ( (byte_140081241 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer();
  return (unsigned int)v21;
}
