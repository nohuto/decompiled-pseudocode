/*
 * XREFs of ?DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z @ 0x140339FE4
 * Callers:
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x140339754 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x14033AFE0 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x14033E700 (-CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1403502AC (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 * Callees:
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x14005A738 (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall DXGDEVICE::DestroyAdapterAllocation(DXGDEVICE *this, struct DXGADAPTERALLOCATION *a2, __int64 a3)
{
  int v4; // [rsp+40h] [rbp-C8h]
  int v5; // [rsp+48h] [rbp-C0h]
  int v6; // [rsp+50h] [rbp-B8h]
  int v7; // [rsp+58h] [rbp-B0h]
  int v8; // [rsp+60h] [rbp-A8h]
  int v9; // [rsp+68h] [rbp-A0h]
  int v10; // [rsp+70h] [rbp-98h]
  int v11; // [rsp+78h] [rbp-90h]
  int v12; // [rsp+88h] [rbp-80h]
  int v13; // [rsp+90h] [rbp-78h]
  int v14; // [rsp+98h] [rbp-70h]
  int v15; // [rsp+A0h] [rbp-68h]
  int v16; // [rsp+A8h] [rbp-60h]
  int v17; // [rsp+B0h] [rbp-58h]
  int v18; // [rsp+B8h] [rbp-50h]
  int v19; // [rsp+C0h] [rbp-48h]
  int v20; // [rsp+C8h] [rbp-40h]
  int v21; // [rsp+D0h] [rbp-38h]
  int v22; // [rsp+D8h] [rbp-30h]
  int v23; // [rsp+E0h] [rbp-28h]
  int v24; // [rsp+E8h] [rbp-20h]

  if ( (*((_BYTE *)this + 1901) & 1) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
      McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
        (*((_DWORD *)a2 + 1) >> 21) & 0x3F,
        (const EVENT_DESCRIPTOR *)"\"",
        a3,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 64LL) + 80LL),
        (char)this,
        *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
        0,
        *((_QWORD *)a2 + 14),
        v4,
        v5,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11,
        (char)a2,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        (*((_DWORD *)a2 + 1) >> 21) & 0x3F,
        0);
  }
  else if ( *((_QWORD *)a2 + 1) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 112LL))(
      *((_QWORD *)this + 99),
      0LL);
    *((_QWORD *)a2 + 1) = 0LL;
  }
}
