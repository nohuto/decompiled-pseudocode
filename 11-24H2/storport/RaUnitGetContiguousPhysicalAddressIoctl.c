/*
 * XREFs of RaUnitGetContiguousPhysicalAddressIoctl @ 0x140093884
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qq @ 0x140067E84 (WPP_SF_qq.c)
 *     RaidCallerIsAdmin @ 0x14008B354 (RaidCallerIsAdmin.c)
 *     RaidLockContiguousPhysicalPages @ 0x14008D3E8 (RaidLockContiguousPhysicalPages.c)
 *     WPP_SF_iD @ 0x1400A3B40 (WPP_SF_iD.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitGetContiguousPhysicalAddressIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // edi
  int v4; // ebp
  PVOID v5; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r14
  PHYSICAL_ADDRESS PhysicalAddress; // rbx
  bool v12; // zf
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  int *v15; // rax
  const EVENT_DESCRIPTOR *v16; // rdx
  unsigned __int64 v17; // rdx
  char v18; // r12
  _BYTE *v19; // r9
  unsigned __int8 v20; // r10
  char v21; // bl
  char v22; // r11
  char v23; // r13
  char *v24; // r11
  unsigned int v25; // r15d
  unsigned __int64 v26; // r14
  __int64 v27; // r8
  int v28; // ecx
  char v29; // cl
  char v30; // r8
  _BYTE *v31; // rax
  unsigned int v32; // eax
  char v33; // al
  __int64 v35; // [rsp+20h] [rbp-98h]
  char v36; // [rsp+60h] [rbp-58h]
  char v37; // [rsp+61h] [rbp-57h]
  unsigned int v38; // [rsp+64h] [rbp-54h]
  GUID v39; // [rsp+68h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v4 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v5 = 0LL;
  if ( RaidCallerIsAdmin() && *(struct _KTHREAD **)(a2 + 152) == KeGetCurrentThread() )
  {
    if ( *(_DWORD *)(v2 + 16) >= 0x18u )
    {
      if ( *(_DWORD *)(v2 + 8) >= 8u )
      {
        v10 = *(_QWORD *)(a2 + 24);
        if ( *(_DWORD *)v10 == 24
          && *(_DWORD *)(v10 + 4) >= 0x18u
          && (v5 = *(PVOID *)(v10 + 8), v5 <= MmHighestUserAddress) )
        {
          if ( MmIsAddressValid(*(PVOID *)(v10 + 8)) )
          {
            PhysicalAddress = MmGetPhysicalAddress(v5);
            if ( (*(_DWORD *)(v10 + 20) & 1) == 0
              || (v4 = RaidLockContiguousPhysicalPages(a1, PhysicalAddress, *(_DWORD *)(v10 + 16)), v4 >= 0) )
            {
              **(PHYSICAL_ADDRESS **)(a2 + 24) = PhysicalAddress;
              *(_QWORD *)(a2 + 56) = 8LL;
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
              {
                WPP_SF_qq(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  0x1Bu,
                  (__int64)&WPP_e6323699744f33baefc587a6e43a33df_Traceguids,
                  v5,
                  PhysicalAddress.QuadPart);
              }
              goto LABEL_24;
            }
          }
          else
          {
            v4 = -1073741503;
          }
        }
        else
        {
          v4 = -1073741811;
        }
      }
      else
      {
        v4 = -1073741789;
      }
    }
    else
    {
      v4 = -1073741820;
    }
  }
  else
  {
    v4 = -1073741790;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_iD(WPP_GLOBAL_Control->AttachedDevice, v8, v9, v5, v4);
  }
LABEL_24:
  v12 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v4;
  if ( v12 )
    goto LABEL_88;
  v39 = 0LL;
  IoGetActivityIdIrp(a2, &v39);
  v14 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v14 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_88;
    LODWORD(v35) = *(_DWORD *)(a2 + 48);
    v16 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_87;
  }
  if ( *(_BYTE *)v14 != 15 )
  {
    if ( *(_BYTE *)v14 != 27 )
      goto LABEL_88;
    if ( *(_BYTE *)(v14 + 1) == 7 && !*(_DWORD *)(v14 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v15 = *(int **)(a2 + 56);
        if ( v15 )
          v3 = *v15;
        LODWORD(v35) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v13, v14, &v39, a2, v35, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_88;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_88;
    v16 = &EventPnpRequestComplete;
    LODWORD(v35) = *(_DWORD *)(a2 + 48);
LABEL_87:
    McTemplateK0pd_EtwWriteTransfer(v13, v16, &v39, a2, v35);
    goto LABEL_88;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_88;
  v17 = *(_QWORD *)(v14 + 8);
  v18 = 0;
  v19 = 0LL;
  v36 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( *(_BYTE *)(v17 + 2) != 40 )
  {
    v29 = *(_BYTE *)(v17 + 72);
    v19 = *(_BYTE **)(v17 + 32);
    v20 = *(_BYTE *)(v17 + 11);
    v18 = *(_BYTE *)(v17 + 4);
    if ( !*(_BYTE *)(v17 + 2) )
      goto LABEL_64;
    goto LABEL_88;
  }
  v24 = 0LL;
  v37 = 0;
  if ( *(_DWORD *)(v17 + 20) )
    goto LABEL_88;
  v25 = 0;
  v38 = *(_DWORD *)(v17 + 56);
  if ( !v38 )
    goto LABEL_61;
  while ( 1 )
  {
    v13 = *(unsigned int *)(v17 + 4LL * v25 + 120);
    if ( (unsigned int)v13 >= 0x80 )
    {
      v26 = *(unsigned int *)(v17 + 16);
      if ( (unsigned int)v13 < (unsigned int)v26 )
        break;
    }
LABEL_55:
    if ( ++v25 >= v38 )
      goto LABEL_61;
  }
  v27 = (unsigned int)v13;
  v28 = *(_DWORD *)(v13 + v17) - 64;
  if ( v28 )
  {
    v13 = (unsigned int)(v28 - 1);
    if ( (_DWORD)v13 )
    {
      if ( (_DWORD)v13 == 1 )
      {
        v13 = v27 + 40;
        if ( v27 + 40 <= v26 )
        {
          if ( *(_DWORD *)(v27 + v17 + 12) )
            v24 = (char *)(v27 + v17 + 32);
          v19 = *(_BYTE **)(v27 + v17 + 24);
          goto LABEL_60;
        }
      }
    }
    else
    {
      v13 = v27 + 56;
      if ( v27 + 56 <= v26 )
      {
        v37 = 1;
        if ( *(_BYTE *)(v27 + v17 + 10) )
          v24 = (char *)(v27 + v17 + 24);
        v18 = *(_BYTE *)(v27 + v17 + 8);
        v19 = *(_BYTE **)(v27 + v17 + 16);
        v20 = *(_BYTE *)(v27 + v17 + 9);
      }
    }
    goto LABEL_54;
  }
  v13 = v27 + 40;
  if ( v27 + 40 > v26 )
  {
LABEL_54:
    if ( v37 )
      goto LABEL_61;
    goto LABEL_55;
  }
  if ( *(_BYTE *)(v27 + v17 + 10) )
    v24 = (char *)(v27 + v17 + 24);
  v19 = *(_BYTE **)(v27 + v17 + 16);
LABEL_60:
  v20 = *(_BYTE *)(v27 + v17 + 9);
  v18 = *(_BYTE *)(v27 + v17 + 8);
LABEL_61:
  if ( v24 )
  {
    v29 = *v24;
    v22 = 0;
LABEL_64:
    LOBYTE(v13) = v29 - 8;
    if ( (v13 & 0x5D) == 0 )
    {
      v30 = *(_BYTE *)(v17 + 3);
      if ( v30 == 1 || !v19 || !v20 )
        goto LABEL_83;
      LOBYTE(v17) = 0;
      v13 = (unsigned __int64)&v19[v20];
      v31 = v19 + 8;
      if ( (unsigned __int8)((*v19 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v31 <= v13 )
        {
          LOBYTE(v17) = 1;
          v22 = v19[2];
          v21 = v19[1] & 0xF;
          v23 = v19[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v31 <= v13 )
        {
          v21 = v19[2] & 0xF;
          v32 = v20;
          if ( (unsigned int)(unsigned __int8)v19[7] + 8 <= v20 )
            v32 = (unsigned __int8)v19[7] + 8;
          v13 = (unsigned __int64)(v19 + 13);
          v17 = (unsigned __int64)&v19[v32];
          if ( (unsigned __int64)(v19 + 13) > v17 )
            v36 = 0;
          else
            v36 = v19[12];
          if ( (unsigned __int64)(v19 + 14) <= v17 )
            v23 = *(_BYTE *)v13;
          LOBYTE(v17) = 1;
        }
        v22 = v36;
      }
      if ( (_BYTE)v17 )
      {
        LOBYTE(v3) = v22;
        v33 = v23;
      }
      else
      {
LABEL_83:
        v21 = 0;
        v33 = 0;
      }
      LODWORD(v35) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v13, v17, &v39, a2, v35, v30, v18, v21, v3, v33, a2);
    }
  }
LABEL_88:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v4;
}
