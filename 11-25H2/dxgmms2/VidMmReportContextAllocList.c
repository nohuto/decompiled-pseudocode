/*
 * XREFs of VidMmReportContextAllocList @ 0x1400F7290
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x14003E604 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     ?VidMmReportGlobalAlloc@@YAXPEBVDXGADAPTER@@PEBVDXGDEVICE@@PEBUVIDMM_GLOBAL_ALLOC@@PEBVDXGSHAREDRESOURCE@@@Z @ 0x1400F7548 (-VidMmReportGlobalAlloc@@YAXPEBVDXGADAPTER@@PEBVDXGDEVICE@@PEBUVIDMM_GLOBAL_ALLOC@@PEBVDXGSHARED.c)
 */

void __fastcall VidMmReportContextAllocList(
        struct DXGDEVICE *a1,
        _QWORD *a2,
        __int64 a3,
        const struct DXGSHAREDRESOURCE *a4)
{
  _QWORD *v4; // rdi
  _QWORD *v7; // r15
  __int64 **v8; // rax
  __int64 *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdx

  v4 = (_QWORD *)*a2;
  while ( v4 != a2 )
  {
    v7 = v4;
    v8 = (__int64 **)v4[3];
    v4 = (_QWORD *)*v4;
    v9 = *v8;
    v10 = **v8;
    VidMmReportGlobalAlloc(
      *(const struct DXGADAPTER **)(*((_QWORD *)a1 + 2) + 16LL),
      a1,
      (const struct VIDMM_GLOBAL_ALLOC *)v10,
      a4);
    if ( (byte_140081241 & 0x10) != 0 )
    {
      if ( (**(_DWORD **)(v10 + 376) & 8) != 0 )
        v11 = *(_QWORD *)(v10 + 216);
      else
        v11 = v9[2];
      McTemplateK0ppppppppppppq_EtwWriteTransfer(
        *((_QWORD *)a1 + 2),
        &EventReportDeviceAllocation,
        *(_QWORD *)(v10 + 232),
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 64LL) + 80LL),
        a1,
        *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL),
        v7[3],
        v10,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL,
        v11,
        *(_QWORD *)(v10 + 232));
    }
  }
}
