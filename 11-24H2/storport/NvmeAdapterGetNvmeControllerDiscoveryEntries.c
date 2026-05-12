/*
 * XREFs of NvmeAdapterGetNvmeControllerDiscoveryEntries @ 0x14019943C
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x140195438 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeControllerAcquireRundown @ 0x1400BEB10 (NvmeControllerAcquireRundown.c)
 *     NvmeAdapterFindNvmeController @ 0x1400CFE44 (NvmeAdapterFindNvmeController.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterGetNvmeControllerDiscoveryEntries(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v4; // rdx
  unsigned __int64 v5; // r12
  __int64 v6; // r15
  unsigned int v7; // ebp
  __int64 NvmeController; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  int v11; // ebx
  unsigned __int64 v12; // r13
  _WORD *v13; // r15
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  int v16; // r9d
  __int64 *v17; // r8
  _WORD *v18; // rdx
  unsigned int v19; // edi
  __int128 *v20; // rcx
  __int64 v21; // r11
  _OWORD *v22; // rax
  __int128 v23; // xmm0
  _OWORD *v24; // rax
  __int64 v25; // r11
  __int128 *v26; // rcx
  __int128 v27; // xmm0
  bool v28; // zf
  unsigned __int64 v29; // rcx
  __int64 v30; // rdx
  int *v31; // rax
  const EVENT_DESCRIPTOR *v32; // rdx
  __int64 v33; // rdx
  char v34; // bl
  char v35; // r15
  _BYTE *v36; // r9
  unsigned __int8 v37; // r10
  char v38; // r11
  char v39; // r13
  char *v40; // rbx
  unsigned int v41; // r12d
  unsigned __int64 v42; // r14
  __int64 v43; // r8
  int v44; // ecx
  char v45; // cl
  char v46; // r8
  _BYTE *v47; // rax
  unsigned int v48; // eax
  unsigned __int64 v49; // r8
  char v50; // al
  char v52; // [rsp+60h] [rbp-68h]
  char v53; // [rsp+61h] [rbp-67h]
  unsigned int v54; // [rsp+64h] [rbp-64h]
  int v55; // [rsp+68h] [rbp-60h]
  unsigned int v56; // [rsp+68h] [rbp-60h]
  __int64 v57; // [rsp+70h] [rbp-58h]
  GUID v58; // [rsp+78h] [rbp-50h] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v5 = 0LL;
  v57 = v4;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( (*(_BYTE *)(a1 + 144) & 1) == 0 || !*(_QWORD *)(a1 + 592) )
  {
    v7 = -1073741637;
    goto LABEL_47;
  }
  v6 = *(_QWORD *)(a2 + 24);
  if ( !v6 || *(_DWORD *)(v4 + 16) < 0x20u || *(_WORD *)v6 != 1 || *(_WORD *)(v6 + 2) < 0x20u )
  {
    v7 = -1073741811;
    goto LABEL_47;
  }
  v54 = 32;
  if ( *(_DWORD *)(v4 + 8) < 0x20u )
  {
    v7 = -1073741789;
    goto LABEL_47;
  }
  NvmeController = NvmeAdapterFindNvmeController(a1, *(_QWORD *)(v6 + 24) ^ a1, 0, 0LL);
  v9 = NvmeController;
  if ( !NvmeController )
  {
    v7 = -1073741275;
    goto LABEL_47;
  }
  v55 = NvmeControllerAcquireRundown(NvmeController);
  v7 = v55;
  if ( v55 >= 0 )
  {
    if ( (*(_BYTE *)(v9 + 136) & 8) != 0 )
    {
      v7 = -2147483631;
      goto LABEL_44;
    }
    if ( *(_DWORD *)(v9 + 572) != 2 )
    {
      v7 = -1073741637;
      goto LABEL_44;
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v9 + 1456), 1u);
    v10 = *(_QWORD *)(v6 + 8);
    v11 = *(_DWORD *)(v6 + 4);
    v12 = *(_QWORD *)(v6 + 16);
    v13 = *(_WORD **)(a2 + 24);
    *(_QWORD *)&v58.Data1 = v10;
    memset_0(v13, 0, *(unsigned int *)(v57 + 8));
    if ( (v11 & 1) != 0 && *(_QWORD *)&v58.Data1 != *(_QWORD *)(v9 + 1560) )
    {
      v7 = -1073741536;
      goto LABEL_43;
    }
    *v13 = 1;
    *((_QWORD *)v13 + 2) = *(_QWORD *)(v9 + 1560);
    v14 = *(_QWORD *)(v9 + 1568);
    if ( v12 < v14 )
    {
      v15 = v14 - v12;
      *((_QWORD *)v13 + 3) = v15;
      if ( *(_DWORD *)(v57 + 8) >= 0x258u )
      {
        v17 = *(__int64 **)(v9 + 1576);
        v18 = v13 + 16;
        if ( v17 == (__int64 *)(v9 + 1576) )
          goto LABEL_42;
        v19 = 32;
        while ( 1 )
        {
          if ( v5 >= v12 )
          {
            if ( *(unsigned int *)(v57 + 8) < (unsigned __int64)v19 + 568 || v5 - v12 > 0x400 )
            {
LABEL_41:
              v7 = v55;
              v54 = v19;
              v2 = 0;
LABEL_42:
              v13[1] = v5 - v12;
              *((_DWORD *)v13 + 1) = v54;
              *(_QWORD *)(a2 + 56) = v54;
LABEL_43:
              ExReleaseResourceLite((PERESOURCE)(v9 + 1456));
              KeLeaveCriticalRegion();
LABEL_44:
              ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v9 + 552));
              goto LABEL_47;
            }
            *(_DWORD *)v18 = 37224449;
            if ( *((_WORD *)v17 + 11) == 0xFFFF )
              *((_DWORD *)v18 + 1) |= 1u;
            if ( *((_BYTE *)v17 + 18) == 2 )
              *((_DWORD *)v18 + 1) |= 2u;
            v20 = (__int128 *)(v17 + 34);
            *((_DWORD *)v18 + 2) = *((unsigned __int8 *)v17 + 16);
            v21 = 2LL;
            *((_DWORD *)v18 + 3) = *((unsigned __int8 *)v17 + 17);
            v18[8] = *((_WORD *)v17 + 10);
            v18[9] = *((_WORD *)v17 + 11);
            v18[10] = *((_WORD *)v17 + 12);
            *((_BYTE *)v18 + 22) = *((_BYTE *)v17 + 19);
            v22 = v18 + 12;
            do
            {
              v23 = *v20;
              v20 += 8;
              *v22 = v23;
              v22 += 8;
              *(v22 - 7) = *(v20 - 7);
              *(v22 - 6) = *(v20 - 6);
              *(v22 - 5) = *(v20 - 5);
              *(v22 - 4) = *(v20 - 4);
              *(v22 - 3) = *(v20 - 3);
              *(v22 - 2) = *(v20 - 2);
              *(v22 - 1) = *(v20 - 1);
              --v21;
            }
            while ( v21 );
            v24 = v18 + 140;
            v25 = 2LL;
            v26 = (__int128 *)(v17 + 66);
            do
            {
              v27 = *v26;
              v26 += 8;
              *v24 = v27;
              v24 += 8;
              *(v24 - 7) = *(v26 - 7);
              *(v24 - 6) = *(v26 - 6);
              *(v24 - 5) = *(v26 - 5);
              *(v24 - 4) = *(v26 - 4);
              *(v24 - 3) = *(v26 - 3);
              *(v24 - 2) = *(v26 - 2);
              *(v24 - 1) = *(v26 - 1);
              --v25;
            }
            while ( v25 );
            *(_OWORD *)(v18 + 268) = *((_OWORD *)v17 + 3);
            *(_OWORD *)(v18 + 276) = *((_OWORD *)v17 + 4);
            v18 += 284;
            v19 += 568;
          }
          v17 = (__int64 *)*v17;
          ++v5;
          if ( v17 == (__int64 *)(v9 + 1576) )
            goto LABEL_41;
        }
      }
      v16 = 1024;
      if ( v15 < 0x400 )
        v16 = v15;
      *((_DWORD *)v13 + 1) = 568 * v16;
    }
    else
    {
      *((_DWORD *)v13 + 1) = 32;
    }
    *(_QWORD *)(a2 + 56) = 32LL;
    v7 = 0;
    goto LABEL_43;
  }
LABEL_47:
  v28 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v28 )
    goto LABEL_111;
  v58 = 0LL;
  IoGetActivityIdIrp(a2, &v58);
  v30 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v30 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_111;
    v32 = &EventNonReadWriteRequestComplete;
    goto LABEL_110;
  }
  if ( *(_BYTE *)v30 != 15 )
  {
    if ( *(_BYTE *)v30 != 27 )
      goto LABEL_111;
    if ( *(_BYTE *)(v30 + 1) == 7 && !*(_DWORD *)(v30 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v31 = *(int **)(a2 + 56);
        if ( v31 )
          v2 = *v31;
        McTemplateK0pqd_EtwWriteTransfer(v29, v30, &v58, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_111;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_111;
    v32 = &EventPnpRequestComplete;
LABEL_110:
    McTemplateK0pd_EtwWriteTransfer(v29, v32, &v58, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_111;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_111;
  v33 = *(_QWORD *)(v30 + 8);
  v34 = 0;
  v35 = 0;
  v52 = 0;
  v36 = 0LL;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  if ( *(_BYTE *)(v33 + 2) != 40 )
  {
    v45 = *(_BYTE *)(v33 + 72);
    v36 = *(_BYTE **)(v33 + 32);
    v37 = *(_BYTE *)(v33 + 11);
    v35 = *(_BYTE *)(v33 + 4);
    if ( !*(_BYTE *)(v33 + 2) )
      goto LABEL_87;
    goto LABEL_111;
  }
  v40 = 0LL;
  v53 = 0;
  if ( *(_DWORD *)(v33 + 20) )
    goto LABEL_111;
  v41 = 0;
  v56 = *(_DWORD *)(v33 + 56);
  if ( !v56 )
    goto LABEL_84;
  while ( 1 )
  {
    v29 = *(unsigned int *)(v33 + 4LL * v41 + 120);
    if ( (unsigned int)v29 >= 0x80 )
    {
      v42 = *(unsigned int *)(v33 + 16);
      if ( (unsigned int)v29 < (unsigned int)v42 )
        break;
    }
LABEL_78:
    if ( ++v41 >= v56 )
      goto LABEL_84;
  }
  v43 = (unsigned int)v29;
  v44 = *(_DWORD *)(v29 + v33) - 64;
  if ( v44 )
  {
    v29 = (unsigned int)(v44 - 1);
    if ( (_DWORD)v29 )
    {
      if ( (_DWORD)v29 == 1 )
      {
        v29 = v43 + 40;
        if ( v43 + 40 <= v42 )
        {
          if ( *(_DWORD *)(v43 + v33 + 12) )
            v40 = (char *)(v43 + v33 + 32);
          v36 = *(_BYTE **)(v43 + v33 + 24);
          goto LABEL_83;
        }
      }
    }
    else
    {
      v29 = v43 + 56;
      if ( v43 + 56 <= v42 )
      {
        v53 = 1;
        if ( *(_BYTE *)(v43 + v33 + 10) )
          v40 = (char *)(v43 + v33 + 24);
        v35 = *(_BYTE *)(v43 + v33 + 8);
        v36 = *(_BYTE **)(v43 + v33 + 16);
        v37 = *(_BYTE *)(v43 + v33 + 9);
      }
    }
    goto LABEL_77;
  }
  v29 = v43 + 40;
  if ( v43 + 40 > v42 )
  {
LABEL_77:
    if ( v53 )
      goto LABEL_84;
    goto LABEL_78;
  }
  if ( *(_BYTE *)(v43 + v33 + 10) )
    v40 = (char *)(v43 + v33 + 24);
  v36 = *(_BYTE **)(v43 + v33 + 16);
LABEL_83:
  v37 = *(_BYTE *)(v43 + v33 + 9);
  v35 = *(_BYTE *)(v43 + v33 + 8);
LABEL_84:
  if ( v40 )
  {
    v45 = *v40;
    v34 = 0;
LABEL_87:
    LOBYTE(v29) = v45 - 8;
    if ( (v29 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v33 + 3) == 1 || !v36 || !v37 )
        goto LABEL_106;
      v46 = 0;
      v29 = (unsigned __int64)&v36[v37];
      v47 = v36 + 8;
      if ( (unsigned __int8)((*v36 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v47 <= v29 )
        {
          v46 = 1;
          v34 = v36[2];
          v38 = v36[1] & 0xF;
          v39 = v36[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v47 <= v29 )
        {
          v38 = v36[2] & 0xF;
          v48 = v37;
          if ( (unsigned int)(unsigned __int8)v36[7] + 8 <= v37 )
            v48 = (unsigned __int8)v36[7] + 8;
          v29 = (unsigned __int64)(v36 + 13);
          v49 = (unsigned __int64)&v36[v48];
          if ( (unsigned __int64)(v36 + 13) > v49 )
            v52 = 0;
          else
            v52 = v36[12];
          if ( (unsigned __int64)(v36 + 14) <= v49 )
            v39 = *(_BYTE *)v29;
          v46 = 1;
        }
        v34 = v52;
      }
      if ( v46 )
      {
        LOBYTE(v2) = v34;
        v50 = v39;
      }
      else
      {
LABEL_106:
        v38 = 0;
        v50 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v29,
        v33,
        &v58,
        a2,
        *(_DWORD *)(a2 + 48),
        *(_BYTE *)(v33 + 3),
        v35,
        v38,
        v2,
        v50,
        a2);
    }
  }
LABEL_111:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
