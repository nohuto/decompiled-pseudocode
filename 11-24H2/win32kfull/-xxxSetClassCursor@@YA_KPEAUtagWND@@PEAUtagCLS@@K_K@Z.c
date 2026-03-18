/*
 * XREFs of ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x14007E01C
 * Callers:
 *     xxxSetClassData @ 0x14007D32C (xxxSetClassData.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     ClassLock @ 0x14007DF9C (ClassLock.c)
 *     ClassUnlock @ 0x14007E328 (ClassUnlock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x14007E370 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1400B4D30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x1400B53E0 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 *     xxxSetClassIcon @ 0x14021E780 (xxxSetClassIcon.c)
 */

_QWORD *__fastcall xxxSetClassCursor(struct tagWND *a1, struct tagCLS *a2, int a3, __int64 a4)
{
  _QWORD *v4; // rdi
  _QWORD *v6; // r14
  __int64 v7; // rsi
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagTHREADINFO *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagCLS *v23; // rbx
  struct tagTHREADINFO *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct tagTHREADINFO *v27; // rax
  struct tagCLS *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct tagTHREADINFO *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct tagTHREADINFO *v35; // rax
  int v36; // ecx
  __int64 v37; // rax
  __int64 *v38; // [rsp+28h] [rbp-59h] BYREF
  __int64 v39; // [rsp+30h] [rbp-51h] BYREF
  __int64 *v40; // [rsp+38h] [rbp-49h] BYREF
  __int64 v41; // [rsp+40h] [rbp-41h] BYREF
  __int128 v42; // [rsp+48h] [rbp-39h] BYREF
  __int64 v43; // [rsp+58h] [rbp-29h]
  _QWORD v44[2]; // [rsp+68h] [rbp-19h] BYREF
  _QWORD v45[2]; // [rsp+78h] [rbp-9h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+88h] [rbp+7h] BYREF
  __int128 v47; // [rsp+98h] [rbp+17h] BYREF
  __int64 v48; // [rsp+A8h] [rbp+27h]

  v4 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v11 = PtiCurrent((__int64)a1, (__int64)a2);
  v40 = (__int64 *)gSmartObjNullRef;
  v41 = *((_QWORD *)v11 + 209);
  *((_QWORD *)v11 + 209) = &v41;
  v14 = PtiCurrent(v13, v12);
  v38 = (__int64 *)gSmartObjNullRef;
  v39 = *((_QWORD *)v14 + 209);
  *((_QWORD *)v14 + 209) = &v39;
  v43 = 0LL;
  v48 = 0LL;
  v42 = 0LL;
  v47 = 0LL;
  if ( a4 )
  {
    LOBYTE(v15) = 3;
    v7 = HMValidateHandleWithDescriptor(a4, v15);
    if ( !v7 )
    {
      if ( a3 == -14 || (v36 = 1402, a3 == -34) )
        v36 = 1414;
      UserSetLastError(v36);
    }
  }
  SmartObjStackRefBase<tagCLS>::operator=(&v40, *((_QWORD *)a2 + 7));
  if ( !(unsigned int)ClassLock(*v40, &v42) )
  {
    UserSetLastError(5);
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v38);
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v40);
    return 0LL;
  }
  v18 = PtiCurrent(v17, v16);
  Win32HM_LockIntoThread<1>((__int64)v18, v7, (__int64 *)BugCheckParameter3);
  if ( a3 == -34 || a3 == -14 )
  {
    v19 = (_QWORD *)xxxSetClassIcon(a1);
  }
  else
  {
    if ( a3 != -12 )
      goto LABEL_10;
    v44[1] = v7;
    v44[0] = *v40 + 88;
    v19 = (_QWORD *)HMAssignmentLock(v44, 0LL);
  }
  v6 = v19;
  if ( v19 )
    v6 = (_QWORD *)*v19;
LABEL_10:
  v20 = *(_QWORD *)(*v40 + 64);
LABEL_11:
  SmartObjStackRefBase<tagCLS>::operator=(&v38, v20);
  while ( 1 )
  {
    if ( !*v38 )
    {
      v23 = (struct tagCLS *)*v40;
      v24 = PtiCurrent(v22, v21);
      *((_QWORD *)v24 + 48) = v42;
      ClassUnlockWorker(v23);
      v27 = PtiCurrent(v26, v25);
      Win32HM_UnlockFromThread<1>((ULONG_PTR)v27, BugCheckParameter3);
      v4 = v6;
      goto LABEL_14;
    }
    if ( a3 != -34 && a3 != -14 )
    {
      if ( a3 == -12 )
      {
        v45[1] = v7;
        v45[0] = *v38 + 88;
        HMAssignmentLock(v45, 0LL);
      }
      goto LABEL_25;
    }
    if ( !(unsigned int)ClassLock(*v38, &v47) )
      break;
    xxxSetClassIcon(a1);
    v37 = ClassUnlock((struct tagCLS *)*v38);
    SmartObjStackRefBase<tagCLS>::operator=(&v38, v37);
LABEL_25:
    if ( *v38 )
    {
      v20 = *(_QWORD *)*v38;
      goto LABEL_11;
    }
  }
  UserSetLastError(5);
  v29 = (struct tagCLS *)*v40;
  v32 = PtiCurrent(v31, v30);
  *((_QWORD *)v32 + 48) = v42;
  ClassUnlockWorker(v29);
  v35 = PtiCurrent(v34, v33);
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v35, BugCheckParameter3);
LABEL_14:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v38);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v40);
  return v4;
}
