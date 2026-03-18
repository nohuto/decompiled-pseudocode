/*
 * XREFs of ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1400322FC
 * Callers:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1400322B0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1400322FC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1400322FC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxCompositedPaint @ 0x140032604 (xxxCompositedPaint.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x140032AA8 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     DecPaintCount @ 0x140035D9C (DecPaintCount.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     xxxSimpleDoSyncPaint @ 0x1400477B0 (xxxSimpleDoSyncPaint.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _PostMessage @ 0x140066460 (_PostMessage.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall xxxUpdateWindow2(struct tagTHREADINFO **a1, __int64 a2)
{
  ULONG_PTR v2; // rbx
  int v3; // ebp
  struct tagWND *v5; // rsi
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  ULONG_PTR *v10; // rax
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // rcx
  struct tagWND *v13; // rax
  struct tagTHREADINFO **v14; // rax
  __int64 v15; // rdx
  struct tagTHREADINFO *v16; // rcx
  struct tagWND *v17; // rsi
  struct tagTHREADINFO *v18; // rdi
  __int64 v19; // rcx
  ULONG_PTR *v20; // rax
  __int64 v21; // rax
  struct tagTHREADINFO *v22; // rax
  struct tagTHREADINFO *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+20h] [rbp-18h] BYREF
  struct tagWND *i; // [rsp+28h] [rbp-10h]

  v2 = 0LL;
  v3 = a2;
  v5 = (struct tagWND *)a1;
  if ( a1 )
  {
    do
    {
      if ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 27LL) & 2) != 0 )
        break;
      v5 = (struct tagWND *)*((_QWORD *)v5 + 13);
    }
    while ( v5 );
  }
  if ( v5 )
  {
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
    if ( CurrentThreadNonPaged )
      v7 = *CurrentThreadNonPaged;
    else
      v7 = 0LL;
    BugCheckParameter3 = *(_QWORD *)(v7 + 456);
    *(_QWORD *)(v7 + 456) = &BugCheckParameter3;
    i = v5;
    HMLockObject(v5);
    xxxCompositedPaint(v5);
    v10 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v9, v8);
    if ( v10 )
      v2 = *v10;
    Win32HM_UnlockFromThread<0>(v2, (ULONG_PTR)&BugCheckParameter3);
    return;
  }
  v11 = a1[5];
  if ( *((_QWORD *)v11 + 17) )
  {
    if ( !(unsigned int)ValidateParents((struct tagWND *)a1, a2 & 4) )
      return;
  }
  else if ( (*((_BYTE *)v11 + 17) & 0x10) == 0 )
  {
    goto LABEL_13;
  }
  if ( (*((_BYTE *)a1[5] + 17) & 0x10) != 0 )
  {
    SetOrClrWF(0LL, a1, 272LL, 1LL);
    if ( !*((_QWORD *)a1[5] + 17) )
      DecPaintCount(a1);
  }
  SetOrClrWF(1LL, a1, 576LL, 1LL);
  SetOrClrWF(0LL, a1, 288LL, 1LL);
  if ( (*((_DWORD *)PtiCurrent() + 340) & 0x40000) == 0 || (v22 = PtiCurrent(), v23 = a1[2], v22 == v23) )
  {
    xxxSendMessage(a1, 15LL, 0LL, 0LL);
  }
  else
  {
    v24 = *((_QWORD *)v23 + 107);
    v25 = v24 + 16;
    v26 = -v24;
    if ( (v25 & -(__int64)(v26 != 0)) == 0
      || *(_DWORD *)((v25 & -(__int64)(v26 != 0)) + 8) != 15
      || *(_QWORD *)((v25 & -(__int64)(v26 != 0)) + 0x10)
      || *(_QWORD *)((v25 & -(__int64)(v26 != 0)) + 0x18) )
    {
      PostMessage(a1, 15LL, 0LL);
    }
  }
  if ( (*((_BYTE *)a1[5] + 18) & 0x40) != 0 )
    xxxSimpleDoSyncPaint((struct tagWND *)a1);
LABEL_13:
  if ( (v3 & 1) != 0 )
  {
    v12 = a1[3];
    v13 = 0LL;
    if ( v12 )
    {
      a2 = *((_QWORD *)v12 + 1);
      if ( a2 )
        v13 = *(struct tagWND **)(a2 + 24);
    }
    if ( a1 != (struct tagTHREADINFO **)v13 )
    {
      v14 = (struct tagTHREADINFO **)W32GetCurrentThreadNonPaged(v12, a2);
      if ( v14 )
        v16 = *v14;
      else
        v16 = 0LL;
      v17 = 0LL;
      BugCheckParameter3 = *((_QWORD *)v16 + 57);
      *((_QWORD *)v16 + 57) = &BugCheckParameter3;
      v18 = a1[14];
      for ( i = 0LL; v18; v18 = (struct tagTHREADINFO *)*((_QWORD *)v18 + 11) )
      {
        v19 = *((_QWORD *)v18 + 5);
        if ( (*(_BYTE *)(v19 + 24) & 0x20) != 0 && (*(_QWORD *)(v19 + 136) || (*(_BYTE *)(v19 + 17) & 0x10) != 0) )
        {
          v16 = v18;
          while ( 1 )
          {
            v16 = (struct tagTHREADINFO *)*((_QWORD *)v16 + 11);
            if ( !v16 )
              break;
            v21 = *((_QWORD *)v16 + 5);
            if ( *(_QWORD *)(v21 + 136) || (*(_BYTE *)(v21 + 17) & 0x10) != 0 )
              goto LABEL_25;
          }
        }
        i = v18;
        HMLockObject(v18);
        if ( v17 )
          HMUnlockObject(v17);
        xxxUpdateWindow2(v18, v3 | 4);
        v17 = i;
LABEL_25:
        ;
      }
      v20 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v16, v15);
      if ( v20 )
        v2 = *v20;
      Win32HM_UnlockFromThread<1>(v2, (ULONG_PTR)&BugCheckParameter3);
    }
  }
}
