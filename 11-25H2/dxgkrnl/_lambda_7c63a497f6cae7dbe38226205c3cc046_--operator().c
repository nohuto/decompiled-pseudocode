/*
 * XREFs of _lambda_7c63a497f6cae7dbe38226205c3cc046_::operator() @ 0x140214728
 * Callers:
 *     ?VmBusUpdateMonitorMapping@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022AF20 (-VmBusUpdateMonitorMapping@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x140078268 (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 *     ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z @ 0x14007885C (-RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z.c)
 */

__int64 __fastcall lambda_7c63a497f6cae7dbe38226205c3cc046_::operator()(__int64 **a1)
{
  __int64 v2; // rcx
  __int64 *v4; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 *v6; // rdx
  struct DXGGLOBAL *v7; // r11
  struct _LUID *v8; // r10
  __int64 v9; // rax
  __int64 v10; // r8
  struct _LUID v11; // [rsp+50h] [rbp-38h] BYREF
  DWORD LowPart; // [rsp+58h] [rbp-30h]
  int v13; // [rsp+5Ch] [rbp-2Ch]
  __int64 v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-20h]
  __int64 v16; // [rsp+6Ch] [rbp-1Ch]
  int v17; // [rsp+74h] [rbp-14h]
  __int64 v18; // [rsp+78h] [rbp-10h]

  v2 = *(_QWORD *)(*(_QWORD *)(**a1 + 96) + 592LL);
  if ( *(_DWORD *)(v2 + 392) >= 0x23u )
  {
    if ( *(_QWORD *)(v2 + 320) )
    {
      v4 = a1[1];
      if ( *(_DWORD *)(*v4 + 36) < 0x10u )
      {
        if ( *(_DWORD *)(*v4 + 40) < 2u )
        {
          Global = DXGGLOBAL::GetGlobal();
          v6 = *a1;
          v7 = Global;
          v8 = (struct _LUID *)*a1[1];
          v9 = **a1;
          if ( (v8[5].LowPart & 1) != 0 )
          {
            v10 = *(_QWORD *)(*(_QWORD *)(v9 + 96) + 592LL);
            v13 = 0;
            v16 = 0LL;
            v17 = 0;
            v14 = *(_QWORD *)(*v6 + 104) + 160LL;
            v11 = v8[3];
            LowPart = v8[4].LowPart;
            v18 = *(_QWORD *)(v10 + 320) + 32LL * (unsigned int)v8[4].HighPart + 8;
            v15 = *(_DWORD *)(v10 + 392);
            return HOSTVMMONITORMAPPING::AddMapping((KSPIN_LOCK *)v7 + 38154, &v11);
          }
          else
          {
            return HOSTVMMONITORMAPPING::RemoveMapping(
                     (struct DXGGLOBAL *)((char *)v7 + 305232),
                     (void *)(*(_QWORD *)(v9 + 104) + 160LL),
                     v8[3],
                     v8[4].LowPart,
                     0LL);
          }
        }
        else
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 8441;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Flags.Unused was not zero, failing request",
            8441LL,
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
        WdLogGlobalForLineNumber = 8435;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"SharedDataIndex was not out of range, failing request",
          8435LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225713LL;
      }
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 8429;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Shared page is not enabled", 8429LL, 0LL, 0LL, 0LL, 0LL);
      return 3221225485LL;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 8422;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Message is not supported from this guest VM",
      8422LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
}
