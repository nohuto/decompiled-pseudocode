/*
 * XREFs of RaProcessDFxPendingIrp @ 0x14006C468
 * Callers:
 *     RaProcessDFxQueuedRequests @ 0x14006C9C0 (RaProcessDFxQueuedRequests.c)
 * Callees:
 *     GetRaidAdapter @ 0x140034AAC (GetRaidAdapter.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     GetNvmeAdapter @ 0x14006B1A0 (GetNvmeAdapter.c)
 *     GetNvmeNamespace @ 0x14006B1C0 (GetNvmeNamespace.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaProcessDFxPendingIrp(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // ebx
  int *v4; // rcx
  int v6; // eax
  _DWORD *RaidAdapter; // rax
  __int64 v8; // rdx
  bool v9; // zf
  unsigned __int64 v10; // rcx
  unsigned __int8 *v11; // rdx
  int v12; // eax
  int *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 (__fastcall *v16)(__int64, __int64); // rax
  unsigned __int64 v17; // rdx
  char v18; // r12
  _BYTE *v19; // r9
  unsigned __int8 v20; // r10
  char v21; // r14
  char v22; // r11
  char v23; // r13
  int v24; // eax
  char *v25; // r11
  unsigned int v26; // r15d
  unsigned __int64 v27; // rsi
  __int64 v28; // r8
  int v29; // ecx
  const EVENT_DESCRIPTOR *v30; // rdx
  unsigned int v32; // r15d
  unsigned __int64 v33; // rsi
  int v34; // ecx
  char v35; // cl
  char v36; // r8
  _BYTE *v37; // rax
  unsigned int v38; // eax
  char v39; // al
  char v40; // [rsp+60h] [rbp-9h]
  char v41; // [rsp+61h] [rbp-8h]
  char v42; // [rsp+61h] [rbp-8h]
  unsigned int v43; // [rsp+68h] [rbp-1h]
  unsigned int v44; // [rsp+68h] [rbp-1h]
  GUID v45; // [rsp+70h] [rbp+7h] BYREF

  v2 = a1;
  v3 = 0;
  v4 = *(int **)(a1 + 64);
  v6 = *v4;
  if ( *v4 == 1094997074 )
  {
    RaidAdapter = GetRaidAdapter(v2);
LABEL_3:
    v8 = *((_QWORD *)RaidAdapter + 2);
LABEL_21:
    if ( v8 )
    {
      v15 = *(_QWORD *)(v8 + 8);
      if ( v15 )
      {
        v16 = *(__int64 (__fastcall **)(__int64, __int64))(v15 + 8LL * **(unsigned __int8 **)(a2 + 184) + 112);
        if ( v16 )
          return v16(v2, a2);
        v9 = StorEtwLoggingEnabled == 0;
        *(_DWORD *)(a2 + 48) = -1073741823;
        *(_BYTE *)(a2 + 141) = -84;
        if ( v9 )
          goto LABEL_101;
        v45 = 0LL;
        IoGetActivityIdIrp(a2, &v45);
        v11 = *(unsigned __int8 **)(a2 + 184);
        if ( *v11 != 14 )
        {
          v12 = *v11 - 15;
          if ( *v11 == 15 )
          {
            if ( byte_140171461 >= 0 )
              goto LABEL_101;
            v17 = *((_QWORD *)v11 + 1);
            v18 = 0;
            v19 = 0LL;
            v40 = 0;
            v20 = 0;
            v21 = 0;
            v22 = 0;
            v23 = 0;
            v24 = *(unsigned __int8 *)(v17 + 2);
            if ( (_BYTE)v24 == 40 )
            {
              v25 = 0LL;
              v41 = 0;
              if ( !*(_DWORD *)(v17 + 20) )
              {
                v26 = 0;
                v43 = *(_DWORD *)(v17 + 56);
                if ( v43 )
                {
                  while ( 1 )
                  {
                    v10 = *(unsigned int *)(v17 + 4LL * v26 + 120);
                    if ( (unsigned int)v10 >= 0x80 )
                    {
                      v27 = *(unsigned int *)(v17 + 16);
                      if ( (unsigned int)v10 < (unsigned int)v27 )
                      {
                        v28 = (unsigned int)v10;
                        v29 = *(_DWORD *)(v10 + v17) - 64;
                        if ( v29 )
                        {
                          v10 = (unsigned int)(v29 - 1);
                          if ( (_DWORD)v10 )
                          {
                            if ( (_DWORD)v10 == 1 )
                            {
                              v10 = v28 + 40;
                              if ( v28 + 40 <= v27 )
                                goto LABEL_37;
                            }
                          }
                          else
                          {
                            v10 = v28 + 56;
                            if ( v28 + 56 <= v27 )
                            {
                              v41 = 1;
                              if ( *(_BYTE *)(v28 + v17 + 10) )
                                v25 = (char *)(v28 + v17 + 24);
                              v18 = *(_BYTE *)(v28 + v17 + 8);
                              v19 = *(_BYTE **)(v28 + v17 + 16);
                              v20 = *(_BYTE *)(v28 + v17 + 9);
                            }
                          }
                        }
                        else
                        {
                          v10 = v28 + 40;
                          if ( v28 + 40 <= v27 )
                            goto LABEL_70;
                        }
                        if ( v41 )
                          goto LABEL_74;
                      }
                    }
                    if ( ++v26 >= v43 )
                      goto LABEL_74;
                  }
                }
                goto LABEL_74;
              }
              goto LABEL_101;
            }
            goto LABEL_76;
          }
          goto LABEL_9;
        }
LABEL_98:
        if ( (byte_140171462 & 8) == 0 )
          goto LABEL_101;
        v30 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
        goto LABEL_100;
      }
    }
    goto LABEL_6;
  }
  switch ( v6 )
  {
    case 1431193940:
      RaidAdapter = (_DWORD *)*((_QWORD *)v4 + 3);
      if ( RaidAdapter )
        goto LABEL_3;
      break;
    case 1314275652:
      RaidAdapter = GetNvmeAdapter(v2);
      goto LABEL_3;
    case 1314278989:
      v14 = *(_QWORD *)(*((_QWORD *)GetNvmeNamespace(v2) + 2) + 128LL);
      if ( v14 )
      {
        v8 = *(_QWORD *)(v14 + 16);
        goto LABEL_21;
      }
      break;
  }
LABEL_6:
  v9 = StorEtwLoggingEnabled == 0;
  *(_DWORD *)(a2 + 48) = -1073741823;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v9 )
    goto LABEL_101;
  v45 = 0LL;
  IoGetActivityIdIrp(a2, &v45);
  v11 = *(unsigned __int8 **)(a2 + 184);
  if ( *v11 == 14 )
    goto LABEL_98;
  v12 = *v11 - 15;
  if ( *v11 != 15 )
  {
LABEL_9:
    if ( v12 != 12 )
      goto LABEL_101;
    if ( v11[1] == 7 && !*((_DWORD *)v11 + 2) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v13 = *(int **)(a2 + 56);
        if ( v13 )
          v3 = *v13;
        McTemplateK0pqd_EtwWriteTransfer(v10, (__int64)v11, &v45, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_101;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_101;
    v30 = &EventPnpRequestComplete;
LABEL_100:
    McTemplateK0pd_EtwWriteTransfer(v10, v30, &v45, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_101;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_101;
  v17 = *((_QWORD *)v11 + 1);
  v18 = 0;
  v19 = 0LL;
  v40 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = *(unsigned __int8 *)(v17 + 2);
  if ( (_BYTE)v24 != 40 )
  {
LABEL_76:
    v35 = *(_BYTE *)(v17 + 72);
    v19 = *(_BYTE **)(v17 + 32);
    v20 = *(_BYTE *)(v17 + 11);
    v18 = *(_BYTE *)(v17 + 4);
    if ( !v24 )
      goto LABEL_77;
    goto LABEL_101;
  }
  v25 = 0LL;
  v42 = 0;
  if ( *(_DWORD *)(v17 + 20) )
    goto LABEL_101;
  v32 = 0;
  v44 = *(_DWORD *)(v17 + 56);
  if ( !v44 )
    goto LABEL_74;
  while ( 1 )
  {
    v10 = *(unsigned int *)(v17 + 4LL * v32 + 120);
    if ( (unsigned int)v10 >= 0x80 )
    {
      v33 = *(unsigned int *)(v17 + 16);
      if ( (unsigned int)v10 < (unsigned int)v33 )
        break;
    }
LABEL_68:
    if ( ++v32 >= v44 )
      goto LABEL_74;
  }
  v28 = (unsigned int)v10;
  v34 = *(_DWORD *)(v10 + v17) - 64;
  if ( v34 )
  {
    v10 = (unsigned int)(v34 - 1);
    if ( (_DWORD)v10 )
    {
      if ( (_DWORD)v10 == 1 )
      {
        v10 = v28 + 40;
        if ( v28 + 40 <= v33 )
        {
LABEL_37:
          if ( *(_DWORD *)(v28 + v17 + 12) )
            v25 = (char *)(v28 + v17 + 32);
          v19 = *(_BYTE **)(v28 + v17 + 24);
          goto LABEL_73;
        }
      }
    }
    else
    {
      v10 = v28 + 56;
      if ( v28 + 56 <= v33 )
      {
        v42 = 1;
        if ( *(_BYTE *)(v28 + v17 + 10) )
          v25 = (char *)(v28 + v17 + 24);
        v18 = *(_BYTE *)(v28 + v17 + 8);
        v19 = *(_BYTE **)(v28 + v17 + 16);
        v20 = *(_BYTE *)(v28 + v17 + 9);
      }
    }
    goto LABEL_67;
  }
  v10 = v28 + 40;
  if ( v28 + 40 > v33 )
  {
LABEL_67:
    if ( v42 )
      goto LABEL_74;
    goto LABEL_68;
  }
LABEL_70:
  if ( *(_BYTE *)(v28 + v17 + 10) )
    v25 = (char *)(v28 + v17 + 24);
  v19 = *(_BYTE **)(v28 + v17 + 16);
LABEL_73:
  v20 = *(_BYTE *)(v28 + v17 + 9);
  v18 = *(_BYTE *)(v28 + v17 + 8);
LABEL_74:
  if ( v25 )
  {
    v35 = *v25;
    v22 = 0;
LABEL_77:
    LOBYTE(v10) = v35 - 8;
    if ( (v10 & 0x5D) == 0 )
    {
      v36 = *(_BYTE *)(v17 + 3);
      if ( v36 == 1 || !v19 || !v20 )
        goto LABEL_96;
      LOBYTE(v17) = 0;
      v10 = (unsigned __int64)&v19[v20];
      v37 = v19 + 8;
      if ( (unsigned __int8)((*v19 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v37 <= v10 )
        {
          LOBYTE(v17) = 1;
          v22 = v19[2];
          v21 = v19[1] & 0xF;
          v23 = v19[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v37 <= v10 )
        {
          v21 = v19[2] & 0xF;
          v38 = v20;
          if ( (unsigned int)(unsigned __int8)v19[7] + 8 <= v20 )
            v38 = (unsigned __int8)v19[7] + 8;
          v10 = (unsigned __int64)(v19 + 13);
          v17 = (unsigned __int64)&v19[v38];
          if ( (unsigned __int64)(v19 + 13) > v17 )
            v40 = 0;
          else
            v40 = v19[12];
          if ( (unsigned __int64)(v19 + 14) <= v17 )
            v23 = *(_BYTE *)v10;
          LOBYTE(v17) = 1;
        }
        v22 = v40;
      }
      if ( (_BYTE)v17 )
      {
        LOBYTE(v3) = v22;
        v39 = v23;
      }
      else
      {
LABEL_96:
        v21 = 0;
        v39 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v10, v17, &v45, a2, *(_DWORD *)(a2 + 48), v36, v18, v21, v3, v39, a2);
    }
  }
LABEL_101:
  IofCompleteRequest((PIRP)a2, 0);
  return 3221225473LL;
}
