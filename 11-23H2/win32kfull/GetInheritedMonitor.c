/*
 * XREFs of GetInheritedMonitor @ 0x1C010F5F0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     GetNewMonitor @ 0x1C010C10C (GetNewMonitor.c)
 *     ?DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x1C01B8228 (-DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C005BF80 (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     IsTitleWindow @ 0x1C005C010 (IsTitleWindow.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005C068 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C008CE78 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     UnionRect @ 0x1C00ABC9C (UnionRect.c)
 *     IntersectRect @ 0x1C00AEB30 (IntersectRect.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00E3E74 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122A54 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?IsAdjacentRect@@YAHPEBUtagRECT@@0@Z @ 0x1C01B8A54 (-IsAdjacentRect@@YAHPEBUtagRECT@@0@Z.c)
 */

__int64 __fastcall GetInheritedMonitor(struct tagWND *a1)
{
  int v1; // r12d
  __int64 v3; // rcx
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int128 *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // xmm1_8
  __int64 Prop; // rbx
  unsigned int v14; // r10d
  __int64 v15; // r11
  struct tagWND *v16; // rbx
  __int64 v17; // r15
  __int64 v18; // rbx
  __int64 v19; // rdx
  int v20; // esi
  __int64 v21; // r14
  __int64 v22; // rdx
  int v23; // r14d
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int16 v28; // r11
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int16 v32; // r11
  int v33; // eax
  int *v34; // rcx
  int v35; // edx
  int *v36; // r9
  int v37; // r14d
  tagObjLock **v38; // rbx
  __int64 v39; // rax
  int v40; // eax
  int *v41; // rdx
  int *v42; // rcx
  int *v43; // r9
  int v44; // r8d
  __int64 v45; // rcx
  int *v46; // r8
  __int64 v47; // rcx
  int *v48; // [rsp+28h] [rbp-31h]
  int *v49; // [rsp+28h] [rbp-31h]
  __int128 v50; // [rsp+30h] [rbp-29h] BYREF
  __int128 v51; // [rsp+40h] [rbp-19h] BYREF
  __int64 v52; // [rsp+50h] [rbp-9h]
  __int64 v53; // [rsp+58h] [rbp-1h]
  char v54; // [rsp+60h] [rbp+7h]
  __int128 v55; // [rsp+68h] [rbp+Fh] BYREF
  char v56; // [rsp+78h] [rbp+1Fh]
  char v57; // [rsp+80h] [rbp+27h]

  v1 = 0;
  v3 = *((_QWORD *)a1 + 13);
  v4 = 0LL;
  if ( !v3 )
    return v4;
  v5 = *((_QWORD *)a1 + 3);
  if ( !v5 || (v6 = *(_QWORD *)(v5 + 8)) == 0 || v3 != *(_QWORD *)(v6 + 24) )
  {
    v7 = *(_QWORD *)(v3 + 40);
    goto LABEL_6;
  }
  v10 = (__int128 *)*((_QWORD *)a1 + 18);
  v11 = (unsigned __int16)gatomMonitorInheritance;
  v53 = gDomainDummyLock;
  v54 = 0;
  v55 = 0LL;
  v56 = 0;
  v12 = *((_QWORD *)v10 + 2);
  v51 = *v10;
  v57 = 0;
  v52 = v12;
  if ( !IS_USERCRIT_OWNED_EXCLUSIVE() && IS_USERCRIT_OWNED_AT_ALL() )
  {
    v57 = 1;
    if ( v10 == (__int128 *)gObjDummyLock )
      v10 = 0LL;
    *(_QWORD *)&v55 = v10;
    v37 = 0;
    v38 = (tagObjLock **)&v55;
    do
    {
      if ( *v38 )
        tagObjLock::LockExclusive(*v38);
      ++v37;
      ++v38;
    }
    while ( !v37 );
    v56 = 1;
  }
  Prop = RealGetProp(*((_QWORD *)a1 + 18), v11, 1LL);
  if ( v57 && v56 )
  {
    if ( (_QWORD)v55 )
      tagObjLock::UnLockExclusive((tagObjLock *)v55);
    v56 = 0;
  }
  if ( Prop )
  {
    if ( *(_QWORD *)a1 == Prop )
      return v4;
    v39 = ValidateHwnd(Prop);
    if ( !v39 )
      return v4;
    v7 = *(_QWORD *)(v39 + 40);
LABEL_6:
    v8 = *(_QWORD *)(v7 + 256);
    return ValidateHmonitorNoRip(v8);
  }
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2
    || (unsigned int)IsTitleWindow((__int64)a1, 0)
    || (*(_BYTE *)(v15 + 20) & 0x40) != 0
    || (*((_DWORD *)a1 + 80) & 0x400) != 0 )
  {
    return v4;
  }
  v16 = (struct tagWND *)*((_QWORD *)a1 + 15);
  if ( v16 )
  {
    if ( *(_QWORD *)(*((_QWORD *)v16 + 2) + 424LL) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL)
      && (((unsigned __int16)(v14 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*((_QWORD *)v16 + 5) + 288LL) >> 8)) & 0x1FF) != 0 )
    {
      return 0LL;
    }
    do
    {
      if ( IsCandidateTransformOwner(v16, a1) )
        break;
      v16 = (struct tagWND *)*((_QWORD *)v16 + 15);
    }
    while ( v16 );
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 6LL) & 1) != 0
    && (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x29C )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(&v51, *(_QWORD *)(*((_QWORD *)a1 + 35) + 8LL));
    if ( *(_QWORD *)v51 )
    {
      v50 = 0LL;
      if ( (v16 || (v16 = *(struct tagWND **)(*(_QWORD *)v51 + 8LL)) != 0LL)
        && !(unsigned int)IntersectRect(&v50, (int *)(*((_QWORD *)a1 + 5) + 88LL), (int *)(*((_QWORD *)v16 + 5) + 88LL)) )
      {
        v16 = 0LL;
      }
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v51);
  }
  if ( v16 )
  {
    v4 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v16 + 5) + 256LL));
    if ( v4 )
      return v4;
  }
  v17 = *((_QWORD *)a1 + 12);
  v18 = *((_QWORD *)a1 + 11);
  while ( 1 )
  {
    while ( !v17 )
    {
      if ( !v18 )
        return v4;
LABEL_22:
      v19 = *((_QWORD *)a1 + 5);
      v51 = 0LL;
      v20 = *(_BYTE *)(v19 + 27) & 8;
      if ( (*(_BYTE *)(v19 + 26) & 8) != 0 && (*(_BYTE *)(v19 + 27) & 0x20) == 0 )
        v1 = 1;
      v21 = *(_QWORD *)(v18 + 40);
      if ( (*(_BYTE *)(v21 + 31) & 0x10) != 0
        && ((*(_BYTE *)(v21 + 16) & 8) != 0 || (*(_BYTE *)(v21 + 30) & 3) != 0)
        && !IsRectEmptyInl((const struct tagRECT *)(v21 + 104))
        && ((*(_BYTE *)(v21 + 26) & 8) == 0 || (*(_BYTE *)(v21 + 27) & 0x20) != 0)
        && (*(_QWORD *)(v26 + 432) == *(_QWORD *)(v27 + 432) || *(_QWORD *)(v26 + 424) == *(_QWORD *)(v27 + 424))
        && ((unsigned __int16)((*(_DWORD *)(v25 + 288) >> 8) ^ (*(_DWORD *)(v21 + 288) >> 8)) & v28) == 0 )
      {
        if ( !v20 && !v1 )
          goto LABEL_39;
        v48 = (int *)(v25 + 88);
        v33 = IsAdjacentRect((const struct tagRECT *)(v25 + 88), (const struct tagRECT *)(v21 + 88));
        v35 = v33;
        v36 = (int *)(v21 + 88);
        if ( v20 && !v33 )
        {
          if ( !(unsigned int)IntersectRect(&v51, v34, (int *)(v21 + 88)) )
            goto LABEL_24;
          v34 = v48;
          v36 = v46;
          v35 = 0;
        }
        if ( !v1 || v35 )
          goto LABEL_39;
        if ( (unsigned int)UnionRect(&v51, v34, v36) )
        {
          v47 = v51 - *(_QWORD *)v48;
          if ( (_QWORD)v51 == *(_QWORD *)v48 )
            v47 = *((_QWORD *)&v51 + 1) - *((_QWORD *)v48 + 1);
          if ( !v47 )
          {
LABEL_39:
            v8 = *(_QWORD *)(v21 + 256);
            return ValidateHmonitorNoRip(v8);
          }
        }
      }
LABEL_24:
      v18 = *(_QWORD *)(v18 + 88);
      v1 = 0;
    }
    v22 = *((_QWORD *)a1 + 5);
    v51 = 0LL;
    v23 = *(_BYTE *)(v22 + 27) & 8;
    if ( (*(_BYTE *)(v22 + 26) & 8) != 0 && (*(_BYTE *)(v22 + 27) & 0x20) == 0 )
      v1 = 1;
    v24 = *(_QWORD *)(v17 + 40);
    if ( (*(_BYTE *)(v24 + 31) & 0x10) != 0
      && ((*(_BYTE *)(v24 + 16) & 8) != 0 || (*(_BYTE *)(v24 + 30) & 3) != 0)
      && !IsRectEmptyInl((const struct tagRECT *)(v24 + 104))
      && ((*(_BYTE *)(v24 + 26) & 8) == 0 || (*(_BYTE *)(v24 + 27) & 0x20) != 0)
      && (*(_QWORD *)(v30 + 432) == *(_QWORD *)(v31 + 432) || *(_QWORD *)(v30 + 424) == *(_QWORD *)(v31 + 424))
      && ((unsigned __int16)((*(_DWORD *)(v29 + 288) >> 8) ^ (*(_DWORD *)(v24 + 288) >> 8)) & v32) == 0 )
    {
      if ( !v23 && !v1 )
        goto LABEL_108;
      v49 = (int *)(v29 + 88);
      v40 = IsAdjacentRect((const struct tagRECT *)(v29 + 88), (const struct tagRECT *)(v24 + 88));
      v43 = v41;
      v44 = v40;
      if ( !v23 || v40 )
        goto LABEL_90;
      *(_QWORD *)&v50 = v41;
      if ( (unsigned int)IntersectRect(&v51, v42, v41) )
        break;
    }
LABEL_27:
    v17 = *(_QWORD *)(v17 + 96);
    v1 = 0;
    if ( v18 )
      goto LABEL_22;
  }
  v42 = v49;
  v44 = 0;
  v43 = (int *)v50;
LABEL_90:
  if ( v1 && !v44 )
  {
    if ( !(unsigned int)UnionRect(&v51, v42, v43) )
      goto LABEL_27;
    v45 = v51 - *(_QWORD *)v49;
    if ( (_QWORD)v51 == *(_QWORD *)v49 )
      v45 = *((_QWORD *)&v51 + 1) - *((_QWORD *)v49 + 1);
    if ( v45 )
      goto LABEL_27;
  }
LABEL_108:
  v8 = *(_QWORD *)(v24 + 256);
  return ValidateHmonitorNoRip(v8);
}
