/*
 * XREFs of StorEtwIORequestDispatch @ 0x1400023D4
 * Callers:
 *     RaUnitScsiIrp @ 0x140002710 (RaUnitScsiIrp.c)
 *     RaDriverScsiIrp @ 0x1400038A0 (RaDriverScsiIrp.c)
 *     RaidUnitSubmitIrpRequest @ 0x14000AA60 (RaidUnitSubmitIrpRequest.c)
 *     StorUnitStartBypassIo @ 0x1400A23A0 (StorUnitStartBypassIo.c)
 * Callees:
 *     StRtlIoStorInfoGetNvCachePriority @ 0x14002B110 (StRtlIoStorInfoGetNvCachePriority.c)
 *     McTemplateK0puxipu_EtwWriteTransfer @ 0x1400A722C (McTemplateK0puxipu_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

char __fastcall StorEtwIORequestDispatch(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rbx
  unsigned int v3; // r12d
  char v5; // si
  char v6; // r13
  __int64 v7; // rdi
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // rax
  int v11; // r15d
  char *v12; // rdx
  unsigned int *v13; // r11
  unsigned __int64 v14; // r10
  __int64 v15; // rdx
  char v16; // dl
  __int64 v17; // r8
  unsigned __int8 v19; // [rsp+50h] [rbp-30h] BYREF
  char v20; // [rsp+51h] [rbp-2Fh]
  int v21; // [rsp+54h] [rbp-2Ch]
  __int64 v22; // [rsp+58h] [rbp-28h]
  unsigned int v23; // [rsp+60h] [rbp-20h]
  __int128 v24; // [rsp+68h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  v19 = -1;
  v2 = 0LL;
  v3 = 0;
  v22 = 0LL;
  v21 = 0;
  v5 = 0;
  v24 = 0LL;
  v6 = 0;
  LODWORD(v7) = 0;
  IoGetActivityIdIrp(a1, &v24);
  LOBYTE(v8) = *(_BYTE *)v1;
  if ( *(_BYTE *)v1 != 15 )
  {
    if ( (_BYTE)v8 == 3 )
    {
      v5 = 40;
    }
    else
    {
      if ( (_BYTE)v8 != 4 )
      {
LABEL_45:
        v17 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v1 + 40) + 64LL) + 932LL);
        if ( (_DWORD)v17 )
        {
          v2 /= v17;
          v3 /= (unsigned int)v17;
        }
        v16 = -1;
        goto LABEL_48;
      }
      v5 = 42;
    }
    v3 = *(_DWORD *)(v1 + 8);
    LOBYTE(v7) = a1;
    v2 = *(_QWORD *)(v1 + 24);
    goto LABEL_45;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL);
  LOBYTE(v10) = *(_BYTE *)(v9 + 2);
  if ( (_BYTE)v10 != 40 )
  {
    v6 = *(_BYTE *)(v9 + 10);
    v12 = (char *)(v9 + 72);
    v5 = *(_BYTE *)(v9 + 72);
    v11 = *(unsigned __int8 *)(v9 + 2);
    v7 = *(_QWORD *)(v9 + 56);
    goto LABEL_28;
  }
  v11 = *(_DWORD *)(v9 + 20);
  v12 = 0LL;
  v20 = 0;
  if ( v11 )
    goto LABEL_26;
  LODWORD(v10) = *(_DWORD *)(v9 + 56);
  v23 = v10;
  if ( !(_DWORD)v10 )
    goto LABEL_24;
  v13 = (unsigned int *)(v9 + 120);
  while ( 1 )
  {
    v10 = *v13;
    if ( (unsigned int)v10 >= 0x80 )
    {
      v14 = *(unsigned int *)(v9 + 16);
      if ( (unsigned int)v10 < (unsigned int)v14 )
        break;
    }
LABEL_19:
    LODWORD(v7) = v7 + 1;
    ++v13;
    if ( (unsigned int)v7 >= v23 )
      goto LABEL_24;
  }
  if ( *(_DWORD *)(v10 + v9) != 64 )
  {
    v8 = *(_DWORD *)(v10 + v9) - 65;
    if ( *(_DWORD *)(v10 + v9) == 65 )
    {
      v8 = v10 + 56;
      if ( v10 + 56 <= v14 )
      {
        v6 = *(_BYTE *)(v10 + v9 + 10);
        v20 = 1;
        if ( !v6 )
          goto LABEL_24;
        v12 = (char *)(v10 + v9 + 24);
      }
    }
    else if ( *(_DWORD *)(v10 + v9) == 66 )
    {
      v8 = v10 + 40;
      if ( v10 + 40 <= v14 )
      {
        if ( !*(_DWORD *)(v10 + v9 + 12) )
          goto LABEL_24;
        v15 = v9 + 32;
        goto LABEL_23;
      }
    }
    goto LABEL_18;
  }
  v8 = v10 + 40;
  if ( v10 + 40 > v14 )
  {
LABEL_18:
    if ( v20 )
      goto LABEL_24;
    goto LABEL_19;
  }
  v6 = *(_BYTE *)(v10 + v9 + 10);
  if ( !v6 )
    goto LABEL_24;
  v15 = v9 + 24;
LABEL_23:
  v12 = (char *)(v10 + v15);
LABEL_24:
  if ( v12 )
    v5 = *v12;
LABEL_26:
  v7 = *(_QWORD *)(v9 + 104);
LABEL_28:
  if ( v12 )
  {
    if ( v6 == 16 )
    {
      HIBYTE(v22) = v12[2];
      BYTE6(v22) = v12[3];
      BYTE5(v22) = v12[4];
      BYTE4(v22) = v12[5];
      BYTE3(v22) = v12[6];
      BYTE2(v22) = v12[7];
      BYTE1(v22) = v12[8];
      LOBYTE(v22) = v12[9];
      HIBYTE(v21) = v12[10];
      BYTE2(v21) = v12[11];
      BYTE1(v21) = v12[12];
      LOBYTE(v10) = v12[13];
    }
    else
    {
      BYTE3(v22) = v12[2];
      BYTE2(v22) = v12[3];
      BYTE1(v22) = v12[4];
      LOBYTE(v22) = v12[5];
      BYTE1(v21) = v12[7];
      LOBYTE(v10) = v12[8];
    }
    LOBYTE(v2) = v22;
    LOBYTE(v21) = v10;
    LOBYTE(v3) = v10;
  }
  if ( v7 )
  {
    LODWORD(v10) = StRtlIoStorInfoGetNvCachePriority(v7, &v19);
    v8 = v19;
    if ( (int)v10 < 0 )
      v8 = 255;
    v16 = v8;
  }
  else
  {
    v16 = -1;
  }
  if ( !v11 )
  {
LABEL_48:
    if ( ((v5 - 8) & 0x5F) != 0 )
    {
      LOBYTE(v10) = v5 - 10;
      if ( ((v5 - 10) & 0x5F) == 0 )
      {
        LODWORD(v10) = *(_DWORD *)(a1 + 16);
        if ( (v10 & 0x42) != 0 )
        {
          if ( (byte_140171461 & 0x10) != 0 )
            LOBYTE(v10) = McTemplateK0puxipu_EtwWriteTransfer(
                            v8,
                            (unsigned int)&EventPagingWriteRequest,
                            (unsigned int)&v24,
                            a1,
                            v5,
                            v3,
                            v2,
                            v7,
                            v16);
        }
        else if ( (byte_140171461 & 4) != 0 )
        {
          LOBYTE(v10) = McTemplateK0puxipu_EtwWriteTransfer(
                          v8,
                          (unsigned int)&EventWriteRequest,
                          (unsigned int)&v24,
                          a1,
                          v5,
                          v3,
                          v2,
                          v7,
                          v16);
        }
      }
    }
    else
    {
      LODWORD(v10) = *(_DWORD *)(a1 + 16);
      if ( (v10 & 0x42) != 0 )
      {
        if ( (byte_140171461 & 8) != 0 )
          LOBYTE(v10) = McTemplateK0puxipu_EtwWriteTransfer(
                          v8,
                          (unsigned int)&EventPagingReadRequest,
                          (unsigned int)&v24,
                          a1,
                          v5,
                          v3,
                          v2,
                          v7,
                          v16);
      }
      else if ( (byte_140171461 & 2) != 0 )
      {
        LOBYTE(v10) = McTemplateK0puxipu_EtwWriteTransfer(
                        v8,
                        (unsigned int)&EventReadRequest,
                        (unsigned int)&v24,
                        a1,
                        v5,
                        v3,
                        v2,
                        v7,
                        v16);
      }
    }
  }
  return v10;
}
