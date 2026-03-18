/*
 * XREFs of ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x140103E88
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E8AC (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     NtUserRemoveClipboardFormatListener @ 0x140103F60 (NtUserRemoveClipboardFormatListener.c)
 * Callees:
 *     _GetProcessWindowStation @ 0x1401038C0 (_GetProcessWindowStation.c)
 */

void __fastcall _RemoveClipboardFormatListener(struct tagWND *a1)
{
  struct tagWND **i; // rcx
  struct tagWND *v2; // rax
  struct tagWND *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  for ( i = (struct tagWND **)(GetProcessWindowStation(0LL) + 152); ; i = (struct tagWND **)((char *)v2 + 240) )
  {
    v2 = *i;
    if ( !*i )
      break;
    if ( v2 == v3 )
    {
      *i = (struct tagWND *)*((_QWORD *)v3 + 30);
      *((_QWORD *)v3 + 30) = 0LL;
      *((_DWORD *)v3 + 95) &= ~0x800000u;
      HMAssignmentUnlock(&v3);
      return;
    }
  }
}
