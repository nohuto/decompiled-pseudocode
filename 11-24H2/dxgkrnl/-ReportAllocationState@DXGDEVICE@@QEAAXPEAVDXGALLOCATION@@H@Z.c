/*
 * XREFs of ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x140392ADC
 * Callers:
 *     ?ReportDeviceAllocations@DXGDEVICE@@QEAAXXZ @ 0x140392A80 (-ReportDeviceAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1404110F4 (-ReportDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x14005A138 (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     ?GetProcessID@DXGPROCESS@@QEBAQEAXXZ @ 0x14005DA58 (-GetProcessID@DXGPROCESS@@QEBAQEAXXZ.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x14006B8A4 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall DXGDEVICE::ReportAllocationState(DXGDEVICE *this, struct DXGALLOCATION *a2, int a3)
{
  __int64 v3; // r14
  __int64 v6; // rax
  __int64 v7; // rbp
  int v8; // ebx
  __int64 v9; // rdi
  char v10; // si
  __int64 ProcessID; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // [rsp+40h] [rbp-E8h]
  int v18; // [rsp+48h] [rbp-E0h]
  int v19; // [rsp+50h] [rbp-D8h]
  int v20; // [rsp+58h] [rbp-D0h]
  int v21; // [rsp+60h] [rbp-C8h]
  int v22; // [rsp+68h] [rbp-C0h]
  int v23; // [rsp+70h] [rbp-B8h]
  int v24; // [rsp+78h] [rbp-B0h]
  int v25; // [rsp+88h] [rbp-A0h]
  int v26; // [rsp+90h] [rbp-98h]
  int v27; // [rsp+98h] [rbp-90h]
  int v28; // [rsp+A0h] [rbp-88h]
  int v29; // [rsp+A8h] [rbp-80h]
  int v30; // [rsp+B0h] [rbp-78h]
  int v31; // [rsp+B8h] [rbp-70h]
  int v32; // [rsp+C0h] [rbp-68h]
  int v33; // [rsp+C8h] [rbp-60h]
  int v34; // [rsp+D0h] [rbp-58h]
  int v35; // [rsp+D8h] [rbp-50h]
  int v36; // [rsp+E0h] [rbp-48h]
  int v37; // [rsp+E8h] [rbp-40h]
  unsigned int v38; // [rsp+130h] [rbp+8h]

  v3 = 0LL;
  if ( (*((_BYTE *)this + 1917) & 1) != 0 )
  {
    if ( a3 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) == 0 )
        return;
      v7 = *((_QWORD *)a2 + 6);
      v8 = *((_DWORD *)a2 + 30);
      v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v10 = (*(_DWORD *)(v7 + 4) >> 21) & 0x3F;
      ProcessID = DXGPROCESS::GetProcessID(*((DXGPROCESS **)this + 5));
      McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
        v12,
        &EventReportAdapterAllocation,
        v13,
        ProcessID,
        (char)this,
        v9,
        0,
        v8,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        v7,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37,
        v10,
        0);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
    {
      v38 = *((_DWORD *)a2 + 5);
      v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v15 = DXGPROCESS::GetProcessID(*((DXGPROCESS **)this + 5));
      McTemplateK0ppppppppppppq_EtwWriteTransfer(v38, &EventReportDeviceAllocation, v16, v15, this, v14, a2);
    }
  }
  else
  {
    if ( a3 )
    {
      v6 = *((_QWORD *)a2 + 5);
      if ( v6 )
        v3 = *(_QWORD *)(v6 + 56);
      (*(void (__fastcall **)(DXGDEVICE *, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                           + 552LL))(
        this,
        *((_QWORD *)a2 + 6),
        v3);
    }
    (*(void (__fastcall **)(DXGDEVICE *, struct DXGALLOCATION *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                            + 8LL)
                                                                + 560LL))(
      this,
      a2);
  }
}
