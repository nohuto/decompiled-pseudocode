/*
 * XREFs of RaWmiDispatchIrp @ 0x1401B9E0C
 * Callers:
 *     RaDriverSystemControlIrp @ 0x1401B9D10 (RaDriverSystemControlIrp.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x140004540 (RaUnitAcquireRemoveLock.c)
 *     RaidAcquireAdapterRemoveLock @ 0x140009B34 (RaidAcquireAdapterRemoveLock.c)
 *     RaidReleaseAdapterRemoveLock @ 0x140035D48 (RaidReleaseAdapterRemoveLock.c)
 *     RaidCompleteWmiIrp @ 0x1400506F0 (RaidCompleteWmiIrp.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_d @ 0x140055B28 (WPP_SF_d.c)
 *     NvmeAdapterReleaseRemoveLock @ 0x140056050 (NvmeAdapterReleaseRemoveLock.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterAcquireRemoveLock @ 0x1400CC668 (NvmeAdapterAcquireRemoveLock.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     RaWmiIrpNormalRequest @ 0x1401B7348 (RaWmiIrpNormalRequest.c)
 *     RaWmiIrpRegisterRequest @ 0x1401BBBA0 (RaWmiIrpRegisterRequest.c)
 */

NTSTATUS __fastcall RaWmiDispatchIrp(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // ebx
  __int64 v6; // rsi
  __int64 v7; // r12
  int v9; // r14d
  int v10; // eax
  bool v11; // zf
  unsigned __int64 v12; // rcx
  unsigned __int8 *v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // rdx
  char v16; // r12
  _BYTE *v17; // r9
  unsigned __int8 v18; // r10
  char v19; // r14
  char v20; // r11
  char v21; // r13
  int v22; // eax
  char *v23; // r11
  unsigned int v24; // r15d
  unsigned __int64 v25; // rsi
  __int64 v26; // r8
  int v27; // ecx
  const EVENT_DESCRIPTOR *v28; // rdx
  unsigned int v29; // edx
  unsigned int v30; // ecx
  int v31; // eax
  int v32; // r15d
  bool v33; // sf
  __int64 v34; // rax
  unsigned __int64 v35; // r8
  signed __int32 v36; // eax
  NTSTATUS v37; // ebx
  unsigned __int64 v38; // r8
  signed __int32 v39; // eax
  signed __int32 v40; // ett
  signed __int32 v41; // ett
  int *v42; // rax
  unsigned int v43; // r15d
  unsigned __int64 v44; // rsi
  int v45; // ecx
  char v46; // cl
  char v47; // r8
  _BYTE *v48; // rax
  unsigned int v49; // eax
  char v50; // al
  char v51; // [rsp+60h] [rbp-29h]
  char v52; // [rsp+61h] [rbp-28h]
  char v53; // [rsp+61h] [rbp-28h]
  int v54; // [rsp+64h] [rbp-25h]
  __int64 v55; // [rsp+68h] [rbp-21h]
  unsigned int v56; // [rsp+68h] [rbp-21h]
  unsigned int v57; // [rsp+68h] [rbp-21h]
  _QWORD v58[2]; // [rsp+70h] [rbp-19h] BYREF
  unsigned int v59; // [rsp+80h] [rbp-9h]
  int v60; // [rsp+84h] [rbp-5h]
  __int64 v61; // [rsp+88h] [rbp-1h]
  GUID v62; // [rsp+90h] [rbp+7h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v60 = 0;
  v55 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( *(_QWORD *)(v2 + 8) != a1 )
    return RaidCompleteWmiIrp(a1, a2);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xAu,
      (__int64)&WPP_a308b383eb68399a6972abfba8c43d0a_Traceguids,
      *(unsigned __int8 *)(v2 + 1));
  }
  v9 = **(_DWORD **)(a1 + 64);
  switch ( v9 )
  {
    case 1094997074:
      v7 = *(_QWORD *)(a1 + 64);
      v10 = RaidAcquireAdapterRemoveLock(v7);
      break;
    case 1314275652:
      v55 = *(_QWORD *)(a1 + 64);
      v10 = NvmeAdapterAcquireRemoveLock(v55);
      break;
    case 1431193940:
      v6 = *(_QWORD *)(a1 + 64);
      v10 = RaUnitAcquireRemoveLock(v6, a2, 1);
      break;
    default:
      v10 = -1073741637;
      v54 = -1073741637;
      goto LABEL_15;
  }
  v54 = v10;
  if ( v10 < 0 )
  {
LABEL_15:
    v11 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v10;
    if ( v11 )
      goto LABEL_134;
    v62 = 0LL;
    IoGetActivityIdIrp(a2, &v62);
    v13 = *(unsigned __int8 **)(a2 + 184);
    if ( *v13 != 14 )
    {
      v14 = *v13 - 15;
      if ( *v13 == 15 )
      {
        if ( byte_140171461 >= 0 )
          goto LABEL_134;
        v15 = *((_QWORD *)v13 + 1);
        v16 = 0;
        v17 = 0LL;
        v51 = 0;
        v18 = 0;
        v19 = 0;
        v20 = 0;
        v21 = 0;
        v22 = *(unsigned __int8 *)(v15 + 2);
        if ( (_BYTE)v22 == 40 )
        {
          v23 = 0LL;
          v52 = 0;
          if ( !*(_DWORD *)(v15 + 20) )
          {
            v24 = 0;
            v56 = *(_DWORD *)(v15 + 56);
            if ( v56 )
            {
              while ( 1 )
              {
                v12 = *(unsigned int *)(v15 + 4LL * v24 + 120);
                if ( (unsigned int)v12 >= 0x80 )
                {
                  v25 = *(unsigned int *)(v15 + 16);
                  if ( (unsigned int)v12 < (unsigned int)v25 )
                  {
                    v26 = (unsigned int)v12;
                    v27 = *(_DWORD *)(v12 + v15) - 64;
                    if ( v27 )
                    {
                      v12 = (unsigned int)(v27 - 1);
                      if ( (_DWORD)v12 )
                      {
                        if ( (_DWORD)v12 == 1 )
                        {
                          v12 = v26 + 40;
                          if ( v26 + 40 <= v25 )
                            goto LABEL_28;
                        }
                      }
                      else
                      {
                        v12 = v26 + 56;
                        if ( v26 + 56 <= v25 )
                        {
                          v52 = 1;
                          if ( *(_BYTE *)(v26 + v15 + 10) )
                            v23 = (char *)(v26 + v15 + 24);
                          v16 = *(_BYTE *)(v26 + v15 + 8);
                          v17 = *(_BYTE **)(v26 + v15 + 16);
                          v18 = *(_BYTE *)(v26 + v15 + 9);
                        }
                      }
                    }
                    else
                    {
                      v12 = v26 + 40;
                      if ( v26 + 40 <= v25 )
                        goto LABEL_103;
                    }
                    if ( v52 )
                      goto LABEL_107;
                  }
                }
                if ( ++v24 >= v56 )
                  goto LABEL_107;
              }
            }
            goto LABEL_107;
          }
          goto LABEL_134;
        }
        goto LABEL_109;
      }
      goto LABEL_77;
    }
LABEL_131:
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_134;
    v28 = &EventNonReadWriteRequestComplete;
    goto LABEL_133;
  }
  v58[0] = *(_QWORD *)(v2 + 8);
  v58[1] = *(_QWORD *)(v2 + 16);
  v61 = *(_QWORD *)(v2 + 32);
  v59 = *(_DWORD *)(v2 + 24);
  v29 = *(unsigned __int8 *)(v2 + 1);
  if ( v29 > 5 )
  {
    if ( v29 == 6 || v29 == 7 )
      goto LABEL_47;
    v30 = v29 - 8;
    if ( v29 == 8 )
    {
      v31 = RaWmiIrpRegisterRequest(a1, v58);
      goto LABEL_48;
    }
LABEL_56:
    if ( v30 != 1 )
    {
      v37 = RaidCompleteWmiIrp(a1, a2);
      if ( v9 == 1094997074 )
      {
        RaidReleaseAdapterRemoveLock(v7);
      }
      else if ( v9 == 1314275652 )
      {
        NvmeAdapterReleaseRemoveLock(v55);
      }
      else
      {
        v38 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
        v39 = *(_DWORD *)(v38 + *(_QWORD *)(v6 + 40));
        while ( (v39 & 1) == 0 )
        {
          v40 = v39;
          v39 = _InterlockedCompareExchange((volatile signed __int32 *)(v38 + *(_QWORD *)(v6 + 40)), v39 - 2, v39);
          if ( v40 == v39 )
            return v37;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 1032), 0xFFFFFFFF) == 1 )
          KeSetEvent((PRKEVENT)(v6 + 520), 0, 0);
      }
      return v37;
    }
    goto LABEL_47;
  }
  if ( v29 != 5 )
  {
    if ( *(_BYTE *)(v2 + 1) )
    {
      if ( v29 != 1 && v29 != 2 )
      {
        v30 = v29 - 3;
        if ( v29 != 3 )
          goto LABEL_56;
      }
    }
  }
