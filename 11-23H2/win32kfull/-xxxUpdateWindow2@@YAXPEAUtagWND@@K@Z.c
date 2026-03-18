/*
 * XREFs of ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0063330
 * Callers:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00632E0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0063330 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     xxxCompositedPaint @ 0x1C0016534 (xxxCompositedPaint.c)
 *     DecPaintCount @ 0x1C0061860 (DecPaintCount.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0063330 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C0063518 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     _PostMessage @ 0x1C00983E0 (_PostMessage.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     xxxSimpleDoSyncPaint @ 0x1C01193C4 (xxxSimpleDoSyncPaint.c)
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 */

void __fastcall xxxUpdateWindow2(struct tagWND **a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  struct tagWND *v5; // rdi
  struct tagWND *v6; // rax
  struct tagWND *v7; // rcx
  struct tagWND *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  struct tagWND *v11; // rbx
  __int64 v12; // rcx
  struct tagWND *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  struct tagWND *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int128 v22; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+30h] [rbp-18h]

  v23 = 0LL;
  v3 = a2;
  v5 = (struct tagWND *)a1;
  v22 = 0LL;
  if ( a1 )
  {
    while ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 27LL) & 2) == 0 )
    {
      v5 = (struct tagWND *)*((_QWORD *)v5 + 13);
      if ( !v5 )
        goto LABEL_4;
    }
    ThreadLockAlways(v5, &v22);
    xxxCompositedPaint(v5);
    goto LABEL_12;
  }
LABEL_4:
  v6 = a1[5];
  if ( *((_QWORD *)v6 + 17) )
  {
    if ( !(unsigned int)ValidateParents((struct tagWND *)a1, a2 & 4) )
      return;
  }
  else if ( (*((_BYTE *)v6 + 17) & 0x10) == 0 )
  {
    goto LABEL_6;
  }
  if ( (*((_BYTE *)a1[5] + 17) & 0x10) != 0 )
  {
    SetOrClrWF(0LL, a1, 272LL, 1LL);
    if ( !*((_QWORD *)a1[5] + 17) )
      DecPaintCount((__int64)a1);
  }
  SetOrClrWF(1LL, a1, 576LL, 1LL);
  SetOrClrWF(0LL, a1, 288LL, 1LL);
  v13 = a1[5];
  if ( (*((_BYTE *)v13 + 21) & 2) == 0 && (*((_BYTE *)v13 + 31) & 0x20) != 0 && *((_QWORD *)a1[17] + 10) )
  {
    v14 = 1LL;
    v15 = 38LL;
  }
  else
  {
    if ( (*(_DWORD *)(gptiCurrent + 1272LL) & 0x40000) != 0 )
    {
      v16 = a1[2];
      if ( (struct tagWND *)gptiCurrent != v16 )
      {
        v17 = *((_QWORD *)v16 + 102);
        v18 = v17 + 16;
        v19 = -v17;
        a3 = v18 & -(__int64)(v19 != 0);
        if ( !a3
          || *(_DWORD *)((v18 & -(__int64)(v19 != 0)) + 8) != 15
          || *(_QWORD *)((v18 & -(__int64)(v19 != 0)) + 0x10)
          || *(_QWORD *)((v18 & -(__int64)(v19 != 0)) + 0x18) )
        {
          PostMessage(a1, 15LL, 0LL, 0LL);
        }
        goto LABEL_25;
      }
    }
    v14 = 0LL;
    v15 = 15LL;
  }
  xxxSendMessage(a1, v15, v14, 0LL);
LABEL_25:
  if ( (*((_BYTE *)a1[5] + 18) & 0x40) != 0 )
    xxxSimpleDoSyncPaint((struct tagWND *)a1);
LABEL_6:
  if ( (v3 & 1) != 0 )
  {
    v7 = a1[3];
    v8 = 0LL;
    if ( v7 )
    {
      a2 = *((_QWORD *)v7 + 1);
      if ( a2 )
        v8 = *(struct tagWND **)(a2 + 24);
    }
    if ( a1 != (struct tagWND **)v8 )
    {
      v9 = 0LL;
      v10 = gptiCurrent;
      *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v22;
      v11 = a1[14];
      *((_QWORD *)&v22 + 1) = 0LL;
      if ( v11 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v12 = *((_QWORD *)v11 + 5);
            if ( (*(_BYTE *)(v12 + 24) & 0x20) == 0 || !*(_QWORD *)(v12 + 136) && (*(_BYTE *)(v12 + 17) & 0x10) == 0 )
              break;
            v20 = *((_QWORD *)v11 + 11);
            if ( !v20 )
              break;
            do
            {
              v21 = *(_QWORD *)(v20 + 40);
              if ( *(_QWORD *)(v21 + 136) )
                break;
              if ( (*(_BYTE *)(v21 + 17) & 0x10) != 0 )
                break;
              v20 = *(_QWORD *)(v20 + 88);
            }
            while ( v20 );
            if ( !v20 )
              break;
            v11 = (struct tagWND *)*((_QWORD *)v11 + 11);
          }
          *((_QWORD *)&v22 + 1) = v11;
          HMLockObject(v11);
          if ( v9 )
            HMUnlockObject(v9);
          xxxUpdateWindow2(v11, v3 | 4);
          v11 = (struct tagWND *)*((_QWORD *)v11 + 11);
          if ( !v11 )
            break;
          v9 = *((_QWORD *)&v22 + 1);
        }
      }
LABEL_12:
      ThreadUnlock1(v10, a2, a3);
    }
  }
}
