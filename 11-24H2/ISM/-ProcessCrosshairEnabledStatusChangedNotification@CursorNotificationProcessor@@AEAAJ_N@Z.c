/*
 * XREFs of ?ProcessCrosshairEnabledStatusChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x1800F39A4
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z @ 0x180015334 (-OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002461C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CursorNotificationProcessor::ProcessCrosshairEnabledStatusChangedNotification(
        CursorNotificationProcessor *this,
        char a2)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 232LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL)
                 + 80);
  if ( !v4 )
    return 0LL;
  LOBYTE(v5) = a2;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 72LL))(v4, 2LL, v5);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13B,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornotificat"
             "ionprocessor.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
