/*
 * XREFs of ?xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140119810
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendNotifyMessage @ 0x140119930 (xxxSendNotifyMessage.c)
 */

__int64 __fastcall xxxWrapSendNotifyMessage(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edi
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  struct tagTHREADINFO *v12; // rax
  ULONG_PTR v13; // rax
  struct tagTHREADINFO *v14; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-10h] BYREF
  struct tagWND *v17; // [rsp+38h] [rbp-8h]

  v17 = 0LL;
  BugCheckParameter3 = -1LL;
  v6 = a2;
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  else
  {
    if ( a1 != (struct tagWND *)-1LL )
    {
      v8 = PtiCurrent((__int64)a1, a2);
      BugCheckParameter3 = *((_QWORD *)v8 + 57);
      *((_QWORD *)v8 + 57) = &BugCheckParameter3;
      v17 = a1;
      HMLockObject(a1);
    }
    v11 = (int)xxxSendNotifyMessage(a1, v6, a3, a4, 0);
    if ( a1 == (struct tagWND *)-1LL )
    {
      v13 = BugCheckParameter3;
    }
    else
    {
      v12 = PtiCurrent(v10, v9);
      Win32HM_UnlockFromThread<0>((ULONG_PTR)v12, &BugCheckParameter3);
      v17 = 0LL;
      v13 = -1LL;
      BugCheckParameter3 = -1LL;
    }
    if ( v13 != -1LL )
    {
      v14 = PtiCurrent(v10, v9);
      Win32HM_UnlockFromThread<0>((ULONG_PTR)v14, &BugCheckParameter3);
    }
    return v11;
  }
}
