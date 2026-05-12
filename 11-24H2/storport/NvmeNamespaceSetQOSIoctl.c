/*
 * XREFs of NvmeNamespaceSetQOSIoctl @ 0x140111AB4
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401A2234 (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorEtwNvmeNamespaceEvent @ 0x1400A9A30 (StorEtwNvmeNamespaceEvent.c)
 *     StorpTelemetryMarkNamespaceResponsive @ 0x1400B5E48 (StorpTelemetryMarkNamespaceResponsive.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceSetQOSIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // ebx
  __int64 v4; // r14
  unsigned int v7; // edi
  const wchar_t *v8; // r15
  int v9; // eax
  unsigned int v10; // r10d
  unsigned int v11; // r9d
  unsigned int v12; // ecx
  unsigned int v13; // r8d
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // ecx
  __int64 v18; // rax
  int v19; // eax
  wchar_t *Buffer; // rax
  bool v21; // zf
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  int *v24; // rax
  const EVENT_DESCRIPTOR *v25; // rdx
  __int64 v26; // rdx
  char v27; // r12
  _BYTE *v28; // r9
  unsigned __int8 v29; // r10
  char v30; // si
  char v31; // r11
  char v32; // r13
  char *v33; // r11
  unsigned int v34; // r15d
  unsigned __int64 v35; // r14
  __int64 v36; // r8
  int v37; // ecx
  char v38; // cl
  char v39; // r8
  _BYTE *v40; // rax
  unsigned int v41; // eax
  unsigned __int64 v42; // r8
  char v43; // al
  __int64 v45; // [rsp+20h] [rbp-E8h]
  __int64 v46; // [rsp+28h] [rbp-E0h]
  __int64 v47; // [rsp+30h] [rbp-D8h]
  __int64 v48; // [rsp+38h] [rbp-D0h]
  __int64 v49; // [rsp+40h] [rbp-C8h]
  __int64 v50; // [rsp+48h] [rbp-C0h]
  char v51; // [rsp+A0h] [rbp-68h]
  char v52; // [rsp+A1h] [rbp-67h]
  unsigned int v53; // [rsp+A4h] [rbp-64h]
  struct _UNICODE_STRING GuidString; // [rsp+A8h] [rbp-60h] BYREF
  GUID v55; // [rsp+B8h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 24);
  GuidString = 0LL;
  v7 = 0;
  v8 = 0LL;
  if ( (*(_BYTE *)(v2 + 136) & 2) == 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x24u )
    {
      v7 = -1073741820;
      goto LABEL_36;
    }
    if ( *(_DWORD *)v4 == 36 && *(_DWORD *)(v4 + 4) == 36 )
    {
      RtlStringFromGUID((const GUID *const)(a1 + 160), &GuidString);
      if ( !*(_BYTE *)(v4 + 8) )
      {
        v9 = *(_DWORD *)(a1 + 648);
        if ( (v9 & 1) != 0 )
        {
          *(_QWORD *)(a1 + 672) = -1LL;
          v8 = L"NVMe disabling QoS";
          *(_QWORD *)(a1 + 660) = 0LL;
          *(_DWORD *)(a1 + 648) = v9 & 0xFFFFFFFE;
          *(_QWORD *)(a1 + 652) = 0LL;
          *(_QWORD *)(v2 + 1444) = 0LL;
          *(_DWORD *)(v2 + 1440) = 0;
          StorpTelemetryMarkNamespaceResponsive(a1);
          *(_QWORD *)(a1 + 112) &= ~0x200uLL;
          *(_DWORD *)(a1 + 648) |= 2u;
        }
LABEL_32:
        Buffer = (wchar_t *)&word_140150F48;
        if ( GuidString.Buffer )
          Buffer = GuidString.Buffer;
        StorEtwNvmeNamespaceEvent(
          a1,
          1,
          4,
          (__int64)v8,
          Buffer,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0);
        goto LABEL_36;
      }
      v10 = *(_DWORD *)(v4 + 20);
      if ( v10 >= 0x3E8 && v10 == 1000 * (v10 / 0x3E8) )
      {
        v11 = *(_DWORD *)(v4 + 24);
        if ( v11 >= 0x3E8 && v11 == 1000 * (v11 / 0x3E8) )
        {
          v12 = *(_DWORD *)(v4 + 16);
          v13 = -1;
          if ( v12 == -1 || v12 == 500 * (v12 / 0x1F4) )
          {
            v14 = *(_DWORD *)(v4 + 28);
            if ( (v14 == -1 || v14 == 500 * (v14 / 0x1F4))
              && *(_DWORD *)(v4 + 12) <= 0xFFu
              && v10 < 0x3E80000
              && v11 < 0x3E80000 )
            {
              *(_BYTE *)(a1 + 668) = *(_BYTE *)(v4 + 12);
              *(_WORD *)(a1 + 652) = *(_DWORD *)(v4 + 20) / 0x3E8u;
              v15 = *(_DWORD *)(v4 + 16);
              if ( v15 == -1 )
                v16 = -1;
              else
                v16 = v15 / 0x1F4;
              *(_DWORD *)(a1 + 664) = v16;
              *(_WORD *)(a1 + 654) = *(_DWORD *)(v4 + 24) / 0x3E8u;
              *(_DWORD *)(a1 + 660) = *(_DWORD *)(v4 + 32);
              v17 = *(_DWORD *)(v4 + 28);
              if ( v17 != -1 )
                v13 = v17 / 0x1F4;
              *(_DWORD *)(a1 + 656) = v13;
              v18 = 10000000 * (*(unsigned __int16 *)(a1 + 652) + 1 + ((v13 + *(_DWORD *)(a1 + 664)) >> 1));
              if ( (unsigned int)v18 > 0x11E1A300 )
                v18 = 300000000LL;
              *(_QWORD *)(a1 + 672) = v18;
              v19 = *(_DWORD *)(a1 + 648);
              if ( (v19 & 1) != 0 )
              {
                v8 = L"NVMe updating QoS settings";
              }
              else
              {
                v8 = L"NVMe enabling QoS";
                v19 |= 1u;
              }
              *(_DWORD *)(a1 + 648) = v19 | 2;
              goto LABEL_32;
            }
          }
        }
      }
    }
    v7 = -1073741811;
    goto LABEL_36;
  }
  v7 = -1073741637;
LABEL_36:
  v21 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v21 )
    goto LABEL_100;
  v55 = 0LL;
  IoGetActivityIdIrp(a2, &v55);
  v23 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v23 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_100;
    LODWORD(v45) = *(_DWORD *)(a2 + 48);
    v25 = &EventNonReadWriteRequestComplete;
    goto LABEL_99;
  }
  if ( *(_BYTE *)v23 != 15 )
  {
    if ( *(_BYTE *)v23 != 27 )
      goto LABEL_100;
    if ( *(_BYTE *)(v23 + 1) == 7 && !*(_DWORD *)(v23 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v24 = *(int **)(a2 + 56);
        if ( v24 )
          v3 = *v24;
        LODWORD(v46) = *(_DWORD *)(a2 + 48);
        LODWORD(v45) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v22, v23, &v55, a2, v45, v46);
      }
      goto LABEL_100;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_100;
    v25 = &EventPnpRequestComplete;
    LODWORD(v45) = *(_DWORD *)(a2 + 48);
LABEL_99:
    McTemplateK0pd_EtwWriteTransfer(v22, v25, &v55, a2, v45);
    goto LABEL_100;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_100;
  v26 = *(_QWORD *)(v23 + 8);
  v27 = 0;
  v28 = 0LL;
  v51 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  if ( *(_BYTE *)(v26 + 2) != 40 )
  {
    v38 = *(_BYTE *)(v26 + 72);
    v28 = *(_BYTE **)(v26 + 32);
    v29 = *(_BYTE *)(v26 + 11);
    v27 = *(_BYTE *)(v26 + 4);
    if ( !*(_BYTE *)(v26 + 2) )
      goto LABEL_76;
    goto LABEL_100;
  }
  v33 = 0LL;
  v52 = 0;
  if ( *(_DWORD *)(v26 + 20) )
    goto LABEL_100;
  v34 = 0;
  v53 = *(_DWORD *)(v26 + 56);
  if ( !v53 )
    goto LABEL_73;
  while ( 1 )
  {
    v22 = *(unsigned int *)(v26 + 4LL * v34 + 120);
    if ( (unsigned int)v22 >= 0x80 )
    {
      v35 = *(unsigned int *)(v26 + 16);
      if ( (unsigned int)v22 < (unsigned int)v35 )
        break;
    }
LABEL_67:
    if ( ++v34 >= v53 )
      goto LABEL_73;
  }
  v36 = (unsigned int)v22;
  v37 = *(_DWORD *)(v22 + v26) - 64;
  if ( v37 )
  {
    v22 = (unsigned int)(v37 - 1);
    if ( (_DWORD)v22 )
    {
      if ( (_DWORD)v22 == 1 )
      {
        v22 = v36 + 40;
        if ( v36 + 40 <= v35 )
        {
          if ( *(_DWORD *)(v36 + v26 + 12) )
            v33 = (char *)(v36 + v26 + 32);
          v28 = *(_BYTE **)(v36 + v26 + 24);
          goto LABEL_72;
        }
      }
    }
    else
    {
      v22 = v36 + 56;
      if ( v36 + 56 <= v35 )
      {
        v52 = 1;
        if ( *(_BYTE *)(v36 + v26 + 10) )
          v33 = (char *)(v36 + v26 + 24);
        v27 = *(_BYTE *)(v36 + v26 + 8);
        v28 = *(_BYTE **)(v36 + v26 + 16);
        v29 = *(_BYTE *)(v36 + v26 + 9);
      }
    }
    goto LABEL_66;
  }
  v22 = v36 + 40;
  if ( v36 + 40 > v35 )
  {
LABEL_66:
    if ( v52 )
      goto LABEL_73;
    goto LABEL_67;
  }
  if ( *(_BYTE *)(v36 + v26 + 10) )
    v33 = (char *)(v36 + v26 + 24);
  v28 = *(_BYTE **)(v36 + v26 + 16);
LABEL_72:
  v29 = *(_BYTE *)(v36 + v26 + 9);
  v27 = *(_BYTE *)(v36 + v26 + 8);
LABEL_73:
  if ( v33 )
  {
    v38 = *v33;
    v31 = 0;
LABEL_76:
    LOBYTE(v22) = v38 - 8;
    if ( (v22 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v26 + 3) == 1 || !v28 || !v29 )
        goto LABEL_95;
      v39 = 0;
      v22 = (unsigned __int64)&v28[v29];
      v40 = v28 + 8;
      if ( (unsigned __int8)((*v28 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v40 <= v22 )
        {
          v39 = 1;
          v31 = v28[2];
          v30 = v28[1] & 0xF;
          v32 = v28[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v40 <= v22 )
        {
          v30 = v28[2] & 0xF;
          v41 = v29;
          if ( (unsigned int)(unsigned __int8)v28[7] + 8 <= v29 )
            v41 = (unsigned __int8)v28[7] + 8;
          v22 = (unsigned __int64)(v28 + 13);
          v42 = (unsigned __int64)&v28[v41];
          if ( (unsigned __int64)(v28 + 13) > v42 )
            v51 = 0;
          else
            v51 = v28[12];
          if ( (unsigned __int64)(v28 + 14) <= v42 )
            v32 = *(_BYTE *)v22;
          v39 = 1;
        }
        v31 = v51;
      }
      if ( v39 )
      {
        LOBYTE(v3) = v31;
        v43 = v32;
      }
      else
      {
LABEL_95:
        v30 = 0;
        v43 = 0;
      }
      LOBYTE(v50) = v43;
      LOBYTE(v49) = v3;
      LOBYTE(v48) = v30;
      LOBYTE(v47) = v27;
      LOBYTE(v46) = *(_BYTE *)(v26 + 3);
      LODWORD(v45) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v22, v26, &v55, a2, v45, v46, v47, v48, v49, v50, a2);
    }
  }
LABEL_100:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