LABEL_47:
  v31 = RaWmiIrpNormalRequest(a1, v29, (__int64)v58);
LABEL_48:
  v32 = v31;
  v54 = v31;
  *(_DWORD *)(a2 + 48) = v31;
  v33 = v31 < 0;
  v34 = v59;
  if ( v33 )
    v34 = 0LL;
  *(_QWORD *)(a2 + 56) = v34;
  if ( v9 == 1094997074 )
  {
    RaidReleaseAdapterRemoveLock(v7);
  }
  else if ( v9 == 1314275652 )
  {
    NvmeAdapterReleaseRemoveLock(v55);
  }
  else
  {
    v35 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    v36 = *(_DWORD *)(v35 + *(_QWORD *)(v6 + 40));
    while ( (v36 & 1) == 0 )
    {
      v41 = v36;
      v36 = _InterlockedCompareExchange((volatile signed __int32 *)(v35 + *(_QWORD *)(v6 + 40)), v36 - 2, v36);
      if ( v41 == v36 )
        goto LABEL_74;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 1032), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v6 + 520), 0, 0);
  }
LABEL_74:
  v11 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v32;
  if ( v11 )
    goto LABEL_134;
  v62 = 0LL;
  IoGetActivityIdIrp(a2, &v62);
  v13 = *(unsigned __int8 **)(a2 + 184);
  if ( *v13 == 14 )
    goto LABEL_131;
  v14 = *v13 - 15;
  if ( *v13 != 15 )
  {
LABEL_77:
    if ( v14 != 12 )
      goto LABEL_134;
    if ( v13[1] == 7 && !*((_DWORD *)v13 + 2) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v42 = *(int **)(a2 + 56);
        if ( v42 )
          v3 = *v42;
        McTemplateK0pqd_EtwWriteTransfer(v12, (__int64)v13, &v62, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_134;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_134;
    v28 = &EventPnpRequestComplete;
LABEL_133:
    McTemplateK0pd_EtwWriteTransfer(v12, v28, &v62, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_134;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_134;
  v15 = *((_QWORD *)v13 + 1);
  v16 = 0;
  v17 = 0LL;
  v51 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = *(unsigned __int8 *)(v15 + 2);
  if ( (_BYTE)v22 != 40 )
  {
LABEL_109:
    v46 = *(_BYTE *)(v15 + 72);
    v17 = *(_BYTE **)(v15 + 32);
    v18 = *(_BYTE *)(v15 + 11);
    v16 = *(_BYTE *)(v15 + 4);
    if ( !v22 )
      goto LABEL_110;
    goto LABEL_134;
  }
  v23 = 0LL;
  v53 = 0;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_134;
  v43 = 0;
  v57 = *(_DWORD *)(v15 + 56);
  if ( !v57 )
    goto LABEL_107;
  while ( 1 )
  {
    v12 = *(unsigned int *)(v15 + 4LL * v43 + 120);
    if ( (unsigned int)v12 >= 0x80 )
    {
      v44 = *(unsigned int *)(v15 + 16);
      if ( (unsigned int)v12 < (unsigned int)v44 )
        break;
    }
LABEL_101:
    if ( ++v43 >= v57 )
      goto LABEL_107;
  }
  v26 = (unsigned int)v12;
  v45 = *(_DWORD *)(v12 + v15) - 64;
  if ( v45 )
  {
    v12 = (unsigned int)(v45 - 1);
    if ( (_DWORD)v12 )
    {
      if ( (_DWORD)v12 == 1 )
      {
        v12 = v26 + 40;
        if ( v26 + 40 <= v44 )
        {
LABEL_28:
          if ( *(_DWORD *)(v26 + v15 + 12) )
            v23 = (char *)(v26 + v15 + 32);
          v17 = *(_BYTE **)(v26 + v15 + 24);
          goto LABEL_106;
        }
      }
    }
    else
    {
      v12 = v26 + 56;
      if ( v26 + 56 <= v44 )
      {
        v53 = 1;
        if ( *(_BYTE *)(v26 + v15 + 10) )
          v23 = (char *)(v26 + v15 + 24);
        v16 = *(_BYTE *)(v26 + v15 + 8);
        v17 = *(_BYTE **)(v26 + v15 + 16);
        v18 = *(_BYTE *)(v26 + v15 + 9);
      }
    }
    goto LABEL_100;
  }
  v12 = v26 + 40;
  if ( v26 + 40 > v44 )
  {
LABEL_100:
    if ( v53 )
      goto LABEL_107;
    goto LABEL_101;
  }
LABEL_103:
  if ( *(_BYTE *)(v26 + v15 + 10) )
    v23 = (char *)(v26 + v15 + 24);
  v17 = *(_BYTE **)(v26 + v15 + 16);
LABEL_106:
  v18 = *(_BYTE *)(v26 + v15 + 9);
  v16 = *(_BYTE *)(v26 + v15 + 8);
LABEL_107:
  if ( v23 )
  {
    v46 = *v23;
    v20 = 0;
LABEL_110:
    LOBYTE(v12) = v46 - 8;
    if ( (v12 & 0x5D) == 0 )
    {
      v47 = *(_BYTE *)(v15 + 3);
      if ( v47 == 1 || !v17 || !v18 )
        goto LABEL_129;
      LOBYTE(v15) = 0;
      v12 = (unsigned __int64)&v17[v18];
      v48 = v17 + 8;
      if ( (unsigned __int8)((*v17 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v48 <= v12 )
        {
          LOBYTE(v15) = 1;
          v20 = v17[2];
          v19 = v17[1] & 0xF;
          v21 = v17[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v48 <= v12 )
        {
          v19 = v17[2] & 0xF;
          v49 = v18;
          if ( (unsigned int)(unsigned __int8)v17[7] + 8 <= v18 )
            v49 = (unsigned __int8)v17[7] + 8;
          v12 = (unsigned __int64)(v17 + 13);
          v15 = (unsigned __int64)&v17[v49];
          if ( (unsigned __int64)(v17 + 13) > v15 )
            v51 = 0;
          else
            v51 = v17[12];
          if ( (unsigned __int64)(v17 + 14) <= v15 )
            v21 = *(_BYTE *)v12;
          LOBYTE(v15) = 1;
        }
        v20 = v51;
      }
      if ( (_BYTE)v15 )
      {
        LOBYTE(v3) = v20;
        v50 = v21;
      }
      else
      {
LABEL_129:
        v19 = 0;
        v50 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v12, v15, &v62, a2, *(_DWORD *)(a2 + 48), v47, v16, v19, v3, v50, a2);
    }
  }
LABEL_134:
  IofCompleteRequest((PIRP)a2, 0);
  return v54;
}
