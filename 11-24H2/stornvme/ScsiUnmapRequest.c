/*
 * XREFs of ScsiUnmapRequest @ 0x140004080
 * Callers:
 *     ScsiToNVMe @ 0x140002940 (ScsiToNVMe.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002390 (NVMeSetSenseData.c)
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall ScsiUnmapRequest(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // cl
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // bp
  __int64 v11; // r14
  _BYTE *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r14
  unsigned __int8 v16; // cl
  __int64 v17; // rax
  int v18; // eax
  __int64 PhysicalAddress; // rax
  int v20; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_BYTE *)(a2 + 2);
  if ( v4 == 40 )
    v6 = *(_QWORD *)(a2 + 104);
  else
    v6 = *(_QWORD *)(a2 + 56);
  if ( (v6 & 0xFFF) != 0 )
    v6 = v6 - (v6 & 0xFFF) + 4096;
  if ( v4 == 40 )
  {
    v7 = *(_QWORD *)(a2 + 64);
    v8 = 60LL;
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 24);
    v8 = 16LL;
  }
  if ( (*(_DWORD *)(a1 + 56) & 1) != 0
    || (*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 520LL) & 4) == 0 && !*(_BYTE *)(a1 + 4075)
    || (*(_BYTE *)(a3 + 1) & 1) != 0 )
  {
    NVMeSetSenseData(a2, 6, 5, 0x24u);
    return 3238002694LL;
  }
  else if ( *(_DWORD *)(v8 + a2) < 0x18u )
  {
    NVMeSetSenseData(a2, 21, 5, 0x24u);
    return 3238002692LL;
  }
  else
  {
    BYTE1(v20) = *(_BYTE *)(v7 + 2);
    LOBYTE(v20) = *(_BYTE *)(v7 + 3);
    v9 = *(unsigned __int8 *)(a1 + 4075);
    v10 = (unsigned __int16)v20 >> 4;
    v11 = v7 + 8;
    if ( (_BYTE)v9 )
    {
      if ( v10 > v9 )
      {
LABEL_13:
        NVMeSetSenseData(a2, 21, 5, 0x24u);
        return 3238002694LL;
      }
    }
    else if ( v10 > 0x100u )
    {
      goto LABEL_13;
    }
    memset((void *)v6, 0, 0x1000uLL);
    if ( v10 )
    {
      v13 = (_BYTE *)(v6 + 14);
      v14 = v10;
      v15 = v11 - v6;
      do
      {
        v13[1] = v13[v15 - 14];
        *v13 = v13[v15 - 13];
        *(v13 - 1) = v13[v15 - 12];
        *(v13 - 2) = v13[v15 - 11];
        *(v13 - 3) = v13[v15 - 10];
        *(v13 - 4) = v13[v15 - 9];
        *(v13 - 5) = v13[v15 - 8];
        *(v13 - 6) = v13[v15 - 7];
        *(v13 - 7) = v13[v15 - 6];
        *(v13 - 8) = v13[v15 - 5];
        *(v13 - 9) = v13[v15 - 4];
        *(v13 - 10) = v13[v15 - 3];
        v13 += 16;
        --v14;
      }
      while ( v14 );
    }
    *(_BYTE *)(v6 + 4225) = *(_BYTE *)(v6 + 4225) & 0xFC | 2;
    SrbAssignQueueId(a1, a2);
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v16 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v16 = *(_BYTE *)(a2 + 7);
    if ( (unsigned int)v16 < *(_DWORD *)(a1 + 224) && (v17 = *(_QWORD *)(a1 + 8LL * v16 + 1672)) != 0 )
      v18 = *(_DWORD *)(v17 + 16);
    else
      v18 = 0;
    *(_DWORD *)(v6 + 4140) |= 4u;
    *(_BYTE *)(v6 + 4096) = 9;
    *(_BYTE *)(v6 + 4136) = v10 - 1;
    *(_DWORD *)(v6 + 4100) = v18;
    v20 = 0;
    PhysicalAddress = StorPortGetPhysicalAddress(a1, a2, v6, &v20);
    *(_BYTE *)(v6 + 4225) |= 4u;
    *(_QWORD *)(v6 + 4120) = PhysicalAddress;
    return 0LL;
  }
}
