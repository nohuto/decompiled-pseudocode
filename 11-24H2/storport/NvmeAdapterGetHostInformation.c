/*
 * XREFs of NvmeAdapterGetHostInformation @ 0x140198AE8
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x140195438 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     GetNvmeHostId @ 0x14006DEFC (GetNvmeHostId.c)
 *     GetNvmeHostNQN @ 0x14006E10C (GetNvmeHostNQN.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterGetHostInformation(__int64 a1, __int64 a2)
{
  int v2; // ebx
  char *v4; // rsi
  int NvmeHostNQN; // ebp
  __int64 v6; // rax
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  unsigned __int64 v12; // rdx
  char v13; // r12
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // si
  char v17; // r11
  char v18; // r13
  char *v19; // r11
  unsigned int v20; // r15d
  unsigned __int64 v21; // r14
  __int64 v22; // r8
  int v23; // ecx
  char v24; // cl
  char v25; // r8
  _BYTE *v26; // rax
  unsigned int v27; // eax
  char v28; // al
  char v30; // [rsp+60h] [rbp-48h]
  char v31; // [rsp+61h] [rbp-47h]
  unsigned int v32; // [rsp+64h] [rbp-44h]
  GUID v33; // [rsp+68h] [rbp-40h] BYREF

  v2 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 592) )
  {
    v4 = *(char **)(a2 + 24);
    if ( v4 )
    {
      v6 = *(_QWORD *)(a2 + 184);
      if ( *(_DWORD *)(v6 + 8) >= 0x118u )
      {
        memset_0(v4, 0, *(unsigned int *)(v6 + 8));
        *(_DWORD *)v4 = 18350081;
        NvmeHostNQN = GetNvmeHostNQN(0, v4 + 8);
        if ( NvmeHostNQN >= 0 )
        {
          NvmeHostNQN = GetNvmeHostId(v4 + 264);
          if ( NvmeHostNQN >= 0 )
            *(_QWORD *)(a2 + 56) = *((unsigned __int16 *)v4 + 1);
        }
      }
      else
      {
        NvmeHostNQN = -1073741789;
      }
    }
    else
    {
      NvmeHostNQN = -1073741811;
    }
  }
  else
  {
    NvmeHostNQN = -1073741637;
  }
  v7 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = NvmeHostNQN;
  if ( v7 )
    goto LABEL_75;
  v33 = 0LL;
  IoGetActivityIdIrp(a2, &v33);
  v9 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_75;
    v11 = &EventNonReadWriteRequestComplete;
    goto LABEL_74;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    if ( *(_BYTE *)v9 != 27 )
      goto LABEL_75;
    if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v10 = *(int **)(a2 + 56);
        if ( v10 )
          v2 = *v10;
        McTemplateK0pqd_EtwWriteTransfer(v8, v9, &v33, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_75;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_75;
    v11 = &EventPnpRequestComplete;
LABEL_74:
    McTemplateK0pd_EtwWriteTransfer(v8, v11, &v33, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_75;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_75;
  v12 = *(_QWORD *)(v9 + 8);
  v13 = 0;
  v14 = 0LL;
  v30 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v24 = *(_BYTE *)(v12 + 72);
    v14 = *(_BYTE **)(v12 + 32);
    v15 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE *)(v12 + 4);
    if ( !*(_BYTE *)(v12 + 2) )
      goto LABEL_51;
    goto LABEL_75;
  }
  v19 = 0LL;
  v31 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_75;
  v20 = 0;
  v32 = *(_DWORD *)(v12 + 56);
  if ( !v32 )
    goto LABEL_48;
  while ( 1 )
  {
    v8 = *(unsigned int *)(v12 + 4LL * v20 + 120);
    if ( (unsigned int)v8 >= 0x80 )
    {
      v21 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v8 < (unsigned int)v21 )
        break;
    }
LABEL_42:
    if ( ++v20 >= v32 )
      goto LABEL_48;
  }
  v22 = (unsigned int)v8;
  v23 = *(_DWORD *)(v8 + v12) - 64;
  if ( v23 )
  {
    v8 = (unsigned int)(v23 - 1);
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 == 1 )
      {
        v8 = v22 + 40;
        if ( v22 + 40 <= v21 )
        {
          if ( *(_DWORD *)(v22 + v12 + 12) )
            v19 = (char *)(v22 + v12 + 32);
          v14 = *(_BYTE **)(v22 + v12 + 24);
          goto LABEL_47;
        }
      }
    }
    else
    {
      v8 = v22 + 56;
      if ( v22 + 56 <= v21 )
      {
        v31 = 1;
        if ( *(_BYTE *)(v22 + v12 + 10) )
          v19 = (char *)(v22 + v12 + 24);
        v13 = *(_BYTE *)(v22 + v12 + 8);
        v14 = *(_BYTE **)(v22 + v12 + 16);
        v15 = *(_BYTE *)(v22 + v12 + 9);
      }
    }
    goto LABEL_41;
  }
  v8 = v22 + 40;
  if ( v22 + 40 > v21 )
  {
LABEL_41:
    if ( v31 )
      goto LABEL_48;
    goto LABEL_42;
  }
  if ( *(_BYTE *)(v22 + v12 + 10) )
    v19 = (char *)(v22 + v12 + 24);
  v14 = *(_BYTE **)(v22 + v12 + 16);
LABEL_47:
  v15 = *(_BYTE *)(v22 + v12 + 9);
  v13 = *(_BYTE *)(v22 + v12 + 8);
LABEL_48:
  if ( v19 )
  {
    v24 = *v19;
    v17 = 0;
LABEL_51:
    LOBYTE(v8) = v24 - 8;
    if ( (v8 & 0x5D) == 0 )
    {
      v25 = *(_BYTE *)(v12 + 3);
      if ( v25 == 1 || !v14 || !v15 )
        goto LABEL_70;
      LOBYTE(v12) = 0;
      v8 = (unsigned __int64)&v14[v15];
      v26 = v14 + 8;
      if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v26 <= v8 )
        {
          LOBYTE(v12) = 1;
          v17 = v14[2];
          v16 = v14[1] & 0xF;
          v18 = v14[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v26 <= v8 )
        {
          v16 = v14[2] & 0xF;
          v27 = v15;
          if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
            v27 = (unsigned __int8)v14[7] + 8;
          v8 = (unsigned __int64)(v14 + 13);
          v12 = (unsigned __int64)&v14[v27];
          if ( (unsigned __int64)(v14 + 13) > v12 )
            v30 = 0;
          else
            v30 = v14[12];
          if ( (unsigned __int64)(v14 + 14) <= v12 )
            v18 = *(_BYTE *)v8;
          LOBYTE(v12) = 1;
        }
        v17 = v30;
      }
      if ( (_BYTE)v12 )
      {
        LOBYTE(v2) = v17;
        v28 = v18;
      }
      else
      {
LABEL_70:
        v16 = 0;
        v28 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v8, v12, &v33, a2, *(_DWORD *)(a2 + 48), v25, v13, v16, v2, v28, a2);
    }
  }
LABEL_75:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)NvmeHostNQN;
}
