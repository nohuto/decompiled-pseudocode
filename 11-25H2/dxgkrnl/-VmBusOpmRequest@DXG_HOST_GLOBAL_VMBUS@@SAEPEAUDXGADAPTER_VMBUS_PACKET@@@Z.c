/*
 * XREFs of ?VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140220160
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051B28 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140058B34 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?DxgkpProcessOpmVmBusRequest@@YAJU_LUID@@IKPEAXK1PEAK@Z @ 0x14019DB60 (-DxgkpProcessOpmVmBusRequest@@YAJU_LUID@@IKPEAXK1PEAK@Z.c)
 */

char __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusOpmRequest(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  struct _LUID *v3; // rdi
  __int64 v4; // r9
  __int64 v6; // rax
  const wchar_t *v7; // r9
  unsigned int HighPart; // eax
  __int64 v9; // rax
  _DWORD *v10; // r14
  int *v11; // rbx
  int v12; // eax
  int v13; // r8d
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  v3 = (struct _LUID *)CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  if ( !v3 )
    return 0;
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 592LL) + 336LL) )
  {
    WdLogSingleEntry0(2LL);
    v6 = 8194LL;
    v7 = L"OPM requests not allowed from secure VM's";
LABEL_5:
    WdLogGlobalForLineNumber = v6;
LABEL_6:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v7, v6, 0LL, 0LL, 0LL, 0LL);
    return 0;
  }
  if ( *((_DWORD *)a1 + 36) - 48 < v3[5].LowPart )
  {
    WdLogSingleEntry0(2LL);
    v6 = 8201LL;
    v7 = L"Input buffer size is too big";
    goto LABEL_5;
  }
  HighPart = v3[5].HighPart;
  if ( HighPart > 0x20000 )
  {
    WdLogSingleEntry1(2LL, HighPart);
    v6 = (unsigned int)v3[5].HighPart;
    v7 = L"OutputBufSize (0x%I64x) too big";
    WdLogGlobalForLineNumber = 8208;
    goto LABEL_6;
  }
  v9 = operator new[](HighPart + 12, 0x4B677844u, 64LL, v4);
  v14 = v9;
  v10 = (_DWORD *)v9;
  if ( v9 )
  {
    v11 = (int *)(v9 + 4);
    *(_DWORD *)(v9 + 4) = v3[5].HighPart;
    v12 = DxgkpProcessOpmVmBusRequest(
            v3[3],
            v3[4].LowPart,
            v3[4].HighPart,
            (__int64)&v3[6],
            v3[5].LowPart,
            (void **)(v9 + 8),
            (unsigned int *)(v9 + 4));
    v13 = *v11;
    *v10 = v12;
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v10, v13 + 8);
    v2 = 1;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 8232;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate memory for output buffer",
      8232LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v14);
  return v2;
}
