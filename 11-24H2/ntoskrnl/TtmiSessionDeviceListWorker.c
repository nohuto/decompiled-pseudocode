/*
 * XREFs of TtmiSessionDeviceListWorker @ 0x140768C60
 * Callers:
 *     TtmpSessionWorker @ 0x14076AF20 (TtmpSessionWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     TtmpApplyDeviceAutoAssignment @ 0x140768F08 (TtmpApplyDeviceAutoAssignment.c)
 *     TtmpCallAssignedToTerminal @ 0x140768F30 (TtmpCallAssignedToTerminal.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x140769350 (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmpPublishDeviceEvent @ 0x1407696D8 (TtmpPublishDeviceEvent.c)
 *     TtmpPushTerminalState @ 0x1407698B0 (TtmpPushTerminalState.c)
 *     TtmpStartCallout @ 0x140769A64 (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x140769BE4 (TtmpStopCallout.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmiSessionDeviceListWorker(__int64 a1)
{
  void **v1; // rsi
  void **i; // rbx
  int v4; // eax
  void **v5; // r14
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // eax
  int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rdx
  _QWORD *v12; // rdx
  void **v13; // rax
  _OWORD v15[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+50h] [rbp-18h]

  v1 = (void **)(a1 + 96);
  for ( i = *(void ***)(a1 + 96); i != v1; i = (void **)*i )
  {
    v4 = *((_DWORD *)i + 150);
    v5 = i;
    if ( (v4 & 4) != 0 )
      goto LABEL_10;
    if ( (v4 & 1) != 0 )
    {
      *((_DWORD *)i + 150) = v4 & 0xFFFFFFFC | 2;
      TtmpApplyDeviceAutoAssignment(a1, i);
      v7 = 3LL;
    }
    else
    {
      if ( (v4 & 0x10) == 0 )
        goto LABEL_8;
      *((_DWORD *)i + 150) = v4 & 0xFFFFFFEF;
      TtmpApplyDeviceAutoAssignment(a1, i);
      v7 = 4LL;
    }
    TtmpPublishDeviceEvent(v6, 0LL, i, v7);
LABEL_8:
    v8 = *((_DWORD *)i + 150);
    if ( (v8 & 0x20) != 0 )
    {
      *((_DWORD *)i + 150) = v8 & 0xFFFFFFDF;
      TtmpCallAssignedToTerminal(a1, i);
    }
LABEL_10:
    if ( ((_DWORD)i[75] & 0x44) == 0x40 )
    {
      *((_DWORD *)i + 150) &= ~0x40u;
      if ( (unsigned __int8)TtmpPushTerminalState(a1, i) )
      {
        *((_DWORD *)i + 150) |= 0x40u;
        *(_DWORD *)(a1 + 4) |= 0x1000u;
      }
    }
    v9 = *((_DWORD *)i + 150);
    if ( (v9 & 4) != 0 )
    {
      if ( (v9 & 2) != 0 )
      {
        *((_DWORD *)i + 150) = v9 | 8;
        TtmpPublishDeviceEvent(a1, 0LL, i, 5LL);
      }
      v10 = (__int64)i[5];
      if ( v10 )
      {
        v16 = 0LL;
        memset(v15, 0, sizeof(v15));
        TtmpStartCallout((unsigned int)v15, a1, (_DWORD)i, 2, v10, 0);
        guard_dispatch_icall_no_overrides(i[3], v11);
        TtmpStopCallout(v15, 0LL);
      }
      v12 = *i;
      v13 = (void **)i[1];
      i = v13;
      if ( *((void ***)*v5 + 1) != v5 || *v13 != v5 )
        __fastfail(3u);
      *v13 = v12;
      v12[1] = v13;
      --*(_DWORD *)(a1 + 116);
      ExFreePoolWithTag(v5, 0x446D7454u);
    }
  }
  TtmpCommitTerminalDisplayStateUpdateWorker(a1, 0LL);
  TtmpCommitTerminalDisplayStateUpdateWorker(a1, 1LL);
  TtmpCommitTerminalDisplayStateUpdateWorker(a1, 2LL);
  return TtmpCommitTerminalDisplayStateUpdateWorker(a1, 3LL);
}
