/*
 * XREFs of ?StopSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ @ 0x140018490
 * Callers:
 *     ?UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x140017640 (-UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShutdownWorkQueue@CAPOProcessingHostObject@@AEAAJXZ @ 0x14001A11C (-ShutdownWorkQueue@CAPOProcessingHostObject@@AEAAJXZ.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 */

__int64 __fastcall CAPOProcessingHostObject::StopSendingNotifications(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  bool v3; // zf
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = this + 1;
  EnterCriticalSection(this + 1);
  v3 = this[2].DebugInfo == 0LL;
  v8 = v1;
  if ( v3 || (v5 = CAPOProcessingHostObject::ShutdownWorkQueue((CAPOProcessingHostObject *)this), v6 = v5, v5 >= 0) )
  {
    if ( v1 )
      LeaveCriticalSection(v1);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
      (const char *)(unsigned int)v5);
    CSAutoLock<1>::~CSAutoLock<1>(&v8);
    return v6;
  }
}
