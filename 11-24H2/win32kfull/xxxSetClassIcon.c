/*
 * XREFs of xxxSetClassIcon @ 0x14021E780
 * Callers:
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x14007E01C (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxCreateClassSmIcon @ 0x14007ADE4 (xxxCreateClassSmIcon.c)
 *     xxxInternalEnumWindow @ 0x14008AD6C (xxxInternalEnumWindow.c)
 *     HMValidateHandleNoRip @ 0x14008ED8C (HMValidateHandleNoRip.c)
 *     DestroyClassSmIcon @ 0x1400B5370 (DestroyClassSmIcon.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAU_HEAD@@@Z @ 0x1401C1F64 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1401DCE70 (-xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z.c)
 */

__int64 *__fastcall xxxSetClassIcon(struct tagWND *a1, __int64 **a2, __int64 *a3, int a4)
{
  struct tagTHREADINFO *v8; // r13
  __int64 *result; // rax
  BOOL v10; // ebp
  __int64 v11; // rsi
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int128 v19; // [rsp+20h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v21; // [rsp+40h] [rbp-28h] BYREF

  v8 = PtiCurrent((__int64)a1, (__int64)a2);
  if ( a4 == -14 )
    result = *(__int64 **)(**a2 + 80);
  else
    result = *(__int64 **)(**a2 + 112);
  if ( result != a3 )
  {
    v10 = 1;
    if ( result )
      v11 = *result;
    else
      v11 = 0LL;
    if ( a4 == -14 )
    {
      if ( *(_QWORD *)(**a2 + 112) )
        v10 = DestroyClassSmIcon(a2) != 0;
      v12 = *a2;
      *((_QWORD *)&v19 + 1) = a3;
      *(_QWORD *)&v19 = *v12 + 80;
      HMAssignmentLock(&v19, 0LL);
    }
    else
    {
      v16 = DestroyClassSmIcon(a2);
      v19 = *(_OWORD *)LockPointer(&v21, **a2 + 112, a3);
      HMAssignmentLock(&v19, 0LL);
      v17 = 0LL;
      if ( !v16 )
        v17 = v11;
      v11 = v17;
    }
    if ( *(_QWORD *)(**a2 + 80) && !*(_QWORD *)(**a2 + 112) )
      xxxCreateClassSmIcon((__int64)a2);
    if ( v10 )
    {
      if ( *(int *)(**a2 + 72) <= 1 )
      {
        xxxSetClassIconEnum(a1, **a2, v14, v15);
      }
      else
      {
        Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(
          BugCheckParameter3,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 62) + 8LL) + 24LL) + 112LL));
        xxxInternalEnumWindow(
          *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 62) + 8LL) + 24LL) + 112LL),
          (__int64 (__fastcall *)(__int64, __int64))xxxSetClassIconEnum,
          **a2,
          2u);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v18);
      }
    }
    if ( v11 )
    {
      LOBYTE(v13) = 3;
      return (__int64 *)HMValidateHandleNoRip(v11, v13);
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
