/*
 * XREFs of xxxInternalEnumWindow @ 0x14008AD6C
 * Callers:
 *     xxxTurnOffCompositing @ 0x1401FFA68 (xxxTurnOffCompositing.c)
 *     xxxSetClassIcon @ 0x14021E780 (xxxSetClassIcon.c)
 *     xxxHelpLoop @ 0x1402E98E4 (xxxHelpLoop.c)
 * Callees:
 *     BuildHwndList @ 0x140047FC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140048500 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

struct tagBWL *__fastcall xxxInternalEnumWindow(
        struct tagWND *a1,
        __int64 (__fastcall *a2)(__int64, __int64),
        __int64 a3,
        unsigned int a4)
{
  struct tagBWL *result; // rax
  __int64 v7; // rdx
  struct tagBWL *v8; // rsi
  unsigned int v9; // edi
  _QWORD *i; // rbx
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  struct tagTHREADINFO *v16; // rax
  ULONG_PTR BugCheckParameter3[5]; // [rsp+20h] [rbp-28h] BYREF

  result = BuildHwndList(a1, a4, 0LL, 1);
  v8 = result;
  if ( result )
  {
    v9 = 1;
    for ( i = (_QWORD *)((char *)result + 32); *i != 1LL; ++i )
    {
      LOBYTE(v7) = 1;
      v11 = HMValidateHandleNoSecure(*i, v7);
      v12 = v11;
      if ( v11 )
      {
        Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v11);
        v9 = a2(v12, a3);
        if ( !v9 )
        {
          v16 = PtiCurrent(v14, v13);
          Win32HM_UnlockFromThread<0>((ULONG_PTR)v16, BugCheckParameter3);
          break;
        }
        v15 = PtiCurrent(v14, v13);
        Win32HM_UnlockFromThread<0>((ULONG_PTR)v15, BugCheckParameter3);
      }
    }
    FreeHwndList(v8, v7);
    return (struct tagBWL *)v9;
  }
  return result;
}
