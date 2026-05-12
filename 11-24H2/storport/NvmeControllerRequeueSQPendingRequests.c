/*
 * XREFs of NvmeControllerRequeueSQPendingRequests @ 0x1400F41F8
 * Callers:
 *     NvmeControllerRequeuePendingRequests @ 0x1400F41A4 (NvmeControllerRequeuePendingRequests.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterDetachXrbFromSrb @ 0x1400E1884 (NvmeAdapterDetachXrbFromSrb.c)
 *     NvmeControllerGetNamespace @ 0x1400EEC74 (NvmeControllerGetNamespace.c)
 *     NvmeControllerProcessExtendedCommandForResetRecovery @ 0x1400F2EB8 (NvmeControllerProcessExtendedCommandForResetRecovery.c)
 *     NvmeProcessIoForResetRecovery @ 0x1400F9F34 (NvmeProcessIoForResetRecovery.c)
 *     FreeNVMePrpListBufferEntry @ 0x14011A2E0 (FreeNVMePrpListBufferEntry.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NvmeControllerRequeueSQPendingRequests(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  unsigned int v5; // esi
  unsigned int v6; // edx
  __int16 v7; // r8
  __int64 Namespace; // r12
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  bool v13; // bp
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rsi
  bool v17; // zf
  __int64 v18; // r14
  __int64 v19; // rcx
  unsigned int v20; // ebp
  __int64 v21; // rcx
  void (__fastcall *v22)(__int64, __int64, __int64, _QWORD, __int64, __int64); // r10
  __int64 v23; // r11
  __int64 v24; // rcx
  char v25; // r15
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned int *v33; // rax
  __int64 v34; // rcx
  const EVENT_DESCRIPTOR *v35; // rdx
  unsigned __int64 v36; // rdx
  char v37; // r13
  _BYTE *v38; // r9
  unsigned __int8 v39; // r11
  char v40; // r10
  char v41; // r14
  unsigned __int8 v42; // bp
  char *v43; // r14
  unsigned int v44; // r12d
  unsigned int v45; // ebp
  __int64 v46; // rcx
  unsigned __int64 v47; // r10
  __int64 v48; // r8
  int v49; // ecx
  int v50; // ecx
  char v51; // cl
  char v52; // r8
  _BYTE *v53; // rcx
  _BYTE *v54; // rax
  unsigned int v55; // eax
  unsigned __int64 v56; // rcx
  char v57; // al
  __int64 v58; // rcx
  __int64 v59; // [rsp+20h] [rbp-A8h]
  __int64 v60; // [rsp+28h] [rbp-A0h]
  __int64 v61; // [rsp+30h] [rbp-98h]
  __int64 v62; // [rsp+38h] [rbp-90h]
  __int64 v63; // [rsp+40h] [rbp-88h]
  __int64 v64; // [rsp+48h] [rbp-80h]
  unsigned __int8 v65; // [rsp+61h] [rbp-67h]
  char v66; // [rsp+62h] [rbp-66h]
  unsigned int v67; // [rsp+64h] [rbp-64h]
  __int16 v68; // [rsp+68h] [rbp-60h]
  unsigned int v69; // [rsp+6Ch] [rbp-5Ch]
  __int64 v70; // [rsp+70h] [rbp-58h]
  __int64 v71; // [rsp+78h] [rbp-50h]
  __int64 v72; // [rsp+80h] [rbp-48h]
  GUID v73; // [rsp+88h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a1 + 88);
  v5 = *(_DWORD *)(a1 + 124);
  v6 = 0;
  v7 = *(_WORD *)(a1 + 136);
  v68 = v7;
  Namespace = 0LL;
  result = v5 - 1;
  v70 = v4;
  if ( (*(_BYTE *)(v4 + 136) & 2) == 0 )
    --v5;
  v69 = 0;
  v67 = v5;
  if ( v5 )
  {
    result = 0LL;
    v71 = 0LL;
    while ( 1 )
    {
      v11 = result << 7;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 32) + (result << 7) + 60) & 1) != 0 )
        break;
LABEL_31:
      ++v6;
      result = v71 + 1;
      v69 = v6;
      ++v71;
      if ( v6 >= v5 )
        goto LABEL_32;
    }
    v12 = *(_QWORD *)(a1 + 32);
    v13 = (*(_BYTE *)(v11 + v12 + 60) & 8) != 0;
    v14 = *(unsigned __int16 *)(v11 + v12 + 56);
    *(_BYTE *)(v11 + v12 + 60) &= ~1u;
    v15 = *(_QWORD *)(a1 + 32);
    if ( (*(_BYTE *)(v4 + 136) & 2) != 0 )
    {
      v16 = *(_QWORD *)(v11 + v15 + 24);
      if ( *(_DWORD *)(v4 + 572) == 1 )
        Namespace = NvmeControllerGetNamespace(v4, *(_DWORD *)(v11 + v15 + 88));
      v17 = *(_BYTE *)(v16 + 2) == 40;
      v18 = *(_QWORD *)(v11 + *(_QWORD *)(a1 + 32) + 40);
      *(_BYTE *)(v16 + 3) = 14;
      if ( v17 )
        v19 = *(_QWORD *)(v16 + 96);
      else
        v19 = *(_QWORD *)(v16 + 48);
      v20 = *(_DWORD *)(v19 + 20);
      NvmeAdapterDetachXrbFromSrb(v19);
      if ( v22 )
        v22(v4, v16, v23, v20, Namespace, v18);
      else
        KeSetEvent((PRKEVENT)(v21 + 664), 0, 0);
      v24 = 2 * v14;
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v24) = 0LL;
      *(_WORD *)(*(_QWORD *)(a1 + 24) + 8 * v24 + 8) = -1;
      *(_QWORD *)(v11 + *(_QWORD *)(a1 + 32) + 24) = 0LL;
      *(_DWORD *)(v11 + *(_QWORD *)(a1 + 32) + 88) = 0;
      *(_QWORD *)(v11 + *(_QWORD *)(a1 + 32) + 32) = 0LL;
      *(_QWORD *)(v11 + *(_QWORD *)(a1 + 32) + 40) = 0LL;
      goto LABEL_29;
    }
    v25 = 0;
    if ( *(_QWORD *)(v11 + v15 + 16) )
    {
      FreeNVMePrpListBufferEntry(
        v4,
        *(unsigned __int16 *)(v11 + *(_QWORD *)(a1 + 32) + 52),
        *(_QWORD *)(v11 + *(_QWORD *)(a1 + 32) + 16),
        a4);
      v6 = v69;
      v7 = v68;
    }
    if ( (*(_BYTE *)(v11 + *(_QWORD *)(a1 + 32) + 60) & 0x10) != 0
      || (*(_BYTE *)(v11 + *(_QWORD *)(a1 + 32) + 61) & 2) != 0 )
    {
      goto LABEL_30;
    }
    v26 = *(_QWORD *)(a1 + 32);
    if ( !v7 )
    {
      NvmeControllerProcessExtendedCommandForResetRecovery(
        v4,
        *(unsigned int **)(v26 + v11 + 40),
        *(unsigned __int16 *)(v26 + v11 + 52));
LABEL_30:
      v6 = v69;
      v7 = v68;
      *(_WORD *)(v11 + *(_QWORD *)(a1 + 32) + 56) = -1;
      goto LABEL_31;
    }
    Namespace = 0LL;
    v27 = _InterlockedExchange64((volatile __int64 *)(((unsigned __int64)v6 << 7) + v26 + 24), 0LL);
    v28 = *(_QWORD *)(a1 + 32);
    v29 = v4;
    v30 = *(_DWORD *)(v11 + v28 + 88);
    if ( !v30 )
      goto LABEL_28;
    v72 = NvmeControllerGetNamespace(v4, v30);
    Namespace = v72;
    if ( v72 )
    {
      if ( (*(_BYTE *)(v11 + *(_QWORD *)(a1 + 32) + 60) & 2) == 0 )
      {
        if ( v27 )
        {
          LOBYTE(a4) = v13;
          NvmeProcessIoForResetRecovery(
            v72,
            v27,
            *(unsigned __int16 *)(v11 + *(_QWORD *)(a1 + 32) + 52),
            a4,
            *(_QWORD *)(v11 + *(_QWORD *)(a1 + 32) + 40));
        }
        goto LABEL_29;
      }
      v28 = *(_QWORD *)(a1 + 32);
      v29 = v4;
LABEL_28:
      NvmeControllerProcessExtendedCommandForResetRecovery(
        v29,
        *(unsigned int **)(v11 + v28 + 40),
        *(unsigned __int16 *)(v11 + v28 + 52));
LABEL_29:
      v5 = v67;
      goto LABEL_30;
    }
    if ( !v27 )
      goto LABEL_29;
    v17 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(v27 + 141) = -84;
    *(_DWORD *)(v27 + 48) = -2147483619;
    if ( v17 )
      goto LABEL_99;
    v73 = 0LL;
    IoGetActivityIdIrp(v27, &v73);
    v32 = *(_QWORD *)(v27 + 184);
    if ( *(_BYTE *)v32 == 14 )
    {
      if ( (byte_140171462 & 8) == 0 )
        goto LABEL_99;
      v35 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
      goto LABEL_47;
    }
    if ( *(_BYTE *)v32 != 15 )
    {
      if ( *(_BYTE *)v32 == 27 )
      {
        if ( *(_BYTE *)(v32 + 1) == 7 && !*(_DWORD *)(v32 + 8) )
        {
          if ( (byte_140171462 & 0x40) != 0 )
          {
            v33 = *(unsigned int **)(v27 + 56);
            if ( v33 )
              v34 = *v33;
            else
              v34 = 0LL;
            LODWORD(v60) = *(_DWORD *)(v27 + 48);
            LODWORD(v59) = v34;
            McTemplateK0pqd_EtwWriteTransfer(v34, v32, &v73, v27, v59, v60);
          }
          goto LABEL_99;
        }
        if ( (byte_140171462 & 0x20) != 0 )
        {
          v35 = &EventPnpRequestComplete;
LABEL_47:
          LODWORD(v59) = *(_DWORD *)(v27 + 48);
          McTemplateK0pd_EtwWriteTransfer(v31, v35, &v73, v27, v59);
        }
      }
LABEL_99:
      IofCompleteRequest((PIRP)v27, 0);
      Namespace = 0LL;
      goto LABEL_29;
    }
    if ( byte_140171461 >= 0 )
      goto LABEL_99;
    v36 = *(_QWORD *)(v32 + 8);
    v37 = 0;
    v38 = 0LL;
    v39 = 0;
    v66 = 0;
    v40 = 0;
    v65 = 0;
    v41 = 0;
    v42 = 0;
    if ( *(_BYTE *)(v36 + 2) == 40 )
    {
      v43 = 0LL;
      if ( *(_DWORD *)(v36 + 20) )
        goto LABEL_98;
      v44 = *(_DWORD *)(v36 + 56);
      v45 = 0;
      if ( v44 )
      {
        do
        {
          v46 = *(unsigned int *)(v36 + 4LL * v45 + 120);
          if ( (unsigned int)v46 >= 0x80 )
          {
            v47 = *(unsigned int *)(v36 + 16);
            if ( (unsigned int)v46 < (unsigned int)v47 )
            {
              v48 = (unsigned int)v46;
              v49 = *(_DWORD *)(v46 + v36) - 64;
              if ( v49 )
              {
                v50 = v49 - 1;
                if ( v50 )
                {
                  if ( v50 == 1 && v48 + 40 <= v47 )
                  {
                    if ( *(_DWORD *)(v48 + v36 + 12) )
                      v43 = (char *)(v48 + v36 + 32);
                    v38 = *(_BYTE **)(v48 + v36 + 24);
LABEL_61:
                    v37 = *(_BYTE *)(v48 + v36 + 8);
                    v40 = 0;
                    v39 = *(_BYTE *)(v48 + v36 + 9);
                    goto LABEL_70;
                  }
                }
                else if ( v48 + 56 <= v47 )
                {
                  v25 = 1;
                  if ( *(_BYTE *)(v48 + v36 + 10) )
                    v43 = (char *)(v48 + v36 + 24);
                  v37 = *(_BYTE *)(v48 + v36 + 8);
                  v38 = *(_BYTE **)(v48 + v36 + 16);
                  v39 = *(_BYTE *)(v48 + v36 + 9);
                }
              }
              else if ( v48 + 40 <= v47 )
              {
                if ( *(_BYTE *)(v48 + v36 + 10) )
                  v43 = (char *)(v48 + v36 + 24);
                v38 = *(_BYTE **)(v48 + v36 + 16);
                goto LABEL_61;
              }
              if ( v25 )
                break;
            }
          }
          ++v45;
        }
        while ( v45 < v44 );
        v40 = 0;
      }
LABEL_70:
      if ( !v43 )
        goto LABEL_98;
      v42 = 0;
      v51 = *v43;
      v41 = 0;
    }
    else
    {
      v51 = *(_BYTE *)(v36 + 72);
      v38 = *(_BYTE **)(v36 + 32);
      v39 = *(_BYTE *)(v36 + 11);
      v37 = *(_BYTE *)(v36 + 4);
      if ( *(_BYTE *)(v36 + 2) )
      {
LABEL_98:
        v4 = v70;
        goto LABEL_99;
      }
    }
    if ( ((v51 - 8) & 0x5D) == 0 )
    {
      v52 = *(_BYTE *)(v36 + 3);
      if ( v52 == 1 || !v38 || !v39 )
        goto LABEL_96;
      LOBYTE(v36) = 0;
      v53 = &v38[v39];
      v54 = v38 + 8;
      if ( (unsigned __int8)((*v38 & 0x7F) - 114) <= 1u )
      {
        if ( v54 <= v53 )
        {
          LOBYTE(v36) = 1;
          v41 = v38[2];
          v40 = v38[1] & 0xF;
          v42 = v38[3];
        }
      }
      else
      {
        if ( v54 <= v53 )
        {
          v36 = (unsigned __int64)(v38 + 13);
          v40 = v38[2] & 0xF;
          v55 = v39;
          if ( (unsigned int)(unsigned __int8)v38[7] + 8 <= v39 )
            v55 = (unsigned __int8)v38[7] + 8;
          v56 = (unsigned __int64)&v38[v55];
          if ( v36 > v56 )
            v66 = 0;
          else
            v66 = v38[12];
          if ( (unsigned __int64)(v38 + 14) > v56 )
            v65 = 0;
          else
            v65 = *(_BYTE *)v36;
          LOBYTE(v36) = 1;
        }
        v42 = v65;
        v41 = v66;
      }
      if ( (_BYTE)v36 )
      {
        v57 = v41;
        v58 = v42;
      }
      else
      {
LABEL_96:
        v40 = 0;
        v57 = 0;
        v58 = 0LL;
      }
      LOBYTE(v64) = v58;
      LOBYTE(v63) = v57;
      LOBYTE(v62) = v40;
      LOBYTE(v61) = v37;
      LOBYTE(v60) = v52;
      LODWORD(v59) = *(_DWORD *)(v27 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v58, v36, &v73, v27, v59, v60, v61, v62, v63, v64, v27);
    }
    goto LABEL_98;
  }
LABEL_32:
  *(_DWORD *)(a1 + 140) = 0;
  *(_WORD *)(a1 + 148) = 0;
  return result;
}
