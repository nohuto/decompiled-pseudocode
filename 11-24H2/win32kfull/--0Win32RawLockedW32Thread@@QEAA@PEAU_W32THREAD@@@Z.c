/*
 * XREFs of ??0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z @ 0x140147740
 * Callers:
 *     xxxQueryInformationThread @ 0x14003E6F4 (xxxQueryInformationThread.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x14018DF04 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x14023256C (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140232BF0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     TryDetachShellFrame @ 0x140237D24 (TryDetachShellFrame.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

Win32RawLockedW32Thread *__fastcall Win32RawLockedW32Thread::Win32RawLockedW32Thread(
        Win32RawLockedW32Thread *this,
        struct _W32THREAD *a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v5; // rcx

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(this, a2);
  if ( CurrentThreadNonPaged )
    v5 = *CurrentThreadNonPaged;
  else
    v5 = 0LL;
  *(_QWORD *)this = *(_QWORD *)(v5 + 384);
  *(_QWORD *)(v5 + 384) = this;
  *((_QWORD *)this + 2) = Win32RawLockedW32Thread::Deref;
  *((_QWORD *)this + 1) = a2;
  if ( a2 )
    ReferenceW32Thread(a2);
  return this;
}
