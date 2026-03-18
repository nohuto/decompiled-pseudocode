/*
 * XREFs of ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@REAUtagIMEUI@@I_K_J@Z @ 0x140280648
 * Callers:
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x140280804 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x14003D210 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ??1Win32RawLockedW32Thread@@QEAA@XZ @ 0x1401197C0 (--1Win32RawLockedW32Thread@@QEAA@XZ.c)
 *     ?ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z @ 0x1401D3C2C (-ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z.c)
 */

__int64 __fastcall xxxSendMessageToUI(__int64 BugCheckParameter3, struct tagIMEUI *volatile a2)
{
  int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  struct tagIMEUI *volatile v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  struct tagWND *v11; // [rsp+20h] [rbp-78h]
  ULONG_PTR BugCheckParameter3a[2]; // [rsp+40h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter2[9]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v16; // [rsp+C0h] [rbp+28h]

  v16 = 0LL;
  tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
  v3 = 0;
  if ( (struct tagTHREADINFO *)BugCheckParameter3 != PtiCurrent(v5, v4) )
  {
    v3 = 1;
    Win32RawLockedW32Thread::ManualLock(BugCheckParameter2, BugCheckParameter3);
    KeAttachProcess(**(PRKPROCESS **)(BugCheckParameter3 + 464));
  }
  v7 = (struct tagIMEUI *volatile)MmUserProbeAddress;
  if ( (unsigned __int64)a2 < MmUserProbeAddress )
    v7 = a2;
  LOBYTE(v6) = 1;
  v11 = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)v7 + 4), v6);
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)a2 + 10);
    if ( v3 )
      KeDetachProcess();
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3a, (__int64)v11);
    v16 = xxxSendMessage(v11, 0x282u);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3a, v9);
    if ( v3 )
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 528), 0, 0) & 1) != 0 )
        goto LABEL_14;
      KeAttachProcess(**(PRKPROCESS **)(BugCheckParameter3 + 464));
    }
    _InterlockedDecrement((volatile signed __int32 *)a2 + 10);
  }
  if ( v3 )
    KeDetachProcess();
LABEL_14:
  Win32RawLockedW32Thread::~Win32RawLockedW32Thread((void (**)(void))BugCheckParameter2, v8);
  return v16;
}
