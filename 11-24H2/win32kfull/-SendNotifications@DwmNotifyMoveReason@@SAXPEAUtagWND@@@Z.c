/*
 * XREFs of ?SendNotifications@DwmNotifyMoveReason@@SAXPEAUtagWND@@@Z @ 0x14026FA60
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14022B0AC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     DwmAsyncNotifyWindowMoveReason @ 0x1402194AC (DwmAsyncNotifyWindowMoveReason.c)
 */

void __fastcall DwmNotifyMoveReason::SendNotifications(struct tagWND *a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rbx
  void *v5; // rax
  __int64 v6; // rbx
  void *v7; // rax

  v2 = *((_DWORD *)a1 + 95);
  if ( (v2 & 0x200) != 0 )
  {
    v4 = *(_QWORD *)a1;
    v5 = (void *)ReferenceDwmApiPort(a1, a2);
    DwmAsyncNotifyWindowMoveReason(v5, v4, 1);
    *((_DWORD *)a1 + 95) &= ~0x200u;
    v2 = *((_DWORD *)a1 + 95);
  }
  if ( (v2 & 0x200000) != 0 )
  {
    v6 = *(_QWORD *)a1;
    v7 = (void *)ReferenceDwmApiPort(a1, a2);
    DwmAsyncNotifyWindowMoveReason(v7, v6, 0);
    *((_DWORD *)a1 + 95) &= ~0x200000u;
  }
}
