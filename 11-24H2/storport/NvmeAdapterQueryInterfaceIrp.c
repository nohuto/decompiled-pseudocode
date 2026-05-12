/*
 * XREFs of NvmeAdapterQueryInterfaceIrp @ 0x1400D5F3C
 * Callers:
 *     NvmeAdapterPnpIrp @ 0x1400D4884 (NvmeAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x1400177F0 (RaForwardIrp.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterQueryCoolingInterface @ 0x1401304AC (NvmeAdapterQueryCoolingInterface.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     PortQueryInterfaceFdoInfo @ 0x1401B3FA8 (PortQueryInterfaceFdoInfo.c)
 *     PortQueryInterfaceFdoQdr @ 0x1401B3FE8 (PortQueryInterfaceFdoQdr.c)
 */

__int64 __fastcall NvmeAdapterQueryInterfaceIrp(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // ebx
  GUID *v6; // rcx
  GUID *v7; // rcx
  GUID *v8; // rcx
  int CoolingInterface; // esi
  bool v10; // zf
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  int InterfaceFdoInfo; // eax
  __int64 v15; // rcx
  const EVENT_DESCRIPTOR *v16; // rdx
  __int64 v17; // rdx
  char v18; // r12
  _BYTE *v19; // r9
  unsigned __int8 v20; // r10
  char v21; // bp
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
  unsigned __int64 v33; // r8
  char v34; // al
  char v36; // [rsp+60h] [rbp-68h]
  char v37; // [rsp+61h] [rbp-67h]
  unsigned int v38; // [rsp+64h] [rbp-64h]
  GUID v39; // [rsp+68h] [rbp-60h] BYREF
  GUID v40; // [rsp+78h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v40 = 0LL;
  v5 = 0;
  v6 = *(GUID **)(v2 + 8);
  if ( v6 == &GUID_STORAGE_QUERY_FDO_INFO || RtlCompareMemory(v6, &GUID_STORAGE_QUERY_FDO_INFO, 0x10uLL) == 16 )
  {
    InterfaceFdoInfo = PortQueryInterfaceFdoInfo(v6, a2, *(_QWORD *)(a1 + 32));
  }
  else
  {
    v7 = *(GUID **)(v2 + 8);
    if ( v7 != &GUID_STORAGE_QUERY_FDO_DEVICE_RELATIONS
      && RtlCompareMemory(v7, &GUID_STORAGE_QUERY_FDO_DEVICE_RELATIONS, 0x10uLL) != 16 )
    {
      v8 = *(GUID **)(v2 + 8);
      if ( v8 == &GUID_THERMAL_COOLING_INTERFACE || RtlCompareMemory(v8, &GUID_THERMAL_COOLING_INTERFACE, 0x10uLL) == 16 )
      {
        CoolingInterface = NvmeAdapterQueryCoolingInterface(a1, a2);
        if ( CoolingInterface >= 0 )
          goto LABEL_8;
      }
LABEL_21:
      if ( StorEtwLoggingEnabled )
      {
        IoGetActivityIdIrp(a2, &v40);
        if ( (byte_140171462 & 0x20) != 0 )
          McTemplateK0pd_EtwWriteTransfer(v15, &EventPnpRequestComplete, &v40, a2, *(_DWORD *)(a2 + 48));
      }
      return (unsigned int)RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), (IRP *)a2);
    }
    InterfaceFdoInfo = PortQueryInterfaceFdoQdr(v7, a2, *(_QWORD *)(a1 + 1000));
  }
  CoolingInterface = InterfaceFdoInfo;
  *(_DWORD *)(a2 + 48) = InterfaceFdoInfo;
  if ( InterfaceFdoInfo >= 0 )
    goto LABEL_21;
