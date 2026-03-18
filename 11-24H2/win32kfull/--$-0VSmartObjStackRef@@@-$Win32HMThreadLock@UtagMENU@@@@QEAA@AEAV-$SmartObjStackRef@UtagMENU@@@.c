/*
 * XREFs of ??$?0VSmartObjStackRef@@@?$Win32HMThreadLock@UtagMENU@@@@QEAA@AEAV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x140046E7C
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     NtUserThunkedMenuInfo @ 0x1401A8FD0 (NtUserThunkedMenuInfo.c)
 *     NtUserThunkedMenuItemInfo @ 0x1402A12D0 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

_QWORD *__fastcall Win32HMThreadLock<tagMENU>::Win32HMThreadLock<tagMENU>(_QWORD *a1, __int64 **a2)
{
  __int64 *v2; // rbx
  struct tagTHREADINFO *v4; // rax

  v2 = a2[2];
  if ( !v2 )
    v2 = (__int64 *)**a2;
  v4 = PtiCurrent();
  *a1 = *((_QWORD *)v4 + 57);
  *((_QWORD *)v4 + 57) = a1;
  a1[1] = v2;
  if ( v2 )
    HMLockObject(v2);
  return a1;
}
