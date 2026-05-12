/*
 * XREFs of ScsiReadWriteRequest @ 0x140115E44
 * Callers:
 *     ScsiToNVMeCommand2 @ 0x140116A7C (ScsiToNVMeCommand2.c)
 * Callees:
 *     RaidNtStatusToSrbStatus @ 0x1400059F0 (RaidNtStatusToSrbStatus.c)
 *     RaidGetSystemAddressForMdl @ 0x140028D40 (RaidGetSystemAddressForMdl.c)
 *     SetPrpFromBuffer @ 0x1400BFE7C (SetPrpFromBuffer.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     MdlToNVMeCommandPrp @ 0x1400FA908 (MdlToNVMeCommandPrp.c)
 *     SetSrbSenseData @ 0x140117490 (SetSrbSenseData.c)
 *     PortSrbGetLbaFromCdb @ 0x14013AC9C (PortSrbGetLbaFromCdb.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140143780 (memmove.c)
 */

__int64 __fastcall ScsiReadWriteRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 *a6)
{
  __int64 v6; // rax
  int v7; // r8d
  __int64 v8; // r12
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rbx
  char v13; // cl
  unsigned int v14; // esi
  int v15; // eax
  __int64 *v16; // r15
  unsigned __int8 v17; // r10
  char v18; // r11
  unsigned int v19; // r12d
  unsigned int v20; // r9d
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // ecx
  __int64 LbaFromCdb; // rax
  char v27; // cl
  __int64 v28; // rdx
  __int64 v29; // r11
  __int64 v30; // r8
  int v31; // eax
  char v32; // r11
  __int64 v33; // rdx
  unsigned int v34; // r10d
  int *v35; // r9
  __int64 v36; // rcx
  int v37; // ecx
  int DmaBuffer; // edi
  __int64 v39; // r8
  char v40; // cl
  int *v41; // r14
  int *v42; // r12
  int v43; // eax
  const void **v44; // rdx
  char v45; // cl
  __int64 *v46; // rdx
  char v47; // al
  __int64 v48; // rdx
  int v49; // ecx
  __int64 v50; // r10
  int v51; // ecx
  __int64 v52; // rax
  int *v53; // r8
  __int64 v54; // rax
  void (__fastcall *v55)(__int64, __int64, int *); // rax
  bool v56; // zf
  __int64 v57; // rcx
  char v58; // al
  char v59; // al
  bool v60; // sf
  void *v62[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v63; // [rsp+98h] [rbp+50h] BYREF
  __int64 v64; // [rsp+A0h] [rbp+58h]
  __int64 v65; // [rsp+A8h] [rbp+60h]

  v65 = a4;
  v64 = a3;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = 0;
  v63 = 0LL;
  *(_OWORD *)v62 = 0LL;
  v8 = a4;
  v10 = *(_QWORD *)(v6 + 136);
  v11 = *(_DWORD *)(a1 + 64);
  v12 = a2;
  v13 = *(_BYTE *)(a2 + 2);
  if ( v13 == 40 )
    v14 = *(_DWORD *)(a2 + 60);
  else
    v14 = *(_DWORD *)(a2 + 16);
  if ( !v11
    || !v14
    || ((v11 - 1) & v14) != 0
    || (v13 != 40 ? (v15 = *(_DWORD *)(a2 + 12)) : (v15 = *(_DWORD *)(a2 + 24)), (v15 & 0xC0) == 0) )
  {
    LOBYTE(a4) = 36;
    LOBYTE(v7) = 5;
    LOBYTE(a2) = 6;
    SetSrbSenseData(v12, a2, v7, a4, 0);
    return (unsigned int)-1073741808;
  }
  v16 = a6;
  v17 = 0;
  *(_DWORD *)(*a6 + 4256) &= ~1u;
  *(_DWORD *)(*v16 + 4256) |= 2u;
  *(_DWORD *)(*v16 + 4256) |= 0x20u;
  *(_DWORD *)(*v16 + 4256) &= ~0x40u;
  *(_DWORD *)(*v16 + 4256) = (a5 == 0 ? 0x200 : 0) | *(_DWORD *)(*v16 + 4256) & 0xFFFFFDFF;
  *(_DWORD *)(*v16 + 4256) |= 0x20000u;
  *(_DWORD *)(*v16 + 4248) = v14;
  *(_QWORD *)(*v16 + 4200) = v16;
  *(_QWORD *)(*v16 + 4192) = NvmeNamespaceExecuteScsiSrbExComplete;
  if ( *(_BYTE *)(a2 + 2) != 40 )
  {
    v17 = *(_BYTE *)(a2 + 10);
    goto LABEL_21;
  }
  v18 = 0;
  if ( *(_DWORD *)(a2 + 20) )
    goto LABEL_21;
  v19 = *(_DWORD *)(a2 + 56);
  v20 = 0;
  if ( !v19 )
    goto LABEL_20;
  while ( 1 )
  {
    v21 = *(unsigned int *)(v12 + 4LL * v20 + 120);
    if ( (unsigned int)v21 >= 0x80 )
    {
      v22 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v21 < (unsigned int)v22 )
        break;
    }
LABEL_27:
    if ( ++v20 >= v19 )
      goto LABEL_20;
  }
  v23 = (unsigned int)v21;
  v24 = *(_DWORD *)(v21 + v12) - 64;
  if ( v24 )
  {
    v25 = v24 - 1;
    if ( v25 )
    {
      if ( v25 == 1 && v23 + 40 <= v22 )
        goto LABEL_20;
    }
    else if ( v23 + 56 <= v22 )
    {
      v17 = *(_BYTE *)(v23 + v12 + 10);
      v18 = 1;
    }
    goto LABEL_26;
  }
  if ( v23 + 40 > v22 )
  {
LABEL_26:
    if ( v18 )
      goto LABEL_20;
    goto LABEL_27;
  }
  v17 = *(_BYTE *)(v23 + v12 + 10);
LABEL_20:
  v8 = v65;
LABEL_21:
  LbaFromCdb = PortSrbGetLbaFromCdb(v64, v17);
  v27 = *(_BYTE *)(a1 + 61);
  v28 = LbaFromCdb;
  v30 = *v16 + 4096;
  v31 = *(_DWORD *)(a1 + 56);
  v32 = *(_BYTE *)(v29 + 1) & 8;
  v33 = v28 << v27;
  v34 = v14 >> v27;
  v35 = (int *)(*v16 + 4144);
  v36 = *(unsigned int *)(a1 + 64);
  if ( a5 )
  {
    *(_BYTE *)v30 = 2;
  }
  else
  {
    *v35 &= 0xFF0FFFFF;
    *(_BYTE *)v30 = 1;
    *(_WORD *)(v30 + 54) = 0;
  }
  *(_DWORD *)v30 &= 0xFFFFFCFF;
  *(_DWORD *)(v30 + 4) = v31;
  *(_QWORD *)(v30 + 16) = 0LL;
  *(_WORD *)v35 = v34 - 1;
  *v35 &= 0xC3FFFFFF;
  *(_QWORD *)(v30 + 40) = v33 / v36;
  v37 = *v35 & 0x3FFFFFFF | (v32 != 0 ? 0x40000000 : 0);
  *(_BYTE *)(v30 + 52) = 0;
  *v35 = v37;
  *(_QWORD *)(v30 + 56) = 0LL;
  if ( (v10 & 0x100000000LL) != 0 )
  {
    DmaBuffer = MdlToNVMeCommandPrp(*v16 + 4096, v14, *(_DWORD **)(v8 + 8), (_QWORD *)*v16, v16[1]);
    if ( DmaBuffer < 0 )
      goto LABEL_53;
    if ( *(_BYTE *)(v12 + 2) == 40 )
      v49 = *(_DWORD *)(v12 + 24);
    else
      v49 = *(_DWORD *)(v12 + 12);
    v50 = *(_QWORD *)(v8 + 8);
    v51 = v49 & 0x40;
    v52 = *(_QWORD *)(a1 + 16);
    v53 = (int *)(*(_QWORD *)(v52 + 128) + 1144LL);
    if ( v50 )
    {
      if ( *(_QWORD *)(v52 + 128) != -1144LL )
      {
        if ( *(_QWORD *)v53 )
        {
          v54 = *(_QWORD *)(*(_QWORD *)v53 + 8LL);
          if ( v54 )
          {
            if ( v53[7] >= 3 && (v55 = *(void (__fastcall **)(__int64, __int64, int *))(v54 + 240)) != 0LL )
            {
              v56 = v51 == 0;
              v57 = *(_QWORD *)v53;
              LOBYTE(v53) = !v56;
              v55(v57, v50, v53);
            }
            else
            {
              LOBYTE(v48) = v51 != 0;
              KeFlushIoBuffers(v50, v48, 1LL);
            }
          }
        }
      }
    }
    goto LABEL_68;
  }
  DmaBuffer = NvmeAllocateDmaBuffer(*(_QWORD *)(a1 + 16), v14, v30, v62, &v62[1], 0);
  if ( DmaBuffer < 0 )
    goto LABEL_53;
  if ( !(unsigned int)SetPrpFromBuffer(v16[1], *v16 + 4096, (__int64)v62[1], v14, (_QWORD *)*v16, v16[1]) )
  {
    DmaBuffer = -1073741823;
    NvmeFreeDmaBuffer(*(_QWORD *)(a1 + 16), v14, v39, (__int64)v62[0], (__int64)v62[1]);
  }
  v40 = *(_BYTE *)(v12 + 2);
  v41 = (int *)(v12 + 24);
  v42 = (int *)(v12 + 12);
  if ( v40 == 40 )
    v43 = *v41;
  else
    v43 = *v42;
  if ( (v43 & 0x80u) != 0 )
  {
    v44 = (const void **)(v12 + 64);
    if ( v40 != 40 )
      v44 = (const void **)(v12 + 24);
    memmove(v62[0], *v44, v14);
  }
  *(void **)(*v16 + 4160) = v62[0];
  *(void **)(*v16 + 4168) = v62[1];
  v45 = *(_BYTE *)(v12 + 2);
  if ( v45 == 40 )
    v42 = (int *)(v12 + 24);
  if ( (*v42 & 0x40) == 0 )
  {
LABEL_52:
    if ( DmaBuffer < 0 )
      goto LABEL_53;
LABEL_68:
    *(_DWORD *)(*v16 + 4256) |= 4u;
    v58 = *(_BYTE *)(v12 + 3);
    if ( *(_BYTE *)(v12 + 2) == 40 )
    {
      v59 = (v58 >> 7) & 0x80;
    }
    else
    {
      v60 = v58 < 0;
      v59 = 0x80;
      if ( !v60 )
        v59 = 0;
    }
    *(_BYTE *)(v12 + 3) = v59;
    return 259;
  }
  v46 = (__int64 *)(v12 + 64);
  if ( v45 != 40 )
    v46 = (__int64 *)(v12 + 24);
  DmaBuffer = RaidGetSystemAddressForMdl(*(_QWORD *)(v65 + 8), *v46, *(_BYTE *)(v65 + 64) != 0 ? 16 : 32, &v63);
  if ( DmaBuffer >= 0 )
  {
    if ( *(_BYTE *)(v12 + 2) == 40 )
      *(_QWORD *)(v12 + 64) = v63;
    else
      *(_QWORD *)v41 = v63;
    goto LABEL_52;
  }
LABEL_53:
  v47 = RaidNtStatusToSrbStatus(DmaBuffer);
  if ( *(char *)(v12 + 3) < 0 )
    v47 |= 0x80u;
  *(_BYTE *)(v12 + 3) = v47;
  return (unsigned int)DmaBuffer;
}
