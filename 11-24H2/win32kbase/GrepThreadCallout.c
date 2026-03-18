/*
 * XREFs of GrepThreadCallout @ 0x1400BF560
 * Callers:
 *     GdiThreadCallout @ 0x1400BF530 (GdiThreadCallout.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1400260C0 (PopThreadGuardedObject.c)
 *     IsUmfdIsCurrentProcessUmfdHostNoLockSupported @ 0x1400BF870 (IsUmfdIsCurrentProcessUmfdHostNoLockSupported.c)
 *     ?Get@ThreadRestrictNewHandlesRegion@@SAPEAV1@XZ @ 0x1400BF8A8 (-Get@ThreadRestrictNewHandlesRegion@@SAPEAV1@XZ.c)
 *     UmfdIsCurrentProcessUmfdHostNoLock @ 0x1400BF8E8 (UmfdIsCurrentProcessUmfdHostNoLock.c)
 *     HmgFreeDcAttr @ 0x1400BF91C (HmgFreeDcAttr.c)
 *     bDeletePalette @ 0x1400BF950 (bDeletePalette.c)
 *     ?OnThreadTermination@ThreadRestrictNewHandlesRegion@@QEAAXXZ @ 0x1401C1D38 (-OnThreadTermination@ThreadRestrictNewHandlesRegion@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepThreadCallout(_QWORD *a1, int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  ThreadRestrictNewHandlesRegion *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int (*v11)(void); // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  void (*v14)(void); // rax
  __int64 v15; // rcx
  _QWORD **v16; // rsi
  _QWORD *v17; // rcx
  int (*v18)(void); // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  void (__fastcall *v21)(_QWORD *); // rax
  _QWORD *v22; // rsi
  _QWORD *v23; // rdi
  __int64 v24; // rcx
  int (*v25)(void); // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  void (*v28)(void); // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int (*v31)(void); // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  void (__fastcall *v34)(_QWORD *); // rax
  __int64 v35; // r14
  void (__fastcall *v36)(__int64); // rbp

  v4 = 0;
  if ( (int)IsUmfdIsCurrentProcessUmfdHostNoLockSupported() >= 0 && (unsigned int)UmfdIsCurrentProcessUmfdHostNoLock() )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v25 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v24, v5) + 24) + 1416LL);
        if ( v25 )
        {
          if ( v25() >= 0 )
          {
            v28 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v27, v26) + 24) + 1424LL);
            if ( v28 )
              v28();
          }
        }
      }
    }
    else if ( a1 )
    {
      a1[12] = a1 + 11;
      a1[11] = a1 + 11;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else if ( a2 )
  {
    if ( a2 == 1 )
    {
      v8 = ThreadRestrictNewHandlesRegion::Get();
      if ( v8 )
        ThreadRestrictNewHandlesRegion::OnThreadTermination(v8);
      v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v10, v9) + 24) + 2440LL);
      if ( v11 )
      {
        if ( v11() >= 0 )
        {
          v14 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v13, v12) + 24) + 2448LL);
          if ( v14 )
            v14();
        }
      }
      v15 = a1[4];
      if ( v15 )
        HmgFreeDcAttr(v15);
      v16 = (_QWORD **)(a1 + 11);
      while ( 1 )
      {
        v17 = *v16;
        if ( *v16 == v16 )
          break;
        if ( v17 )
        {
          v35 = v17[2];
          v36 = (void (__fastcall *)(__int64))v17[3];
          PopThreadGuardedObject(v17);
          if ( v36 )
            v36(v35);
        }
      }
      v18 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v17, v12) + 24) + 2456LL);
      if ( v18 )
      {
        if ( v18() >= 0 )
        {
          v21 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v20, v19) + 24) + 2464LL);
          if ( v21 )
            v21(a1);
        }
      }
      v22 = (_QWORD *)a1[35];
      if ( v22 )
      {
        a1[35] = 0LL;
        bDeletePalette(*v22);
        v31 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v30, v29) + 24) + 2472LL);
        if ( v31 )
        {
          if ( v31() >= 0 )
          {
            v34 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v33, v32) + 24) + 2480LL);
            if ( v34 )
              v34(v22);
          }
        }
      }
      v23 = a1 - 1;
      if ( v23 && v23[49] )
        DxDdThreadCallout(v23 + 49, 0LL);
    }
  }
  else
  {
    a1[10] = a1 + 9;
    a1[9] = a1 + 9;
    a1[12] = a1 + 11;
    a1[11] = a1 + 11;
    a1[34] = a1 + 13;
    if ( a1 != (_QWORD *)8 )
    {
      v6 = a1 + 48;
      LOBYTE(v5) = 1;
      *v6 = 0LL;
      return (unsigned int)DxDdThreadCallout(v6, v5);
    }
  }
  return v4;
}
