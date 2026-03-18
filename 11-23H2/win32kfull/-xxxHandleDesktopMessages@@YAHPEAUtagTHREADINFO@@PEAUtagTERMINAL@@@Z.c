/*
 * XREFs of ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C002B3A0
 * Callers:
 *     xxxDesktopThread @ 0x1C002ABF0 (xxxDesktopThread.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C002B4E0 (xxxInternalGetMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C005AA48 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C00A0C70 (xxxCleanupMotherDesktopWindow.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00A1D48 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxDispatchMessage @ 0x1C01185F4 (xxxDispatchMessage.c)
 */

__int64 __fastcall xxxHandleDesktopMessages(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  char v4; // bl
  int v5; // r8d
  int v7; // eax
  unsigned int v8; // edx
  __int128 v9; // [rsp+50h] [rbp-38h] BYREF
  __int128 v10; // [rsp+60h] [rbp-28h]
  __int128 v11; // [rsp+70h] [rbp-18h]

  v9 = 0LL;
  v4 = 1;
  v10 = 0LL;
  v11 = 0LL;
  while ( 1 )
  {
    if ( !(unsigned int)xxxInternalGetMessage((unsigned int)&v9, 0, 0, 0, 1, 0) )
      return 1LL;
    if ( a2 == (struct tagTERMINAL *)&gTermNOIO )
    {
      v7 = DWORD2(v9);
      if ( DWORD2(v9) != 18 )
        goto LABEL_6;
      xxxCleanupMotherDesktopWindow(a2);
    }
    v7 = DWORD2(v9);
    if ( DWORD2(v9) == 18 )
    {
      v8 = *((_DWORD *)a1 + 226);
      if ( v8 <= 1 )
        break;
    }
LABEL_6:
    if ( v7 == 796 )
    {
      if ( (_QWORD)v10 == 2LL )
        DestroyPendingDesktops(a1, a2);
    }
    else
    {
      xxxDispatchMessage(&v9);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v4 = 0;
  }
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = v4;
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v5,
      (_DWORD)gFullLog,
      4,
      8,
      21,
      (__int64)&WPP_580b03b5f0a135a81a235548571d0f77_Traceguids,
      *((_DWORD *)a1 + 226));
  }
  return 0LL;
}
