/*
 * XREFs of ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1400B95D8
 * Callers:
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x14019C5B8 (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400334D0 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400755B0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?GetRDPHeaderUserMode@CBatch@DirectComposition@@QEAAPEAUUCE_RDP_HEADER@@XZ @ 0x1400B9CEC (-GetRDPHeaderUserMode@CBatch@DirectComposition@@QEAAPEAUUCE_RDP_HEADER@@XZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CConnection::RetrieveBatches(
        DirectComposition::CConnection *this,
        __int64 a2,
        const struct UCE_RDP_HEADER **a3)
{
  int v3; // esi
  const struct UCE_RDP_HEADER *v4; // rdi
  __int64 v5; // r13
  bool v7; // bp
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // rax
  DirectComposition::CBatch *v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rdi
  struct _ERESOURCE *v23; // rcx
  _QWORD *v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v28; // rax
  __int64 v30; // rcx
  struct UCE_RDP_HEADER *RDPHeaderUserMode; // [rsp+50h] [rbp-58h]
  struct UCE_RDP_HEADER *v32; // [rsp+58h] [rbp-50h]
  __int64 v33; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v34[8]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v37; // [rsp+C8h] [rbp+20h] BYREF

  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v32 = 0LL;
  v7 = 0;
  if ( !a2 )
  {
    v30 = *((_QWORD *)this + 14);
    if ( v30 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v30 + 8) + 8LL))(*(_QWORD *)(v30 + 8)) != 2 )
        v7 = 1;
    }
  }
  while ( 1 )
  {
    v8 = (_QWORD *)*((_QWORD *)this + 14);
    if ( !v8 || v7 )
      break;
    v3 = 0;
    v9 = (_QWORD *)v8[17];
    v10 = v8[18] + 40LL;
    v11 = v8[19];
    v12 = v9[6];
    if ( !v12 )
    {
      v28 = v9[2];
      v34[0] = 0LL;
      v33 = 0LL;
      v37 = 0LL;
      v3 = MmMapViewOfSection(v9[3], *(_QWORD *)(v28 + 16), &v37, 0LL, 4096LL, v34, &v33, 2, 0x400000, 2);
      if ( v3 < 0 )
        return (unsigned int)v3;
      v12 = v37;
      v9[6] = v37;
    }
    v13 = (DirectComposition::CBatch *)*((_QWORD *)this + 14);
    v14 = v12 + v10;
    v15 = *((_QWORD *)v13 + 18) + *(_QWORD *)(*((_QWORD *)v13 + 17) + 56LL);
    RDPHeaderUserMode = DirectComposition::CBatch::GetRDPHeaderUserMode(v13);
    v18 = *(unsigned int *)(*((_QWORD *)this + 14) + 20LL);
    *(_QWORD *)(v15 + 8) = 0LL;
    *(_DWORD *)(v15 + 4) = 40;
    *(_DWORD *)v15 = v18;
    v19 = *((_QWORD *)this + 14);
    if ( *(_DWORD *)(v19 + 20) == 7 )
    {
      *(_DWORD *)(v15 + 16) = *(_DWORD *)(*(_QWORD *)(v19 + 8) + 28LL);
      *(_QWORD *)(v15 + 24) = v14;
      *(_DWORD *)(v15 + 20) = v11;
      v18 = *((_QWORD *)this + 14);
      *(_QWORD *)(v18 + 64) = *((_QWORD *)this + 21);
      v19 = *((_QWORD *)this + 14);
    }
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100000) != 0 )
      McTemplateK0p_EtwWriteTransfer(v18, (__int64)&DCompGetBatchEvent, (__int64)&W32kControlGuid, v19);
    v20 = **((_QWORD **)this + 14);
    if ( !a2 && v20 )
      v7 = (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(v20 + 8) + 8LL))(
             *(_QWORD *)(v20 + 8),
             v16,
             v17,
             v19) != 2;
    v21 = *((_QWORD *)this + 14);
    *(_BYTE *)(v21 + 32) |= 4u;
    v22 = *(_QWORD *)(v21 + 8);
    if ( *(_DWORD *)(v21 + 20) == 7 )
    {
      v23 = *(struct _ERESOURCE **)(v22 + 392);
      if ( v23 )
      {
        DirectComposition::CCriticalSection::AcquireExclusive(v23);
        if ( (*(_DWORD *)(v22 + 248))-- == 1 )
          KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v22 + 384) + 8LL), 1, 0);
        ExReleaseResourceLite(*(PERESOURCE *)(v22 + 392));
        KeLeaveCriticalRegion();
      }
    }
    v24 = (_QWORD *)*((_QWORD *)this + 16);
    v25 = *((_QWORD *)this + 14);
    if ( v24 )
      *v24 = v25;
    else
      *((_QWORD *)this + 15) = v25;
    v26 = (_QWORD *)*((_QWORD *)this + 14);
    *((_QWORD *)this + 16) = v26;
    *v26 = 0LL;
    *((_QWORD *)this + 14) = v20;
    if ( v5 )
    {
      v4 = v32;
      *(_QWORD *)(v5 + 8) = RDPHeaderUserMode;
    }
    else
    {
      v4 = RDPHeaderUserMode;
      v32 = RDPHeaderUserMode;
    }
    v5 = v15;
  }
  *a3 = v4;
  *((_DWORD *)this + 36) = 0;
  return (unsigned int)v3;
}
