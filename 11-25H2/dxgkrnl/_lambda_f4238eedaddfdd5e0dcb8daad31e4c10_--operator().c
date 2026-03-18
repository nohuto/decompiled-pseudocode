/*
 * XREFs of _lambda_f4238eedaddfdd5e0dcb8daad31e4c10_::operator() @ 0x140214994
 * Callers:
 *     ?VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022AF90 (-VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x140078268 (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 *     ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z @ 0x14007885C (-RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z.c)
 */

__int64 __fastcall lambda_f4238eedaddfdd5e0dcb8daad31e4c10_::operator()(__int64 **a1)
{
  __int64 v2; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 *v5; // rdx
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _LUID v9; // [rsp+50h] [rbp-38h] BYREF
  int v10; // [rsp+58h] [rbp-30h]
  int v11; // [rsp+5Ch] [rbp-2Ch]
  __int64 v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+68h] [rbp-20h]
  int v14; // [rsp+6Ch] [rbp-1Ch]
  __int64 v15; // [rsp+70h] [rbp-18h]
  __int64 v16; // [rsp+78h] [rbp-10h]

  v2 = **a1;
  if ( *(_QWORD *)(v2 + 40) )
  {
    if ( *(_DWORD *)(v2 + 48) < 2u )
    {
      Global = DXGGLOBAL::GetGlobal();
      v5 = a1[1];
      v6 = **a1;
      if ( (*(_DWORD *)(v6 + 48) & 1) != 0 )
      {
        v7 = *v5;
        v8 = *(_QWORD *)(*(_QWORD *)(v7 + 96) + 592LL);
        v11 = 0;
        v14 = 0;
        v16 = 0LL;
        v12 = *(_QWORD *)(v7 + 104) + 160LL;
        v9 = *(struct _LUID *)(v6 + 24);
        v10 = *(_DWORD *)(v6 + 32);
        v15 = *(_QWORD *)(v6 + 40);
        v13 = *(_DWORD *)(v8 + 392);
        return HOSTVMMONITORMAPPING::AddMapping((KSPIN_LOCK *)Global + 38154, &v9);
      }
      else
      {
        return HOSTVMMONITORMAPPING::RemoveMapping(
                 (struct DXGGLOBAL *)((char *)Global + 305232),
                 (void *)(*(_QWORD *)(*v5 + 104) + 160LL),
                 *(struct _LUID *)(v6 + 24),
                 *(_DWORD *)(v6 + 32),
                 *(void **)(v6 + 40));
      }
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 8138;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Flags.Unused was not zero, failing request",
        8138LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225714LL;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 8132;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"pGuestVsyncEvent is zero, failing request",
      8132LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225713LL;
  }
}
