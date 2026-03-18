/*
 * XREFs of xxxCalcMenuBar @ 0x1400338E4
 * Callers:
 *     NtUserCalcMenuBar @ 0x1400337C0 (NtUserCalcMenuBar.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxMenuBarCompute @ 0x140069184 (xxxMenuBarCompute.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

__int64 __fastcall xxxCalcMenuBar(__int64 a1, int a2, int a3, int a4, _DWORD *a5)
{
  __int64 v10; // rbx
  struct tagTHREADINFO *v11; // rax
  unsigned int v12; // ebx
  struct tagTHREADINFO *v13; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+38h] [rbp-28h]
  _QWORD v16[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v16);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) != 0x40 && *(_QWORD *)(a1 + 168) )
  {
    v17 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v16);
    v10 = v17;
    if ( !v17 )
      v10 = *(_QWORD *)v16[0];
    v11 = PtiCurrent();
    Win32HM_LockIntoThread<0>(v11, v10, &BugCheckParameter3);
    *(_DWORD *)(*(_QWORD *)(v10 + 40) + 40LL) |= 0x200u;
    xxxMenuBarCompute((unsigned int)v16, a1, a4, a2, a5[2] - *a5 - a2 - a3);
    v12 = *(_DWORD *)(*(_QWORD *)v16[0] + 68LL);
    *(_DWORD *)(*(_QWORD *)(v15 + 40) + 40LL) &= ~0x200u;
    v13 = PtiCurrent();
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v13, (ULONG_PTR)&BugCheckParameter3);
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v16);
    return v12;
  }
  else
  {
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v16);
    return 0LL;
  }
}
