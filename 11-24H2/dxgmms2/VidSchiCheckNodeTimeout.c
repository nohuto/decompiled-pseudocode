/*
 * XREFs of VidSchiCheckNodeTimeout @ 0x1400B6030
 * Callers:
 *     VidSchiCheckGPUTimeout @ 0x1400B5B80 (VidSchiCheckGPUTimeout.c)
 *     VidSchiCheckHwProgress @ 0x1400B5C20 (VidSchiCheckHwProgress.c)
 * Callees:
 *     ?VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z @ 0x14001DC70 (-VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x140036F0C (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x140037154 (VidSchiSchedulerNodeToDriverNode.c)
 *     ?VidSchiStartHwSchNodeProgressMonitoring@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14003757C (-VidSchiStartHwSchNodeProgressMonitoring@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiRunningDeviceAllowsLongRunningPackets @ 0x140041B5C (VidSchiRunningDeviceAllowsLongRunningPackets.c)
 *     VidSchiSkipXboxNodeTimeout @ 0x140041CB8 (VidSchiSkipXboxNodeTimeout.c)
 *     ?DdiQueryEngineStatus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYENGINESTATUS@@@Z @ 0x140043090 (-DdiQueryEngineStatus@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYENGINESTATUS@@@Z.c)
 *     McTemplateK0pqqxxqq_EtwWriteTransfer @ 0x140049F88 (McTemplateK0pqqxxqq_EtwWriteTransfer.c)
 *     ?VidSchiCaptureRunningProcess@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14004ADA4 (-VidSchiCaptureRunningProcess@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 */

__int64 __fastcall VidSchiCheckNodeTimeout(struct _VIDSCH_NODE *a1, _QWORD *a2)
{
  __int32 v5; // eax
  signed __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  signed __int64 v10; // rax
  __int64 v11; // rax
  UINT v12; // ebp
  unsigned int v13; // edx
  __int64 v14; // rcx
  UINT v15; // r12d
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  UINT v21; // [rsp+20h] [rbp-78h]
  UINT v22; // [rsp+28h] [rbp-70h]
  int v23; // [rsp+40h] [rbp-58h]
  int v24; // [rsp+48h] [rbp-50h]
  _DXGKARG_QUERYENGINESTATUS v25; // [rsp+50h] [rbp-48h] BYREF

  if ( !*((_DWORD *)a1 + 111) && !*((_DWORD *)a1 + 537) && !*((_DWORD *)a1 + 538) )
  {
    if ( (*((_DWORD *)a1 + 3) & 2) != 0 )
    {
      if ( !(unsigned __int8)VidSchiCheckHwSchNodeProgress(a1, 1) )
        goto LABEL_6;
    }
    else if ( !*((_DWORD *)a1 + 754) )
    {
LABEL_6:
      if ( (*((_DWORD *)a1 + 3) & 2) == 0 )
        *((_DWORD *)a1 + 110) = 0;
      return *((unsigned int *)a1 + 111);
    }
    v5 = _InterlockedExchange((volatile __int32 *)a1 + 126, 0);
    if ( !*((_DWORD *)a1 + 110) || v5 )
    {
      if ( (*((_DWORD *)a1 + 3) & 2) != 0 )
        v10 = *((_QWORD *)a1 + 218);
      else
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 12, 0LL, 0LL);
      *((_QWORD *)a1 + 59) = v10;
      v11 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)a1 + 57) = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)a1 + 56) = v11;
      if ( (*((_DWORD *)a1 + 3) & 2) != 0 )
        VidSchiStartHwSchNodeProgressMonitoring(a1);
      else
        *((_DWORD *)a1 + 110) = 1;
    }
    else
    {
      *((_QWORD *)a1 + 57) = MEMORY[0xFFFFF78000000320];
      if ( (*((_DWORD *)a1 + 3) & 2) != 0 )
        v6 = *((_QWORD *)a1 + 218);
      else
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 12, 0LL, 0LL);
      v7 = *((_QWORD *)a1 + 57);
      if ( *((_QWORD *)a1 + 59) != v6 )
      {
        *((_QWORD *)a1 + 56) = v7;
        *((_QWORD *)a1 + 59) = v6;
      }
      else
      {
        v8 = v7 - *((_QWORD *)a1 + 56);
        v9 = 10000000LL * g_TdrConfig[1];
        if ( v8 * (unsigned __int64)KeQueryTimeIncrement() > v9 )
        {
          if ( VidSchiSkipXboxNodeTimeout((__int64)a1) )
            return 0LL;
          v12 = VidSchiSchedulerNodeToDriverEngine(*((_QWORD *)a1 + 3), *((unsigned __int16 *)a1 + 2));
          v15 = VidSchiSchedulerNodeToDriverNode(v14, v13);
          if ( *(_BYTE *)(v16 + 44) )
          {
            if ( VidSchiRunningDeviceAllowsLongRunningPackets((__int64)a1) )
            {
              v17 = *((_QWORD *)a1 + 3);
              v25.EngineStatus.Value = 0;
              v25.EngineOrdinal = v12;
              v25.NodeOrdinal = v15;
              if ( !(unsigned int)ADAPTER_RENDER::DdiQueryEngineStatus(*(ADAPTER_RENDER **)(v17 + 8), &v25)
                && (*(_BYTE *)&v25.EngineStatus.0 & 1) != 0 )
              {
                return 0LL;
              }
            }
          }
          VidSchiCaptureRunningProcess(a1);
          *((_DWORD *)a1 + 111) = 1;
          *((_QWORD *)a1 + 58) = v8;
          v18 = *((_QWORD *)a1 + 21);
          *((_QWORD *)a1 + 60) = v18;
          v19 = *((unsigned int *)a1 + 434);
          *((_DWORD *)a1 + 122) = v19;
          v20 = *((unsigned int *)a1 + 433);
          *((_DWORD *)a1 + 123) = v20;
          if ( (byte_140081244 & 4) != 0 )
          {
            v24 = v20;
            v23 = v19;
            v22 = v12;
            v21 = v15;
            McTemplateK0pqqxxqq_EtwWriteTransfer(
              v18,
              v19,
              v20,
              *(_QWORD *)(*((_QWORD *)a1 + 3) + 16LL),
              v21,
              v22,
              v6,
              v18,
              v23,
              v24);
          }
          if ( a2 )
            *a2 = *((_QWORD *)a1 + 56);
        }
      }
    }
    return *((unsigned int *)a1 + 111);
  }
  if ( a2 )
    *a2 = *((_QWORD *)a1 + 56);
  return 1LL;
}
