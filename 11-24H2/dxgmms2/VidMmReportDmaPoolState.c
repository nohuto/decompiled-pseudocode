/*
 * XREFs of VidMmReportDmaPoolState @ 0x1400F43B0
 * Callers:
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400C0F10 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x140005BFC (McTemplateK0pqx_EtwWriteTransfer.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x14003C5A8 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     McTemplateK0pppxxxp_EtwWriteTransfer @ 0x140043CA8 (McTemplateK0pppxxxp_EtwWriteTransfer.c)
 *     ?GetProcessID@DXGPROCESS@@QEBAQEAXXZ @ 0x140046080 (-GetProcessID@DXGPROCESS@@QEBAQEAXXZ.c)
 *     ?VidMmReportGlobalAlloc@@YAXPEBVDXGADAPTER@@PEBVDXGDEVICE@@PEBUVIDMM_GLOBAL_ALLOC@@PEBVDXGSHAREDRESOURCE@@@Z @ 0x1400F4BC8 (-VidMmReportGlobalAlloc@@YAXPEBVDXGADAPTER@@PEBVDXGDEVICE@@PEBUVIDMM_GLOBAL_ALLOC@@PEBVDXGSHARED.c)
 */

void __fastcall VidMmReportDmaPoolState(__int64 *a1, __int64 a2, __int64 a3, const struct DXGSHAREDRESOURCE *a4)
{
  __int64 *v4; // r12
  __int64 *v6; // rsi
  __int64 *v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 ProcessID; // rax
  __int64 v15; // r8
  __int64 v16; // [rsp+B0h] [rbp+8h]

  v4 = a1 + 10;
  v6 = (__int64 *)a1[10];
  if ( v6 != a1 + 10 )
  {
    while ( 1 )
    {
      v7 = (__int64 *)v6[6];
      if ( !v7 )
        goto LABEL_7;
      v8 = a1[2];
      v9 = v8 ? *(_QWORD *)(v8 + 16) : 0LL;
      v10 = *v7;
      VidMmReportGlobalAlloc(
        *(const struct DXGADAPTER **)(*a1 + 24),
        (const struct DXGDEVICE *)v9,
        (const struct VIDMM_GLOBAL_ALLOC *)v6[6],
        a4);
      if ( v9 )
        break;
      if ( !*(_QWORD *)(v10 + 64) )
        goto LABEL_7;
      if ( (byte_140081241 & 1) != 0 )
      {
        McTemplateK0pqx_EtwWriteTransfer();
LABEL_7:
        if ( (byte_140081241 & 1) != 0 )
          McTemplateK0pppxxxp_EtwWriteTransfer(
            *((unsigned int *)v6 + 11),
            &EventAddDmaBuffer,
            *((unsigned int *)v6 + 9),
            a1[2],
            *(_QWORD *)(*a1 + 24),
            v6,
            *((unsigned int *)v6 + 9),
            *((unsigned int *)v6 + 10),
            *((unsigned int *)v6 + 11),
            v6[6]);
      }
      v6 = (__int64 *)*v6;
      if ( v6 == v4 )
        return;
    }
    if ( (byte_140081241 & 0x10) != 0 )
    {
      v16 = v7[31];
      if ( (*(_DWORD *)v7[49] & 8) != 0 )
        v11 = v7[29];
      else
        v11 = *(_QWORD *)(*(_QWORD *)v6[7] + 16LL);
      v12 = v6[7];
      v13 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL);
      ProcessID = DXGPROCESS::GetProcessID(*(DXGPROCESS **)(v9 + 40));
      McTemplateK0ppppppppppppq_EtwWriteTransfer(
        v16,
        &EventReportDeviceAllocation,
        v15,
        ProcessID,
        v9,
        v13,
        v12,
        v7,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL,
        v11,
        v16);
    }
    goto LABEL_7;
  }
}
