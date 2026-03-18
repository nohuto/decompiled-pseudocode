/*
 * XREFs of ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1402B2BE8
 * Callers:
 *     xxxEmptyClipboard @ 0x1401E8D2C (xxxEmptyClipboard.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x14026A570 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     xxxSendNotifyMessage @ 0x140119930 (xxxSendNotifyMessage.c)
 */

void __fastcall xxxSendClipboardMessage(struct tagWINDOWSTATION *a1, unsigned int a2)
{
  struct tagWND *v3; // rbx
  __int64 v4; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v6; // [rsp+70h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = (struct tagWND *)*((_QWORD *)a1 + 14);
  if ( v3 )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, *((_QWORD *)a1 + 14));
    if ( a2 == 775 )
    {
      if ( !xxxSendTransformableMessageTimeout(
              (struct tagTHREADINFO **)v3,
              775LL,
              0LL,
              0LL,
              2u,
              0x1388u,
              (unsigned __int64 *)&v6,
              1,
              0) )
        xxxSendNotifyMessage(v3, 0x307u, 0LL, 0LL, 1);
    }
    else
    {
      xxxSendTransformableMessageTimeout(
        (struct tagTHREADINFO **)v3,
        a2,
        0LL,
        0LL,
        0x40u,
        0,
        (unsigned __int64 *)&v6,
        1,
        0);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v4);
  }
}
