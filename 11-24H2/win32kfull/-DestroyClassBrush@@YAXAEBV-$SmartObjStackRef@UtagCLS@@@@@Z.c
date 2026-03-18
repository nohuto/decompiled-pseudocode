/*
 * XREFs of ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1400B50EC
 * Callers:
 *     DestroyClass @ 0x1400B4778 (DestroyClass.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1400B4D30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x1400B53E0 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 */

_QWORD *__fastcall DestroyClassBrush(__int64 **a1)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  struct tagTHREADINFO *v6; // rax
  __int64 *v7; // rdx
  __int64 i; // r14
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 j; // rdx
  __int64 k; // rdx
  __int64 **v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+28h] [rbp-8h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v5 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v3 = -*(_QWORD *)CurrentProcessWin32Process;
    v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  }
  v6 = PtiCurrent(v4, v3);
  v14 = (__int64 **)gSmartObjNullRef;
  v15 = *((_QWORD *)v6 + 209);
  *((_QWORD *)v6 + 209) = &v15;
  if ( *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 72LL) > 0x1FuLL )
  {
    for ( i = 0LL; (unsigned int)i < 0x1F; i = (unsigned int)(i + 1) )
    {
      v10 = **a1;
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 72LL);
      if ( v11 == *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v7) + 19928) + 8 * i + 4696) )
        return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)&v14, (__int64)v7);
    }
    for ( j = *(_QWORD *)(v5 + 360); ; j = **v14 )
    {
      SmartObjStackRefBase<tagCLS>::operator=(&v14, j);
      if ( !*v14 )
        break;
      if ( *v14 != (__int64 *)**a1 )
      {
        v7 = *v14;
        if ( *(_QWORD *)((*v14)[1] + 72) == *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 72LL) )
          return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)&v14, (__int64)v7);
      }
    }
    for ( k = *(_QWORD *)(v5 + 352); ; k = **v14 )
    {
      SmartObjStackRefBase<tagCLS>::operator=(&v14, k);
      if ( !*v14 )
        break;
      if ( *v14 != (__int64 *)**a1 )
      {
        v7 = *v14;
        if ( *(_QWORD *)((*v14)[1] + 72) == *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 72LL) )
          return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)&v14, (__int64)v7);
      }
    }
    GreDeleteObject(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 72LL));
  }
  return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)&v14, (__int64)v7);
}
