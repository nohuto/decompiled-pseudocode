/*
 * XREFs of GetPromotablePointerIdForThread @ 0x14028C608
 * Callers:
 *     NtUserConvertPrimaryPointerToMouseDrag @ 0x140292FA0 (NtUserConvertPrimaryPointerToMouseDrag.c)
 *     ?xxxCheckForMoveSizeTouchCapture@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1402A7A5C (-xxxCheckForMoveSizeTouchCapture@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall GetPromotablePointerIdForThread(__int64 a1, __int64 a2)
{
  struct tagTHREADINPUTPOINTERLIST *v2; // rdi
  struct tagTHREADINPUTPOINTERLIST *v3; // rbx
  unsigned __int16 v4; // si
  __int16 v5; // bp
  __int64 UserSessionState; // rax
  unsigned __int64 ThreadPointerData; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  char v11; // bl
  bool v12; // di
  __int64 v13; // rax
  int v14; // edx
  int v15; // r8d
  bool v16; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+88h] [rbp+10h] BYREF

  v2 = (struct tagTHREADINPUTPOINTERLIST *)(a1 + 1208);
  v3 = *(struct tagTHREADINPUTPOINTERLIST **)(a1 + 1208);
  v4 = 0;
  while ( 1 )
  {
    if ( v3 == v2 )
      return v4;
    v5 = *((_WORD *)v3 + 8);
    v17 = 0;
    UserSessionState = W32GetUserSessionState(a1, a2);
    ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                          *(CTouchProcessor **)(UserSessionState + 3264),
                          v2,
                          v5,
                          &v17,
                          0LL,
                          0LL);
    v16 = 0;
    v8 = ThreadPointerData;
    if ( ThreadPointerData )
    {
      if ( v17 != 5 )
      {
        v9 = W32GetUserSessionState(a1, a2);
        if ( CTouchProcessor::IsPointerInContact(*(CTouchProcessor **)(v9 + 3264), v8, &v16) )
          break;
      }
    }
LABEL_7:
    v3 = *(struct tagTHREADINPUTPOINTERLIST **)v3;
  }
  if ( v16 )
  {
    v4 = v5;
    goto LABEL_7;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) == 0
    || (v11 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
  {
    v11 = 0;
  }
  v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v13 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    v14 = 10;
    LOBYTE(v15) = v12;
    LOBYTE(v14) = v11;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v14,
      v15,
      *(_QWORD *)(v13 + 69416),
      3,
      10,
      10,
      (__int64)&WPP_2a91d0f5cb08399c149e0bb179d9a0be_Traceguids,
      v5);
  }
  return 0LL;
}
