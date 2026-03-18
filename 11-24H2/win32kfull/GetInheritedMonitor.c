/*
 * XREFs of GetInheritedMonitor @ 0x140048BE0
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     GetNewMonitor @ 0x14008D07C (GetNewMonitor.c)
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x140280D7C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsAdjacentRect@@YAHPEBUtagRECT@@0@Z @ 0x14003160C (-IsAdjacentRect@@YAHPEBUtagRECT@@0@Z.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x140032C98 (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140032E18 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IntersectRect @ 0x140035778 (IntersectRect.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14006DDEC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     UnionRect @ 0x140156E48 (UnionRect.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GetInheritedMonitor(struct tagWND *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 Prop; // rax
  __int64 v10; // rdx
  unsigned int v11; // r8d
  unsigned __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // r13
  int v16; // r12d
  int v17; // r15d
  BOOL v18; // r14d
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  _QWORD *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // r13d
  int v26; // r12d
  BOOL v27; // r15d
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r14
  _QWORD *v32; // rdx
  __int64 v33; // rcx
  __int128 v34; // [rsp+20h] [rbp-30h] BYREF
  __int64 v35; // [rsp+30h] [rbp-20h]
  __int128 v36; // [rsp+38h] [rbp-18h] BYREF

  v1 = 0LL;
  v35 = 0LL;
  if ( !(unsigned int)IsTopLevelWindow(a1) )
  {
    v5 = *((_QWORD *)a1 + 13);
LABEL_3:
    if ( v5 )
    {
LABEL_4:
      v6 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 256LL);
      return ValidateHmonitorNoRip(v6);
    }
    return v1;
  }
  UserSessionState = W32GetUserSessionState(v4, v3);
  Prop = GetProp(a1, *(unsigned __int16 *)(UserSessionState + 41426), 1LL);
  if ( Prop )
  {
    if ( *(_QWORD *)a1 == Prop )
      return v1;
    v5 = ValidateHwnd(Prop);
    goto LABEL_3;
  }
  v10 = *((_QWORD *)a1 + 5);
  v11 = *(_DWORD *)(v10 + 288);
  if ( (v11 & 0xF) == 2
    || ((*(_BYTE *)(v10 + 16) & 8) != 0 || (*(_BYTE *)(v10 + 30) & 3) != 0)
    && !IsRectEmptyInl((const struct tagRECT *)(v10 + 104))
    && ((*(_BYTE *)(v10 + 26) & 8) == 0 || (*(_BYTE *)(v10 + 27) & 0x20) != 0)
    || (*(_BYTE *)(v10 + 20) & 0x40) != 0
    || (*((_DWORD *)a1 + 95) & 0x400) != 0 )
  {
    return v1;
  }
  v12 = *((_QWORD *)a1 + 15);
  if ( !v12 )
  {
LABEL_15:
    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 6LL) & 1) != 0
      && (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x29C )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(&v36);
      if ( *(_QWORD *)v36 )
      {
        v34 = 0LL;
        if ( v12 || (v12 = *(_QWORD *)(*(_QWORD *)v36 + 8LL)) != 0 )
          v12 &= -(__int64)((unsigned int)IntersectRect(
                                            &v34,
                                            (int *)(*((_QWORD *)a1 + 5) + 88LL),
                                            (int *)(*(_QWORD *)(v12 + 40) + 88LL)) != 0);
      }
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v36);
    }
    if ( !v12 || (v35 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v12 + 40) + 256LL)), (v1 = v35) == 0) )
    {
      v13 = *((_QWORD *)a1 + 12);
      v14 = *((_QWORD *)a1 + 11);
      while ( 2 )
      {
        *(_QWORD *)&v34 = v14;
        while ( v13 )
        {
          v15 = *((_QWORD *)a1 + 5);
          v16 = 0;
          v36 = 0LL;
          v17 = *(_BYTE *)(v15 + 27) & 8;
          v18 = (*(_BYTE *)(v15 + 26) & 8) != 0 && (*(_BYTE *)(v15 + 27) & 0x20) == 0;
          v19 = *(_QWORD *)(v13 + 40);
          if ( (*(_BYTE *)(v19 + 31) & 0x10) != 0
            && ((*(_BYTE *)(v19 + 16) & 8) != 0 || (*(_BYTE *)(v19 + 30) & 3) != 0)
            && !IsRectEmptyInl((const struct tagRECT *)(v19 + 104))
            && ((*(_BYTE *)(v19 + 26) & 8) == 0 || (*(_BYTE *)(v19 + 27) & 0x20) != 0)
            && (*(_QWORD *)(v20 + 472) == *(_QWORD *)(v21 + 472) || *(_QWORD *)(v20 + 464) == *(_QWORD *)(v21 + 464))
            && (((unsigned __int16)(*(_DWORD *)(v19 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v15 + 288) >> 8)) & 0x1FF) == 0 )
          {
            if ( v17 || v18 )
              v16 = IsAdjacentRect((const struct tagRECT *)(v15 + 88), (const struct tagRECT *)(v19 + 88));
            if ( !v17 || v16 || (unsigned int)IntersectRect(&v36, (int *)(v15 + 88), (int *)(v19 + 88)) )
            {
              if ( !v18 || v16 )
                goto LABEL_82;
              if ( (unsigned int)UnionRect(&v36, v15 + 88, v19 + 88) )
              {
                v23 = v36 - *v22;
                if ( (_QWORD)v36 == *v22 )
                  v23 = *((_QWORD *)&v36 + 1) - v22[1];
                if ( !v23 )
                {
LABEL_82:
                  v6 = *(_QWORD *)(v19 + 256);
                  return ValidateHmonitorNoRip(v6);
                }
              }
            }
          }
          v14 = v34;
          v13 = *(_QWORD *)(v13 + 96);
          if ( (_QWORD)v34 )
            goto LABEL_43;
        }
        if ( !v14 )
          return v35;
LABEL_43:
        v24 = *((_QWORD *)a1 + 5);
        v25 = 0;
        v36 = 0LL;
        v26 = *(_BYTE *)(v24 + 27) & 8;
        v27 = (*(_BYTE *)(v24 + 26) & 8) != 0 && (*(_BYTE *)(v24 + 27) & 0x20) == 0;
        v28 = *(_QWORD *)(v14 + 40);
        if ( (*(_BYTE *)(v28 + 31) & 0x10) == 0 || (*(_BYTE *)(v28 + 16) & 8) == 0 && (*(_BYTE *)(v28 + 30) & 3) == 0 )
          goto LABEL_64;
        if ( IsRectEmptyInl((const struct tagRECT *)(v28 + 104))
          || (*(_BYTE *)(v28 + 26) & 8) != 0 && (*(_BYTE *)(v28 + 27) & 0x20) == 0 )
        {
          goto LABEL_64;
        }
        if ( *(_QWORD *)(v29 + 472) != *(_QWORD *)(v30 + 472) && *(_QWORD *)(v29 + 464) != *(_QWORD *)(v30 + 464) )
          goto LABEL_64;
        v31 = *((_QWORD *)a1 + 5);
        if ( (((unsigned __int16)(*(_DWORD *)(v28 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v31 + 288) >> 8)) & 0x1FF) != 0 )
          goto LABEL_64;
        if ( v26 || v27 )
          v25 = IsAdjacentRect((const struct tagRECT *)(v31 + 88), (const struct tagRECT *)(v28 + 88));
        if ( v26 && !v25 && !(unsigned int)IntersectRect(&v36, (int *)(v31 + 88), (int *)(v28 + 88)) )
          goto LABEL_64;
        if ( v27 && !v25 )
        {
          if ( !(unsigned int)UnionRect(&v36, v31 + 88, v28 + 88) )
            goto LABEL_64;
          v33 = v36 - *v32;
          if ( (_QWORD)v36 == *v32 )
            v33 = *((_QWORD *)&v36 + 1) - v32[1];
          if ( v33 )
          {
LABEL_64:
            v14 = *(_QWORD *)(v34 + 88);
            continue;
          }
        }
        break;
      }
      v5 = v34;
      goto LABEL_4;
    }
    return v1;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v12 + 16) + 464LL) != *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL)
    || (((unsigned __int16)(v11 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v12 + 40) + 288LL) >> 8)) & 0x1FF) == 0 )
  {
    do
    {
      if ( IsCandidateTransformOwner((struct tagWND *)v12, a1) )
        break;
      v12 = *(_QWORD *)(v12 + 120);
    }
    while ( v12 );
    goto LABEL_15;
  }
  return 0LL;
}
