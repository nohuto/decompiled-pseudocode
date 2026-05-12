/*
 * XREFs of ScsiToNVMeCommand2 @ 0x140116A7C
 * Callers:
 *     NvmeNamespaceExecuteScsiSrbEx @ 0x140100A80 (NvmeNamespaceExecuteScsiSrbEx.c)
 * Callees:
 *     RaidGetSystemAddressForMdl @ 0x140028D40 (RaidGetSystemAddressForMdl.c)
 *     SetPrpFromBuffer @ 0x1400BFE7C (SetPrpFromBuffer.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     MdlToNVMeCommandPrp @ 0x1400FA908 (MdlToNVMeCommandPrp.c)
 *     ScsiInquiryRequest @ 0x140115960 (ScsiInquiryRequest.c)
 *     ScsiModeSelectRequest @ 0x140115AE8 (ScsiModeSelectRequest.c)
 *     ScsiModeSenseRequest @ 0x140115C18 (ScsiModeSenseRequest.c)
 *     ScsiReadWriteRequest @ 0x140115E44 (ScsiReadWriteRequest.c)
 *     ScsiSecurityProtocolIn @ 0x14011635C (ScsiSecurityProtocolIn.c)
 *     ScsiSecurityProtocolOut @ 0x14011641C (ScsiSecurityProtocolOut.c)
 *     ScsiStartStopUnitRequest @ 0x1401164DC (ScsiStartStopUnitRequest.c)
 *     ScsiSyncCacheRequest @ 0x140116518 (ScsiSyncCacheRequest.c)
 *     ScsiUnmapRequest @ 0x1401171E4 (ScsiUnmapRequest.c)
 *     SetSrbSenseData @ 0x140117490 (SetSrbSenseData.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall ScsiToNVMeCommand2(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rax
  __int64 *v5; // r12
  char v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v11; // r8
  char v12; // di
  unsigned int v13; // r11d
  __int64 v14; // r10
  __int64 v15; // rcx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // r8
  char v19; // si
  unsigned __int8 v20; // r9
  unsigned int v21; // edi
  __int64 i; // r11
  __int64 v23; // rcx
  unsigned __int64 v24; // r10
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // r14
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  __int64 v31; // rcx
  int started; // eax
  int DmaBuffer; // esi
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // edi
  __int64 v42; // rcx
  unsigned __int64 v43; // r10
  __int64 v44; // rcx
  __int64 v45; // rax
  struct _MDL *v46; // rdi
  int v47; // eax
  char v48; // cl
  int v49; // eax
  unsigned int v50; // r15d
  __int64 v51; // r8
  char v52; // cl
  const void **v53; // r14
  int v54; // eax
  __int64 *v55; // rdx
  const void **v56; // rdi
  bool v57; // zf
  char v58; // cl
  int v59; // eax
  __int64 v60; // rdx
  int v61; // ecx
  int v62; // ecx
  __int64 v63; // rax
  int *v64; // r8
  __int64 v65; // rax
  void (__fastcall *v66)(__int64, _QWORD, int *); // rax
  __int64 v67; // rcx
  void *QuadPart; // rax
  const void **v69; // rax
  void *v71[2]; // [rsp+30h] [rbp-10h] BYREF
  const void *v72; // [rsp+80h] [rbp+40h] BYREF
  __int64 v73; // [rsp+88h] [rbp+48h]
  __int64 v74; // [rsp+90h] [rbp+50h]

  v74 = a3;
  v4 = *(_QWORD *)(a1 + 16);
  v72 = 0LL;
  v5 = (__int64 *)a4;
  v6 = *(_BYTE *)(a2 + 2);
  v7 = a3;
  *(_OWORD *)v71 = 0LL;
  v8 = a2;
  v9 = HIDWORD(*(_QWORD *)(v4 + 136));
  LOBYTE(v9) = v9 & 1;
  v73 = v9;
  if ( v6 != 40 )
  {
    v20 = *(_BYTE *)(a2 + 10);
    v11 = a2 + 72;
    goto LABEL_31;
  }
  v11 = 0LL;
  v12 = 0;
  if ( *(_DWORD *)(a2 + 20) )
    goto LABEL_22;
  v13 = *(_DWORD *)(a2 + 56);
  v14 = 0LL;
  if ( !v13 )
    goto LABEL_22;
  while ( 1 )
  {
    v15 = *(unsigned int *)(v8 + 4 * v14 + 120);
    if ( (unsigned int)v15 >= 0x80 )
    {
      a4 = *(unsigned int *)(v8 + 16);
      if ( (unsigned int)v15 < (unsigned int)a4 )
        break;
    }
LABEL_17:
    v14 = (unsigned int)(v14 + 1);
    if ( (unsigned int)v14 >= v13 )
      goto LABEL_22;
  }
  a2 = (unsigned int)v15;
  v16 = *(_DWORD *)(v15 + v8) - 64;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v17 )
    {
      if ( v17 == 1 && a2 + 40 <= a4 )
      {
        if ( !*(_DWORD *)(a2 + v8 + 12) )
          goto LABEL_22;
        v18 = v8 + 32;
        goto LABEL_21;
      }
    }
    else if ( a2 + 56 <= a4 )
    {
      v12 = 1;
      if ( !*(_BYTE *)(a2 + v8 + 10) )
        goto LABEL_22;
      v11 = a2 + v8 + 24;
    }
    goto LABEL_16;
  }
  if ( a2 + 40 > a4 )
  {
LABEL_16:
    if ( v12 )
      goto LABEL_22;
    goto LABEL_17;
  }
  if ( !*(_BYTE *)(a2 + v8 + 10) )
    goto LABEL_22;
  v18 = v8 + 24;
LABEL_21:
  v11 = a2 + v18;
LABEL_22:
  v19 = 0;
  v20 = 0;
  if ( !*(_DWORD *)(v8 + 20) )
  {
    v21 = *(_DWORD *)(v8 + 56);
    for ( i = 0LL; (unsigned int)i < v21; i = (unsigned int)(i + 1) )
    {
      v23 = *(unsigned int *)(v8 + 4 * i + 120);
      if ( (unsigned int)v23 >= 0x80 )
      {
        v24 = *(unsigned int *)(v8 + 16);
        if ( (unsigned int)v23 < (unsigned int)v24 )
        {
          a2 = (unsigned int)v23;
          v25 = *(_DWORD *)(v23 + v8) - 64;
          if ( v25 )
          {
            v26 = v25 - 1;
            if ( v26 )
            {
              if ( v26 == 1 && a2 + 40 <= v24 )
                break;
            }
            else if ( a2 + 56 <= v24 )
            {
              v20 = *(_BYTE *)(a2 + v8 + 10);
              v19 = 1;
            }
          }
          else if ( a2 + 40 <= v24 )
          {
            v20 = *(_BYTE *)(a2 + v8 + 10);
            break;
          }
          if ( v19 )
            break;
        }
      }
    }
  }
  v7 = v74;
LABEL_31:
  v27 = *v5 + 4096;
  if ( v20 < 6u || !v11 )
  {
    LOBYTE(a4) = 32;
    LOBYTE(v11) = 5;
    LOBYTE(a2) = 8;
    SetSrbSenseData(v8, a2, v11, a4, 0);
    return (unsigned int)-1056964601;
  }
  v28 = *(unsigned __int8 *)v11;
  if ( v28 > 0x42 )
  {
    if ( v28 > 0x8A )
    {
      v38 = v28 - 143;
      if ( !v38 )
        goto LABEL_102;
      v39 = v38 - 12;
      if ( v39 )
      {
        v40 = v39 - 7;
        if ( v40 )
        {
          if ( v40 != 19 )
            goto LABEL_77;
          v47 = ScsiSecurityProtocolOut(a1, v8, (_BYTE *)v11, *v5 + 4096);
        }
        else
        {
          v47 = ScsiSecurityProtocolIn(a1, v8, (_BYTE *)v11, *v5 + 4096);
        }
        DmaBuffer = v47;
        *(_DWORD *)(*v5 + 4256) |= 1u;
        goto LABEL_103;
      }
      goto LABEL_57;
    }
    if ( v28 != 138 )
    {
      v34 = v28 - 72;
      if ( v34 )
      {
        v35 = v34 - 5;
        if ( v35 )
        {
          v36 = v35 - 8;
          if ( !v36 )
            goto LABEL_71;
          v37 = v36 - 5;
          if ( !v37 )
            goto LABEL_70;
          if ( v37 != 46 )
            goto LABEL_77;
LABEL_68:
          started = ScsiReadWriteRequest(a1, v8, v11, v7, 1, v5);
          goto LABEL_52;
        }
      }
LABEL_57:
      *(_BYTE *)(v8 + 3) = 6;
      goto LABEL_58;
    }
LABEL_72:
    started = ScsiReadWriteRequest(a1, v8, v11, v7, 0, v5);
    goto LABEL_52;
  }
  if ( v28 == 66 )
  {
    started = ScsiUnmapRequest(a1, v8, v11, v5);
    goto LABEL_52;
  }
  if ( v28 > 0x28 )
  {
    if ( v28 != 42 )
    {
      if ( v28 == 47 )
        goto LABEL_102;
      if ( v28 == 53 )
      {
        started = ScsiSyncCacheRequest(a1, v8, *v5 + 4096);
        goto LABEL_52;
      }
      if ( v28 != 59 )
        goto LABEL_77;
      goto LABEL_57;
    }
    goto LABEL_72;
  }
  if ( v28 == 40 )
    goto LABEL_68;
  if ( !*(_BYTE *)v11 )
  {
LABEL_102:
    *(_BYTE *)(v8 + 3) = 1;
    DmaBuffer = 0;
    goto LABEL_103;
  }
  v29 = v28 - 18;
  if ( !v29 )
  {
    started = ScsiInquiryRequest(a1, v8, v11);
LABEL_52:
    DmaBuffer = started;
    goto LABEL_103;
  }
  v30 = v29 - 3;
  if ( !v30 )
  {
LABEL_71:
    started = ScsiModeSelectRequest(a1, v8, (char *)v11);
    goto LABEL_52;
  }
  v31 = v30 - 5;
  if ( !(_DWORD)v31 )
  {
LABEL_70:
    started = ScsiModeSenseRequest(a1, v8, (_BYTE *)v11);
    goto LABEL_52;
  }
  if ( (_DWORD)v31 == 1 )
  {
    started = ScsiStartStopUnitRequest(v31, v8, v11);
    goto LABEL_52;
  }
LABEL_77:
  if ( v6 == 40 && (*(_BYTE *)(v8 + 24) & 0xC0) == 0xC0 )
  {
    v41 = *(_DWORD *)(v8 + 56);
    v11 = 0LL;
    if ( v41 )
    {
      while ( 1 )
      {
        v42 = *(unsigned int *)(v8 + 4 * v11 + 120);
        a2 = 0LL;
        if ( (unsigned int)v42 >= 0x80 )
        {
          v43 = *(unsigned int *)(v8 + 16);
          if ( (unsigned int)v42 <= (unsigned int)v43 )
          {
            LODWORD(a4) = v42 + v8;
            if ( *(_DWORD *)(v42 + v8) == 1 && v42 + 24 <= v43 )
              break;
          }
        }
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= v41 )
          goto LABEL_87;
      }
      a2 = v42 + v8;
LABEL_87:
      if ( a2 && *(_QWORD *)(a2 + 16) )
      {
        LODWORD(v11) = *(_DWORD *)(v8 + 56);
        v44 = 0LL;
        while ( 1 )
        {
          a2 = *(unsigned int *)(v8 + 4 * v44 + 120);
          if ( (unsigned int)a2 >= 0x80 && (unsigned int)a2 < *(_DWORD *)(v8 + 16) )
          {
            v45 = v8 + a2;
            if ( *(_DWORD *)(v8 + a2) == 160 )
              break;
          }
          v44 = (unsigned int)(v44 + 1);
          if ( (unsigned int)v44 >= (unsigned int)v11 )
            goto LABEL_98;
        }
        if ( v45 )
        {
          v46 = *(struct _MDL **)(v45 + 8);
          if ( v46 )
          {
            *(_QWORD *)(v45 + 8) = 0LL;
            MmUnlockPages(v46);
            IoFreeMdl(v46);
          }
        }
      }
    }
  }
LABEL_98:
  LOBYTE(a4) = 32;
  LOBYTE(v11) = 5;
  LOBYTE(a2) = 6;
  SetSrbSenseData(v8, a2, v11, a4, 0);
LABEL_58:
  DmaBuffer = -1073741808;
LABEL_103:
  if ( *(_BYTE *)(v8 + 3) || (*(_DWORD *)(*v5 + 4256) & 4) != 0 )
    return (unsigned int)DmaBuffer;
  v48 = *(_BYTE *)(v8 + 2);
  if ( v48 == 40 )
    v49 = *(_DWORD *)(v8 + 24);
  else
    v49 = *(_DWORD *)(v8 + 12);
  if ( (v49 & 0xC0) == 0 || (v48 != 40 ? (v50 = *(_DWORD *)(v8 + 16)) : (v50 = *(_DWORD *)(v8 + 60)), !v50) )
  {
    *(_DWORD *)(*v5 + 4256) &= ~2u;
    return (unsigned int)DmaBuffer;
  }
  if ( (_BYTE)v73 )
  {
    DmaBuffer = MdlToNVMeCommandPrp(v27, v50, *(_DWORD **)(v74 + 8), (_QWORD *)*v5, v5[1]);
    if ( DmaBuffer < 0 )
      goto LABEL_153;
    v56 = (const void **)(v8 + 24);
    if ( *(_BYTE *)(v8 + 2) == 40 )
      v61 = *(_DWORD *)v56;
    else
      v61 = *(_DWORD *)(v8 + 12);
    v62 = v61 & 0x40;
    v53 = (const void **)(v8 + 24);
    v63 = *(_QWORD *)(a1 + 16);
    v64 = (int *)(*(_QWORD *)(v63 + 128) + 1144LL);
    if ( *(_QWORD *)(v74 + 8) )
    {
      if ( *(_QWORD *)(v63 + 128) != -1144LL )
      {
        if ( *(_QWORD *)v64 )
        {
          v65 = *(_QWORD *)(*(_QWORD *)v64 + 8LL);
          if ( v65 )
          {
            if ( v64[7] >= 3 && (v66 = *(void (__fastcall **)(__int64, _QWORD, int *))(v65 + 240)) != 0LL )
            {
              v57 = v62 == 0;
              v67 = *(_QWORD *)v64;
              LOBYTE(v64) = !v57;
              v66(v67, *(_QWORD *)(v74 + 8), v64);
            }
            else
            {
              LOBYTE(v64) = 1;
              LOBYTE(v60) = v62 != 0;
              KeFlushIoBuffers(*(_QWORD *)(v74 + 8), v60, v64);
            }
LABEL_127:
            v57 = (_BYTE)v73 == 0;
            *(_DWORD *)(*v5 + 4256) |= 2u;
            v58 = *(_BYTE *)(v8 + 2);
            if ( v57 )
            {
              if ( v58 == 40 )
                v59 = *(_DWORD *)v56;
              else
                v59 = *(_DWORD *)(v8 + 12);
              if ( (v59 & 0x80u) != 0 )
              {
                if ( v58 == 40 )
                  v56 = (const void **)(v8 + 64);
                memmove(v71[0], *v56, v50);
                *(_DWORD *)(*v5 + 4256) |= 0x200u;
              }
              *(void **)(*v5 + 4160) = v71[0];
              QuadPart = v71[1];
            }
            else
            {
              v69 = (const void **)(v8 + 64);
              if ( v58 != 40 )
                v69 = v56;
              *(_QWORD *)(*v5 + 4160) = *v69;
              QuadPart = (void *)MmGetPhysicalAddress(*(PVOID *)(*v5 + 4160)).QuadPart;
            }
            *(_QWORD *)(*v5 + 4168) = QuadPart;
            *(_DWORD *)(*v5 + 4248) = v50;
            return (unsigned int)DmaBuffer;
          }
        }
      }
    }
LABEL_126:
    v56 = v53;
    if ( DmaBuffer < 0 )
      goto LABEL_153;
    goto LABEL_127;
  }
  DmaBuffer = NvmeAllocateDmaBuffer(*(_QWORD *)(a1 + 16), v50, v11, v71, &v71[1], 0);
  if ( DmaBuffer < 0 )
    goto LABEL_153;
  if ( !(unsigned int)SetPrpFromBuffer(*v5, *v5 + 4096, (__int64)v71[1], v50, (_QWORD *)*v5, v5[1]) )
  {
    DmaBuffer = -1073741823;
    NvmeFreeDmaBuffer(*(_QWORD *)(a1 + 16), v50, v51, (__int64)v71[0], (__int64)v71[1]);
  }
  v52 = *(_BYTE *)(v8 + 2);
  v53 = (const void **)(v8 + 24);
  if ( v52 == 40 )
    v54 = *(_DWORD *)v53;
  else
    v54 = *(_DWORD *)(v8 + 12);
  if ( (v54 & 0x40) == 0 )
    goto LABEL_126;
  v55 = (__int64 *)(v8 + 64);
  if ( v52 != 40 )
    v55 = (__int64 *)(v8 + 24);
  DmaBuffer = RaidGetSystemAddressForMdl(*(_QWORD *)(v74 + 8), *v55, *(_BYTE *)(v74 + 64) != 0 ? 16 : 32, &v72);
  if ( DmaBuffer >= 0 )
  {
    if ( *(_BYTE *)(v8 + 2) == 40 )
      *(_QWORD *)(v8 + 64) = v72;
    else
      *v53 = v72;
    goto LABEL_126;
  }
LABEL_153:
  *(_BYTE *)(v8 + 3) = 4;
  return (unsigned int)DmaBuffer;
}
