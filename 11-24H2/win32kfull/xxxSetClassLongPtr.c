/*
 * XREFs of xxxSetClassLongPtr @ 0x14007D1D8
 * Callers:
 *     NtUserSetClassLongPtr @ 0x14029CC20 (NtUserSetClassLongPtr.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     xxxSetClassData @ 0x14007D32C (xxxSetClassData.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1400B4D30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x1400B53E0 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 */

__int64 __fastcall xxxSetClassLongPtr(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  struct tagTHREADINFO *v6; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 i; // rdx
  __int64 **v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 v16; // [rsp+28h] [rbp-8h] BYREF

  v3 = (int)a2;
  v6 = PtiCurrent((__int64)a1, a2);
  v15 = (__int64 **)gSmartObjNullRef;
  v16 = *((_QWORD *)v6 + 209);
  *((_QWORD *)v6 + 209) = &v16;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(&v16);
  v8 = 0LL;
  v9 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) != v9 )
  {
    v11 = 5;
LABEL_8:
    UserSetLastError(v11);
    goto LABEL_6;
  }
  if ( (int)v3 < 0 )
  {
    v8 = xxxSetClassData(a1);
    goto LABEL_6;
  }
  SmartObjStackRefBase<tagCLS>::operator=(&v15, *(_QWORD *)(*((_QWORD *)a1 + 17) + 56LL));
  if ( (int)v3 + 8 < (unsigned int)v3 || (unsigned int)(v3 + 8) > *(_DWORD *)((*v15)[1] + 12) )
  {
    v11 = 1413;
    goto LABEL_8;
  }
  v12 = (*v15)[1];
  v13 = *(_QWORD *)(v12 + v3 + 88);
  *(_QWORD *)(v12 + v3 + 88) = a3;
  for ( i = (*v15)[8]; ; i = **v15 )
  {
    SmartObjStackRefBase<tagCLS>::operator=(&v15, i);
    if ( !*v15 )
      break;
    *(_QWORD *)((*v15)[1] + v3 + 88) = a3;
  }
  v8 = v13;
LABEL_6:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v15);
  return v8;
}
