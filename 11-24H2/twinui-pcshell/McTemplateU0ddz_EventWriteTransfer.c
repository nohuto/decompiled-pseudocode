/*
 * XREFs of McTemplateU0ddz_EventWriteTransfer @ 0x1805494F8
 * Callers:
 *     ?_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180548C98 (-_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18008A004 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0ddz_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-50h] BYREF
  int *v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  int *v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  const wchar_t *v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+6Ch] [rbp-14h]
  int v14; // [rsp+A0h] [rbp+20h] BYREF
  int v15; // [rsp+A8h] [rbp+28h] BYREF

  v15 = a4;
  v14 = a3;
  v7 = &v14;
  v8 = 4LL;
  v9 = &v15;
  v4 = -1LL;
  v10 = 4LL;
  do
    ++v4;
  while ( aGutter[v4] );
  v11 = L"Gutter";
  v12 = 2 * v4 + 2;
  v13 = 0;
  return McGenEventWrite_EventWriteTransfer(
           MICROSOFT_TWINUI_PUBLISHER_Context,
           &ImmersiveShell_UI_Drag_Info,
           a3,
           4u,
           &v6);
}
