/*
 * XREFs of ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x14002B4D0
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x14005C3DC (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1400B0B2C (-GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400B1B20 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVUDCOBJ@@KPEAGK1@Z @ 0x14025998C (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVUDCOBJ@@KPEAGK1@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BB10 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ??$GrepReleaseLockValidate@$0BA@@@YAXXZ @ 0x14002BB38 (--$GrepReleaseLockValidate@$0BA@@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$0BA@@@YAXXZ @ 0x14002BBF0 (--$GrepAcquireLockValidate@$0BA@@@YAXXZ.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BCE8 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x140152C44 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 */

__int64 __fastcall RFONTOBJ::bIsLinkedGlyph(RFONTOBJ *this, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  unsigned int v9; // esi
  int v10; // r9d
  __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // r12
  int v18; // ecx
  __int64 v19; // r15
  int v20; // edi
  __int64 v22; // rdi
  BOOL v23; // r13d
  __int64 v24; // rax
  _QWORD **v25; // rax
  _QWORD *v26; // r14
  int v27; // r15d
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  __int64 v36; // r12
  __int64 v37; // r15
  int v38; // eax
  __int64 v39; // rbx
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  __int64 v45; // r15
  int v46; // ecx
  __int64 v47; // r14
  int v48; // edi
  struct PFE *v49; // rdx
  __int64 v50; // r9
  struct PFE *v51; // rdx
  struct W32_PUSH_LOCK *v52; // [rsp+60h] [rbp+18h]

  v3 = (unsigned __int16)a2;
  v5 = *(_QWORD *)(W32GetSessionState(this, a2, a3) + 96) + 4872LL;
  GrepAcquireLockValidate<16>();
  v52 = (struct W32_PUSH_LOCK *)(v5 + 8608);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(v5 + 8608), 0);
  v8 = 6399LL;
  v9 = 0;
  if ( (unsigned __int16)(v3 + 0x2000) <= 0x18FFu
    || (*(_QWORD *)(v5 + 8656) || *(_QWORD *)(v5 + 8664))
    && (unsigned __int16)v3 >= *(_WORD *)(v5 + 9200)
    && (unsigned __int16)v3 <= *(_WORD *)(v5 + 9202)
    && (v7 = v3 >> 5,
        v8 = v3 & 0x1F,
        v6 = 0x80000000 >> v8,
        ((unsigned int)v6 & *(_DWORD *)(*(_QWORD *)(v5 + 9208) + 4 * (v3 >> 5))) != 0) )
  {
    v9 = 1;
  }
  else if ( *(_DWORD *)(v5 + 14696) )
  {
    v10 = *(_DWORD *)(*(_QWORD *)this + 852LL);
    v7 = v10 != 0;
    v6 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 45LL) >> 4;
    if ( (unsigned int)v6 >= 7 || !*(_DWORD *)(664LL * (unsigned int)v6 + v5 + 9424) )
      v6 = 6LL;
    v8 = v10 != 0;
    if ( v10 )
    {
      v50 = 664LL * (unsigned int)v6;
      if ( !*(_QWORD *)(v50 + v5 + 10080) )
      {
        if ( *(_QWORD *)(v50 + v5 + 10072) )
          v8 = 0LL;
      }
    }
    v11 = *(_QWORD *)(v5 + 8 * ((unsigned int)v8 + 83LL * (unsigned int)v6) + 10072);
    if ( v11 )
    {
      v12 = *(_DWORD *)(v11 + 12);
      if ( (v12 & 0x200) != 0 )
      {
        *(_DWORD *)(v11 + 12) = v12 & 0xFFFFFDFF;
        bComputeQuickLookup(0LL, (struct PFE *)v11, 0);
      }
      if ( *(_QWORD *)(v11 + 112) )
      {
        v13 = *(_DWORD *)(v11 + 12);
        if ( (v13 & 0x200) != 0 )
        {
          *(_DWORD *)(v11 + 12) = v13 & 0xFFFFFDFF;
          bComputeQuickLookup(0LL, (struct PFE *)v11, 0);
        }
        if ( (unsigned __int16)v3 >= *(_WORD *)(v11 + 104) )
        {
          v14 = *(_DWORD *)(v11 + 12);
          if ( (v14 & 0x200) != 0 )
          {
            *(_DWORD *)(v11 + 12) = v14 & 0xFFFFFDFF;
            bComputeQuickLookup(0LL, (struct PFE *)v11, 0);
          }
          if ( (unsigned __int16)v3 <= *(_WORD *)(v11 + 106) )
          {
            v15 = *(_DWORD *)(v11 + 12);
            if ( (v15 & 0x200) != 0 )
            {
              *(_DWORD *)(v11 + 12) = v15 & 0xFFFFFDFF;
              bComputeQuickLookup(0LL, (struct PFE *)v11, 0);
            }
            v16 = *(_DWORD *)(v11 + 12);
            v17 = *(_QWORD *)(v11 + 112);
            if ( (v16 & 0x200) != 0 )
            {
              *(_DWORD *)(v11 + 12) = v16 & 0xFFFFFDFF;
              bComputeQuickLookup(0LL, (struct PFE *)v11, 0);
            }
            v18 = *(_DWORD *)(v11 + 12);
            v19 = (int)(v3 - *(unsigned __int16 *)(v11 + 104)) / 32;
            if ( (v18 & 0x200) != 0 )
            {
              *(_DWORD *)(v11 + 12) = v18 & 0xFFFFFDFF;
              bComputeQuickLookup(0LL, (struct PFE *)v11, 0);
            }
            v20 = v3 - *(unsigned __int16 *)(v11 + 104);
            v6 = (unsigned int)(v20 >> 31);
            LODWORD(v6) = v20 % 32;
            v8 = (unsigned int)(v20 % 32);
            if ( ((0x80000000 >> v8) & *(_DWORD *)(v17 + 4 * v19)) != 0 )
              v9 = 1;
          }
        }
      }
    }
    goto LABEL_27;
  }
  if ( *(_DWORD *)(v5 + 14688) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)this + 120LL);
    if ( (*(_DWORD *)(v8 + 12) & 0x10) != 0 )
    {
      v39 = *(_QWORD *)(v5 + 14672);
      v40 = *(_DWORD *)(v39 + 12);
      if ( (v40 & 0x200) != 0 )
      {
        v51 = *(struct PFE **)(v5 + 14672);
        *(_DWORD *)(v39 + 12) = v40 & 0xFFFFFDFF;
        bComputeQuickLookup(0LL, v51, 0);
      }
      if ( *(_QWORD *)(v39 + 112) )
      {
        v41 = *(_DWORD *)(v39 + 12);
        if ( (v41 & 0x200) != 0 )
        {
          *(_DWORD *)(v39 + 12) = v41 & 0xFFFFFDFF;
          bComputeQuickLookup(0LL, (struct PFE *)v39, 0);
        }
        if ( (unsigned __int16)v3 >= *(_WORD *)(v39 + 104) )
        {
          v42 = *(_DWORD *)(v39 + 12);
          if ( (v42 & 0x200) != 0 )
          {
            *(_DWORD *)(v39 + 12) = v42 & 0xFFFFFDFF;
            bComputeQuickLookup(0LL, (struct PFE *)v39, 0);
          }
          if ( (unsigned __int16)v3 <= *(_WORD *)(v39 + 106) )
          {
            v43 = *(_DWORD *)(v39 + 12);
            if ( (v43 & 0x200) != 0 )
            {
              *(_DWORD *)(v39 + 12) = v43 & 0xFFFFFDFF;
              bComputeQuickLookup(0LL, (struct PFE *)v39, 0);
            }
            v44 = *(_DWORD *)(v39 + 12);
            v45 = *(_QWORD *)(v39 + 112);
            if ( (v44 & 0x200) != 0 )
            {
              *(_DWORD *)(v39 + 12) = v44 & 0xFFFFFDFF;
              bComputeQuickLookup(0LL, (struct PFE *)v39, 0);
            }
            v46 = *(_DWORD *)(v39 + 12);
            v47 = (int)(v3 - *(unsigned __int16 *)(v39 + 104)) / 32;
            if ( (v46 & 0x200) != 0 )
            {
              *(_DWORD *)(v39 + 12) = v46 & 0xFFFFFDFF;
              bComputeQuickLookup(0LL, (struct PFE *)v39, 0);
            }
            v48 = v3 - *(unsigned __int16 *)(v39 + 104);
            v6 = (unsigned int)(v48 >> 31);
            LODWORD(v6) = v48 % 32;
            v8 = (unsigned int)(v48 % 32);
            if ( ((0x80000000 >> v8) & *(_DWORD *)(v45 + 4 * v47)) != 0 )
            {
LABEL_53:
              v9 = 1;
              goto LABEL_28;
            }
          }
        }
      }
    }
  }
