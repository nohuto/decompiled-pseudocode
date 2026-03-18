/*
 * XREFs of ?DwsUnlinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z @ 0x1401A4E40
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_qD @ 0x140141E88 (WPP_RECORDER_AND_TRACE_SF_qD.c)
 *     ?DwsUnlinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z @ 0x1401A4FD0 (-DwsUnlinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z.c)
 */

void __fastcall tagWND::DwsUnlinkProcess(__int64 a1, tagPROCESSINFO *a2, int a3)
{
  _QWORD *v3; // r14
  _QWORD *v4; // rsi
  char v5; // r12
  int v7; // r8d
  bool v8; // zf
  char v9; // r13
  __int64 UserSessionState; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  int v13; // [rsp+20h] [rbp-58h]

  v3 = (_QWORD *)(a1 + 400);
  v4 = *(_QWORD **)(a1 + 400);
  v5 = 1;
  if ( ((*(_DWORD *)(a1 + 380) >> 27) & 1) != (v4 != (_QWORD *)(a1 + 400)) )
    KeBugCheckEx(0x164u, 0x12uLL, 0LL, 0LL, 0LL);
  while ( v4 != v3 )
  {
    if ( (tagPROCESSINFO *)*(v4 - 2) == a2 )
    {
      v7 = ~a3;
      v8 = (v7 & *(_DWORD *)(v4 - 1)) == 0;
      *((_DWORD *)v4 - 2) &= v7;
      if ( v8 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v5 = 0;
        }
        v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
          WPP_RECORDER_AND_TRACE_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v5,
            v9,
            *(_QWORD *)(UserSessionState + 69400),
            v13,
            0xEu,
            0xCu,
            (__int64)&WPP_383e00c9a6733678f2e50c59db551300_Traceguids);
        }
        tagPROCESSINFO::DwsUnlinkWindow(a2, (struct ContribueToProcessDws *)(v4 - 3));
        v11 = *v4;
        if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v12 = (_QWORD *)v4[1], (_QWORD *)*v12 != v4) )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        GreDeleteFastMutex((char *)v4 - 24);
      }
      break;
    }
    v4 = (_QWORD *)*v4;
  }
  if ( (_QWORD *)*v3 == v3 )
    *(_DWORD *)(a1 + 380) &= ~0x8000000u;
}
