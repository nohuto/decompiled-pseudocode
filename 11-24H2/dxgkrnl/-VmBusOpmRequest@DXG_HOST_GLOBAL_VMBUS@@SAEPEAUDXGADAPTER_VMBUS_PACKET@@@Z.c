/*
 * XREFs of ?VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402265B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140023358 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051578 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___ @ 0x14005915C (DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___.c)
 *     _DXGKCALLONEXIT__lambda_a993f943666ba3fc75eaa6a1f2de2c15____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14007B060 (_DXGKCALLONEXIT__lambda_a993f943666ba3fc75eaa6a1f2de2c15____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     Feature_4109332794__private_IsEnabledDeviceUsageNoInline @ 0x14007BF4C (Feature_4109332794__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DxgkpProcessOpmVmBusRequest@@YAJU_LUID@@IKPEAXK1PEAK@Z @ 0x1401A0088 (-DxgkpProcessOpmVmBusRequest@@YAJU_LUID@@IKPEAXK1PEAK@Z.c)
 */

char __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusOpmRequest(struct VMBPACKETCOMPLETION__ **a1)
{
  char v2; // bl
  struct _LUID *v3; // rdi
  struct VMBPACKETCOMPLETION__ *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  const wchar_t *v7; // r9
  unsigned int v8; // eax
  signed __int32 v9; // eax
  _DWORD *v10; // rax
  int v11; // eax
  struct _LUID *v12; // rdi
  __int64 v14; // rax
  const wchar_t *v15; // r9
  unsigned int HighPart; // eax
  __int64 v17; // rax
  _DWORD *v18; // r14
  int *v19; // rbx
  int v20; // eax
  int v21; // r8d
  __int64 v22; // [rsp+50h] [rbp-39h] BYREF
  void *v23; // [rsp+58h] [rbp-31h] BYREF
  __int64 v24; // [rsp+60h] [rbp-29h] BYREF
  __int128 v25; // [rsp+70h] [rbp-19h] BYREF
  void **v26; // [rsp+80h] [rbp-9h]
  char *v27; // [rsp+88h] [rbp-1h]
  _BYTE v28[80]; // [rsp+90h] [rbp+7h] BYREF
  char v29; // [rsp+F8h] [rbp+6Fh] BYREF
  char v30; // [rsp+100h] [rbp+77h] BYREF
  void *v31; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = 0;
  if ( !(unsigned int)Feature_4109332794__private_IsEnabledDeviceUsageNoInline() )
  {
    v12 = (struct _LUID *)CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
    if ( !v12 )
      return 0;
    if ( *(_BYTE *)(*((_QWORD *)a1[12] + 74) + 336LL) )
    {
      WdLogSingleEntry0(2LL);
      v14 = 8332LL;
      v15 = L"OPM requests not allowed from secure VM's";
    }
    else
    {
      if ( *((_DWORD *)a1 + 36) - 48 >= v12[5].LowPart )
      {
        HighPart = v12[5].HighPart;
        if ( HighPart <= 0x20000 )
        {
          v17 = operator new[](HighPart + 12, 0x4B677844u, 64LL);
          v24 = v17;
          v18 = (_DWORD *)v17;
          if ( v17 )
          {
            v19 = (int *)(v17 + 4);
            *(_DWORD *)(v17 + 4) = v12[5].HighPart;
            v20 = DxgkpProcessOpmVmBusRequest(
                    v12[3],
                    v12[4].LowPart,
                    v12[4].HighPart,
                    (__int64)&v12[6],
                    v12[5].LowPart,
                    (void **)(v17 + 8),
                    (unsigned int *)(v17 + 4));
            v21 = *v19;
            *v18 = v20;
            VmBusCompletePacket(a1[16], v18, v21 + 8);
            v2 = 1;
          }
          else
          {
            WdLogSingleEntry0(6LL);
            WdLogGlobalForLineNumber = 8370;
            DxgkLogInternalTriageEvent(
              0LL,
              262145LL,
              0xFFFFFFFFLL,
              L"Failed to allocate memory for output buffer",
              8370LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v24);
          return v2;
        }
        WdLogSingleEntry1(2LL, HighPart);
        v14 = (unsigned int)v12[5].HighPart;
        v15 = L"OutputBufSize (0x%I64x) too big";
        WdLogGlobalForLineNumber = 8346;
        goto LABEL_31;
      }
      WdLogSingleEntry0(2LL);
      v14 = 8339LL;
      v15 = L"Input buffer size is too big";
    }
    WdLogGlobalForLineNumber = v14;
LABEL_31:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v15, v14, 0LL, 0LL, 0LL, 0LL);
    return 0;
  }
  v3 = (struct _LUID *)CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  if ( !v3 )
    return 0;
  v22 = 0LL;
  *(_QWORD *)&v25 = &v30;
  v31 = 0LL;
  *((_QWORD *)&v25 + 1) = &v22;
  v29 = 0;
  v26 = &v31;
  v27 = &v29;
  v30 = 0;
  DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297_((__int64)v28, &v25);
  v4 = a1[12];
  v5 = *((_QWORD *)v4 + 74);
  if ( *(_BYTE *)(v5 + 336) )
  {
    WdLogSingleEntry0(2LL);
    v6 = 8240LL;
    v7 = L"OPM requests not allowed from secure VM's";
LABEL_23:
    WdLogGlobalForLineNumber = v6;
    goto LABEL_24;
  }
  if ( *((_DWORD *)a1 + 36) - 48 < v3[5].LowPart )
  {
    WdLogSingleEntry0(2LL);
    v6 = 8247LL;
    v7 = L"Input buffer size is too big";
    goto LABEL_23;
  }
  v8 = v3[5].HighPart;
  if ( v8 <= 0x20000 )
  {
    if ( v4 && (v22 = *((_QWORD *)v4 + 74), v5) )
    {
      if ( v3[4].HighPart != 2303115 )
      {
LABEL_15:
        v10 = (_DWORD *)operator new[]((unsigned int)(v3[5].HighPart + 12), 0x4B677844u, 64LL);
        v23 = v10;
        v31 = v10;
        if ( v10 )
        {
          v10[1] = v3[5].HighPart;
          v11 = DxgkpProcessOpmVmBusRequest(
                  v3[3],
                  v3[4].LowPart,
                  v3[4].HighPart,
                  (__int64)&v3[6],
                  v3[5].LowPart,
                  (void **)v31 + 1,
                  (unsigned int *)v31 + 1);
          *(_DWORD *)v31 = v11;
          if ( v11 >= 0 && v3[4].HighPart == 2303139 )
            _InterlockedDecrement((volatile signed __int32 *)(v22 + 400));
          VmBusCompletePacket(a1[16], v31, *((_DWORD *)v31 + 1) + 8);
          v29 = 1;
          wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v23);
          v2 = 1;
        }
        else
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 8302;
          DxgkLogInternalTriageEvent(
            0LL,
            262145LL,
            0xFFFFFFFFLL,
            L"Failed to allocate memory for output buffer",
            8302LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v2 = v29;
          wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v23);
        }
        goto LABEL_25;
      }
      while ( 1 )
      {
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 400), 0, 0);
        if ( v9 >= *(_DWORD *)(v5 + 404) )
          break;
        if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 400), v9 + 1, v9) )
        {
          v30 = 1;
          goto LABEL_15;
        }
      }
      WdLogSingleEntry0(2LL);
      v6 = 8274LL;
      v7 = L"Max Opm contexts limit ";
    }
    else
    {
      WdLogSingleEntry0(2LL);
      v6 = 8265LL;
      v7 = L"Failed to get virtual machine";
    }
    goto LABEL_23;
  }
  WdLogSingleEntry1(2LL, v8);
  v6 = (unsigned int)v3[5].HighPart;
  v7 = L"OutputBufSize (0x%I64x) too big";
  WdLogGlobalForLineNumber = 8254;
LABEL_24:
  DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v7, v6, 0LL, 0LL, 0LL, 0LL);
  v2 = v29;
LABEL_25:
  DXGKCALLONEXIT__lambda_a993f943666ba3fc75eaa6a1f2de2c15____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v28);
  return v2;
}
