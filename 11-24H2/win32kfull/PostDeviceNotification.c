/*
 * XREFs of PostDeviceNotification @ 0x14012F608
 * Callers:
 *     EditionDevicePnpNotification @ 0x14012DDD0 (EditionDevicePnpNotification.c)
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x14013104C (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 *     Win32kRIMDevChangeCallback @ 0x1401EE990 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _PostMessage @ 0x140066460 (_PostMessage.c)
 *     PostPointerEventMessage @ 0x14012D8F0 (PostPointerEventMessage.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x14012E0AC (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     ?InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x140130994 (-InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z.c)
 *     ?OnDeviceRemoval@Edgy@@YAXPEAX@Z @ 0x1402193D0 (-OnDeviceRemoval@Edgy@@YAXPEAX@Z.c)
 */

void __fastcall PostDeviceNotification(
        struct tagPROCESS_HID_REQUEST *a1,
        struct DEVICEINFO *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6)
{
  __int64 UserSessionState; // rax
  unsigned __int64 v10; // rdx
  unsigned __int16 v11; // si
  unsigned __int16 v12; // bp
  struct tagPROCESS_HID_TABLE *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // r12d
  __int64 i; // rax
  struct tagPROCESS_HID_REQUEST *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v10 = *((unsigned int *)a2 + 12);
  v11 = 0;
  v12 = 0;
  v13 = *(struct tagPROCESS_HID_TABLE **)(UserSessionState + 224);
  v14 = 1LL;
  if ( (_DWORD)v10 )
  {
    v10 = (unsigned int)(v10 - 1);
    if ( (_DWORD)v10 )
    {
      if ( (_DWORD)v10 == 1 )
      {
        v15 = *((_QWORD *)a2 + 55);
        v11 = *(_WORD *)(v15 + 42);
        v12 = *(_WORD *)(v15 + 40);
      }
    }
    else
    {
      v11 = 1;
      v12 = 6;
    }
  }
  else
  {
    v11 = 1;
    v12 = 2;
  }
  v16 = 0;
  if ( (*((_DWORD *)a2 + 46) & 0x80u) != 0 )
  {
    if ( a4 == 2 )
    {
      Edgy::OnDeviceRemoval(*(Edgy **)a2, (void *)v10);
      v14 = 1LL;
    }
    if ( !a6 )
    {
      PostPointerEventMessage(*((_QWORD *)a2 + 57), 568LL, a4, 1u);
      v14 = a5;
      if ( a5 )
      {
        if ( a4 == 1 )
        {
          v16 = 712;
        }
        else if ( a4 == 2 )
        {
          v16 = 713;
        }
        PostMessage(-1, v16, a5, 0);
      }
    }
  }
  if ( a1 )
  {
    if ( *((_WORD *)a1 + 9) == v12 && *((_WORD *)a1 + 8) == v11 )
      PostHidNotification(a1, a2);
  }
  else
  {
    for ( i = W32GetUserSessionState(v14, v10);
          v13 != (struct tagPROCESS_HID_TABLE *)(i + 224);
          i = W32GetUserSessionState(v20, v19) )
    {
      v18 = InProcessDeviceTypeRequestTable(v13, v11, v12);
      if ( v18 )
        PostHidNotification(v18, a2);
      v13 = *(struct tagPROCESS_HID_TABLE **)v13;
    }
  }
}
