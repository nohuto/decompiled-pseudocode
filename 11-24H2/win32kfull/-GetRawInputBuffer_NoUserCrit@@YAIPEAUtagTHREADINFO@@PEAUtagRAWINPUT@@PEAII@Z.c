/*
 * XREFs of ?GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z @ 0x1401C5C24
 * Callers:
 *     NtUserGetRawInputBuffer @ 0x1401C5B90 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     ?GRIB_CopyHidData@@YAIQEAUtagHIDDATA@@PEAI1PEAPEAUtagRAWINPUT@@I@Z @ 0x14002C3BC (-GRIB_CopyHidData@@YAIQEAUtagHIDDATA@@PEAI1PEAPEAUtagRAWINPUT@@I@Z.c)
 *     SetWakeBit @ 0x1400456D0 (SetWakeBit.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x14016DEFC (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 *     ?ReverseHidDataList@@YAPEAUtagHIDDATA@@PEAU_SLIST_ENTRY@@@Z @ 0x140183DD0 (-ReverseHidDataList@@YAPEAUtagHIDDATA@@PEAU_SLIST_ENTRY@@@Z.c)
 *     ?CleanOutOldInputMessages@@YAXPEAUtagTHREADINFO@@@Z @ 0x14018D594 (-CleanOutOldInputMessages@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x140271D08 (-FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14027251C (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall GetRawInputBuffer_NoUserCrit(
        union _SLIST_HEADER *a1,
        struct tagRAWINPUT *a2,
        unsigned int *a3,
        unsigned int a4)
{
  unsigned int v7; // esi
  struct tagHIDDATA **v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _SLIST_ENTRY *v13; // rax
  struct tagHIDDATA *v14; // rax
  _QWORD *p_Alignment; // rcx
  struct tagHIDDATA *i; // rdx
  struct tagHIDDATA *j; // r15
  int v18; // eax
  struct tagHIDDATA *v19; // rdx
  _QWORD *k; // rax
  unsigned int v22; // [rsp+30h] [rbp-58h] BYREF
  union _SLIST_HEADER *v23; // [rsp+38h] [rbp-50h]
  unsigned int v24[8]; // [rsp+40h] [rbp-48h] BYREF
  struct tagRAWINPUT *v25; // [rsp+98h] [rbp+10h] BYREF

  v25 = a2;
  v24[0] = 0;
  v22 = 0;
  v7 = 0;
  if ( SLODWORD(a1[74].Alignment) > 500 )
  {
    CleanOutOldInputMessages((struct tagTHREADINFO *)a1);
    if ( LODWORD(a1[74].Alignment) )
    {
      LODWORD(v23) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 16546LL);
    }
  }
  ClearWakeBit((struct tagTHREADINFO *)a1, 1024, 0);
  v8 = (struct tagHIDDATA **)&a1[73];
  v23 = a1 + 73;
  if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline(v10, v9, v11, v12) )
  {
    FlushPostedRawInput((struct tagTHREADINFO *)a1);
  }
  else
  {
    v13 = ExpInterlockedFlushSList(a1 + 72);
    v14 = ReverseHidDataList(v13);
    p_Alignment = &a1[73].Alignment;
    for ( i = *v8; i; i = (struct tagHIDDATA *)*((_QWORD *)i + 4) )
      p_Alignment = (_QWORD *)((char *)i + 32);
    *p_Alignment = v14;
  }
  for ( j = 0LL; *v8; j = v19 )
  {
    v18 = GRIB_CopyHidData(*v8, v24, &v22, &v25, a4);
    if ( !v18 )
      break;
    if ( v18 != 1 )
    {
      v7 = -1;
      goto LABEL_30;
    }
    ++v7;
    v19 = *v8;
    *v8 = (struct tagHIDDATA *)*((_QWORD *)*v8 + 4);
    *((_QWORD *)v19 + 4) = 0LL;
    if ( j )
    {
      k = (_QWORD *)((char *)j + 32);
    }
    else
    {
      for ( k = &a1[73].Region; *k; k = (_QWORD *)(*k + 32LL) )
        ;
    }
    *k = v19;
    ++LODWORD(a1[74].Alignment);
  }
  if ( a4 <= v22 )
  {
    if ( v25 )
    {
      v7 = -1;
      UserSetLastError(122);
      goto LABEL_27;
    }
  }
  else if ( v25 )
  {
    _InterlockedExchange(
      (volatile __int32 *)(a1[30].Region + 20),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    goto LABEL_30;
  }
  v7 = 0;
LABEL_27:
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (unsigned int *)MmUserProbeAddress;
  *a3 = v22;
LABEL_30:
  if ( *v8 )
    SetWakeBit((__int64)a1, 1024LL);
  return v7;
}
