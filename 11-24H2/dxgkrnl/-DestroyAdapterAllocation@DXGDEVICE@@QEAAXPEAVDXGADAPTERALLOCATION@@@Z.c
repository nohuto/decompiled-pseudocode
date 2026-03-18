/*
 * XREFs of ?DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z @ 0x140325B54
 * Callers:
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1403252DC (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x14032DAA0 (-CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x14033A348 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1403AB220 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 * Callees:
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x14005A138 (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     ?GetProcessID@DXGPROCESS@@QEBAQEAXXZ @ 0x14005DA58 (-GetProcessID@DXGPROCESS@@QEBAQEAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall DXGDEVICE::DestroyAdapterAllocation(DXGDEVICE *this, struct DXGADAPTERALLOCATION *a2)
{
  char v3; // bp
  __int64 v4; // rbx
  __int64 v5; // rdi
  char v6; // si
  __int64 ProcessID; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // [rsp+40h] [rbp-C8h]
  int v11; // [rsp+48h] [rbp-C0h]
  int v12; // [rsp+50h] [rbp-B8h]
  int v13; // [rsp+58h] [rbp-B0h]
  int v14; // [rsp+60h] [rbp-A8h]
  int v15; // [rsp+68h] [rbp-A0h]
  int v16; // [rsp+70h] [rbp-98h]
  int v17; // [rsp+78h] [rbp-90h]
  int v18; // [rsp+88h] [rbp-80h]
  int v19; // [rsp+90h] [rbp-78h]
  int v20; // [rsp+98h] [rbp-70h]
  int v21; // [rsp+A0h] [rbp-68h]
  int v22; // [rsp+A8h] [rbp-60h]
  int v23; // [rsp+B0h] [rbp-58h]
  int v24; // [rsp+B8h] [rbp-50h]
  int v25; // [rsp+C0h] [rbp-48h]
  int v26; // [rsp+C8h] [rbp-40h]
  int v27; // [rsp+D0h] [rbp-38h]
  int v28; // [rsp+D8h] [rbp-30h]
  int v29; // [rsp+E0h] [rbp-28h]
  int v30; // [rsp+E8h] [rbp-20h]

  v3 = (char)this;
  if ( (*((_BYTE *)this + 1917) & 1) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
    {
      v4 = *((_QWORD *)a2 + 14);
      v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v6 = (*((_DWORD *)a2 + 1) >> 21) & 0x3F;
      ProcessID = DXGPROCESS::GetProcessID(*((DXGPROCESS **)this + 5));
      McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
        v8,
        (const EVENT_DESCRIPTOR *)"\"",
        v9,
        ProcessID,
        v3,
        v5,
        0,
        v4,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        (char)a2,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30,
        v6,
        0);
    }
  }
  else if ( *((_QWORD *)a2 + 1) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 112LL))(
      *((_QWORD *)this + 99),
      0LL);
    *((_QWORD *)a2 + 1) = 0LL;
  }
}
