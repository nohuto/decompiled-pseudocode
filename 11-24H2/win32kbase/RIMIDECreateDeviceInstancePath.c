/*
 * XREFs of RIMIDECreateDeviceInstancePath @ 0x14014B610
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1401E5870 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1401E5C18 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x14014B910 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ.c)
 */

__int64 __fastcall RIMIDECreateDeviceInstancePath(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        struct _UNICODE_STRING *a4)
{
  unsigned int v5; // esi
  unsigned int v6; // r14d
  int v7; // ebp
  unsigned int v8; // ebx
  __int64 v9; // rcx
  char v10; // di
  char v11; // si
  __int64 v12; // r9
  __int64 UserSessionState; // rax
  const unsigned __int16 *v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  char v19; // di
  char v20; // si
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  bool v24; // di
  bool v25; // si
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  __int64 v29; // rax

  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = -1073741823;
  if ( isChildPartition(a1) )
  {
    if ( v7 )
    {
      if ( v7 != 1 )
      {
        if ( v7 != 2 )
        {
          v10 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
          v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v12 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
            WPP_RECORDER_AND_TRACE_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v10,
              v11,
              v12,
              2u,
              1u,
              0x10u,
              (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids,
              v7);
          }
          return v8;
        }
        UserSessionState = W32GetUserSessionState(v9);
        v14 = L"\\??\\Microsoft HID RID\\c\\%04X_%04X\\%u";
        goto LABEL_15;
      }
      v17 = W32GetUserSessionState(v9);
      v15 = RtlUnicodeStringPrintf(a4, L"\\??\\Microsoft Keyboard RID\\c\\%u", *(unsigned int *)(v17 + 240));
    }
    else
    {
      v18 = W32GetUserSessionState(v9);
      v15 = RtlUnicodeStringPrintf(a4, L"\\??\\Microsoft Mouse RID\\c\\%u", *(unsigned int *)(v18 + 240));
    }
LABEL_32:
    v8 = v15;
    if ( v15 >= 0 )
    {
      v29 = W32GetUserSessionState(v16);
      ++*(_DWORD *)(v29 + 240);
    }
    else
    {
      v24 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v27) = v25;
        LOBYTE(v28) = v24;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v28,
          v27,
          *(_QWORD *)(v26 + 19392),
          2,
          1,
          18,
          (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids,
          v8);
      }
    }
    return v8;
  }
  switch ( v7 )
  {
    case 0:
      v23 = W32GetUserSessionState(v9);
      v15 = RtlUnicodeStringPrintf(a4, L"\\??\\Microsoft Mouse RID\\%u", *(unsigned int *)(v23 + 240));
      goto LABEL_32;
    case 1:
      v22 = W32GetUserSessionState(v9);
      v15 = RtlUnicodeStringPrintf(a4, L"\\??\\Microsoft Keyboard RID\\%u", *(unsigned int *)(v22 + 240));
      goto LABEL_32;
    case 2:
      UserSessionState = W32GetUserSessionState(v9);
      v14 = L"\\??\\Microsoft HID RID\\%04X_%04X\\%u";
LABEL_15:
      v15 = RtlUnicodeStringPrintf(a4, v14, v6, v5, *(_DWORD *)(UserSessionState + 240));
      goto LABEL_32;
  }
  v19 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
  v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
    WPP_RECORDER_AND_TRACE_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v19,
      v20,
      v21,
      2u,
      1u,
      0x11u,
      (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids,
      v7);
  }
  return v8;
}
