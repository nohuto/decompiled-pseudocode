/*
 * XREFs of RootHub_WaitForResumeCompletion @ 0x140009F28
 * Callers:
 *     RootHub_HandleResumedPorts @ 0x14000AD6C (RootHub_HandleResumedPorts.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x14005796C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall RootHub_WaitForResumeCompletion(_QWORD *a1, int a2, int *a3)
{
  char v3; // bp
  __int64 v6; // r13
  __int64 v7; // r12
  unsigned int *v8; // r15
  int Ulong; // eax
  void *v10; // rdx
  int v11; // ebx
  unsigned int v12; // esi
  __int64 result; // rax
  int v14; // edx
  __int64 v15; // rax

  v3 = a2;
  v6 = *(_QWORD *)(a1[1] + 88LL);
  v7 = a1[6] + 120LL * (unsigned int)(a2 - 1);
  v8 = (unsigned int *)(a1[5] + 16LL * (unsigned int)(a2 - 1));
  Ulong = XilRegister_ReadUlong(v6, v8);
  *a3 = Ulong;
  v10 = &WPP_e351447cda05377d20ca116ee7000203_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(a1[1] + 72LL),
      (_DWORD)v10,
      11,
      231,
      (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
      v3,
      Ulong);
    v10 = &WPP_e351447cda05377d20ca116ee7000203_Traceguids;
  }
  v11 = *a3;
  v12 = 0;
  while ( 1 )
  {
    result = (unsigned int)*a3;
    if ( (_DWORD)result == -1
      || !*(_BYTE *)(v7 + 18)
      || (result & 0x20203) != 0x203
      || (result &= 0x1E0u, (_DWORD)result == 128)
      || (_DWORD)result != 480 && (_DWORD)result != 256 )
    {
      if ( v12 > 0x4B0 )
      {
        result = a1[1];
        ++*(_DWORD *)(result + 888);
        ++*(_DWORD *)(result + 932);
        *(_BYTE *)(result + 872) = 1;
      }
      return result;
    }
    if ( v12 == 6400 )
      break;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a1[1] + 72LL),
        (_DWORD)v10,
        11,
        233,
        (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
        v3,
        v12);
    }
    ++v12;
    KeStallExecutionProcessor(0xAu);
    result = XilRegister_ReadUlong(v6, v8);
    *a3 = result;
    if ( (_DWORD)result == -1 )
      return result;
    v10 = &WPP_e351447cda05377d20ca116ee7000203_Traceguids;
    if ( (_DWORD)result != v11 )
    {
      v10 = &WPP_e351447cda05377d20ca116ee7000203_Traceguids;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(a1[1] + 72LL),
          (_DWORD)v10,
          11,
          234,
          (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
          v3,
          result);
        v10 = &WPP_e351447cda05377d20ca116ee7000203_Traceguids;
      }
    }
  }
  MicrosoftTelemetryAssertTriggeredMsgKM(
    "HW_COMPLIANCE: Port %2d Resume failed to complete before timeout",
    (unsigned int)&WPP_e351447cda05377d20ca116ee7000203_Traceguids);
  v15 = a1[1];
  ++*(_DWORD *)(v15 + 884);
  ++*(_DWORD *)(v15 + 928);
  *(_BYTE *)(v15 + 872) = 1;
  result = (__int64)&WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 2;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 72LL),
             v14,
             11,
             232,
             (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
             v3);
  }
  return result;
}
