/*
 * XREFs of NtUserfnDDEINIT @ 0x1401D9EC0
 * Callers:
 *     <none>
 * Callees:
 *     InternalSetProp @ 0x140031458 (InternalSetProp.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x14011349C (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@X$0A@$00$0A@$00@@QEAAXPEAXP6AX0@Z@Z @ 0x1401DA0FC (--$ManualLock@X@-$Win32RawLockedItemBase@X$0A@$00$0A@$00@@QEAAXPEAXP6AX0@Z@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnDDEINIT(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  unsigned int v8; // r13d
  __int64 v9; // r14
  struct tagTHREADINFO *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  ULONG_PTR *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  _WORD *Prop; // rdi
  ULONG_PTR v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int16 v25; // ax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // ecx
  struct tagTHREADINFO *v32; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v36; // [rsp+50h] [rbp-20h]
  __int64 v37; // [rsp+68h] [rbp-8h]

  v8 = a2;
  v9 = a1;
  v10 = PtiCurrent(a1, a2);
  v11 = ValidateHwnd(a3);
  v12 = 0LL;
  v13 = (ULONG_PTR *)v11;
  if ( v11 )
  {
    Win32HM_LockIntoThread<0>((__int64)v10, v11, BugCheckParameter3);
    UserSessionState = W32GetUserSessionState(v15, v14);
    Prop = (_WORD *)GetProp((__int64)v13, *(unsigned __int16 *)(UserSessionState + 41404), 1u);
    if ( !Prop )
    {
      v18 = v13[5];
      if ( *(char *)(v18 + 19) < 0 || *(char *)(v18 + 20) < 0 )
      {
        v31 = 87;
      }
      else
      {
        Prop = (_WORD *)Win32AllocPoolWithQuotaZInit(96LL, 1147433813LL);
        if ( Prop )
        {
          v21 = W32GetUserSessionState(v20, v19);
          *(_QWORD *)Prop = *(_QWORD *)(v21 + 36476);
          *((_DWORD *)Prop + 2) = *(_DWORD *)(v21 + 36484);
          if ( SeCreateClientSecurity(
                 KeGetCurrentThread(),
                 (PSECURITY_QUALITY_OF_SERVICE)(v21 + 36476),
                 0,
                 (PSECURITY_CLIENT_CONTEXT)(Prop + 8)) >= 0 )
          {
            *((_DWORD *)Prop + 22) = 0;
            v24 = W32GetUserSessionState(v23, v22);
            if ( (unsigned int)InternalSetProp((__int64)v13, *(unsigned __int16 *)(v24 + 41404), (__int64)Prop, 1u) )
            {
              v9 = a1;
              goto LABEL_9;
            }
            SeDeleteClientSecurity(Prop + 8);
          }
          Win32FreePool(Prop);
        }
        v31 = 8;
      }
      UserSetLastError(v31);
LABEL_17:
      v32 = PtiCurrent(v30, v29);
      Win32HM_UnlockFromThread<0>((ULONG_PTR)v32, BugCheckParameter3);
      return v12;
    }
LABEL_9:
    v37 = 0LL;
    v25 = Prop[44];
    *(_OWORD *)BugCheckParameter2 = 0LL;
    v36 = -1LL;
    if ( v25 >= 4096 )
    {
      UserSetLastError(87);
    }
    else
    {
      Prop[44] = v25 + 1;
      Win32RawLockedItemBase<void,0,1,0,1>::ManualLock<void>((ULONG_PTR)BugCheckParameter2, *v13);
      v28 = W32GetUserSessionState(v27, v26);
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(v28 + 8LL * ((a6 + 6) & 0x1F) + 71176))(
              v9,
              v8,
              a3,
              a4,
              a5);
    }
    if ( v36 != -1 )
      PopAndFreeAlwaysW32ThreadLock((__int64)BugCheckParameter2, v29);
    goto LABEL_17;
  }
  return v12;
}
