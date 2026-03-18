/*
 * XREFs of _UnregisterClass @ 0x14023A7F8
 * Callers:
 *     NtUserUnregisterClass @ 0x1402A15F0 (NtUserUnregisterClass.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     DestroyClass @ 0x1400B4778 (DestroyClass.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14012C7E0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _InnerGetClassPtr @ 0x140178A28 (_InnerGetClassPtr.c)
 */

__int64 __fastcall UnregisterClass(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // esi
  struct tagTHREADINFO *v6; // rdi
  __int64 v7; // rdx
  __int64 UserSessionState; // rax
  __int64 v9; // r10
  __int16 Atom; // ax
  __int16 v11; // bx
  __int64 v12; // r13
  __int64 *ClassPtr; // r8
  int v14; // ecx
  _BYTE v16[80]; // [rsp+38h] [rbp-50h] BYREF

  v5 = 0;
  v6 = PtiCurrent(a1, a2);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v16);
  if ( (a1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    UserSessionState = W32GetUserSessionState(a1, v7);
    if ( (int)RtlStringCchCopyW((char *)(UserSessionState + 41780), 256LL, (char *)a1) < 0 )
    {
      v11 = 0;
      goto LABEL_7;
    }
    Atom = UserFindAtom(v9);
  }
  else
  {
    Atom = a1;
  }
  v11 = Atom;
LABEL_7:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v16);
  v12 = *((_QWORD *)v6 + 58);
  ClassPtr = InnerGetClassPtr(v11, (__int64 *)(v12 + 352), a2);
  if ( !ClassPtr )
  {
    ClassPtr = InnerGetClassPtr(v11, (__int64 *)(v12 + 360), 0LL);
    if ( !ClassPtr )
    {
      v14 = 1411;
LABEL_10:
      UserSetLastError(v14);
      return 0LL;
    }
    v5 = 1;
  }
  if ( *(_DWORD *)(*ClassPtr + 72) )
  {
    v14 = 1412;
    goto LABEL_10;
  }
  *a3 = *(_QWORD *)(*(_QWORD *)(*ClassPtr + 8) + 16LL);
  a3[1] = *(_QWORD *)(*(_QWORD *)(*ClassPtr + 8) + 24LL);
  a3[2] = 0LL;
  if ( v5 )
    *(_DWORD *)(*((_QWORD *)v6 + 58) + 12LL) &= ~0x2000u;
  DestroyClass(*((struct tagPROCESSINFO **)v6 + 58), (struct _CALLPROCDATA ***)ClassPtr);
  return 1LL;
}
