/*
 * XREFs of ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022907C
 * Callers:
 *     xxxSBTrackInit @ 0x1C0229BBC (xxxSBTrackInit.c)
 * Callees:
 *     SystoChar @ 0x1C000C9D4 (SystoChar.c)
 *     xxxInternalGetMessage @ 0x1C002B4E0 (xxxInternalGetMessage.c)
 *     xxxTranslateMessage @ 0x1C008B26C (xxxTranslateMessage.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     xxxDispatchMessage @ 0x1C01185F4 (xxxDispatchMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     xxxCallMsgFilter @ 0x1C01517DE (xxxCallMsgFilter.c)
 */

void __fastcall xxxSBTrackLoop(struct tagWND *a1, __int64 a2, struct tagSBCALC *a3)
{
  __int64 v6; // rdi
  void (__fastcall *v7)(struct tagWND *, __int64, _QWORD, __int64, struct tagSBCALC *); // rbp
  struct tagWND *v8; // rdx
  int v9; // ecx
  unsigned int v10; // r8d
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // r9
  void (__fastcall *v16)(struct tagWND *, _QWORD, _QWORD, __int64, struct tagSBCALC *); // r10
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int128 v20; // [rsp+30h] [rbp-48h] BYREF
  __int128 v21; // [rsp+40h] [rbp-38h]
  __int128 v22; // [rsp+50h] [rbp-28h]

  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL);
  if ( v6 )
  {
    v7 = *(void (__fastcall **)(struct tagWND *, __int64, _QWORD, __int64, struct tagSBCALC *))(v6 + 48);
    if ( v7 )
    {
      if ( (*(_DWORD *)v6 & 2) != 0 )
        SetOrClrWF(1, (__int64 *)a1, 0x620u, 1);
      if ( gpqForeground )
      {
        v8 = *(struct tagWND **)(gpqForeground + 120LL);
        if ( v8 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
          {
            v9 = 33;
            if ( *((_QWORD *)v8 + 2) == gptiCurrent )
              v8 = a1;
            else
              v9 = 49;
            xxxWindowEvent(0x80000004, v8, 0, 3u, v9);
          }
        }
      }
      if ( (*(_DWORD *)v6 & 4) != 0 )
        v10 = -4;
      else
        v10 = ((*(_DWORD *)v6 & 2) != 0) | 0xFFFFFFFA;
      xxxWindowEvent(0x12u, a1, v10, 0, 0);
      v7(a1, 513LL, 0LL, a2, a3);
      while ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) == a1
           && (unsigned int)xxxInternalGetMessage(&v20, 0LL, 0, 0, 1, 1) )
      {
        if ( !(unsigned int)xxxCallMsgFilter((__int64)&v20, 5LL, v11, v12) )
        {
          if ( (_QWORD)v20 == *(_QWORD *)a1
            && ((unsigned int)(DWORD2(v20) - 512) <= 0xE || (unsigned int)(DWORD2(v20) - 256) <= 9) )
          {
            v13 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL);
            if ( !v13 || !*(_QWORD *)(v13 + 48) )
              return;
            v14 = SystoChar(DWORD2(v20), SDWORD2(v21));
            v16(a1, v14, v21, v15, a3);
          }
          else
          {
            xxxTranslateMessage((__int64)&v20, 0);
            xxxDispatchMessage((__int64 *)&v20, v17, v18, v19);
          }
        }
      }
    }
  }
}
