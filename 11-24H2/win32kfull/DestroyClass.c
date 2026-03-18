/*
 * XREFs of DestroyClass @ 0x1400B4778
 * Callers:
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x14007E370 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     DereferenceClass @ 0x1400B4660 (DereferenceClass.c)
 *     DestroyClass @ 0x1400B4778 (DestroyClass.c)
 *     DestroyProcessesClasses @ 0x1401C43A0 (DestroyProcessesClasses.c)
 *     FinalUserInit @ 0x1401CD2B4 (FinalUserInit.c)
 *     _UnregisterClass @ 0x14023A7F8 (_UnregisterClass.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyClass @ 0x1400B4778 (DestroyClass.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400B4A08 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1400B4AAC (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1400B4D30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1400B50EC (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     ?IsClassAtomPinned@@YA_NG@Z @ 0x1400B5294 (-IsClassAtomPinned@@YA_NG@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1400B52DC (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     DestroyClassSmIcon @ 0x1400B5370 (DestroyClassSmIcon.c)
 *     ?UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z @ 0x140209F0C (-UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z.c)
 */

__int64 __fastcall DestroyClass(struct tagPROCESSINFO *a1, struct _CALLPROCDATA ***a2)
{
  struct _CALLPROCDATA **v2; // rbx
  unsigned __int16 v4; // dx
  __int64 v5; // rcx
  __int64 v6; // rdx
  struct tagTHREADINFO *v7; // rax
  struct tagTHREADINFO *v8; // rax
  struct _CALLPROCDATA *v9; // rdi
  struct _CALLPROCDATA *v10; // rcx
  struct _CALLPROCDATA *v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+28h] [rbp-18h] BYREF
  struct _CALLPROCDATA *v14; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+38h] [rbp-8h] BYREF
  struct _CALLPROCDATA *v16; // [rsp+58h] [rbp+18h] BYREF

  v2 = *a2;
  *a2 = (struct _CALLPROCDATA **)**a2;
  if ( v2 == (struct _CALLPROCDATA **)v2[7] )
  {
    while ( v2[8] )
      DestroyClass(a1, v2 + 8);
    if ( !IsClassAtomPinned(*(_WORD *)v2[1]) )
    {
      v4 = *(_WORD *)v2[1];
      if ( v4 >= 0xC000u && !IsClassAtomRegistered(a1, v4) )
        UserDeleteAtom(*(unsigned __int16 *)v2[1]);
    }
    if ( (!IsClassAtomPinned(*((_WORD *)v2[1] + 1)) || *((_WORD *)v2[1] + 1) >= 0xC000u)
      && !IsClassAtomRegistered(a1, *((_WORD *)v2[1] + 1)) )
    {
      UserDeleteAtom(*((unsigned __int16 *)v2[1] + 1));
    }
    v5 = (__int64)v2[12];
    if ( (v5 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      Win32FreePool((void *)v5);
    v6 = (__int64)v2[5];
    if ( v6 )
      DestroyCacheDC(0LL, *(_QWORD *)(v6 + 16));
    v7 = PtiCurrent(v5, v6);
    v12 = (struct _CALLPROCDATA *)gSmartObjNullRef;
    v12 = v2[16];
    ++*((_DWORD *)v2[16] + 2);
    v13 = *((_QWORD *)v7 + 209);
    *((_QWORD *)v7 + 209) = &v13;
    DestroyClassBrush(&v12);
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v12);
  }
  v8 = PtiCurrent((__int64)a1, (__int64)a2);
  v14 = (struct _CALLPROCDATA *)gSmartObjNullRef;
  v14 = v2[16];
  ++*((_DWORD *)v2[16] + 2);
  v15 = *((_QWORD *)v8 + 209);
  *((_QWORD *)v8 + 209) = &v15;
  DestroyClassSmIcon(&v14);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v14);
  HMAssignmentUnlock(v2 + 10);
  *((_QWORD *)v2[1] + 7) = 0LL;
  HMAssignmentUnlock(v2 + 14);
  HMAssignmentUnlock(v2 + 11);
  if ( v2[6] )
    UnlockAndFreeCPDs(v2 + 6);
  v9 = v2[4];
  v2[4] = 0LL;
  v10 = v2[13];
  v16 = v9;
  if ( v9 )
    RtlFreeHeap(*((PVOID *)v9 + 17), 0, v10);
  else
    Win32FreePool(v10);
  ClassFree(v9, (struct tagCLS *)v2);
  return DeferrableUnlockObjectAssignment<tagDESKTOP>(&v16);
}
