/*
 * XREFs of ScsiToNVMeCommand @ 0x140116554
 * Callers:
 *     NvmeNamespaceExecuteScsiSrbEx @ 0x140100A80 (NvmeNamespaceExecuteScsiSrbEx.c)
 * Callees:
 *     SetPrpFromBuffer @ 0x1400BFE7C (SetPrpFromBuffer.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     MdlToNVMeCommandPrp @ 0x1400FA908 (MdlToNVMeCommandPrp.c)
 *     ScsiInquiryRequest @ 0x140115960 (ScsiInquiryRequest.c)
 *     ScsiSecurityProtocolIn @ 0x14011635C (ScsiSecurityProtocolIn.c)
 *     ScsiSecurityProtocolOut @ 0x14011641C (ScsiSecurityProtocolOut.c)
 *     ScsiStartStopUnitRequest @ 0x1401164DC (ScsiStartStopUnitRequest.c)
 *     ScsiSyncCacheRequest @ 0x140116518 (ScsiSyncCacheRequest.c)
 *     SetSrbSenseData @ 0x140117490 (SetSrbSenseData.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall ScsiToNVMeCommand(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 *v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rbx
  char v8; // r12
  _BYTE *v9; // r10
  char v10; // di
  unsigned int v11; // r11d
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // r10
  char v16; // si
  unsigned int v17; // edi
  unsigned int i; // r11d
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // rsi
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  __int64 v26; // rcx
  int started; // eax
  int DmaBuffer; // edi
  char v29; // cl
  int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ebp
  __int64 v40; // r8
  _DWORD *v41; // rax
  _DWORD *v42; // rsi
  char v43; // cl
  int v44; // edx
  __int64 v45; // rdx
  int v46; // ecx
  int v47; // ecx
  __int64 v48; // r8
  __int64 v49; // r10
  void (__fastcall *v50)(__int64, _QWORD, __int64); // rax
  bool v51; // zf
  __int64 v52; // rcx
  const void **v53; // rdx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  _QWORD *v55; // rax
  __int128 v57; // [rsp+30h] [rbp-38h] BYREF

  v57 = 0LL;
  v4 = (__int64 *)a4;
  v5 = a3;
  v6 = a2;
  v8 = HIDWORD(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 136LL)) & 1;
  if ( *(_BYTE *)(a2 + 2) != 40 )
  {
    LOBYTE(a3) = *(_BYTE *)(a2 + 10);
    v9 = (_BYTE *)(a2 + 72);
    goto LABEL_39;
  }
  v9 = 0LL;
  v10 = 0;
  if ( *(_DWORD *)(a2 + 20) )
    goto LABEL_22;
  v11 = *(_DWORD *)(a2 + 56);
  LODWORD(a4) = 0;
  if ( !v11 )
    goto LABEL_22;
  while ( 1 )
  {
    v12 = *(unsigned int *)(v6 + 4LL * (unsigned int)a4 + 120);
    if ( (unsigned int)v12 >= 0x80 )
    {
      a3 = *(unsigned int *)(v6 + 16);
      if ( (unsigned int)v12 < (unsigned int)a3 )
        break;
    }
LABEL_17:
    LODWORD(a4) = a4 + 1;
    if ( (unsigned int)a4 >= v11 )
      goto LABEL_22;
  }
  a2 = (unsigned int)v12;
  v13 = *(_DWORD *)(v12 + v6) - 64;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 == 1 && a2 + 40 <= a3 )
      {
        if ( !*(_DWORD *)(a2 + v6 + 12) )
          goto LABEL_22;
        v15 = v6 + 32;
        goto LABEL_21;
      }
    }
    else if ( a2 + 56 <= a3 )
    {
      v10 = 1;
      if ( !*(_BYTE *)(a2 + v6 + 10) )
        goto LABEL_22;
      v9 = (_BYTE *)(a2 + v6 + 24);
    }
    goto LABEL_16;
  }
  if ( a2 + 40 > a3 )
  {
LABEL_16:
    if ( v10 )
      goto LABEL_22;
    goto LABEL_17;
  }
  if ( !*(_BYTE *)(a2 + v6 + 10) )
    goto LABEL_22;
  v15 = v6 + 24;
LABEL_21:
  v9 = (_BYTE *)(a2 + v15);
LABEL_22:
  v16 = 0;
  LOBYTE(a3) = 0;
  if ( !*(_DWORD *)(v6 + 20) )
  {
    v17 = *(_DWORD *)(v6 + 56);
    for ( i = 0; i < v17; ++i )
    {
      v19 = *(unsigned int *)(v6 + 4LL * i + 120);
      if ( (unsigned int)v19 >= 0x80 )
      {
        a4 = *(unsigned int *)(v6 + 16);
        if ( (unsigned int)v19 < (unsigned int)a4 )
        {
          a2 = (unsigned int)v19;
          v20 = *(_DWORD *)(v19 + v6) - 64;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              if ( v21 == 1 && a2 + 40 <= a4 )
                break;
            }
            else if ( a2 + 56 <= a4 )
            {
              LOBYTE(a3) = *(_BYTE *)(a2 + v6 + 10);
              v16 = 1;
            }
          }
          else if ( a2 + 40 <= a4 )
          {
            LOBYTE(a3) = *(_BYTE *)(a2 + v6 + 10);
            break;
          }
          if ( v16 )
            break;
        }
      }
    }
  }
LABEL_39:
  v22 = *v4 + 4096;
  if ( (unsigned __int8)a3 < 6u || !v9 )
  {
    LOBYTE(a4) = 32;
    LOBYTE(a3) = 5;
    LOBYTE(a2) = 8;
    SetSrbSenseData(v6, a2, a3, a4, 0);
    return (unsigned int)-1056964601;
  }
  v23 = (unsigned __int8)*v9;
  if ( v23 > 0x48 )
  {
    v31 = v23 - 77;
    if ( !v31 )
      goto LABEL_57;
    v32 = v31 - 8;
    if ( !v32 )
      goto LABEL_57;
    v33 = v32 - 5;
    if ( !v33 )
      goto LABEL_57;
    v34 = v33 - 46;
    if ( !v34 )
      goto LABEL_57;
    v35 = v34 - 2;
    if ( !v35 )
      goto LABEL_57;
    v36 = v35 - 5;
    if ( !v36 )
      goto LABEL_75;
    v37 = v36 - 12;
    if ( v37 )
    {
      v38 = v37 - 7;
      if ( v38 )
      {
        if ( v38 != 19 )
          goto LABEL_72;
        started = ScsiSecurityProtocolOut(a1, v6, v9, *v4 + 4096);
      }
      else
      {
        started = ScsiSecurityProtocolIn(a1, v6, v9, *v4 + 4096);
      }
      goto LABEL_52;
    }
LABEL_57:
    *(_BYTE *)(v6 + 3) = 6;
    goto LABEL_58;
  }
  if ( v23 == 72 )
    goto LABEL_57;
  if ( v23 > 0x28 )
  {
    if ( v23 == 42 )
      goto LABEL_57;
    if ( v23 != 47 )
    {
      if ( v23 != 53 )
      {
        if ( v23 != 59 )
          goto LABEL_72;
        goto LABEL_57;
      }
      started = ScsiSyncCacheRequest(a1, v6, *v4 + 4096);
LABEL_52:
      DmaBuffer = started;
      goto LABEL_59;
    }
LABEL_75:
    *(_BYTE *)(v6 + 3) = 1;
    DmaBuffer = 0;
    goto LABEL_59;
  }
  if ( v23 == 40 )
    goto LABEL_57;
  if ( !*v9 )
    goto LABEL_75;
  v24 = v23 - 18;
  if ( !v24 )
  {
    started = ScsiInquiryRequest(a1, v6, (__int64)v9);
    goto LABEL_52;
  }
  v25 = v24 - 3;
  if ( !v25 )
    goto LABEL_57;
  v26 = v25 - 5;
  if ( !(_DWORD)v26 )
    goto LABEL_57;
  if ( (_DWORD)v26 == 1 )
  {
    started = ScsiStartStopUnitRequest(v26, v6, (__int64)v9);
    goto LABEL_52;
  }
LABEL_72:
  LOBYTE(a4) = 32;
  LOBYTE(a3) = 5;
  LOBYTE(a2) = 6;
  SetSrbSenseData(v6, a2, a3, a4, 0);
LABEL_58:
  DmaBuffer = -1073741808;
LABEL_59:
  if ( !*(_BYTE *)(v6 + 3) )
  {
    v29 = *(_BYTE *)(v6 + 2);
    if ( v29 == 40 )
      v30 = *(_DWORD *)(v6 + 24);
    else
      v30 = *(_DWORD *)(v6 + 12);
    if ( (v30 & 0xC0) != 0 && (v29 != 40 ? (v39 = *(_DWORD *)(v6 + 16)) : (v39 = *(_DWORD *)(v6 + 60)), v39) )
    {
      if ( v8 )
      {
        DmaBuffer = MdlToNVMeCommandPrp(v22, v39, *(_DWORD **)(v5 + 8), (_QWORD *)*v4, v4[1]);
        if ( DmaBuffer < 0 )
          goto LABEL_113;
        v42 = (_DWORD *)(v6 + 24);
        if ( *(_BYTE *)(v6 + 2) == 40 )
          v46 = *v42;
        else
          v46 = *(_DWORD *)(v6 + 12);
        v47 = v46 & 0x40;
        v41 = (_DWORD *)(v6 + 24);
        v48 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 1144LL;
        if ( !*(_QWORD *)(v5 + 8) )
          goto LABEL_87;
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) == -1144LL )
          goto LABEL_87;
        if ( !*(_QWORD *)v48 )
          goto LABEL_87;
        v49 = *(_QWORD *)(*(_QWORD *)v48 + 8LL);
        if ( !v49 )
          goto LABEL_87;
        if ( *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL) + 1172LL) >= 3
          && (v50 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v49 + 240)) != 0LL )
        {
          v51 = v47 == 0;
          v52 = *(_QWORD *)v48;
          LOBYTE(v48) = !v51;
          v50(v52, *(_QWORD *)(v5 + 8), v48);
        }
        else
        {
          LOBYTE(v48) = 1;
          LOBYTE(v45) = v47 != 0;
          KeFlushIoBuffers(*(_QWORD *)(v5 + 8), v45, v48);
        }
LABEL_88:
        *(_DWORD *)(*v4 + 4256) |= 2u;
        v43 = *(_BYTE *)(v6 + 2);
        if ( v8 )
        {
          v55 = (_QWORD *)(v6 + 64);
          if ( v43 != 40 )
            v55 = v42;
          *(_QWORD *)(*v4 + 4160) = *v55;
          PhysicalAddress = MmGetPhysicalAddress(*(PVOID *)(*v4 + 4160));
        }
        else
        {
          if ( v43 == 40 )
            v44 = *(_DWORD *)(v6 + 24);
          else
            v44 = *(_DWORD *)(v6 + 12);
          if ( (v44 & 0x80u) != 0 )
          {
            v53 = (const void **)(v6 + 64);
            if ( v43 != 40 )
              v53 = (const void **)(v6 + 24);
            memmove((void *)v57, *v53, v39);
          }
          *(_QWORD *)(*v4 + 4160) = v57;
          PhysicalAddress = *(PHYSICAL_ADDRESS *)((char *)&v57 + 8);
        }
        *(PHYSICAL_ADDRESS *)(*v4 + 4168) = PhysicalAddress;
        *(_DWORD *)(*v4 + 4248) = v39;
      }
      else
      {
        DmaBuffer = NvmeAllocateDmaBuffer(*(_QWORD *)(a1 + 16), v39, a3, (void **)&v57, (_QWORD *)&v57 + 1, 0);
        if ( DmaBuffer >= 0 )
        {
          if ( !(unsigned int)SetPrpFromBuffer(*v4, *v4 + 4096, *((__int64 *)&v57 + 1), v39, (_QWORD *)*v4, v4[1]) )
          {
            DmaBuffer = -1073741823;
            NvmeFreeDmaBuffer(*(_QWORD *)(a1 + 16), v39, v40, v57, *((__int64 *)&v57 + 1));
          }
          v41 = (_DWORD *)(v6 + 24);
LABEL_87:
          v42 = v41;
          if ( DmaBuffer >= 0 )
            goto LABEL_88;
        }
LABEL_113:
        *(_BYTE *)(v6 + 3) = 4;
      }
    }
    else
    {
      *(_DWORD *)(*v4 + 4256) &= ~2u;
    }
  }
  return (unsigned int)DmaBuffer;
}
