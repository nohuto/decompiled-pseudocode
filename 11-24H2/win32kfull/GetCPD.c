/*
 * XREFs of GetCPD @ 0x1400B4E48
 * Callers:
 *     _GetClassInfoEx @ 0x140046494 (_GetClassInfoEx.c)
 *     xxxSetClassData @ 0x14007D32C (xxxSetClassData.c)
 *     NtUserGetCPD @ 0x1400B4DC0 (NtUserGetCPD.c)
 *     xxxSetWindowData @ 0x1402DD148 (xxxSetWindowData.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1400B4D30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1400B5090 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x1400B53E0 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall GetCPD(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v4; // si
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 *v10; // rcx
  __int64 *v11; // rax
  __int64 *i; // rbx
  __int64 v13; // rax
  struct tagTHREADINFO *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  void *CurrentWin32kStackRefLookAside; // rax
  __int64 *v22; // [rsp+20h] [rbp-30h] BYREF
  __int64 v23; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v24[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v25[2]; // [rsp+40h] [rbp-10h] BYREF

  v4 = a2;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v8 = *CurrentThreadNonPaged;
  else
    v8 = 0LL;
  v22 = (__int64 *)gSmartObjNullRef;
  v23 = *(_QWORD *)(v8 + 1672);
  *(_QWORD *)(v8 + 1672) = &v23;
  if ( (v4 & 0x60) != 0 )
  {
    SmartObjStackRefBase<tagCLS>::operator=(&v22, *(_QWORD *)(a1 + 136));
    goto LABEL_14;
  }
  if ( (v4 & 0x80u) == 0 )
  {
    if ( a1 == *v22 )
      goto LABEL_14;
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v22);
    if ( !a1 )
    {
      v22 = (__int64 *)gSmartObjNullRef;
      goto LABEL_14;
    }
    v11 = *(__int64 **)(a1 + 128);
    goto LABEL_13;
  }
  v9 = *(_QWORD *)(a1 + 136);
  if ( v9 != *v22 )
  {
    v10 = (__int64 *)gSmartObjNullRef;
    if ( v22 != (__int64 *)gSmartObjNullRef )
    {
      if ( !--*((_DWORD *)v22 + 2) && *((_BYTE *)v22 + 12) )
      {
        CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
        Win32FreeToPagedLookasideList(CurrentWin32kStackRefLookAside, v22);
      }
      v10 = (__int64 *)gSmartObjNullRef;
    }
    if ( !v9 )
    {
      v22 = v10;
      goto LABEL_14;
    }
    v11 = *(__int64 **)(v9 + 128);
LABEL_13:
    v22 = v11;
    ++*((_DWORD *)v11 + 2);
  }
LABEL_14:
  for ( i = *(__int64 **)(*v22 + 48); i; i = (__int64 *)i[7] )
  {
    v13 = i[5];
    if ( *(_QWORD *)(v13 + 16) == a3 && *(_WORD *)(v13 + 24) == v4 )
      goto LABEL_21;
  }
  v14 = PtiCurrent(*v22, v7);
  LOBYTE(v15) = 7;
  v16 = HMAllocObject(v14, *((_QWORD *)v14 + 62), v15, 72LL);
  i = (__int64 *)v16;
  if ( v16 )
  {
    v18 = *v22;
    v24[0] = v16 + 56;
    v24[1] = *(_QWORD *)(v18 + 48);
    HMAssignmentLock(v24, 0LL);
    v25[1] = i;
    v25[0] = *v22 + 48;
    HMAssignmentLock(v25, 0LL);
    *(_QWORD *)(i[5] + 16) = a3;
    *(_WORD *)(i[5] + 24) = v4;
LABEL_21:
    v19 = *i;
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)&v22, v7);
    return (unsigned int)v19 | 0xFFFF0000LL;
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)&v22, v17);
  return 0LL;
}
