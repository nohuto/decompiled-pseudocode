/*
 * XREFs of ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C010FF00
 * Callers:
 *     ?GreGetOutlineTextMetricsInternalW@@YAKPEAUHDC__@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C00CA878 (-GreGetOutlineTextMetricsInternalW@@YAKPEAUHDC__@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4Entry.c)
 *     GreGetCharSet @ 0x1C00D1968 (GreGetCharSet.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010D900 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     GreGetTextFaceW @ 0x1C011189C (GreGetTextFaceW.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C028DA7C (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C008E634 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C0110424 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C015C824 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

struct PFE *__fastcall LFONTOBJ::ppfeMapFont(
        LFONTOBJ *this,
        DC **a2,
        unsigned int *a3,
        struct _POINTL *a4,
        unsigned int *a5,
        int a6)
{
  int v6; // r12d
  float *v7; // rsi
  unsigned int *v8; // rbp
  int v11; // r15d
  struct Gre::Base::SESSION_GLOBALS *v12; // r13
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  DC *v17; // rdx
  char v18; // bl
  int v19; // esi
  __int64 v20; // r10
  int v21; // r12d
  Gre::Base *v22; // rcx
  __int64 v23; // rbp
  struct PFE *v24; // rsi
  __int64 v25; // rbx
  int v26; // eax
  unsigned int *v27; // rbx
  _DWORD *v28; // rcx
  int v29; // edx
  struct PFE *result; // rax
  int v31; // ecx
  __int64 v32; // r9
  unsigned int v33; // eax
  unsigned int v34; // edx
  DC *v35; // rcx
  char v36; // cl
  int v37; // edx
  __int64 v38; // rdx
  __int64 v39; // rax
  char v40; // al
  int v41; // edx
  __int64 v42; // [rsp+50h] [rbp-88h]
  float *v43; // [rsp+58h] [rbp-80h]
  __int64 v44; // [rsp+60h] [rbp-78h]
  __int64 v45; // [rsp+68h] [rbp-70h]
  __int64 v46; // [rsp+70h] [rbp-68h]
  _QWORD v47[12]; // [rsp+78h] [rbp-60h] BYREF
  int v48; // [rsp+E0h] [rbp+8h]
  int v49; // [rsp+E8h] [rbp+10h]

  v6 = 0;
  v7 = (float *)*a2;
  v8 = a3;
  v44 = *(_QWORD *)this;
  v43 = (float *)*a2;
  v42 = *(_QWORD *)this + 40LL;
  v11 = 0;
  v45 = *((_QWORD *)*a2 + 6);
  v49 = 0;
  v12 = Gre::Base::Globals(this);
  v14 = SGDGetSessionState(v13);
  v17 = *a2;
  v46 = *(_QWORD *)(v14 + 32);
  if ( (*((_DWORD *)*a2 + 62) & 1) != 0 )
    goto LABEL_38;
  v18 = *(_BYTE *)(*(_QWORD *)this + 302LL);
  if ( (*((_DWORD *)v17 + 9) & 1) != 0 || *((_DWORD *)v17 + 8) == 1 )
  {
    if ( (*((_DWORD *)v12 + 41) & 2) != 0 )
    {
      if ( v18 == 3 )
        goto LABEL_13;
    }
    else if ( (unsigned __int8)(v18 - 4) > 2u )
    {
      goto LABEL_13;
    }
    if ( *((_QWORD *)v17 + 62) )
    {
      GreAcquireHmgrSemaphore(*(_QWORD *)this, v17, v15, v16);
      v19 = *(_DWORD *)(*((_QWORD *)*a2 + 62) + 96LL);
      v49 = v19;
      if ( v19 == 6 || v19 == 4 || v19 == 5 )
      {
        v11 = 0x10000;
        if ( v18 == 6 )
        {
          v11 = 1342242816;
        }
        else if ( v18 == 5 || (*((_DWORD *)v12 + 41) & 0x10) != 0 )
        {
          v11 = 268500992;
        }
      }
      GreReleaseHmgrSemaphore();
      v7 = v43;
    }
  }
LABEL_13:
  if ( !a6 )
  {
    if ( *(_DWORD *)(*(_QWORD *)this + 36LL) != *(_DWORD *)(*((_QWORD *)v12 + 241) + 1573016LL) )
    {
      *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 36LL) = *(_DWORD *)(*((_QWORD *)v12 + 241) + 1573016LL);
    }
    v48 = 0;
    if ( *(int *)(*(_QWORD *)this + 32LL) > 0 )
    {
      v20 = v42;
      v21 = 1;
      v22 = 0LL;
      v23 = v42;
      while ( 1 )
      {
        if ( v45 == *(_QWORD *)v23
          && *(float *)(v23 + 8) == v7[80]
          && *(float *)(v23 + 12) == v7[81]
          && *(float *)(v23 + 16) == v7[82]
          && *(float *)(v23 + 20) == v7[83] )
        {
          v24 = *(struct PFE **)(v23 + 24);
          if ( v24 )
          {
            v47[0] = *(_QWORD *)v24;
            v25 = v47[0];
            if ( *(_QWORD *)(v25 + 128) != *((_QWORD *)Gre::Base::Globals(v22) + 796)
              || PFFOBJ::pPvtDataMatch((PFFOBJ *)v47) )
            {
              v26 = *(_DWORD *)(v23 + 32);
              if ( v11 )
              {
                if ( (v26 & 0x10010000) == v11 && v49 == *(_DWORD *)(v23 + 48) )
                {
LABEL_28:
                  v27 = a5;
                  v28 = (_DWORD *)(v44 + 56LL * v48);
                  *a3 = v28[18];
                  a4->x = v28[19];
                  a4->y = v28[20];
                  *a5 = v28[21];
                  goto LABEL_29;
                }
              }
              else if ( (v26 & 0x10000) == 0 )
              {
                goto LABEL_28;
              }
            }
            v20 = v42;
          }
          v31 = *(_DWORD *)(*(_QWORD *)this + 32LL);
          if ( v21 < v31 )
          {
            memmove((void *)(v20 + 56LL * v48), (const void *)(v20 + 56LL * v21), (unsigned int)(56 * (v31 - v48) - 56));
            v20 = v42;
          }
          --v21;
          LODWORD(v22) = v48 - 1;
          --*(_DWORD *)(*(_QWORD *)this + 32LL);
          v23 -= 56LL;
        }
        v22 = (Gre::Base *)(unsigned int)((_DWORD)v22 + 1);
        ++v21;
        v48 = (int)v22;
        v23 += 56LL;
        if ( (int)v22 >= *(_DWORD *)(*(_QWORD *)this + 32LL) )
          break;
        v7 = v43;
      }
      v8 = a3;
      v6 = (int)v22;
    }
  }
LABEL_38:
  v32 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 28LL) & 2) == 0 || (unsigned int)DC::bDpiScaleTransform(*a2) )
    v33 = 0;
  else
    v33 = 64;
  v27 = a5;
  result = ppfeGetAMatch(
             (struct XDCOBJ *)a2,
             (struct tagENUMLOGFONTEXDVW *)(v32 + 276),
             (const unsigned __int16 *)(v32 + 208),
             v32,
             v33,
             v8,
             a4,
             a5,
             a6);
  v24 = result;
  if ( !result )
    return result;
  if ( (*((_DWORD *)*a2 + 62) & 1) == 0 )
  {
    if ( !v11
      || (*(_DWORD *)(*((_QWORD *)result + 4) + 48LL) & 0x40) == 0
      || (v34 = *v8, *v8 |= 0x10000u, v35 = *a2, (*((_DWORD *)*a2 + 9) & 1) == 0) && *((_DWORD *)v35 + 8) != 1
      || !*((_QWORD *)v35 + 62)
      || (*(_DWORD *)(*((_QWORD *)result + 4) + 48LL) & 1) == 0 )
    {
LABEL_53:
      if ( !a6 )
      {
        if ( v6 >= 3 )
        {
          v6 = 0;
          *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
        }
        v38 = 56LL * v6;
        *(_QWORD *)(v38 + v44 + 40) = v45;
        *(_QWORD *)(v38 + v44 + 64) = result;
        *(_DWORD *)(v38 + v44 + 72) = *v8;
        *(_DWORD *)(v38 + v44 + 76) = a4->x;
        *(_DWORD *)(v38 + v44 + 80) = a4->y;
        v39 = 14LL * v6;
        *(float *)(v44 + 4 * v39 + 48) = v43[80];
        *(float *)(v44 + 4 * v39 + 52) = v43[81];
        *(float *)(v44 + 4 * v39 + 56) = v43[82];
        *(float *)(v44 + 4 * v39 + 60) = v43[83];
        *(_DWORD *)(v38 + v44 + 84) = *a5;
        *(_DWORD *)(v38 + v44 + 88) = v49;
        ++*(_DWORD *)(*(_QWORD *)this + 32LL);
      }
      goto LABEL_29;
    }
    v36 = *(_BYTE *)(*(_QWORD *)this + 302LL);
    if ( v36 != 5 )
    {
      if ( v36 == 4 )
        goto LABEL_53;
      if ( v36 == 6 )
      {
        v37 = v34 | 0x50010000;
        goto LABEL_52;
      }
      if ( (*((_BYTE *)v12 + 164) & 0x12) != 0x12 )
        goto LABEL_53;
    }
    v37 = v34 | 0x10010000;
LABEL_52:
    *v8 = v37;
    goto LABEL_53;
  }
LABEL_29:
  v29 = *(_DWORD *)(v46 + 18736);
  if ( v29 && (*(_BYTE *)(*(_QWORD *)this + 301LL) & 0x40) == 0 )
  {
    if ( (v40 = *((_BYTE *)v27 + 3), v41 = *(_DWORD *)(v46 + 18740) | v29, !v40) && (v41 & 2) != 0
      || v40 == -1 && (v41 & 1) != 0 )
    {
      *v27 = *v27 & 0xFF0000FF | (*(unsigned __int16 *)(v46 + 18744) << 8);
    }
  }
  *(_DWORD *)(*((_QWORD *)*a2 + 122) + 4LL) = *v27 >> 8;
  result = v24;
  *(_DWORD *)(*((_QWORD *)*a2 + 122) + 152LL) &= ~0x10u;
  return result;
}