LABEL_27:
  if ( !v9 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)this + 120LL);
    v23 = *(_DWORD *)(*(_QWORD *)this + 852LL) != 0;
    v24 = *(_QWORD *)(v22 + 120);
    if ( v24 )
      v25 = (_QWORD **)(v24 + 16);
    else
      v25 = (_QWORD **)(*(_QWORD *)(W32GetSessionState(v8, v6, v7) + 96) + 14136LL);
    v26 = *v25;
    v27 = v3;
    while ( 1 )
    {
      v28 = *(_QWORD *)(v22 + 120);
      v29 = v28 ? v28 + 16 : *(_QWORD *)(W32GetSessionState(v8, v6, v7) + 96) + 14136LL;
      if ( v26 == (_QWORD *)v29 )
        break;
      v8 = -v26[v23 + 4];
      v30 = v26[(v23 & (unsigned int)-(v26[v23 + 4] != 0LL)) + 4];
      v31 = *(_DWORD *)(v30 + 12);
      if ( (v31 & 0x200) != 0 )
      {
        v49 = (struct PFE *)v26[(v23 & (unsigned int)-(v26[v23 + 4] != 0LL)) + 4];
        *(_DWORD *)(v30 + 12) = v31 & 0xFFFFFDFF;
        bComputeQuickLookup(0LL, v49, 0);
      }
      if ( *(_QWORD *)(v30 + 112) )
      {
        v32 = *(_DWORD *)(v30 + 12);
        if ( (v32 & 0x200) != 0 )
        {
          *(_DWORD *)(v30 + 12) = v32 & 0xFFFFFDFF;
          bComputeQuickLookup(0LL, (struct PFE *)v30, 0);
        }
        if ( (unsigned __int16)v3 >= *(_WORD *)(v30 + 104) )
        {
          v33 = *(_DWORD *)(v30 + 12);
          if ( (v33 & 0x200) != 0 )
          {
            *(_DWORD *)(v30 + 12) = v33 & 0xFFFFFDFF;
            bComputeQuickLookup(0LL, (struct PFE *)v30, 0);
          }
          if ( (unsigned __int16)v3 <= *(_WORD *)(v30 + 106) )
          {
            v34 = *(_DWORD *)(v30 + 12);
            if ( (v34 & 0x200) != 0 )
            {
              *(_DWORD *)(v30 + 12) = v34 & 0xFFFFFDFF;
              bComputeQuickLookup(0LL, (struct PFE *)v30, 0);
            }
            v35 = *(_DWORD *)(v30 + 12);
            v36 = *(_QWORD *)(v30 + 112);
            if ( (v35 & 0x200) != 0 )
            {
              *(_DWORD *)(v30 + 12) = v35 & 0xFFFFFDFF;
              bComputeQuickLookup(0LL, (struct PFE *)v30, 0);
            }
            v37 = (v27 - *(unsigned __int16 *)(v30 + 104)) / 32;
            v38 = *(_DWORD *)(v30 + 12);
            if ( (v38 & 0x200) != 0 )
            {
              *(_DWORD *)(v30 + 12) = v38 & 0xFFFFFDFF;
              bComputeQuickLookup(0LL, (struct PFE *)v30, 0);
            }
            v6 = (unsigned int)((int)(v3 - *(unsigned __int16 *)(v30 + 104)) >> 31);
            LODWORD(v6) = (int)(v3 - *(unsigned __int16 *)(v30 + 104)) % 32;
            v8 = (unsigned int)v6;
            if ( ((0x80000000 >> v6) & *(_DWORD *)(v36 + 4 * v37)) != 0 )
              goto LABEL_53;
            v27 = v3;
          }
        }
      }
      v26 = (_QWORD *)*v26;
    }
  }
LABEL_28:
  W32ReleasePushLockExclusiveEx(v52, 0);
  GrepReleaseLockValidate<16>();
  return v9;
}
