/*
 * XREFs of ?xxxSendPostedMessage@@YAXAEBUtagMSG@@PEAU1@@Z @ 0x14004072C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall xxxSendPostedMessage(const struct tagMSG *a1, struct tagMSG *a2)
{
  ULONG_PTR v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  ULONG_PTR *v12; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)a2 = *(_OWORD *)a1;
  *((_OWORD *)a2 + 1) = *((_OWORD *)a1 + 1);
  *((_OWORD *)a2 + 2) = *((_OWORD *)a1 + 2);
  v4 = 0LL;
  v7 = ValidateHwnd(*(_QWORD *)a1);
  if ( v7 )
  {
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v6, v5);
    if ( CurrentThreadNonPaged )
      v9 = *CurrentThreadNonPaged;
    else
      v9 = 0LL;
    BugCheckParameter3[0] = *(_QWORD *)(v9 + 456);
    *(_QWORD *)(v9 + 456) = BugCheckParameter3;
    BugCheckParameter3[1] = v7;
    HMLockObject(v7);
    xxxSendMessage(v7, *((unsigned int *)a1 + 2), *((_QWORD *)a1 + 2), *((_QWORD *)a1 + 3));
    *((_QWORD *)a2 + 2) |= 0x80000000uLL;
    v12 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v11, v10);
    if ( v12 )
      v4 = *v12;
    Win32HM_UnlockFromThread<1>(v4, (ULONG_PTR)BugCheckParameter3);
  }
}
