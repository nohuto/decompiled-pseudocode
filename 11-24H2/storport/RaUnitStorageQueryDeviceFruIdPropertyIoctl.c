/*
 * XREFs of RaUnitStorageQueryDeviceFruIdPropertyIoctl @ 0x14009B3D8
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1401BEAB0 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceFruIdPropertyIoctl(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _DWORD *v5; // r15
  size_t v6; // r12
  int v7; // ebx
  int v8; // esi
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r14
  unsigned int v18; // r14d
  const EVENT_DESCRIPTOR *v19; // rdx
  unsigned __int64 v20; // rdx
  char v21; // r12
  _BYTE *v22; // r9
  unsigned __int8 v23; // r10
  char v24; // r11
  char v25; // r14
  char v26; // r13
  char *v27; // r14
  unsigned int v28; // r8d
  unsigned int *v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // r15
  char v32; // cl
  char v33; // r8
  _BYTE *v34; // rax
  unsigned int v35; // eax
  char v36; // al
  char v38; // [rsp+60h] [rbp-A0h]
  char v39; // [rsp+61h] [rbp-9Fh]
  int v40; // [rsp+68h] [rbp-98h]
  unsigned __int64 v41; // [rsp+70h] [rbp-90h]
  _DWORD v42[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 *v43; // [rsp+88h] [rbp-78h]
  _BYTE Src[144]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v45; // [rsp+120h] [rbp+20h] BYREF
  GUID v46; // [rsp+130h] [rbp+30h] BYREF

  memset_0(v42, 0, 0x98uLL);
  v4 = *(_QWORD *)(a2 + 184);
  v5 = *(_DWORD **)(a2 + 24);
  v45 = 0LL;
  v6 = *(unsigned int *)(v4 + 8);
  v7 = 0;
  if ( !RaidIsUnitControlSupported(a1, 13) )
    goto LABEL_2;
  v13 = v5[1];
  if ( !v13 )
  {
    memset_0(v5, 0, v6);
    if ( (unsigned int)v6 >= 0x10 )
    {
      v14 = *(_QWORD *)(a1 + 24);
      LOWORD(v45) = 1;
      DWORD1(v45) = 4;
      WORD1(v45) = *(_WORD *)(v14 + 56);
      WORD4(v45) = *(_WORD *)(a1 + 104);
      BYTE10(v45) = *(_BYTE *)(a1 + 106);
      v43 = &v45;
      v42[0] = 1;
      v42[1] = 152;
      if ( *(_DWORD *)v14 == 1094997074 )
      {
        v15 = v14 + 376;
      }
      else if ( *(_DWORD *)v14 == 1314275652 )
      {
        v15 = v14 + 168;
      }
      else
      {
        v15 = 0LL;
      }
      v8 = RaCallMiniportUnitControl(v15);
      if ( v8 < 0 )
        goto LABEL_3;
      v16 = -1LL;
      v17 = -1LL;
      do
        ++v17;
      while ( Src[v17] );
      v18 = v17 + 12;
      *v5 = 16;
      v5[1] = v18;
      if ( (unsigned int)v6 >= v18 )
      {
        do
          ++v16;
        while ( Src[v16] );
        v5[2] = v16;
        memmove(v5 + 3, Src, (unsigned int)v16);
        *(_QWORD *)(a2 + 56) = v18;
        goto LABEL_4;
      }
    }
    else
    {
      if ( (unsigned int)v6 < 8 )
      {
        v8 = -1073741789;
        goto LABEL_3;
      }
      *v5 = 16;
      v5[1] = 16;
    }
    *(_QWORD *)(a2 + 56) = 8LL;
LABEL_16:
    v8 = 0;
    goto LABEL_4;
  }
  if ( v13 == 1 )
    goto LABEL_16;
LABEL_2:
  v8 = -1073741637;
LABEL_3:
  *(_QWORD *)(a2 + 56) = 0LL;
LABEL_4:
  v9 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v9 )
    goto LABEL_89;
  v46 = 0LL;
  IoGetActivityIdIrp(a2, &v46);
  v11 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v11 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_89;
    v19 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_88;
  }
  if ( *(_BYTE *)v11 != 15 )
  {
    if ( *(_BYTE *)v11 != 27 )
      goto LABEL_89;
    if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v12 = *(int **)(a2 + 56);
        if ( v12 )
          v7 = *v12;
        McTemplateK0pqd_EtwWriteTransfer(v10, v11, &v46, a2, v7, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_89;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_89;
    v19 = &EventPnpRequestComplete;
LABEL_88:
    McTemplateK0pd_EtwWriteTransfer(v10, v19, &v46, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_89;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_89;
  v20 = *(_QWORD *)(v11 + 8);
  v21 = 0;
  v22 = 0LL;
  v38 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  if ( *(_BYTE *)(v20 + 2) != 40 )
  {
    v32 = *(_BYTE *)(v20 + 72);
    v22 = *(_BYTE **)(v20 + 32);
    v23 = *(_BYTE *)(v20 + 11);
    v21 = *(_BYTE *)(v20 + 4);
    if ( !*(_BYTE *)(v20 + 2) )
      goto LABEL_65;
    goto LABEL_89;
  }
  v27 = 0LL;
  v39 = 0;
  if ( *(_DWORD *)(v20 + 20) )
    goto LABEL_89;
  v10 = 0LL;
  v40 = 0;
  if ( !*(_DWORD *)(v20 + 56) )
    goto LABEL_62;
  v28 = *(_DWORD *)(v20 + 56);
  v29 = (unsigned int *)(v20 + 120);
  v41 = v20 + 120;
  while ( 1 )
  {
    v30 = *v29;
    if ( (unsigned int)v30 >= 0x80 )
    {
      v31 = *(unsigned int *)(v20 + 16);
      if ( (unsigned int)v30 < (unsigned int)v31 )
        break;
    }
LABEL_56:
    v10 = (unsigned int)(v10 + 1);
    v29 = (unsigned int *)(v41 + 4);
    v40 = v10;
    v41 += 4LL;
    if ( (unsigned int)v10 >= v28 )
      goto LABEL_62;
  }
  if ( *(_DWORD *)(v30 + v20) != 64 )
  {
    v10 = (unsigned int)(*(_DWORD *)(v30 + v20) - 65);
    if ( *(_DWORD *)(v30 + v20) == 65 )
    {
      v10 = v30 + 56;
      if ( v30 + 56 <= v31 )
      {
        v39 = 1;
        if ( *(_BYTE *)(v30 + v20 + 10) )
          v27 = (char *)(v30 + v20 + 24);
        v21 = *(_BYTE *)(v30 + v20 + 8);
        v22 = *(_BYTE **)(v30 + v20 + 16);
        v23 = *(_BYTE *)(v30 + v20 + 9);
      }
    }
    else if ( *(_DWORD *)(v30 + v20) == 66 )
    {
      v10 = v30 + 40;
      if ( v30 + 40 <= v31 )
      {
        if ( *(_DWORD *)(v30 + v20 + 12) )
          v27 = (char *)(v30 + v20 + 32);
        v22 = *(_BYTE **)(v30 + v20 + 24);
        goto LABEL_61;
      }
    }
    goto LABEL_54;
  }
  v10 = v30 + 40;
  if ( v30 + 40 > v31 )
  {
LABEL_54:
    if ( v39 )
      goto LABEL_62;
    LODWORD(v10) = v40;
    v28 = *(_DWORD *)(v20 + 56);
    goto LABEL_56;
  }
  if ( *(_BYTE *)(v30 + v20 + 10) )
    v27 = (char *)(v30 + v20 + 24);
  v22 = *(_BYTE **)(v30 + v20 + 16);
LABEL_61:
  v23 = *(_BYTE *)(v30 + v20 + 9);
  v21 = *(_BYTE *)(v30 + v20 + 8);
LABEL_62:
  if ( v27 )
  {
    v32 = *v27;
    v25 = 0;
LABEL_65:
    LOBYTE(v10) = v32 - 8;
    if ( (v10 & 0x5D) == 0 )
    {
      v33 = *(_BYTE *)(v20 + 3);
      if ( v33 == 1 || !v22 || !v23 )
        goto LABEL_84;
      LOBYTE(v20) = 0;
      v10 = (unsigned __int64)&v22[v23];
      v34 = v22 + 8;
      if ( (unsigned __int8)((*v22 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v34 <= v10 )
        {
          LOBYTE(v20) = 1;
          v25 = v22[2];
          v24 = v22[1] & 0xF;
          v26 = v22[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v34 <= v10 )
        {
          v24 = v22[2] & 0xF;
          v35 = v23;
          if ( (unsigned int)(unsigned __int8)v22[7] + 8 <= v23 )
            v35 = (unsigned __int8)v22[7] + 8;
          v10 = (unsigned __int64)(v22 + 13);
          v20 = (unsigned __int64)&v22[v35];
          if ( (unsigned __int64)(v22 + 13) > v20 )
            v38 = 0;
          else
            v38 = v22[12];
          if ( (unsigned __int64)(v22 + 14) <= v20 )
            v26 = *(_BYTE *)v10;
          LOBYTE(v20) = 1;
        }
        v25 = v38;
      }
      if ( (_BYTE)v20 )
      {
        LOBYTE(v7) = v25;
        v36 = v26;
      }
      else
      {
LABEL_84:
        v24 = 0;
        v36 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v10, v20, &v46, a2, *(_DWORD *)(a2 + 48), v33, v21, v24, v7, v36, a2);
    }
  }
LABEL_89:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v8;
}
