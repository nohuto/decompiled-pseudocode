/*
 * XREFs of ?DwsLinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z @ 0x1401A4940
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1400E67B0 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     ?DwsLinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z @ 0x1401A4BB8 (-DwsLinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z.c)
 */

void __fastcall tagWND::DwsLinkProcess(__int64 *a1, tagPROCESSINFO *a2, int a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *i; // rax
  __int64 v9; // rax
  struct ContribueToProcessDws *v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // r15d
  char v14; // si
  char v15; // r14
  int v16; // ebx
  __int64 v17; // rdi
  __int64 v18; // rax
  char v19; // si
  char v20; // r12
  int v21; // ebx
  __int64 v22; // rdi
  __int64 UserSessionState; // rax

  if ( a2 == *(tagPROCESSINFO **)(a1[2] + 464) )
    KeBugCheckEx(0x164u, 0x12uLL, 0LL, 0LL, 0LL);
  if ( (*((_DWORD *)a2 + 3) & 0x1000) == 0 )
  {
    v6 = a1[5];
    if ( *(char *)(v6 + 20) >= 0 && *(char *)(v6 + 19) >= 0 )
    {
      v7 = a1 + 50;
      for ( i = (_QWORD *)a1[50]; ; i = (_QWORD *)*i )
      {
        if ( i == v7 )
        {
          v9 = Win32AllocPoolZInitImpl(256LL, 0x38uLL, 0x6F717355u);
          v10 = (struct ContribueToProcessDws *)v9;
          if ( v9 )
          {
            *(_DWORD *)(v9 + 16) |= a3;
            *(_QWORD *)(v9 + 8) = a2;
            *(_QWORD *)v9 = a1;
            v11 = (_QWORD *)(v9 + 24);
            v12 = *v7;
            if ( *(_QWORD **)(*v7 + 8LL) != v7 )
              __fastfail(3u);
            *v11 = v12;
            v11[1] = v7;
            *(_QWORD *)(v12 + 8) = v11;
            *v7 = v11;
            *((_DWORD *)a1 + 95) |= 0x8000000u;
            v19 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
            v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v21 = *((_DWORD *)a2 + 14);
              v22 = *a1;
              UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
              WPP_RECORDER_AND_TRACE_SF_qDD(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v19,
                v20,
                *(_QWORD *)(UserSessionState + 69400),
                4u,
                0xEu,
                0xBu,
                (__int64)&WPP_383e00c9a6733678f2e50c59db551300_Traceguids,
                v22,
                v21,
                a3);
            }
            tagPROCESSINFO::DwsLinkWindow(a2, v10);
          }
          return;
        }
        if ( (tagPROCESSINFO *)*(i - 2) == a2 )
          break;
      }
      v13 = *((_DWORD *)i - 2) | a3;
      *((_DWORD *)i - 2) = v13;
      v14 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = *((_DWORD *)a2 + 14);
        v17 = *a1;
        v18 = W32GetUserSessionState(WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v14,
          v15,
          *(_QWORD *)(v18 + 69400),
          4u,
          0xEu,
          0xAu,
          (__int64)&WPP_383e00c9a6733678f2e50c59db551300_Traceguids,
          v17,
          v16,
          v13);
      }
    }
  }
}
