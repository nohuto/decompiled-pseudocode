/*
 * XREFs of xxxSetSysColors @ 0x1400A0834
 * Callers:
 *     xxxODI_ColorInit @ 0x14009F170 (xxxODI_ColorInit.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1400A0E38 (-ResetSystemColors@@YAXXZ.c)
 *     NtUserSetSysColors @ 0x140171750 (NtUserSetSysColors.c)
 * Callees:
 *     GreGetDeviceCaps @ 0x14001D350 (GreGetDeviceCaps.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetSysColor @ 0x1400A0B4C (SetSysColor.c)
 *     IsCreateBitmapStripSupported @ 0x1400A0E00 (IsCreateBitmapStripSupported.c)
 *     xxxInternalInvalidate @ 0x1400A0EE8 (xxxInternalInvalidate.c)
 *     CreateBitmapStrip @ 0x1400A3C1C (CreateBitmapStrip.c)
 *     xxxSendNotifyMessage @ 0x14023B9E4 (xxxSendNotifyMessage.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxSetSysColors(__int64 a1, __int64 a2, char *a3, char *a4, unsigned int a5)
{
  __int64 v6; // rdi
  __int64 UserSessionState; // rax
  unsigned int v9; // ebp
  bool v10; // cc
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rbx
  int (*v16)(void); // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  void (*v19)(void); // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int (*v24)(void); // rax
  int (*v25)(void); // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  struct tagTHREADINFO *v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  int (*v36)(void); // rax
  __int64 v37; // rdx
  unsigned int (__fastcall *v38)(__int64); // rax
  unsigned int *v39; // rbx
  __int64 v40; // r12
  __int64 v41; // rcx

  v6 = (unsigned int)a2;
  if ( (a5 & 1) != 0 )
  {
    a1 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48);
    v36 = *(int (**)(void))(a1 + 3568);
    if ( v36 )
    {
      if ( v36() >= 0 )
      {
        v38 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, v37) + 48) + 3576LL);
        if ( !v38 || !v38(16LL) )
          return 0LL;
      }
    }
  }
  UserSessionState = W32GetUserSessionState(a1);
  v9 = a5 | 8;
  v10 = (int)GreGetDeviceCaps(*(HDC *)(*(_QWORD *)(UserSessionState + 57008) + 64LL), 24) <= 16;
  v13 = 1146882;
  if ( !v10 )
    v9 = a5;
  if ( (v9 & 4) != 0 )
  {
    if ( (_DWORD)v6 )
    {
      v39 = (unsigned int *)a4;
      v40 = v6;
      do
      {
        v41 = *(unsigned int *)((char *)v39 + a3 - a4);
        if ( (unsigned int)v41 <= 0x14 && _bittest(&v13, v41) )
        {
          SetSysColor(v41, *v39, v9);
          v13 = 1146882;
        }
        ++v39;
        --v40;
      }
      while ( v40 );
      goto LABEL_6;
    }
  }
  else if ( (_DWORD)v6 )
  {
LABEL_6:
    v14 = v6;
    do
    {
      v12 = *(unsigned int *)a3;
      a3 += 4;
      v11 = *(unsigned int *)a4;
      a4 += 4;
      if ( (unsigned int)v12 < 0x1F && ((v9 & 4) == 0 || (unsigned int)v12 > 0x14 || !_bittest(&v13, v12)) )
        SetSysColor(v12, v11, v9);
      v13 = 1146882;
      --v14;
    }
    while ( v14 );
  }
  if ( (v9 & 1) != 0 )
  {
    v16 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v12, v11) + 48) + 3584LL);
    if ( v16 )
    {
      if ( v16() >= 0 )
      {
        v19 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v18, v17) + 48) + 3592LL);
        if ( v19 )
          v19();
      }
    }
    if ( (int)IsCreateBitmapStripSupported() >= 0 )
      CreateBitmapStrip();
    v23 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v21, v20) + 48);
    v24 = *(int (**)(void))(v23 + 3600);
    if ( v24 && v24() >= 0 )
      xxxSendNotifyMessage(v23, 21LL);
    v25 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v23, v22) + 48) + 3616LL);
    if ( v25 && v25() >= 0 )
    {
      if ( *((_QWORD *)PtiCurrent(v26) + 62) )
        v28 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v27) + 62) + 8LL) + 24LL);
      else
        v28 = 0LL;
      xxxInternalInvalidate(v28);
      v30 = PtiCurrent(v29);
      v32 = *(_QWORD *)(W32GetUserSessionState(v31) + 19200);
      if ( *((_QWORD *)v30 + 62) != v32 )
      {
        v33 = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v32) + 19200) + 8LL);
        if ( (*(_DWORD *)(v33 + 64) & 1) == 0 )
        {
          v34 = *(_QWORD *)(W32GetUserSessionState(v33) + 19200);
          if ( *(_QWORD *)(*(_QWORD *)(v34 + 8) + 24LL) )
          {
            v35 = W32GetUserSessionState(v34);
            xxxInternalInvalidate(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 19200) + 8LL) + 24LL));
          }
        }
      }
    }
  }
  return 1LL;
}
