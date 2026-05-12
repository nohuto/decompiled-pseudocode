/*
 * XREFs of RaUnitPowerIrp @ 0x14000606C
 * Callers:
 *     RaDriverPowerIrp @ 0x140006C80 (RaDriverPowerIrp.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x140004540 (RaUnitAcquireRemoveLock.c)
 *     RaidUnitSetPowerIrp @ 0x1400063C0 (RaidUnitSetPowerIrp.c)
 *     RaidUnitQueryPowerIrp @ 0x14003EDCC (RaidUnitQueryPowerIrp.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x140055624 (WPP_SF_qqD.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qqDD @ 0x140067ED4 (WPP_SF_qqDD.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitPowerIrp(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // ebx
  unsigned int v6; // r14d
  int v7; // r14d
  unsigned int PowerIrp; // eax
  unsigned int v9; // ebx
  unsigned __int64 v10; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  bool v14; // zf
  char *v15; // rcx
  __int64 v16; // rdx
  void *v17; // rdx
  int *v18; // rax
  unsigned __int64 v19; // rdx
  char *v20; // rax
  char v21; // r11
  unsigned int v22; // eax
  char v23; // r13
  char v24; // r12
  char v25; // al
  char v26; // r15
  _BYTE *v27; // r9
  unsigned __int8 v28; // r10
  char *v29; // rsi
  unsigned int v30; // r8d
  unsigned int *v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // r14
  char v34; // cl
  char v35; // r8
  char *v36; // rcx
  __int64 v37; // rdx
  int *v38; // rax
  void *v39; // rdx
  unsigned __int64 v40; // rdx
  char v41; // r12
  _BYTE *v42; // r9
  unsigned __int8 v43; // r10
  char v44; // r15
  char v45; // r14
  char v46; // r11
  char *v47; // r11
  unsigned int v48; // r13d
  unsigned int *v49; // r12
  __int64 v50; // rax
  unsigned __int64 v51; // r14
  char v52; // cl
  char v53; // r8
  char *v54; // rax
  unsigned int v55; // eax
  char v56; // al
  char v57; // [rsp+60h] [rbp-9h]
  char v58; // [rsp+61h] [rbp-8h]
  char v59; // [rsp+61h] [rbp-8h]
  char v60; // [rsp+62h] [rbp-7h]
  char v61; // [rsp+63h] [rbp-6h]
  int v62; // [rsp+64h] [rbp-5h]
  int v63; // [rsp+64h] [rbp-5h]
  int v64; // [rsp+68h] [rbp-1h]
  unsigned int v65; // [rsp+68h] [rbp-1h]
  unsigned __int64 v66; // [rsp+70h] [rbp+7h]
  __int128 v67; // [rsp+78h] [rbp+Fh] BYREF

  v4 = RaUnitAcquireRemoveLock(a1, a2, 1);
  LOBYTE(v5) = 0;
  v62 = v4;
  v6 = v4;
  if ( v4 < 0 )
  {
    v14 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v4;
    if ( v14 )
      goto LABEL_21;
    v67 = 0LL;
    IoGetActivityIdIrp(a2, &v67);
    v16 = *(_QWORD *)(a2 + 184);
    switch ( *(_BYTE *)v16 )
    {
      case 0xE:
        if ( (byte_140171462 & 8) == 0 )
          goto LABEL_21;
        v17 = &EventNonReadWriteRequestComplete;
        break;
      case 0xF:
        if ( byte_140171461 >= 0 )
          goto LABEL_21;
        v19 = *(_QWORD *)(v16 + 8);
        v26 = 0;
        v27 = 0LL;
        v28 = 0;
        v21 = 0;
        v23 = 0;
        v24 = 0;
        if ( *(_BYTE *)(v19 + 2) == 40 )
        {
          v29 = 0LL;
          v58 = 0;
          if ( *(_DWORD *)(v19 + 20) )
            goto LABEL_21;
          LODWORD(v15) = 0;
          v64 = 0;
          if ( !*(_DWORD *)(v19 + 56) )
            goto LABEL_83;
          v30 = *(_DWORD *)(v19 + 56);
          v31 = (unsigned int *)(v19 + 120);
          v66 = v19 + 120;
          while ( 1 )
          {
            v32 = *v31;
            if ( (unsigned int)v32 >= 0x80 )
            {
              v33 = *(unsigned int *)(v19 + 16);
              if ( (unsigned int)v32 < (unsigned int)v33 )
              {
                if ( *(_DWORD *)(v32 + v19) == 64 )
                {
                  LODWORD(v15) = v32 + 40;
                  if ( v32 + 40 <= v33 )
                  {
                    if ( *(_BYTE *)(v32 + v19 + 10) )
                      v29 = (char *)(v32 + v19 + 24);
                    v27 = *(_BYTE **)(v32 + v19 + 16);
                    goto LABEL_81;
                  }
                }
                else
                {
                  LODWORD(v15) = *(_DWORD *)(v32 + v19) - 65;
                  if ( *(_DWORD *)(v32 + v19) == 65 )
                  {
                    LODWORD(v15) = v32 + 56;
                    if ( v32 + 56 <= v33 )
                    {
                      v58 = 1;
                      if ( *(_BYTE *)(v32 + v19 + 10) )
                        v29 = (char *)(v32 + v19 + 24);
                      v26 = *(_BYTE *)(v32 + v19 + 8);
                      v27 = *(_BYTE **)(v32 + v19 + 16);
                      v28 = *(_BYTE *)(v32 + v19 + 9);
                    }
                  }
                  else if ( *(_DWORD *)(v32 + v19) == 66 )
                  {
                    LODWORD(v15) = v32 + 40;
                    if ( v32 + 40 <= v33 )
                    {
                      if ( *(_DWORD *)(v32 + v19 + 12) )
                        v29 = (char *)(v32 + v19 + 32);
                      v27 = *(_BYTE **)(v32 + v19 + 24);
LABEL_81:
                      v28 = *(_BYTE *)(v32 + v19 + 9);
                      v26 = *(_BYTE *)(v32 + v19 + 8);
LABEL_82:
                      v6 = v62;
LABEL_83:
                      if ( v29 )
                      {
                        v34 = *v29;
                        goto LABEL_86;
                      }
                      goto LABEL_21;
                    }
                  }
                }
                if ( v58 )
                  goto LABEL_82;
                LODWORD(v15) = v64;
                v30 = *(_DWORD *)(v19 + 56);
              }
            }
            LODWORD(v15) = (_DWORD)v15 + 1;
            v31 = (unsigned int *)(v66 + 4);
            v64 = (int)v15;
            v66 += 4LL;
            if ( (unsigned int)v15 >= v30 )
              goto LABEL_82;
          }
        }
        v34 = *(_BYTE *)(v19 + 72);
        v27 = *(_BYTE **)(v19 + 32);
        v28 = *(_BYTE *)(v19 + 11);
        v26 = *(_BYTE *)(v19 + 4);
        if ( *(_BYTE *)(v19 + 2) )
          goto LABEL_21;
LABEL_86:
        LOBYTE(v15) = v34 - 8;
        if ( ((unsigned __int8)v15 & 0x5D) != 0 )
          goto LABEL_21;
        v35 = *(_BYTE *)(v19 + 3);
        if ( v35 == 1 || !v27 || !v28 )
          goto LABEL_47;
        LOBYTE(v19) = 0;
        v15 = &v27[v28];
        v20 = v27 + 8;
        if ( (unsigned __int8)((*v27 & 0x7F) - 114) <= 1u )
        {
          if ( v20 > v15 )
          {
LABEL_45:
            if ( (_BYTE)v19 )
            {
              LOBYTE(v5) = v23;
              v25 = v24;
LABEL_48:
              McTemplateK0pduuuuup_EtwWriteTransfer(
                (_DWORD)v15,
                v19,
                (unsigned int)&v67,
                a2,
                *(_DWORD *)(a2 + 48),
                v35,
                v26,
                v21,
                v5,
                v25,
                a2);
              goto LABEL_21;
            }
LABEL_47:
            v21 = 0;
            v25 = 0;
            goto LABEL_48;
          }
          v23 = v27[2];
          v21 = v27[1] & 0xF;
          v24 = v27[3];
        }
        else
        {
          if ( v20 > v15 )
            goto LABEL_45;
          v21 = v27[2] & 0xF;
          v22 = v28;
          if ( (unsigned int)(unsigned __int8)v27[7] + 8 <= v28 )
            v22 = (unsigned __int8)v27[7] + 8;
          v15 = v27 + 13;
          v19 = (unsigned __int64)&v27[v22];
          if ( (unsigned __int64)(v27 + 13) <= v19 )
            v23 = v27[12];
          if ( (unsigned __int64)(v27 + 14) <= v19 )
            v24 = *v15;
        }
        LOBYTE(v19) = 1;
        goto LABEL_45;
      case 0x1B:
        if ( *(_BYTE *)(v16 + 1) == 7 && !*(_DWORD *)(v16 + 8) )
        {
          if ( (byte_140171462 & 0x40) != 0 )
          {
            v18 = *(int **)(a2 + 56);
            if ( v18 )
              v5 = *v18;
            McTemplateK0pqd_EtwWriteTransfer((_DWORD)v15, v16, (unsigned int)&v67, a2, v5, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_21;
        }
        if ( (byte_140171462 & 0x20) == 0 )
        {
LABEL_21:
          IofCompleteRequest((PIRP)a2, 0);
          return v6;
        }
        v17 = &EventPnpRequestComplete;
        break;
      default:
        goto LABEL_21;
    }
    McTemplateK0pd_EtwWriteTransfer(v15, v17, &v67, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_21;
  }
  v7 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
  v63 = v7;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 45LL, &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids, a1, a2, v7);
  }
  if ( v7 == 2 )
  {
    PowerIrp = RaidUnitSetPowerIrp(a1, a2);
LABEL_6:
    v9 = PowerIrp;
    goto LABEL_7;
  }
  if ( v7 == 3 )
  {
    PowerIrp = RaidUnitQueryPowerIrp(a1, a2);
    goto LABEL_6;
  }
  v14 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = -1073741637;
  if ( v14 )
    goto LABEL_155;
  v67 = 0LL;
  IoGetActivityIdIrp(a2, &v67);
  v37 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v37 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_155;
    v39 = &EventNonReadWriteRequestComplete;
    goto LABEL_101;
  }
  if ( *(_BYTE *)v37 != 15 )
  {
    if ( *(_BYTE *)v37 != 27 )
      goto LABEL_155;
    if ( *(_BYTE *)(v37 + 1) == 7 && !*(_DWORD *)(v37 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v38 = *(int **)(a2 + 56);
        if ( v38 )
          v5 = *v38;
        McTemplateK0pqd_EtwWriteTransfer((_DWORD)v36, v37, (unsigned int)&v67, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_155;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_155;
    v39 = &EventPnpRequestComplete;
LABEL_101:
    McTemplateK0pd_EtwWriteTransfer(v36, v39, &v67, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_155;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_155;
  v40 = *(_QWORD *)(v37 + 8);
  v41 = 0;
  v59 = 0;
  v42 = 0LL;
  v43 = 0;
  v57 = 0;
  v44 = 0;
  v60 = 0;
  v45 = 0;
  v46 = 0;
  if ( *(_BYTE *)(v40 + 2) != 40 )
  {
    v52 = *(_BYTE *)(v40 + 72);
    v42 = *(_BYTE **)(v40 + 32);
    v43 = *(_BYTE *)(v40 + 11);
    v41 = *(_BYTE *)(v40 + 4);
    if ( !*(_BYTE *)(v40 + 2) )
      goto LABEL_132;
    goto LABEL_154;
  }
  v47 = 0LL;
  v61 = 0;
  if ( *(_DWORD *)(v40 + 20) )
    goto LABEL_154;
  v48 = 0;
  v65 = *(_DWORD *)(v40 + 56);
  if ( !v65 )
    goto LABEL_124;
  v49 = (unsigned int *)(v40 + 120);
  while ( 1 )
  {
    v50 = *v49;
    if ( (unsigned int)v50 >= 0x80 )
    {
      v51 = *(unsigned int *)(v40 + 16);
      if ( (unsigned int)v50 < (unsigned int)v51 )
        break;
    }
LABEL_121:
    ++v48;
    ++v49;
    if ( v48 >= v65 )
    {
LABEL_122:
      v41 = v59;
      goto LABEL_123;
    }
  }
  if ( *(_DWORD *)(v50 + v40) != 64 )
  {
    LODWORD(v36) = *(_DWORD *)(v50 + v40) - 65;
    if ( *(_DWORD *)(v50 + v40) == 65 )
    {
      LODWORD(v36) = v50 + 56;
      if ( v50 + 56 <= v51 )
      {
        v61 = 1;
        if ( *(_BYTE *)(v50 + v40 + 10) )
          v47 = (char *)((unsigned int)v50 + v40 + 24);
        v42 = *(_BYTE **)((unsigned int)v50 + v40 + 16);
        v43 = *(_BYTE *)((unsigned int)v50 + v40 + 9);
        v59 = *(_BYTE *)(v50 + v40 + 8);
      }
    }
    else if ( *(_DWORD *)(v50 + v40) == 66 )
    {
      LODWORD(v36) = v50 + 40;
      if ( v50 + 40 <= v51 )
      {
        if ( *(_DWORD *)(v50 + v40 + 12) )
          v47 = (char *)(v50 + v40 + 32);
        v42 = *(_BYTE **)(v50 + v40 + 24);
        goto LABEL_130;
      }
    }
    goto LABEL_120;
  }
  LODWORD(v36) = v50 + 40;
  if ( v50 + 40 > v51 )
  {
LABEL_120:
    if ( v61 )
      goto LABEL_122;
    goto LABEL_121;
  }
  if ( *(_BYTE *)(v50 + v40 + 10) )
    v47 = (char *)((unsigned int)v50 + v40 + 24);
  v42 = *(_BYTE **)(v50 + v40 + 16);
LABEL_130:
  v41 = *(_BYTE *)(v50 + v40 + 8);
  v43 = *(_BYTE *)(v50 + v40 + 9);
LABEL_123:
  v45 = 0;
LABEL_124:
  if ( v47 )
  {
    v52 = *v47;
    v46 = 0;
LABEL_132:
    LOBYTE(v36) = v52 - 8;
    if ( ((unsigned __int8)v36 & 0x5D) == 0 )
    {
      v53 = *(_BYTE *)(v40 + 3);
      if ( v53 == 1 || !v42 || !v43 )
        goto LABEL_152;
      LOBYTE(v40) = 0;
      v36 = &v42[v43];
      v54 = v42 + 8;
      if ( (unsigned __int8)((*v42 & 0x7F) - 114) <= 1u )
      {
        if ( v54 <= v36 )
        {
          LOBYTE(v40) = 1;
          v45 = v42[2];
          v44 = v42[1] & 0xF;
          v46 = v42[3];
        }
      }
      else
      {
        if ( v54 <= v36 )
        {
          v44 = v42[2] & 0xF;
          v55 = v43;
          if ( (unsigned int)(unsigned __int8)v42[7] + 8 <= v43 )
            v55 = (unsigned __int8)v42[7] + 8;
          v36 = v42 + 13;
          v40 = (unsigned __int64)&v42[v55];
          if ( (unsigned __int64)(v42 + 13) > v40 )
            v57 = 0;
          else
            v57 = v42[12];
          if ( (unsigned __int64)(v42 + 14) > v40 )
            v60 = 0;
          else
            v60 = *v36;
          LOBYTE(v40) = 1;
        }
        v46 = v60;
        v45 = v57;
      }
      if ( (_BYTE)v40 )
      {
        LOBYTE(v5) = v45;
        v56 = v46;
      }
      else
      {
LABEL_152:
        v44 = 0;
        v56 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        (_DWORD)v36,
        v40,
        (unsigned int)&v67,
        a2,
        *(_DWORD *)(a2 + 48),
        v53,
        v41,
        v44,
        v5,
        v56,
        a2);
    }
  }
LABEL_154:
  v7 = v63;
LABEL_155:
  IofCompleteRequest((PIRP)a2, 0);
  v9 = -1073741637;
LABEL_7:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      46LL,
      &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids,
      a1,
      a2,
      v7,
      v9);
  }
  v10 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v11 = *(_DWORD *)(v10 + *(_QWORD *)(a1 + 40));
  while ( (v11 & 1) == 0 )
  {
    v12 = v11;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + *(_QWORD *)(a1 + 40)), v11 - 2, v11);
    if ( v12 == v11 )
      return v9;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
  return v9;
}
