/*
 * XREFs of ?ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z @ 0x1400606A0
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z @ 0x14005EFB0 (-GrepGetTextFaceW@@YAHAEAVUDCOBJ@@HPEAGH@Z.c)
 *     ?GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z @ 0x1400BB50C (-GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z.c)
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400BEDA0 (-GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@R.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z @ 0x1400BFB58 (-dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z.c)
 * Callees:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@@3@Z @ 0x1400B96C8 (-ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

struct PFE *__fastcall LFONTCOREOBJ::ppfeMapFont(
        LFONTCOREOBJ *this,
        struct MAPPER::PARAMETERS *a2,
        unsigned int *a3,
        struct _POINTL *a4,
        unsigned int *a5)
{
  unsigned int *v6; // rsi
  int v8; // r15d
  __int64 v9; // rbp
  struct Gre::Base::SESSION_GLOBALS *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned int v15; // r9d
  __int64 v16; // r12
  __int64 v17; // r8
  char v18; // cl
  int v19; // eax
  int v20; // r13d
  __int64 v21; // rcx
  int v22; // r13d
  __int64 i; // rdi
  struct PFE *v24; // rsi
  unsigned int *v25; // rdi
  struct PFE *result; // rax
  unsigned int v27; // edx
  char v28; // cl
  int v29; // edx
  __int64 v30; // rdx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  int v34; // edx
  __int64 v35; // r15
  __int64 v36; // r15
  char v37; // al
  int v38; // edx
  int v39; // [rsp+40h] [rbp-68h]
  __int64 v40; // [rsp+50h] [rbp-58h]
  int v41; // [rsp+B0h] [rbp+8h]
  int v42; // [rsp+B8h] [rbp+10h]

  v40 = *(_QWORD *)a2;
  v6 = a3;
  v39 = 0;
  v41 = 0;
  v8 = 0;
  v9 = *(_QWORD *)this + 16LL;
  v10 = Gre::Base::Globals(0LL);
  v16 = *(_QWORD *)(W32GetSessionState(v12, v11, v13) + 96);
  if ( !*((_BYTE *)a2 + 87) )
  {
    v17 = *(_QWORD *)this;
    v18 = *(_BYTE *)(*(_QWORD *)this + 278LL);
    if ( !*((_BYTE *)a2 + 88) && !*((_BYTE *)a2 + 89) )
      goto LABEL_61;
    v14 = *(unsigned int *)(v16 + 20372);
    if ( (v14 & 2) != 0 )
    {
      if ( v18 == 3 )
        goto LABEL_61;
    }
    else if ( (unsigned __int8)(v18 - 4) > 2u )
    {
      goto LABEL_61;
    }
    if ( *((_BYTE *)a2 + 90) )
    {
      v19 = *((_DWORD *)a2 + 16);
      v39 = v19;
      if ( v19 == 6 || (unsigned int)(v19 - 4) <= 1 )
      {
        v41 = 0x10000;
        if ( v18 == 6 )
        {
          v20 = 1342242816;
          v41 = 1342242816;
        }
        else
        {
          if ( v18 == 5 || (v14 & 0x10) != 0 )
            v41 = 268500992;
          v20 = v41;
        }
LABEL_12:
        if ( !*((_BYTE *)a2 + 86) )
        {
          v21 = *(unsigned int *)(*((_QWORD *)v10 + 221) + 1573016LL);
          if ( *(_DWORD *)(v17 + 12) != (_DWORD)v21 )
          {
            *(_DWORD *)(v17 + 8) = 0;
            v21 = *(_QWORD *)this;
            *(_DWORD *)(*(_QWORD *)this + 12LL) = *(_DWORD *)(*((_QWORD *)v10 + 221) + 1573016LL);
          }
          v22 = 1;
          for ( i = v9; ; i += 56LL )
          {
            v42 = v8;
            if ( v8 >= *(_DWORD *)(*(_QWORD *)this + 8LL) )
            {
              v20 = v41;
              v6 = a3;
              goto LABEL_28;
            }
            if ( v40 == *(_QWORD *)i
              && *(float *)(i + 8) == *((float *)a2 + 2)
              && *(float *)(i + 12) == *((float *)a2 + 3)
              && *(float *)(i + 16) == *((float *)a2 + 4)
              && *(float *)(i + 20) == *((float *)a2 + 5) )
            {
              break;
            }
LABEL_26:
            ++v8;
            ++v22;
          }
          v24 = *(struct PFE **)(i + 24);
          if ( !v24 )
          {
LABEL_23:
            v21 = *(unsigned int *)(*(_QWORD *)this + 8LL);
            if ( v22 < (int)v21 )
              memmove((void *)(v9 + 56LL * v8), (const void *)(v9 + 56LL * v22), (unsigned int)(56 * (v21 - v8) - 56));
            --v8;
            --v22;
            --*(_DWORD *)(*(_QWORD *)this + 8LL);
            i -= 56LL;
            goto LABEL_26;
          }
          v35 = *(_QWORD *)v24;
          if ( *(_QWORD *)(v35 + 136) == *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v21, v14, v17) + 96) + 20408LL) )
          {
            v36 = *(_QWORD *)(v35 + 152);
            if ( !v36 )
            {
LABEL_59:
              v8 = v42;
              goto LABEL_23;
            }
            while ( ((*(_DWORD *)(v36 + 8) & 4) == 0 || *(_DWORD *)(v36 + 12) != (unsigned int)PsGetCurrentThreadId())
                 && *(_DWORD *)(v36 + 12) != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
            {
              v36 = *(_QWORD *)(v36 + 16);
              if ( !v36 )
                goto LABEL_59;
            }
          }
          v32 = *(_DWORD *)(i + 32);
          if ( v41 )
          {
            if ( (v32 & 0x10010000) == v41 && v39 == *(_DWORD *)(i + 48) )
            {
LABEL_48:
              v25 = a5;
              v33 = 56LL * v42;
              *a3 = *(_DWORD *)(v33 + v9 + 32);
              a4->x = *(_DWORD *)(v33 + v9 + 36);
              a4->y = *(_DWORD *)(v33 + v9 + 40);
              *a5 = *(_DWORD *)(v33 + v9 + 44);
              goto LABEL_49;
            }
          }
          else if ( (v32 & 0x10000) == 0 )
          {
            goto LABEL_48;
          }
          goto LABEL_59;
        }
        goto LABEL_28;
      }
    }
LABEL_61:
    v20 = 0;
    goto LABEL_12;
  }
  v20 = 0;
LABEL_28:
  v25 = a5;
  result = ppfeGetAMatch(
             a2,
             (struct tagENUMLOGFONTEXDVW *)(*(_QWORD *)this + 252LL),
             (const unsigned __int16 *)(*(_QWORD *)this + 184LL),
             v15,
             v6,
             a4,
             a5);
  v24 = result;
  if ( !result )
    return result;
  if ( *((_BYTE *)a2 + 87) )
    goto LABEL_49;
  if ( v20 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)result + 4) + 48LL) & 0x40) != 0 )
    {
      v27 = *a3;
      *a3 |= 0x10000u;
      if ( (*((_BYTE *)a2 + 88) || *((_BYTE *)a2 + 89))
        && *((_BYTE *)a2 + 90)
        && (*(_DWORD *)(*((_QWORD *)result + 4) + 48LL) & 1) != 0 )
      {
        v28 = *(_BYTE *)(*(_QWORD *)this + 278LL);
        if ( v28 == 5 )
          goto LABEL_39;
        if ( v28 != 4 )
        {
          if ( v28 == 6 )
          {
            v29 = v27 | 0x50010000;
            goto LABEL_40;
          }
          if ( (*(_BYTE *)(v16 + 20372) & 0x12) == 0x12 )
          {
LABEL_39:
            v29 = v27 | 0x10010000;
LABEL_40:
            *a3 = v29;
          }
        }
      }
    }
  }
  if ( !*((_BYTE *)a2 + 86) )
  {
    if ( v8 >= 3 )
    {
      v8 = 0;
      *(_DWORD *)(*(_QWORD *)this + 8LL) = 0;
    }
    v30 = 56LL * v8;
    *(_QWORD *)(v30 + v9) = v40;
    *(_QWORD *)(v30 + v9 + 24) = result;
    *(_DWORD *)(v30 + v9 + 32) = *a3;
    *(_DWORD *)(v30 + v9 + 36) = a4->x;
    *(_DWORD *)(v30 + v9 + 40) = a4->y;
    v31 = 14LL * v8;
    *(_DWORD *)(v9 + 4 * v31 + 8) = *((_DWORD *)a2 + 2);
    *(_DWORD *)(v9 + 4 * v31 + 12) = *((_DWORD *)a2 + 3);
    *(_DWORD *)(v9 + 4 * v31 + 16) = *((_DWORD *)a2 + 4);
    *(_DWORD *)(v9 + 4 * v31 + 20) = *((_DWORD *)a2 + 5);
    *(_DWORD *)(v30 + v9 + 44) = *a5;
    *(_DWORD *)(v30 + v9 + 48) = v39;
    ++*(_DWORD *)(*(_QWORD *)this + 8LL);
  }
LABEL_49:
  v34 = *(_DWORD *)(v16 + 18944);
  if ( v34 && (*(_BYTE *)(*(_QWORD *)this + 277LL) & 0x40) == 0 )
  {
    if ( (v37 = *((_BYTE *)v25 + 3), v38 = *(_DWORD *)(v16 + 18948) | v34, !v37) && (v38 & 2) != 0
      || v37 == -1 && (v38 & 1) != 0 )
    {
      *v25 = *v25 & 0xFF0000FF | (*(unsigned __int16 *)(v16 + 18952) << 8);
    }
  }
  return v24;
}
