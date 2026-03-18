/*
 * XREFs of VidMmReportDmaPoolState @ 0x1400F6D70
 * Callers:
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400C05B0 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x140005BFC (McTemplateK0pqx_EtwWriteTransfer.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x14003E604 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     McTemplateK0pppxxxp_EtwWriteTransfer @ 0x140045A48 (McTemplateK0pppxxxp_EtwWriteTransfer.c)
 *     ?VidMmReportGlobalAlloc@@YAXPEBVDXGADAPTER@@PEBVDXGDEVICE@@PEBUVIDMM_GLOBAL_ALLOC@@PEBVDXGSHAREDRESOURCE@@@Z @ 0x1400F7548 (-VidMmReportGlobalAlloc@@YAXPEBVDXGADAPTER@@PEBVDXGDEVICE@@PEBUVIDMM_GLOBAL_ALLOC@@PEBVDXGSHARED.c)
 */

void __fastcall VidMmReportDmaPoolState(__int64 *a1, __int64 a2, __int64 a3, const struct DXGSHAREDRESOURCE *a4)
{
  __int64 *v4; // r14
  __int64 *i; // rbx
  __int64 *v7; // rdi
  __int64 *v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rdx

  v4 = a1 + 10;
  for ( i = (__int64 *)a1[10]; i != v4; i = (__int64 *)*i )
  {
    v7 = (__int64 *)i[6];
    if ( v7 )
    {
      v8 = (__int64 *)a1[2];
      if ( v8 )
        v8 = (__int64 *)v8[2];
      v9 = *v7;
      VidMmReportGlobalAlloc(
        *(const struct DXGADAPTER **)(*a1 + 24),
        (const struct DXGDEVICE *)v8,
        (const struct VIDMM_GLOBAL_ALLOC *)i[6],
        a4);
      if ( v8 )
      {
        if ( (byte_140081241 & 0x10) != 0 )
        {
          if ( (*(_DWORD *)v7[47] & 8) != 0 )
            v10 = v7[27];
          else
            v10 = *(_QWORD *)(*(_QWORD *)i[7] + 16LL);
          McTemplateK0ppppppppppppq_EtwWriteTransfer(
            v8[2],
            &EventReportDeviceAllocation,
            v7[29],
            *(_QWORD *)(*(_QWORD *)(v8[5] + 64) + 80LL),
            v8,
            *(_QWORD *)(v8[2] + 16),
            i[7],
            v7,
            0LL,
            0LL,
            0LL,
            0LL,
            0LL,
            v10,
            v7[29]);
        }
      }
      else if ( *(_QWORD *)(v9 + 64) )
      {
        if ( (byte_140081241 & 1) == 0 )
          continue;
        McTemplateK0pqx_EtwWriteTransfer();
      }
    }
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0pppxxxp_EtwWriteTransfer(
        *((unsigned int *)i + 11),
        &EventAddDmaBuffer,
        *((unsigned int *)i + 9),
        a1[2],
        *(_QWORD *)(*a1 + 24),
        i,
        *((unsigned int *)i + 9),
        *((unsigned int *)i + 10),
        *((unsigned int *)i + 11),
        i[6]);
  }
}
