/*
 * XREFs of ?ApplyHeuristics@CPTPEngine@@AEAAXPEAUPTPInput@@_N1@Z @ 0x1400E7B6C
 * Callers:
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB6F0 (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAXPEBUPTPInput@@@Z @ 0x1400E8228 (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAXPEBUPTPInput@@@Z.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z @ 0x1400E8604 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400E8790 (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 */

void __fastcall CPTPEngine::ApplyHeuristics(CPTPEngine *this, struct PTPInput *a2, char a3, char a4)
{
  int v8; // r9d
  _DWORD *v9; // rcx
  _DWORD *v10; // rdx
  int v11; // r8d
  unsigned int v12; // r8d
  char *v13; // r9
  unsigned int v14; // r12d
  char *v15; // r13
  char *v16; // rdi
  int v17; // ecx
  unsigned int v18; // ebp
  _DWORD *v19; // r15
  char *v20; // rsi
  unsigned int j; // r8d
  char *v22; // r9
  int v23; // r10d
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r8
  int v27; // eax
  unsigned int v28; // edi
  unsigned int v29; // edx
  unsigned int v30; // r9d
  __int64 v31; // r11
  unsigned int v32; // ecx
  __int64 v33; // rax
  char *v34; // r8
  __int64 v35; // r10
  char *v36; // r9
  __int64 v37; // r10
  int v38; // eax
  char *v39; // r10
  __int64 v40; // rsi
  int v41; // edx
  bool v42; // cl
  bool v43; // al
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // r8
  unsigned int v46; // r9d
  unsigned __int64 v47; // rcx
  unsigned int i; // [rsp+50h] [rbp+8h]
  unsigned int v49; // [rsp+50h] [rbp+8h]

  if ( !*((_DWORD *)this + 6) )
  {
    if ( (unsigned int)(*((_DWORD *)this + 706) - 1) <= 1 && *((_DWORD *)this + 698) >= 2u && !*((_DWORD *)this + 705) )
      CPTPEngine::FindGestureAndMarkGesturingContactsAsNonResting(this, a2);
    v8 = *((_DWORD *)this + 706);
    if ( v8 != 2 )
      goto LABEL_7;
    if ( *((_DWORD *)this + 698) >= 2u )
    {
      v33 = *((unsigned int *)this + 696);
      if ( (*((_DWORD *)this + 82 * v33 + 204) & 0x4000000) != 0
        || *(_QWORD *)a2 - *((_QWORD *)this + 41 * v33 + 114) < *((_QWORD *)this + 12)
                                                              * (unsigned __int64)*((unsigned int *)this + 808)
                                                              / 0x3E8 )
      {
        if ( a3 )
        {
          *((_DWORD *)this + 768) |= 0x20000u;
          *((_DWORD *)this + 706) = 1;
          CPTPEngine::ResetDragThresholds(this, a2);
          v8 = *((_DWORD *)this + 706);
        }
      }
    }
    if ( *((_DWORD *)this + 702) >= 2u )
    {
      *((_DWORD *)this + 706) = 1;
    }
    else
    {
LABEL_7:
      if ( v8 != 1 )
        return;
    }
    if ( a3 )
    {
      v36 = (char *)this + 820;
      v37 = 6LL;
      do
      {
        v38 = *((_DWORD *)v36 - 1);
        if ( (v38 & 1) != 0
          && (v38 & 0x20000) == 0
          && *(_QWORD *)a2 - *(_QWORD *)(v36 + 60) >= *((_QWORD *)this + 12)
                                                    * (unsigned __int64)*((unsigned int *)this + 783)
                                                    / 0x3E8 )
        {
          *(_DWORD *)v36 &= ~1u;
        }
        v36 += 328;
        --v37;
      }
      while ( v37 );
    }
    v9 = (_DWORD *)((char *)this + 2812);
    v10 = (_DWORD *)((char *)this + 2792);
    if ( (unsigned int)(*((_DWORD *)this + 698) + *((_DWORD *)this + 703)) > 1
      && (*((_DWORD *)this + 768) & 0x20000) == 0
      && (a3 || a4) )
    {
      v28 = *((_DWORD *)this + 4);
      v9 = (_DWORD *)((char *)this + 2812);
      v49 = v28;
      v10 = (_DWORD *)((char *)this + 2792);
      if ( v28 )
      {
        v29 = *((_DWORD *)this + 4);
        v30 = 1;
        do
        {
          v31 = 328LL * (v30 - 1);
          v32 = v29;
          if ( _bittest((const signed __int32 *)((char *)this + v31 + 816), 0x1Du)
            && (*(_DWORD *)((_BYTE *)this + v31 + 1044) & 0xFFFFFFFB) == 0
            && v30 < v29 )
          {
            v39 = (char *)this + 328 * v30 + 888;
            v40 = v28 - v30;
            do
            {
              v41 = *((_DWORD *)v39 - 18);
              if ( (v41 & 0x20000000) != 0 && (*((_DWORD *)v39 + 39) & 0xFFFFFFFB) == 0 )
              {
                v42 = (*(_DWORD *)((_BYTE *)this + v31 + 816) & 2) != 0
                   || *(_QWORD *)((char *)this + v31 + 888) == *(_QWORD *)a2;
                v43 = (v41 & 2) != 0 || *(_QWORD *)v39 == *(_QWORD *)a2;
                if ( v42 || v43 )
                {
                  v44 = *(_QWORD *)((char *)this + v31 + 888);
                  v45 = *(_QWORD *)v39 - v44;
                  if ( *(_QWORD *)v39 <= v44 )
                    v45 = *(_QWORD *)((char *)this + v31 + 888) - *(_QWORD *)v39;
                  if ( v45 <= *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 784) / 0x3E8 )
                    *((_DWORD *)this + 768) |= 0x20000u;
                }
              }
              v39 += 328;
              --v40;
            }
            while ( v40 );
            v28 = v49;
            v32 = v49;
          }
          ++v30;
          v29 = v32;
        }
        while ( v30 - 1 < v32 );
        v9 = (_DWORD *)((char *)this + 2812);
        v10 = (_DWORD *)((char *)this + 2792);
      }
    }
    v11 = *((_DWORD *)this + 768);
    if ( (v11 & 0x20000) != 0 && *v9 + *v10 == 1 )
      *((_DWORD *)this + 768) = v11 & 0xFFF9FFFF;
    v12 = *((_DWORD *)a2 + 12);
    v13 = (char *)a2 + 56;
    v14 = 0;
    v15 = (char *)a2 + 56;
    for ( i = 0; v14 < v12; i = v14 )
    {
      v16 = (char *)this + 328 * (unsigned int)(*((_DWORD *)v15 + 1) % *((_DWORD *)this + 4)) + 816;
      v17 = *(_DWORD *)v16;
      if ( (*(_DWORD *)v16 & 1) != 0 && (*((_DWORD *)v15 + 3) & 0x40000) == 0 )
      {
        if ( (v17 & 0x100) != 0 && (v17 & 4) != 0 && (*((_DWORD *)v16 + 1) & 2) != 0 )
        {
          for ( j = 0; j < 6; ++j )
          {
            v22 = (char *)this + 328 * j + 816;
            if ( v16 != v22 )
            {
              v23 = *(_DWORD *)v22;
              if ( (*(_DWORD *)v22 & 1) != 0
                && ((v23 & 0x100) == 0
                 || __CFSHR__(v23, 18)
                 || *(_QWORD *)a2 - *((_QWORD *)v22 + 8) < *((_QWORD *)this + 12)
                                                         * (unsigned __int64)*((unsigned int *)this + 783)
                                                         / 0x3E8
                 && __CFSHR__(v23, 3)
                 && __CFSHR__(*((_DWORD *)v22 + 1), 2)) )
              {
                goto LABEL_68;
              }
            }
          }
          v34 = (char *)this + 820;
          v35 = 6LL;
          do
          {
            if ( v16 != v34 - 4 && (*((_DWORD *)v34 - 1) & 1) != 0 )
            {
              v46 = *(_DWORD *)v34 & 0xFFFFFFFD;
              *(_DWORD *)v34 = v46;
              v47 = *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 783) / 0x3E8;
              if ( *(_QWORD *)a2 - *(_QWORD *)(v34 + 60) >= v47 && *(_QWORD *)a2 - *((_QWORD *)v16 + 8) < v47 )
                *(_DWORD *)v34 = v46 & 0xFFFFFFFE;
            }
            v34 += 328;
            --v35;
          }
          while ( v35 );
          CPTPEngine::SetContactRestingState(this, (struct CContactState *)v16, 0);
          v14 = i;
LABEL_68:
          v13 = (char *)a2 + 56;
        }
        v12 = *((_DWORD *)a2 + 12);
        v18 = 0;
        if ( v12 )
        {
          v19 = v13 + 12;
          do
          {
            v20 = (char *)this + 328 * (unsigned int)(*(v19 - 2) % *((_DWORD *)this + 4)) + 816;
            if ( (*(_DWORD *)v20 & 1) != 0
              && v20 != v16
              && (*v19 & 0x40000) == 0
              && ((*(_DWORD *)v20 & 0x100) != 0 || (*(_DWORD *)v16 & 0x100) != 0) )
            {
              v24 = *((_QWORD *)v20 + 8);
              v25 = *((_QWORD *)v16 + 8);
              v26 = v24 - v25;
              if ( v24 <= v25 )
                v26 = *((_QWORD *)v16 + 8) - v24;
              if ( v26 < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 808) / 0x3E8 )
              {
                v27 = *((_DWORD *)this + 753);
                if ( *((_DWORD *)v16 + 5) >= v27
                  && *((_DWORD *)v20 + 5) >= v27
                  && (*((_DWORD *)v16 + 1) & 1) != 0
                  && (*((_DWORD *)v20 + 1) & 1) != 0
                  && (*(_DWORD *)v16 & 0x100000) != 0
                  && (*(_DWORD *)v20 & 0x100000) != 0
                  && (int)((HIDWORD(*((_QWORD *)v16 + 2)) - HIDWORD(*((_QWORD *)v20 + 2)))
                         * (HIDWORD(*((_QWORD *)v16 + 2)) - HIDWORD(*((_QWORD *)v20 + 2)))
                         + (*((_QWORD *)v16 + 2) - *((_QWORD *)v20 + 2)) * (*((_QWORD *)v16 + 2) - *((_QWORD *)v20 + 2))) <= (unsigned __int64)*((unsigned int *)this + 801) )
                {
                  CPTPEngine::SetContactRestingState(this, (struct CContactState *)v16, 0);
                  CPTPEngine::SetContactRestingState(this, (struct CContactState *)v20, 0);
                  *(_DWORD *)v16 |= 0x400u;
                  *(_DWORD *)v20 |= 0x400u;
                }
              }
            }
            v12 = *((_DWORD *)a2 + 12);
            ++v18;
            v19 += 24;
          }
          while ( v18 < v12 );
          v14 = i;
        }
        v13 = (char *)a2 + 56;
      }
      ++v14;
      v15 += 96;
    }
  }
}
