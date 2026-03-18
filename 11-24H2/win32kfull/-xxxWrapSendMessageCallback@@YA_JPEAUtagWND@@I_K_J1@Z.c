/*
 * XREFs of ?xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140119A60
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14004B6E8 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140061700 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessageCallback @ 0x140119C04 (xxxSendMessageCallback.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall xxxWrapSendMessageCallback(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4, ULONG64 a5)
{
  _BYTE *v7; // rdx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  ULONG_PTR *v13; // rax
  ULONG_PTR v14; // rcx
  __int64 v16; // rdx
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp-50h] BYREF
  struct tagWND *v18; // [rsp+60h] [rbp-48h]
  __int64 v19[8]; // [rsp+68h] [rbp-40h]

  *(_OWORD *)v19 = 0LL;
  Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3);
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3, v16);
    return 0LL;
  }
  else
  {
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (_BYTE *)a5;
    if ( a5 >= MmUserProbeAddress )
      v7 = (_BYTE *)MmUserProbeAddress;
    *v7 = *v7;
    v7[15] = v7[15];
    *(_OWORD *)v19 = *(_OWORD *)a5;
    if ( a1 != (struct tagWND *)-1LL )
    {
      CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(MmUserProbeAddress, v7);
      if ( CurrentThreadNonPaged )
        v9 = *CurrentThreadNonPaged;
      else
        v9 = 0LL;
      BugCheckParameter3 = *(_QWORD *)(v9 + 456);
      *(_QWORD *)(v9 + 456) = &BugCheckParameter3;
      v18 = a1;
      HMLockObject(a1);
    }
    v12 = (int)xxxSendMessageCallback(a1, a2, v19[0], v19[1], 1, 0, 1);
    if ( a1 != (struct tagWND *)-1LL )
    {
      v13 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v11, v10);
      if ( v13 )
        v14 = *v13;
      else
        v14 = 0LL;
      Win32HM_UnlockFromThread<0>(v14, &BugCheckParameter3);
      v18 = 0LL;
      BugCheckParameter3 = -1LL;
    }
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3, v10);
    return v12;
  }
}