LABEL_8:
  v10 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = CoolingInterface;
  if ( v10 )
    goto LABEL_79;
  v39 = 0LL;
  IoGetActivityIdIrp(a2, &v39);
  v12 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v12 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_79;
    v16 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_78;
  }
  if ( *(_BYTE *)v12 != 15 )
  {
    if ( *(_BYTE *)v12 != 27 )
      goto LABEL_79;
    if ( *(_BYTE *)(v12 + 1) == 7 && !*(_DWORD *)(v12 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v5 = *v13;
        McTemplateK0pqd_EtwWriteTransfer(v11, v12, &v39, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_79;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_79;
    v16 = &EventPnpRequestComplete;
LABEL_78:
    McTemplateK0pd_EtwWriteTransfer(v11, v16, &v39, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_79;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_79;
  v17 = *(_QWORD *)(v12 + 8);
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
      goto LABEL_55;
    goto LABEL_79;
  }
  v24 = 0LL;
  v37 = 0;
  if ( *(_DWORD *)(v17 + 20) )
    goto LABEL_79;
  v25 = 0;
  v38 = *(_DWORD *)(v17 + 56);
  if ( !v38 )
    goto LABEL_52;
  while ( 1 )
  {
    v11 = *(unsigned int *)(v17 + 4LL * v25 + 120);
    if ( (unsigned int)v11 >= 0x80 )
    {
      v26 = *(unsigned int *)(v17 + 16);
      if ( (unsigned int)v11 < (unsigned int)v26 )
        break;
    }
LABEL_46:
    if ( ++v25 >= v38 )
      goto LABEL_52;
  }
  v27 = (unsigned int)v11;
  v28 = *(_DWORD *)(v11 + v17) - 64;
  if ( v28 )
  {
    v11 = (unsigned int)(v28 - 1);
    if ( (_DWORD)v11 )
    {
      if ( (_DWORD)v11 == 1 )
      {
        v11 = v27 + 40;
        if ( v27 + 40 <= v26 )
        {
          if ( *(_DWORD *)(v27 + v17 + 12) )
            v24 = (char *)(v27 + v17 + 32);
          v19 = *(_BYTE **)(v27 + v17 + 24);
          goto LABEL_51;
        }
      }
    }
    else
    {
      v11 = v27 + 56;
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
    goto LABEL_45;
  }
  v11 = v27 + 40;
  if ( v27 + 40 > v26 )
  {
LABEL_45:
    if ( v37 )
      goto LABEL_52;
    goto LABEL_46;
  }
  if ( *(_BYTE *)(v27 + v17 + 10) )
    v24 = (char *)(v27 + v17 + 24);
  v19 = *(_BYTE **)(v27 + v17 + 16);
LABEL_51:
  v20 = *(_BYTE *)(v27 + v17 + 9);
  v18 = *(_BYTE *)(v27 + v17 + 8);
LABEL_52:
  if ( v24 )
  {
    v29 = *v24;
    v22 = 0;
LABEL_55:
    LOBYTE(v11) = v29 - 8;
    if ( (v11 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v17 + 3) == 1 || !v19 || !v20 )
        goto LABEL_74;
      v30 = 0;
      v11 = (unsigned __int64)&v19[v20];
      v31 = v19 + 8;
      if ( (unsigned __int8)((*v19 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v31 <= v11 )
        {
          v30 = 1;
          v22 = v19[2];
          v21 = v19[1] & 0xF;
          v23 = v19[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v31 <= v11 )
        {
          v21 = v19[2] & 0xF;
          v32 = v20;
          if ( (unsigned int)(unsigned __int8)v19[7] + 8 <= v20 )
            v32 = (unsigned __int8)v19[7] + 8;
          v11 = (unsigned __int64)(v19 + 13);
          v33 = (unsigned __int64)&v19[v32];
          if ( (unsigned __int64)(v19 + 13) > v33 )
            v36 = 0;
          else
            v36 = v19[12];
          if ( (unsigned __int64)(v19 + 14) <= v33 )
            v23 = *(_BYTE *)v11;
          v30 = 1;
        }
        v22 = v36;
      }
      if ( v30 )
      {
        LOBYTE(v5) = v22;
        v34 = v23;
      }
      else
      {
LABEL_74:
        v21 = 0;
        v34 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v11,
        v17,
        &v39,
        a2,
        *(_DWORD *)(a2 + 48),
        *(_BYTE *)(v17 + 3),
        v18,
        v21,
        v5,
        v34,
        a2);
    }
  }
LABEL_79:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)CoolingInterface;
}
