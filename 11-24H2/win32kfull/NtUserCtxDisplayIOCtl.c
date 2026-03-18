/*
 * XREFs of NtUserCtxDisplayIOCtl @ 0x140293830
 * Callers:
 *     <none>
 * Callees:
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x14003D210 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x14003E628 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     CtxDisplayIOCtl @ 0x1402B6DAC (CtxDisplayIOCtl.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtUserCtxDisplayIOCtl(unsigned int a1, volatile void *a2, unsigned int a3)
{
  SIZE_T v3; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  void *v13; // rbx
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v15; // rax
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-28h] BYREF
  void (*v18)(void *); // [rsp+50h] [rbp-18h]

  v3 = a3;
  EnterCrit(0LL, 0LL);
  v6 = *(_QWORD *)(W32GetUserGdiSessionState(v5) + 40);
  if ( PsGetCurrentProcess(v7) == v6 )
  {
    PtiCurrent(v9, v8);
    tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
    ProbeForRead(a2, v3, 1u);
    v13 = (void *)Win32AllocPoolWithQuotaZInit(v3, 1950643029LL);
    if ( !v13 )
      ExRaiseStatus(-1073741801);
    if ( v18 != (void (*)(void *))-1LL )
    {
      BugCheckParameter4 = PtiCurrent(v12, v11);
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v13, (ULONG_PTR)BugCheckParameter4);
    }
    v15 = PtiCurrent(v12, v11);
    BugCheckParameter2[0] = *((_QWORD *)v15 + 48);
    *((_QWORD *)v15 + 48) = BugCheckParameter2;
    BugCheckParameter2[1] = (ULONG_PTR)v13;
    v18 = Win32FreePool;
    memmove(v13, (const void *)a2, v3);
    v10 = CtxDisplayIOCtl(a1, v13, (unsigned int)v3);
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  }
  else
  {
    v10 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
