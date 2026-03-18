/*
 * XREFs of ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x140034330
 * Callers:
 *     xxxDoPaint @ 0x140033DBC (xxxDoPaint.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x140034330 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     xxxCompositedPaint @ 0x140032604 (xxxCompositedPaint.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032E40 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x140034330 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14004083C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

struct tagWND *__fastcall xxxInternalDoPaint(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  struct tagWND *v3; // rbx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v5; // rdx
  ULONG_PTR v6; // rbp
  __int64 v7; // rcx
  struct tagWND *v8; // rdi
  ULONG_PTR *v9; // rax
  ULONG_PTR *v11; // rax
  struct tagWND *v12; // rax
  __int64 v13; // rdi
  ULONG_PTR *v14; // rax
  ULONG_PTR v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  ULONG_PTR v18; // rax
  ULONG_PTR *v19; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+20h] [rbp-18h] BYREF
  struct tagWND *v21; // [rsp+28h] [rbp-10h]

  v3 = a1;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  v6 = 0LL;
  if ( CurrentThreadNonPaged )
    v7 = *CurrentThreadNonPaged;
  else
    v7 = 0LL;
  BugCheckParameter3 = *(_QWORD *)(v7 + 456);
  *(_QWORD *)(v7 + 456) = &BugCheckParameter3;
  v21 = v3;
  if ( v3 )
    HMLockObject(v3);
  while ( v3 )
  {
    if ( *((struct tagTHREADINFO **)v3 + 2) != a2 )
      goto LABEL_7;
    v7 = *((_QWORD *)v3 + 5);
    if ( (*(_BYTE *)(v7 + 27) & 2) != 0 )
    {
      xxxCompositedPaint(v3);
      v3 = (struct tagWND *)*((_QWORD *)v3 + 11);
      Win32HM_ExchangeThreadLock<1>((__int64)v3, (__int64)&BugCheckParameter3);
    }
    else
    {
      if ( *(_QWORD *)(v7 + 136) || (*(_BYTE *)(v7 + 17) & 0x10) != 0 )
      {
        if ( (*(_BYTE *)(v7 + 24) & 0x20) != 0 )
        {
          while ( 1 )
          {
            v3 = (struct tagWND *)*((_QWORD *)v3 + 11);
            if ( !v3 )
              break;
            if ( *((struct tagTHREADINFO **)v3 + 2) == a2 )
            {
              v7 = *((_QWORD *)v3 + 5);
              if ( (*(_QWORD *)(v7 + 136) || (*(_BYTE *)(v7 + 17) & 0x10) != 0) && (*(_BYTE *)(v7 + 24) & 0x20) == 0 )
              {
                if ( BugCheckParameter3 != -1LL )
                {
                  v9 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v7, v5);
                  if ( v9 )
                    v6 = *v9;
                  Win32HM_UnlockFromThread<1>(v6, (ULONG_PTR)&BugCheckParameter3);
                }
                return v3;
              }
            }
          }
        }
        break;
      }
LABEL_7:
      v7 = *((_QWORD *)v3 + 14);
      if ( v7 )
      {
        v12 = xxxInternalDoPaint((struct tagWND *)v7, a2);
        v13 = (__int64)v12;
        if ( v12 )
        {
          if ( v12 == v3 )
          {
            v13 = Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>((ULONG_PTR)&BugCheckParameter3);
            v18 = BugCheckParameter3;
          }
          else
          {
            v14 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v7, v5);
            if ( v14 )
              v15 = *v14;
            else
              v15 = 0LL;
            Win32HM_UnlockFromThread<1>(v15, (ULONG_PTR)&BugCheckParameter3);
            v18 = -1LL;
            v21 = 0LL;
            BugCheckParameter3 = -1LL;
          }
          if ( v18 != -1LL )
          {
            v19 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v17, v16);
            if ( v19 )
              v6 = *v19;
            Win32HM_UnlockFromThread<1>(v6, (ULONG_PTR)&BugCheckParameter3);
          }
          return (struct tagWND *)v13;
        }
      }
      v3 = (struct tagWND *)*((_QWORD *)v3 + 11);
      v8 = v21;
      v21 = v3;
      if ( v3 )
        HMLockObject(v3);
      if ( v8 )
        HMUnlockObject(v8);
    }
  }
  v11 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v7, v5);
  if ( v11 )
    v6 = *v11;
  return (struct tagWND *)Win32HM_UnlockFromThread<1>(v6, (ULONG_PTR)&BugCheckParameter3);
}
