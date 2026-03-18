/*
 * XREFs of VidMmReportContextAllocList @ 0x1400F4900
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x14003C5A8 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     ?GetProcessID@DXGPROCESS@@QEBAQEAXXZ @ 0x140046080 (-GetProcessID@DXGPROCESS@@QEBAQEAXXZ.c)
 *     ?VidMmReportGlobalAlloc@@YAXPEBVDXGADAPTER@@PEBVDXGDEVICE@@PEBUVIDMM_GLOBAL_ALLOC@@PEBVDXGSHAREDRESOURCE@@@Z @ 0x1400F4BC8 (-VidMmReportGlobalAlloc@@YAXPEBVDXGADAPTER@@PEBVDXGDEVICE@@PEBUVIDMM_GLOBAL_ALLOC@@PEBVDXGSHARED.c)
 */

void __fastcall VidMmReportContextAllocList(
        struct DXGDEVICE *a1,
        _QWORD *a2,
        __int64 a3,
        const struct DXGSHAREDRESOURCE *a4)
{
  _QWORD *v4; // r14
  _QWORD *v7; // rdi
  __int64 **v8; // rax
  __int64 *v9; // r12
  __int64 v10; // rbp
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 ProcessID; // rax
  __int64 v16; // rcx
  __int64 v17; // r8

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
      v11 = *(_QWORD *)(v10 + 248);
      if ( (**(_DWORD **)(v10 + 392) & 8) != 0 )
        v12 = *(_QWORD *)(v10 + 232);
      else
        v12 = v9[2];
      v13 = v7[3];
      v14 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
      ProcessID = DXGPROCESS::GetProcessID(*((DXGPROCESS **)a1 + 5));
      McTemplateK0ppppppppppppq_EtwWriteTransfer(
        v16,
        &EventReportDeviceAllocation,
        v17,
        ProcessID,
        a1,
        v14,
        v13,
        v10,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL,
        v12,
        v11);
    }
  }
}
