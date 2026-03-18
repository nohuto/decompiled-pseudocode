/*
 * XREFs of RIMIsParallelDevice @ 0x14013B224
 * Callers:
 *     RIMAssignTouchType @ 0x14013B048 (RIMAssignTouchType.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E4F04 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1401E1114 (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMValidateAllCollectionUsages @ 0x1401E1494 (RIMValidateAllCollectionUsages.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall RIMIsParallelDevice(__int64 a1, struct _HIDP_PREPARSED_DATA *a2, ULONG *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rsi
  char *v6; // r14
  char *v7; // r15
  _DWORD *v8; // rdi
  int v9; // r13d
  unsigned __int16 v10; // r12
  BOOL v11; // esi
  int v12; // eax
  char v13; // r15
  bool v14; // r13
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  ULONG v18; // ecx
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v21; // [rsp+44h] [rbp-75h] BYREF
  unsigned __int16 v22[2]; // [rsp+48h] [rbp-71h] BYREF
  ULONG LinkCollectionNodesLength[3]; // [rsp+4Ch] [rbp-6Dh] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+58h] [rbp-61h]
  char *v25; // [rsp+60h] [rbp-59h] BYREF
  char *v26; // [rsp+68h] [rbp-51h] BYREF
  __int64 v27; // [rsp+70h] [rbp-49h]
  ULONG *v28; // [rsp+78h] [rbp-41h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+80h] [rbp-39h] BYREF

  v3 = 0;
  v28 = a3;
  PreparsedData = a2;
  v5 = a1;
  v27 = a1;
  v25 = 0LL;
  v26 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  v8 = *(_DWORD **)(v5 + 768);
  ValueCapsLength[0] = 1;
  v22[0] = 0;
  v21 = 0;
  LinkCollectionNodesLength[0] = 0;
  v9 = 0;
  if ( HidP_GetLinkCollectionNodes(0LL, LinkCollectionNodesLength, a2) == -1072627705
    && LinkCollectionNodesLength[0] > 1 )
  {
    v8[3] = LinkCollectionNodesLength[0];
    v10 = 1;
    if ( LinkCollectionNodesLength[0] > 1 )
    {
      v11 = 0;
      do
      {
        if ( HidP_GetSpecificValueCaps(HidP_Input, 0xDu, v10, 0x51u, &ValueCaps, ValueCapsLength, PreparsedData) == 1114112 )
        {
          ++*v8;
          if ( v9 )
          {
            if ( v6 && !v11 )
              v11 = RIMValidateAllCollectionUsages((_DWORD)v6, v22[0], (_DWORD)v7, v21, v10, (__int64)PreparsedData) == 0;
          }
          else
          {
            v12 = RIMRetrieveAllLinkIndexUsages(v10, PreparsedData, v22, &v25, &v21, &v26);
            v6 = v25;
            if ( v12 != 1114112 )
            {
              if ( v25 )
              {
                LinkCollectionNodesLength[1] = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1540LL);
              }
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
              {
                v13 = 0;
              }
              v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
                LOBYTE(v16) = v14;
                LOBYTE(v17) = v13;
                WPP_RECORDER_AND_TRACE_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v17,
                  v16,
                  *(_QWORD *)(UserSessionState + 19392),
                  3,
                  1,
                  26,
                  (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids);
              }
            }
            v7 = v26;
            v9 = 1;
          }
        }
        ++v10;
        ValueCapsLength[0] = 1;
      }
      while ( v10 < LinkCollectionNodesLength[0] );
      v5 = v27;
      if ( v6 )
        GreDeleteFastMutex(v6);
      if ( v7 )
        GreDeleteFastMutex(v7);
    }
    ValueCapsLength[0] = 1;
    if ( HidP_GetSpecificValueCaps(HidP_Input, 0xDu, 0, 0x54u, &ValueCaps, ValueCapsLength, PreparsedData) == 1114112 )
    {
      v8[8] |= 1u;
      *(_DWORD *)(v5 + 24) = 3;
    }
    if ( *v8 > 1u && (v8[8] & 1) == 0 )
      *(_DWORD *)(v5 + 24) = 4;
    if ( (unsigned int)(*(_DWORD *)(v5 + 24) - 3) <= 1 )
    {
      v18 = LinkCollectionNodesLength[0];
      *(_DWORD *)(v5 + 368) |= 2u;
      v3 = 1;
      *v28 = v18;
    }
  }
  return v3;
}
