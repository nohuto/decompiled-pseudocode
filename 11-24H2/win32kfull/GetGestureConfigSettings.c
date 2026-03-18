/*
 * XREFs of GetGestureConfigSettings @ 0x1401B290C
 * Callers:
 *     NtUserGetGestureConfig @ 0x140242510 (NtUserGetGestureConfig.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?IsBitSet@@YAHPEAEI@Z @ 0x1401B2DAC (-IsBitSet@@YAHPEAEI@Z.c)
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1401B2E24 (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1401B2E88 (-GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z @ 0x140210618 (-FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z.c)
 */

__int64 __fastcall GetGestureConfigSettings(struct tagWND *a1, __int64 a2, char a3, unsigned int *a4, __int64 a5)
{
  __int64 v5; // rsi
  int v6; // edi
  __int64 v7; // r12
  __int64 v8; // rdx
  struct tagWND *v9; // rbx
  unsigned __int8 **v10; // r10
  void **WindowGCList; // r15
  unsigned __int8 *v12; // r14
  _DWORD *v13; // r9
  __int64 v14; // rbp
  _DWORD *v15; // r9
  __int64 v16; // r10
  __int64 v17; // r11
  int v18; // eax
  struct tagVWPLGESTUREDATA *GCData; // r14
  struct tagGESTURECONFIGLIST **v20; // r15
  unsigned __int8 *v21; // r13
  unsigned int v22; // ebp
  int *v23; // rdi
  __int64 v24; // r9
  struct tagGESTURECONFIGLIST *v25; // r8
  int v26; // r10d
  int v27; // r9d
  int v29; // r8d
  struct tagGESTURECONFIGLIST *v30; // rdx
  struct tagGESTURECONFIGLIST *i; // rcx
  int v32; // eax
  _DWORD *v33; // rax
  __int64 v34; // rcx
  struct tagGESTURECONFIGLIST *v35; // [rsp+68h] [rbp+20h] BYREF

  v35 = 0LL;
  v5 = *a4;
  v6 = a3 & 1;
  v7 = a5;
  v8 = 0LL;
  v9 = a1;
  while ( (unsigned int)v8 < (unsigned int)v5 )
  {
    if ( (unsigned int)(*(_DWORD *)(a5 + 12 * v8) - 1) > 6 )
    {
      UserSetLastError(87);
      return 0LL;
    }
    v8 = (unsigned int)(v8 + 1);
  }
  GetGCData(a1);
  WindowGCList = GetWindowGCList(v9);
  if ( v10 )
  {
    v12 = *v10;
    if ( (_DWORD)v5 )
    {
      v13 = (_DWORD *)(v7 + 8);
      v14 = v5;
      while ( 1 )
      {
        if ( (unsigned int)IsBitSet(v12, *(v13 - 2)) )
        {
          v29 = 0;
          v30 = 0LL;
          for ( i = (struct tagGESTURECONFIGLIST *)WindowGCList[v17 & 7]; i; i = *(struct tagGESTURECONFIGLIST **)i )
          {
            if ( *((_DWORD *)i + 2) == (_DWORD)v17 )
            {
              v30 = i;
              v29 = 1;
            }
          }
          v35 = v30;
          if ( !v29 )
            goto LABEL_12;
          *(v15 - 1) = *((_DWORD *)v30 + 3);
          v32 = *((_DWORD *)v30 + 4);
          goto LABEL_33;
        }
        if ( *(_DWORD *)(v16 + 8) )
          break;
        v18 = *(_DWORD *)(v16 + 12);
        *(v15 - 1) = 0;
        if ( v18 )
        {
          v32 = dword_140354908[v17];
          goto LABEL_33;
        }
        *v15 = 0;
LABEL_12:
        v13 = v15 + 3;
        if ( !--v14 )
          goto LABEL_15;
      }
      *(v15 - 1) = dword_140354908[v17];
      v32 = *(_DWORD *)(v16 + 12);
LABEL_33:
      *v15 = v32;
      goto LABEL_12;
    }
  }
  else if ( (_DWORD)v5 )
  {
    v33 = (_DWORD *)(v7 + 8);
    v34 = v5;
    do
    {
      *(v33 - 1) = 0;
      *v33 = 0;
      v33 += 3;
      --v34;
    }
    while ( v34 );
  }
LABEL_15:
  if ( v6 )
  {
    while ( !IsTopLevelWindow((__int64)v9) )
    {
      if ( !v9 )
        break;
      v9 = (struct tagWND *)*((_QWORD *)v9 + 13);
      if ( !v9 )
        break;
      GCData = GetGCData(v9);
      v20 = (struct tagGESTURECONFIGLIST **)GetWindowGCList(v9);
      if ( GCData )
      {
        v21 = *(unsigned __int8 **)GCData;
        v22 = 0;
        if ( (_DWORD)v5 )
        {
          v23 = (int *)(v7 + 8);
          do
          {
            if ( (unsigned int)IsBitSet(v21, *(v23 - 2)) )
            {
              if ( (unsigned int)FindGID(v20, v24, &v35) )
              {
                v25 = v35;
                v26 = *v23;
                v27 = (*v23 | *(v23 - 1)) ^ (*((_DWORD *)v35 + 4) | *((_DWORD *)v35 + 3));
                *(v23 - 1) |= v27 & *((_DWORD *)v35 + 3);
                *v23 = v26 | *((_DWORD *)v25 + 4) & v27;
              }
            }
            else if ( *((_DWORD *)GCData + 2) )
            {
              *(v23 - 1) = ~*v23 & dword_140354908[v24];
            }
            else if ( *((_DWORD *)GCData + 3) )
            {
              *v23 = ~*(v23 - 1) & dword_140354908[v24];
            }
            else if ( !v20 )
            {
              break;
            }
            ++v22;
            v23 += 3;
          }
          while ( v22 < (unsigned int)v5 );
          v7 = a5;
        }
      }
    }
  }
  return 1LL;
}
