/*
 * XREFs of _lambda_30b46b3e1498d0fd094f88f23b33fdcf_::operator() @ 0x14021AD34
 * Callers:
 *     ?VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140231880 (-VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x140078A58 (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 *     ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z @ 0x140078F28 (-RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z.c)
 */

__int64 __fastcall lambda_30b46b3e1498d0fd094f88f23b33fdcf_::operator()(__int64 **a1)
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
        return HOSTVMMONITORMAPPING::AddMapping((KSPIN_LOCK *)Global + 38164, &v9);
      }
      else
      {
        return HOSTVMMONITORMAPPING::RemoveMapping(
                 (struct DXGGLOBAL *)((char *)Global + 305312),
                 (void *)(*(_QWORD *)(*v5 + 104) + 160LL),
                 *(struct _LUID *)(v6 + 24),
                 *(_DWORD *)(v6 + 32),
                 *(void **)(v6 + 40));
      }
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 8162;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Flags.Unused was not zero, failing request",
        8162LL,
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
    WdLogGlobalForLineNumber = 8156;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"pGuestVsyncEvent is zero, failing request",
      8156LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225713LL;
  }
}
