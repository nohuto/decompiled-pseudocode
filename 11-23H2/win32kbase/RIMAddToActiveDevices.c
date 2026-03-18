/*
 * XREFs of RIMAddToActiveDevices @ 0x1C0186398
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1C01AB8BC (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C01ABB74 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     Win32AllocPoolZInit @ 0x1C004F080 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem @ 0x1C018E804 (rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem.c)
 *     ApiSetPostPointerDeviceInRangeMessage @ 0x1C020800C (ApiSetPostPointerDeviceInRangeMessage.c)
 */

__int64 __fastcall RIMAddToActiveDevices(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  _QWORD *v5; // rsi
  _QWORD *v6; // r14
  unsigned int v7; // ebp
  _QWORD *v10; // rdi
  int v11; // edx
  _QWORD *v12; // rdi
  __int64 v13; // r8
  void *v14; // r8
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  int v17; // eax
  void *v18; // rcx
  char v20; // [rsp+40h] [rbp-38h]
  union _LARGE_INTEGER DueTime; // [rsp+80h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a2 + 16);
  v5 = (_QWORD *)(a1 + 448);
  v6 = *(_QWORD **)(a1 + 448);
  v7 = 0;
  if ( IS_USERCRIT_OWNED_AT_ALL(a1, a2, a3, a4) )
    ApiSetPostPointerDeviceInRangeMessage(a2);
  else
    rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem(a1, v4, 1LL);
  do
  {
    if ( v6 == v5 )
    {
      v12 = (_QWORD *)Win32AllocPoolZInit(0x20uLL, 0x78707352u);
      if ( v12 )
      {
        v13 = *(_QWORD *)(a2 + 16);
        *(_DWORD *)(v13 + 188) |= 0x10u;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v11) = 0;
        }
        if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v20 = v13;
          v14 = &WPP_30f9ddf97da63da78d93eb777283153b_Traceguids;
          LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v11,
            (_DWORD)v14,
            (_DWORD)gRimLog,
            4,
            1,
            39,
            (__int64)&WPP_30f9ddf97da63da78d93eb777283153b_Traceguids,
            v20);
        }
        *v12 = a2;
        v15 = v12 + 1;
        v16 = (_QWORD *)v5[1];
        if ( (_QWORD *)*v16 != v5 )
          __fastfail(3u);
        *v15 = v5;
        v7 = 1;
        v12[2] = v16;
        *v16 = v15;
        v5[1] = v15;
        if ( *(_DWORD *)(a1 + 464) == -1 )
        {
          DueTime.LowPart = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3265);
        }
        if ( ++*(_DWORD *)(a1 + 464) == 1 )
        {
          v18 = *(void **)(a1 + 336);
          DueTime.QuadPart = -1000000LL;
          ZwSetTimer(v18, &DueTime, 0LL, 0LL, 0, 0, 0LL);
        }
      }
      return v7;
    }
    v10 = v6 - 1;
    v6 = (_QWORD *)*v6;
  }
  while ( *v10 != a2 );
  if ( (v10[3] & 2) != 0 )
  {
    DueTime.LowPart = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3238);
  }
  v17 = *((_DWORD *)v10 + 6);
  if ( (v17 & 1) != 0 )
    *((_DWORD *)v10 + 6) = v17 & 0xFFFFFFFE;
  return 1;
}
