/*
 * XREFs of ?UnlockWorker@?$Win32RawLockedItemBase@UDISPLAYCONFIG_DEVICE_INFO_HEADER@@$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x140099168
 * Callers:
 *     xxxCreateThreadInfo @ 0x14015DFD8 (xxxCreateThreadInfo.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x14016BDA0 (NtUserDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1400991CC (PopAndFreeW32ThreadLock.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall Win32RawLockedItemBase<DISPLAYCONFIG_DEVICE_INFO_HEADER,&void Win32FreePool(void *),1,1,1>::UnlockWorker(
        ULONG_PTR BugCheckParameter2,
        char a2)
{
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR *CurrentThreadNonPaged; // rax

  if ( *(_QWORD *)(BugCheckParameter2 + 16) == -1LL )
  {
    BugCheckParameter4 = 0LL;
    if ( !a2 )
    {
      CurrentThreadNonPaged = (ULONG_PTR *)W32GetCurrentThreadNonPaged(BugCheckParameter2);
      if ( CurrentThreadNonPaged )
        BugCheckParameter4 = *CurrentThreadNonPaged;
      KeBugCheckEx(0x164u, 0x12uLL, BugCheckParameter2, 0LL, BugCheckParameter4);
    }
  }
  else
  {
    PopAndFreeW32ThreadLock();
    *(_QWORD *)(BugCheckParameter2 + 16) = -1LL;
  }
}
