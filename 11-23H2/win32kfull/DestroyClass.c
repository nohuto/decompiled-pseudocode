/*
 * XREFs of DestroyClass @ 0x1C00F4924
 * Callers:
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00135C0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     DestroyProcessesClasses @ 0x1C0084B20 (DestroyProcessesClasses.c)
 *     FinalUserInit @ 0x1C0096C84 (FinalUserInit.c)
 *     DereferenceClass @ 0x1C0097DA0 (DereferenceClass.c)
 *     _UnregisterClass @ 0x1C00ED730 (_UnregisterClass.c)
 *     DestroyClass @ 0x1C00F4924 (DestroyClass.c)
 * Callees:
 *     ?UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z @ 0x1C0013FE0 (-UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z.c)
 *     ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00754D4 (-Free@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     DestroyClassSmIcon @ 0x1C00829C0 (DestroyClassSmIcon.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C00F442C (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C00F4678 (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     DestroyClass @ 0x1C00F4924 (DestroyClass.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00F4CA8 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 */

__int64 __fastcall DestroyClass(struct tagPROCESSINFO *a1, struct _CALLPROCDATA ***a2)
{
  struct _CALLPROCDATA **v2; // rbx
  unsigned __int16 v4; // dx
  unsigned __int16 v5; // dx
  unsigned __int64 v6; // rcx
  struct _CALLPROCDATA *v7; // rdx
  __int64 v8; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rdi
  __int64 *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdi
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 *v16; // rax
  _QWORD *v17; // rax
  struct _CALLPROCDATA *v18; // rdx
  bool v19; // zf
  struct _CALLPROCDATA *v21; // [rsp+20h] [rbp-20h] BYREF
  __int64 v22; // [rsp+28h] [rbp-18h] BYREF
  struct _CALLPROCDATA *v23; // [rsp+30h] [rbp-10h] BYREF
  __int64 v24; // [rsp+38h] [rbp-8h] BYREF
  struct _CALLPROCDATA *v25; // [rsp+58h] [rbp+18h] BYREF

  v2 = *a2;
  *a2 = (struct _CALLPROCDATA **)**a2;
  if ( v2 == (struct _CALLPROCDATA **)v2[7] )
  {
    while ( v2[8] )
      DestroyClass(a1);
    v4 = *(_WORD *)v2[1];
    if ( (v4 < gatomFirstPinned || v4 > gatomLastPinned) && v4 >= 0xC000u && !IsClassAtomRegistered(a1, v4) )
      UserDeleteAtom(*(unsigned __int16 *)v2[1]);
    v5 = *((_WORD *)v2[1] + 1);
    if ( (v5 < gatomFirstPinned || v5 > gatomLastPinned || v5 >= 0xC000u) && !IsClassAtomRegistered(a1, v5) )
      UserDeleteAtom(*((unsigned __int16 *)v2[1] + 1));
    v6 = (unsigned __int64)v2[12];
    if ( (v6 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      Win32FreePool((void *)v6);
    v7 = v2[5];
    if ( v7 )
      DestroyCacheDC(0LL, *((_QWORD *)v7 + 1));
    v8 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v8 = *ThreadWin32Thread;
    v21 = (struct _CALLPROCDATA *)gSmartObjNullRef;
    v21 = v2[16];
    ++*((_DWORD *)v2[16] + 2);
    v22 = *(_QWORD *)(v8 + 1512);
    *(_QWORD *)(v8 + 1512) = &v22;
    DestroyClassBrush((__int64)&v21);
    v10 = 0LL;
    v11 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v11 )
      v10 = *v11;
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v21);
    v12 = *(_QWORD **)(v10 + 1512);
    if ( v12 )
      *(_QWORD *)(v10 + 1512) = *v12;
  }
  v13 = 0LL;
  v14 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v14 )
    v13 = *v14;
  v23 = (struct _CALLPROCDATA *)gSmartObjNullRef;
  v23 = v2[16];
  ++*((_DWORD *)v2[16] + 2);
  v24 = *(_QWORD *)(v13 + 1512);
  *(_QWORD *)(v13 + 1512) = &v24;
  DestroyClassSmIcon((__int64 **)&v23);
  v15 = 0LL;
  v16 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v16 )
    v15 = *v16;
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v23);
  v17 = *(_QWORD **)(v15 + 1512);
  if ( v17 )
    *(_QWORD *)(v15 + 1512) = *v17;
  HMAssignmentUnlock(v2 + 10);
  *((_QWORD *)v2[1] + 7) = 0LL;
  HMAssignmentUnlock(v2 + 14);
  HMAssignmentUnlock(v2 + 11);
  if ( v2[6] )
    UnlockAndFreeCPDs(v2 + 6);
  v25 = v2[4];
  v2[4] = 0LL;
  if ( v25 )
    RtlFreeHeap(*((PVOID *)v25 + 17), 0, v2[13]);
  else
    Win32FreePool(v2[13]);
  if ( v25 )
    RtlFreeHeap(*((PVOID *)v25 + 17), 0, v2[1]);
  else
    Win32FreePool(v2[1]);
  v18 = v2[16];
  if ( v18 )
  {
    *(_QWORD *)v18 = 0LL;
    v19 = *((_DWORD *)v18 + 2) == 0;
    *((_BYTE *)v18 + 12) = 1;
    if ( v19 )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v18);
  }
  if ( *gpUserTypeIsolation )
    NSInstrumentation::CTypeIsolation<36864,144>::Free((__int64)*gpUserTypeIsolation, v2);
  return UnlockObjectAssignment(&v25);
}
