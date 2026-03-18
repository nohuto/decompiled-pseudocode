/*
 * XREFs of FindQMsg @ 0x1C012B670
 * Callers:
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x1C012AFD0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 * Callees:
 *     ?CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z @ 0x1C0014EE0 (-CheckRemoveHotkeyBit@@YAXPEAUtagTHREADINFO@@PEAUtagMLIST@@@Z.c)
 *     HMValidateHandleNoRip @ 0x1C00DEAEC (HMValidateHandleNoRip.c)
 *     DelQEntry @ 0x1C011923C (DelQEntry.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C012BA20 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     FreeDdeXact @ 0x1C01FA700 (FreeDdeXact.c)
 */

__int64 *__fastcall FindQMsg(
        struct tagTHREADINFO *a1,
        __int64 **a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  __int64 *v6; // rdi
  __int64 *result; // rax
  __int64 **v10; // rsi
  struct tagTHREADINFO *v11; // r14
  _QWORD *v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // r14
  int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // edx
  int v24; // r8d
  _DWORD *v25; // rax
  __int64 *v27; // [rsp+60h] [rbp-48h]

  v6 = *a2;
  result = 0LL;
  v27 = 0LL;
  v10 = a2;
  v11 = a1;
  if ( *a2 )
  {
    while ( 1 )
    {
      v12 = 0LL;
      v13 = v6[2];
      PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( (unsigned __int64)(unsigned __int16)v13 < *(_QWORD *)(gpsi + 8LL) )
      {
        v14 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v13;
        v18 = (_QWORD *)HMPkheFromPhe(v14);
        LOWORD(v13) = WORD1(v13) & 0x7FFF;
        if ( ((WORD1(v13) & 0x7FFF) == *(_WORD *)(v14 + 26)
           || (_WORD)v13 == 0x7FFF
           || !(_WORD)v13 && PsGetCurrentProcessWow64Process(v16, v15, v17))
          && (*(_BYTE *)(v14 + 25) & 1) == 0
          && *(_BYTE *)(v14 + 24) == 1 )
        {
          v12 = (_QWORD *)*v18;
          if ( *v18 )
            goto LABEL_7;
        }
        v10 = a2;
        v11 = a1;
      }
      if ( v6[2] )
      {
        if ( *((_DWORD *)v6 + 6) == 786 )
          CheckRemoveHotkeyBit(v11, v10);
        v21 = *((_QWORD *)v11 + 54);
        if ( *(__int64 **)(v21 + 80) == v6 && *(struct tagTHREADINFO **)(v21 + 72) == v11 )
        {
          EtwTraceInputQueueUnLocked();
          LOBYTE(v23) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qqq(
              WPP_GLOBAL_Control->AttachedDevice,
              v23,
              v24,
              (_DWORD)gFullLog,
              4,
              18,
              22,
              (__int64)&WPP_da10ed9f41f835a692699b91a3623186_Traceguids,
              *((_QWORD *)v11 + 54),
              gptiCurrent,
              *(_QWORD *)(*((_QWORD *)v11 + 54) + 72LL));
          }
          *(_QWORD *)(*((_QWORD *)v11 + 54) + 72LL) = 0LL;
        }
        goto LABEL_41;
      }
LABEL_7:
      if ( a6 )
      {
        v22 = a3 ? *a3 : 0LL;
        if ( v22 == v6[2] && *((_DWORD *)v6 + 6) == -2147482652 )
        {
          v25 = (_DWORD *)HMValidateHandleNoRip(v6[5], 11);
          if ( v25 && (v25[16] & 0x200) != 0 )
          {
            FreeDdeXact(v25);
            v10 = a2;
            v11 = a1;
LABEL_41:
            DelQEntry((__int64)v10, (__int64)v6, 1);
            v6 = *v10;
            goto LABEL_28;
          }
        }
      }
      if ( a3 && a3 != v12 && (a3 != (_QWORD *)1 || v12) )
      {
        if ( v12 )
        {
          while ( (*(_BYTE *)(v12[5] + 31LL) & 0xC0) == 0x40 )
          {
            v12 = (_QWORD *)v12[13];
            if ( a3 == v12 )
            {
              v19 = 1;
              goto LABEL_14;
            }
            if ( !v12 )
              break;
          }
        }
        v19 = 0;
LABEL_14:
        if ( !v19 )
          goto LABEL_27;
      }
      v20 = *((_DWORD *)v6 + 6);
      if ( v20 + 2147482655 <= 7 )
        v20 &= ~0x80000000;
      if ( !a4 )
      {
        if ( a5 == -1 )
          goto LABEL_19;
LABEL_24:
        if ( v20 <= a5 )
          goto LABEL_19;
        goto LABEL_27;
      }
      if ( a4 <= a5 )
      {
        if ( v20 < a4 )
          goto LABEL_27;
        goto LABEL_24;
      }
      if ( v20 < a5 || v20 > a4 )
      {
LABEL_19:
        if ( !a6 )
          return v6;
        if ( !v27 )
          v27 = v6;
      }
LABEL_27:
      v6 = (__int64 *)*v6;
      v10 = a2;
      v11 = a1;
LABEL_28:
      if ( !v6 )
        return v27;
    }
  }
  return result;
}
