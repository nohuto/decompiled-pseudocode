/*
 * XREFs of ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x1C00EB6D0
 * Callers:
 *     DwmChildRectChange @ 0x1C00EB3C0 (DwmChildRectChange.c)
 *     ?CalculateWindowMargins@CWindowMarginProp@WindowMargins@@QEAA?AUFRAME_MARGIN@@PEBUtagWND@@IW4MarginsFor@?A0x67ef0edd@2@@Z @ 0x1C00EC204 (-CalculateWindowMargins@CWindowMarginProp@WindowMargins@@QEAA-AUFRAME_MARGIN@@PEBUtagWND@@IW4Mar.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00E91E0 (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C00EB0D0 (GetDpiCacheSlot.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01BEE20 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

struct tagRECT *__fastcall CalculateContentRect(struct tagRECT *__return_ptr retstr, const struct tagWND *a2, int *a3)
{
  __int64 v3; // r9
  __int64 v5; // rcx
  int v6; // r14d
  int v7; // r13d
  unsigned int v8; // ebx
  unsigned __int16 v9; // ax
  __int64 v10; // rax
  int v11; // r15d
  int v12; // esi
  PERESOURCE *v13; // rax
  int v14; // r12d
  __int64 v15; // rbp
  __int64 *ThreadWin32Thread; // rax
  int v17; // edx
  int v18; // ebp
  int v19; // eax
  int v20; // r13d
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int DpiDependentMetric; // eax
  int DpiCacheSlot; // eax
  __int64 v26; // rsi
  __int64 *v27; // rax
  int v28; // r15d
  int v29; // esi
  int v30; // r8d
  int v31; // eax
  int v32; // edx
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  LONG top; // r10d
  LONG bottom; // r9d
  LONG left; // edx
  LONG v40; // r10d
  LONG right; // r11d
  LONG v42; // r9d
  _DWORD *v43; // rcx
  LONG v44; // r8d
  LONG v45; // eax
  LONG v46; // eax
  LONG v47; // r9d
  LONG v48; // eax
  LONG v49; // edx
  LONG v50; // r11d
  LONG v51; // r10d
  LONG v52; // r8d
  LONG v53; // eax
  LONG v54; // ecx
  LONG v55; // ebx
  LONG v56; // eax
  LONG v57; // r9d
  LONG v58; // eax
  int v60; // [rsp+20h] [rbp-58h]
  int v61; // [rsp+24h] [rbp-54h]
  int v62; // [rsp+2Ch] [rbp-4Ch]
  int v63; // [rsp+80h] [rbp+8h]
  int v66; // [rsp+98h] [rbp+20h]

  v3 = *((_QWORD *)a2 + 5);
  *retstr = *(struct tagRECT *)(v3 + 88);
  if ( retstr->left >= retstr->right || retstr->top >= retstr->bottom )
    return retstr;
  v5 = *(_DWORD *)(v3 + 288) & 0xF;
  v6 = 0;
  v7 = 0;
  if ( (_DWORD)v5 == 3 )
  {
    v8 = (*(_DWORD *)(v3 + 288) >> 8) & 0x1FF;
  }
  else if ( (*(_DWORD *)(v3 + 232) & 0x400) != 0 )
  {
    v9 = *(_WORD *)(v3 + 286);
    if ( !v9 )
      v9 = *(_WORD *)(v3 + 284);
    v8 = v9;
  }
  else if ( !(_DWORD)v5
         && (v10 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 456LL)) != 0
         && (v5 = **(_QWORD **)(v10 + 8), (*(_DWORD *)(v5 + 64) & 1) != 0) )
  {
    v8 = 96;
  }
  else
  {
    v5 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 424LL);
    v8 = *(unsigned __int16 *)(v5 + 284);
  }
  v11 = *(_DWORD *)(v3 + 28);
  v12 = *(_DWORD *)(v3 + 24);
  v66 = v11;
  v13 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v5, a2, a3, v3);
  v14 = 2;
  v63 = 2;
  if ( !ExIsResourceAcquiredSharedLite(*v13) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v15 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v15 = *ThreadWin32Thread;
  v17 = 0;
  v61 = v12 & 1;
  if ( (v12 & 1) != 0 )
  {
    v18 = v12 & 0x20000;
  }
  else
  {
    if ( (v12 & 0x20000) != 0 )
    {
      v18 = v12 & 0x20000;
      v60 = 0;
      goto LABEL_30;
    }
    if ( (v11 & 0x40000) != 0 || (v11 & 0xC00000) == 0x400000 )
    {
      v18 = 0;
    }
    else
    {
      if ( (v11 & 0xC00000) == 0xC00000 )
        LOBYTE(v17) = *(_DWORD *)(v15 + 632) >= 0x400u;
      v18 = 0;
      if ( !v17 )
      {
        v60 = 0;
        goto LABEL_30;
      }
    }
  }
  v60 = 256;
LABEL_30:
  v62 = v12 & 0x200;
  if ( (BYTE2(v11) & 0xC0) != 0xC0 )
    goto LABEL_46;
  v19 = *(unsigned __int16 *)(gpsi + 6998LL);
  if ( (v12 & 0x80u) == 0 )
  {
    if ( v8 == v19 )
    {
      v20 = *(_DWORD *)(gpsi + 2292LL);
      goto LABEL_45;
    }
    if ( v8 == 96 )
    {
      v20 = *(_DWORD *)(gpsi + 2412LL);
      goto LABEL_45;
    }
    DpiCacheSlot = GetDpiCacheSlot(v8);
    v22 = v8;
    v23 = 2LL;
    if ( DpiCacheSlot != -1 )
    {
LABEL_37:
      DpiDependentMetric = GetDpiDependentMetric(v23, v22);
LABEL_44:
      v20 = DpiDependentMetric;
      goto LABEL_45;
    }
LABEL_43:
    DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(v23, v22);
    goto LABEL_44;
  }
  if ( v8 != v19 )
  {
    if ( v8 == 96 )
    {
      v20 = *(_DWORD *)(gpsi + 2492LL);
      goto LABEL_45;
    }
    v21 = GetDpiCacheSlot(v8);
    v22 = v8;
    v23 = 22LL;
    if ( v21 != -1 )
      goto LABEL_37;
    goto LABEL_43;
  }
  v20 = *(_DWORD *)(gpsi + 2372LL);
LABEL_45:
  v7 = -v20;
LABEL_46:
  v26 = 0LL;
  v27 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v27 )
    v26 = *v27;
  v28 = 0;
  if ( *(_DWORD *)(v26 + 632) <= 0x9900u )
    v28 = *(_DWORD *)(v26 + 648);
  v29 = 1;
  if ( !v60 )
  {
    v14 = v18 != 0;
    v63 = v14;
  }
  v30 = v66;
  v31 = v66 & 0xC00000;
  if ( (v66 & 0xC00000) != 0 || v61 )
    v63 = v14 + 1;
  v32 = v28 & 0x10000000;
  if ( (v28 & 0x10000000) == 0 && (v28 & 0x20000000) == 0 )
  {
    if ( v8 == *(unsigned __int16 *)(gpsi + 6998LL) )
    {
      v6 = *(_DWORD *)(gpsi + 2400LL);
    }
    else if ( v8 == 96 )
    {
      v6 = *(_DWORD *)(gpsi + 2520LL);
    }
    else
    {
      if ( (unsigned int)GetDpiCacheSlot(v8) == -1 )
        v33 = ScaleSystemMetricForDPIWithoutCache(29LL, v8);
      else
        v33 = GetDpiDependentMetric(29, v8);
      v30 = v66;
      v6 = v33;
      v32 = 0;
    }
    v31 = v66 & 0xC00000;
  }
  if ( (v30 & 0x40000) == 0 && (v6 <= 0 || v31 != 12582912 && (v30 & 0x40000) == 0 || (v28 & 0x30000000) != 0) )
  {
    v34 = v63;
    goto LABEL_81;
  }
  if ( v32 )
    goto LABEL_79;
  v29 = (int)(*(_DWORD *)(Get96DpiServerInfo() + 4) * v8 + 48) / 96;
  if ( (v28 & 0x20000000) == 0 )
    goto LABEL_79;
  if ( v8 != *(unsigned __int16 *)(gpsi + 6998LL) )
  {
    if ( v8 == 96 )
    {
      v34 = v6 + *(_DWORD *)(gpsi + 2520LL) + v29 + v63;
      goto LABEL_81;
    }
    if ( (unsigned int)GetDpiCacheSlot(v8) != -1 )
    {
      v34 = v6 + GetDpiDependentMetric(29, v8) + v29 + v63;
      goto LABEL_81;
    }
    v29 += ScaleSystemMetricForDPIWithoutCache(29LL, v8);
LABEL_79:
    v34 = v6 + v29 + v63;
    goto LABEL_81;
  }
  v34 = v6 + *(_DWORD *)(gpsi + 2400LL) + v29 + v63;
LABEL_81:
  v35 = v34 + 2;
  if ( !v62 )
    v35 = v34;
  if ( v35 )
  {
    v36 = v35;
    v7 -= v35;
  }
  else
  {
    v36 = 0;
  }
  top = retstr->top;
  bottom = retstr->bottom;
  left = retstr->left + v35;
  if ( !v35 )
    left = retstr->left;
  retstr->right -= v36;
  v40 = top - v7;
  right = retstr->right;
  v42 = bottom - v36;
  retstr->top = v40;
  retstr->bottom = v42;
  if ( a3 )
    *a3 = v36;
  v43 = (_DWORD *)*((_QWORD *)a2 + 5);
  v44 = v43[26];
  if ( v44 >= v43[28] || v43[27] >= v43[29] )
  {
    v44 = left;
  }
  else
  {
    v45 = v43[27];
    if ( left < v44 )
      v44 = left;
    if ( v40 < v45 )
      v45 = v40;
    retstr->top = v45;
    if ( right <= v43[28] )
      right = v43[28];
    v46 = v43[29];
    retstr->right = right;
    if ( v42 <= v46 )
      v42 = v46;
    retstr->bottom = v42;
  }
  v47 = v43[22];
  v48 = v44;
  v49 = v43[24];
  if ( v44 <= v47 )
    v48 = v43[22];
  if ( v48 >= v49 )
  {
    v50 = v43[24];
  }
  else
  {
    v50 = v43[22];
    if ( v44 > v47 )
      v50 = v44;
  }
  v51 = v43[23];
  v52 = retstr->top;
  v53 = v52;
  v54 = v43[25];
  retstr->left = v50;
  if ( v52 <= v51 )
    v53 = v51;
  if ( v53 >= v54 )
  {
    v52 = v54;
  }
  else if ( v52 <= v51 )
  {
    v52 = v51;
  }
  v55 = retstr->right;
  v56 = v49;
  retstr->top = v52;
  if ( v55 < v49 )
    v56 = v55;
  if ( v56 <= v47 )
  {
    v49 = v47;
  }
  else if ( v55 < v49 )
  {
    v49 = v55;
  }
  v57 = retstr->bottom;
  v58 = v54;
  if ( v57 < v54 )
    v58 = retstr->bottom;
  if ( v58 <= v51 )
  {
    v54 = v51;
  }
  else if ( v57 < v54 )
  {
    v54 = retstr->bottom;
  }
  if ( v50 > v49 )
    v49 = v50;
  retstr->right = v49;
  if ( v52 > v54 )
    v54 = v52;
  retstr->bottom = v54;
  return retstr;
}
