/*
 * XREFs of IvtFlushTbInternal @ 0x140372B58
 * Callers:
 *     IvtFlushDomainTb @ 0x1403721E0 (IvtFlushDomainTb.c)
 *     IvtAttachDeviceDomainInternal @ 0x14056AEA0 (IvtAttachDeviceDomainInternal.c)
 *     IvtFlushTb @ 0x14056B940 (IvtFlushTb.c)
 *     IvtInitializeIommu @ 0x140B53BE0 (IvtInitializeIommu.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     IvtIommuWaitCommand @ 0x140374F34 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x140375084 (IvtIommuSendCommand.c)
 *     HalpIommuGetNextFlushDevice @ 0x1404F7A44 (HalpIommuGetNextFlushDevice.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall IvtFlushTbInternal(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        char a5,
        struct _EX_RUNDOWN_REF *a6,
        _QWORD *a7,
        unsigned int a8,
        __int64 a9)
{
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rcx
  char v13; // r14
  char v14; // di
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  bool v20; // zf
  char v21; // r15
  char v22; // al
  unsigned int v23; // r9d
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  __int64 v26; // rcx
  unsigned int v27; // edx
  _QWORD *v28; // r13
  _QWORD *v29; // rcx
  bool v30; // di
  __int64 v31; // rax
  char *v32; // r14
  char v33; // dl
  __int64 v34; // rsi
  struct _EX_RUNDOWN_REF *v35; // rcx
  unsigned int v36; // r15d
  int v37; // r9d
  char v38; // bl
  _QWORD *v39; // rbx
  __int64 v40; // rax
  char *v41; // rax
  struct _EX_RUNDOWN_REF *v42; // rcx
  __int16 v43; // dx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // edi
  __int64 v49; // rsi
  int v50; // edi
  unsigned __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rbx
  __int64 v57; // rax
  char v58; // [rsp+48h] [rbp-81h]
  bool v59; // [rsp+49h] [rbp-80h] BYREF
  char v60; // [rsp+4Ah] [rbp-7Fh]
  char v61; // [rsp+4Bh] [rbp-7Eh]
  char v62; // [rsp+4Ch] [rbp-7Dh] BYREF
  int v63; // [rsp+50h] [rbp-79h]
  unsigned int v64; // [rsp+54h] [rbp-75h] BYREF
  unsigned int v65; // [rsp+58h] [rbp-71h]
  _QWORD *v66; // [rsp+60h] [rbp-69h] BYREF
  struct _EX_RUNDOWN_REF *v67; // [rsp+68h] [rbp-61h] BYREF
  char *v68; // [rsp+70h] [rbp-59h] BYREF
  __int64 v69; // [rsp+78h] [rbp-51h]
  unsigned __int64 v70; // [rsp+80h] [rbp-49h]
  unsigned __int64 v71; // [rsp+88h] [rbp-41h]
  __int64 v72; // [rsp+90h] [rbp-39h] BYREF
  int v73; // [rsp+98h] [rbp-31h]
  __int64 v74; // [rsp+A0h] [rbp-29h]
  struct _EX_RUNDOWN_REF *v75; // [rsp+A8h] [rbp-21h]
  __int128 v76; // [rsp+B0h] [rbp-19h] BYREF
  __int128 v77; // [rsp+C0h] [rbp-9h] BYREF

  v9 = (__int64)a6;
  v10 = a9;
  v73 = a3;
  v11 = a1;
  v69 = a1;
  v75 = a6;
  v12 = 0x10000LL;
  v74 = a9;
  v67 = 0LL;
  v68 = 0LL;
  v76 = 0LL;
  if ( a4 )
    v12 = *(unsigned int *)(a4 + 48);
  v13 = a5;
  v77 = 0LL;
  if ( a5 )
  {
    if ( v12 != 0x10000 )
    {
      if ( a8 && _bittest64((const signed __int64 *)(v11 + 216), 0x27u) )
      {
        v14 = 1;
        v15 = 50LL;
      }
      else
      {
        v14 = 0;
        v15 = 34LL;
      }
      v16 = v12 << 16;
      v58 = v14;
      v17 = v15 ^ v16;
      goto LABEL_9;
    }
    v14 = 0;
    v58 = 0;
    v19 = 18LL;
  }
  else
  {
    if ( a3 == -1 )
    {
      v58 = 0;
      v14 = 0;
      if ( _bittest64((const signed __int64 *)(v11 + 216), 0x27u) )
      {
        *((_QWORD *)&v77 + 1) |= 0x40uLL;
        v18 = 50LL;
      }
      else
      {
        v18 = 34LL;
      }
      if ( v12 == 0x10000 )
        goto LABEL_10;
      v16 = v12 << 16;
      v17 = v16 ^ v18;
LABEL_9:
      v18 = v16 ^ v17 & 0xFFFFFFFF0000FFFFuLL;
LABEL_10:
      v10 = v74;
      v19 = v18 | 0xC0;
      goto LABEL_11;
    }
    v56 = ((unsigned __int64)(a3 & 0xFFFFF) << 32) | 6;
    if ( v12 != 0x10000 )
      v56 |= (unsigned __int64)(unsigned __int16)v12 << 16;
    if ( a8 )
    {
      v14 = 1;
      v19 = v56 | 0x30;
      v58 = 1;
    }
    else
    {
      v58 = 0;
      v19 = v56 & 0xFFFFFFFFFFFFFFCFuLL | 0x20;
      v14 = 0;
    }
  }
LABEL_11:
  v20 = (*(_BYTE *)(v11 + 224) & 4) == 0;
  v71 = v19;
  *(_QWORD *)&v77 = v19;
  if ( (v20 || !a6 || !a6[12].Count) && !a7 )
  {
    v21 = 0;
    v60 = 0;
    goto LABEL_57;
  }
  v21 = 1;
  v60 = 1;
  if ( !a8 )
  {
LABEL_57:
    v22 = 0;
    goto LABEL_15;
  }
  v22 = 1;
LABEL_15:
  v61 = v22;
  v23 = 0;
  v62 = 0;
  v70 = 0LL;
  v63 = 0;
  v65 = 0;
  do
  {
    if ( v14 || v22 )
    {
      v24 = *(_QWORD *)(v10 + 8LL * v23);
      v25 = v24 >> 12;
      v70 = v24 >> 12;
      LODWORD(v26) = 9 * ((v24 >> 10) & 3);
      v63 = v26;
      v27 = v24 & 0x3FF;
      if ( v27 )
      {
        _BitScanReverse64((unsigned __int64 *)&v26, v25 ^ (v25 + v27 * (1LL << v26)));
        LODWORD(v26) = v26 + 1;
        v63 = v26;
        v25 &= ~((1LL << v26) - 1);
        v70 = v25;
      }
      if ( v14 )
      {
        if ( v13 && (unsigned int)v26 > (*(_WORD *)(v11 + 222) & 0x3Fu) )
        {
          v58 = 0;
          *(_QWORD *)&v77 = v19 & 0xFFFFFFFFFFFFFFCFuLL | 0x20;
        }
        else
        {
          *((_QWORD *)&v77 + 1) = (v25 << 12) | WORD4(v77) & 0xFC0 | (unsigned __int64)(v26 & 0x3F);
        }
LABEL_23:
        IvtIommuSendCommand(v11, &v77, 0LL);
        v19 = v77;
        v9 = (__int64)v75;
        v23 = v65;
        v71 = v77;
        goto LABEL_24;
      }
    }
    if ( !v23 )
      goto LABEL_23;
LABEL_24:
    if ( !v21 )
      goto LABEL_39;
    v66 = a7;
    v28 = a7;
    if ( v9 )
    {
      v47 = *(_QWORD *)(v9 + 96);
      v34 = *(_QWORD *)(v9 + 48);
      v36 = *(_DWORD *)(v9 + 60);
      v72 = v34;
      v48 = *(_DWORD *)(v47 + 48);
      v33 = v48 & 1;
      v64 = v36;
      if ( v13 )
        v30 = 0;
      else
        v30 = (v48 & 0x800) != 0;
      v59 = v30;
      v32 = &v62;
      v35 = (struct _EX_RUNDOWN_REF *)(v9 + 64);
    }
    else
    {
      v29 = (_QWORD *)*a7;
      if ( v13 )
      {
        v66 = (_QWORD *)*a7;
        v28 = v29;
        v59 = 0;
        v30 = 0;
        if ( v29 == a7 )
        {
          v67 = 0LL;
          v68 = 0LL;
          goto LABEL_39;
        }
        v31 = *(v29 - 5);
        v32 = (char *)v29 + 44;
        v33 = 1;
        v34 = *(_QWORD *)(v31 + 48);
        v35 = (struct _EX_RUNDOWN_REF *)(v31 + 64);
        v36 = *(_DWORD *)(v31 + 60);
      }
      else
      {
        while ( 1 )
        {
          if ( v29 == a7 )
          {
            v33 = 0;
            v32 = 0LL;
            v35 = 0LL;
            v30 = 0;
            v36 = 0;
            v34 = 0LL;
            goto LABEL_74;
          }
          v49 = v29[5];
          v50 = *(_DWORD *)(v49 + 48);
          if ( (v50 & 1) != 0 )
            break;
          v29 = (_QWORD *)*v29;
        }
        v57 = *(_QWORD *)(v49 + 72);
        v32 = (char *)(v29 + 4);
        v34 = *(_QWORD *)(v49 + 40);
        v33 = 1;
        v28 = v29;
        v66 = v29;
        v30 = (v50 & 0x800) != 0;
        v36 = *(_DWORD *)(v57 + 60);
        v35 = (struct _EX_RUNDOWN_REF *)(v57 + 64);
LABEL_74:
        v59 = v30;
      }
      v64 = v36;
      v72 = v34;
    }
    v67 = v35;
    v68 = v32;
    if ( v33 )
    {
      v37 = v63;
      v38 = v63 - 1;
      while ( 1 )
      {
        if ( !*v32 )
        {
          if ( !ExAcquireRundownProtection_0(v35) )
          {
            v13 = a5;
LABEL_35:
            v11 = v69;
            goto LABEL_36;
          }
          v37 = v63;
          *v32 = 1;
        }
        v13 = a5;
        v76 = 0LL;
        if ( a5 )
        {
          v55 = ((unsigned __int64)(unsigned __int16)v34 << 32) | 3;
          if ( _bittest64((const signed __int64 *)(v69 + 224), 0x29u) )
            v55 |= (v34 & 0xF | ((v34 & 0xFFFFFFFFFFFFFFF0uLL) << 36)) << 12;
          *(_QWORD *)&v76 = ((unsigned __int64)v36 << 16) ^ (v55 ^ ((unsigned __int64)v36 << 16)) & 0xFFFFFFFFFFE0FFFFuLL;
          if ( !a8 )
          {
            v46 = WORD4(v76) & 0xFFE | 0x7FFFFFFFFFFFF001LL;
LABEL_70:
            *((_QWORD *)&v76 + 1) = v46;
            goto LABEL_71;
          }
          if ( v37 )
          {
            v54 = WORD4(v76) & 0xFFE | ((v70 | ((1LL << v38) - 1)) << 12) | 1;
            goto LABEL_120;
          }
          *((_QWORD *)&v76 + 1) = (v70 << 12) | WORD4(v76) & 0xFFF;
        }
        else
        {
          if ( v73 != -1 )
          {
            v43 = WORD4(v76);
            v44 = (unsigned __int64)(v73 & 0xFFFFF) << 32;
LABEL_65:
            v45 = v44 & 0xFFFFFFFF0000FFF8uLL | ((unsigned __int64)(unsigned __int16)v34 << 16) | 8;
            if ( _bittest64((const signed __int64 *)(v69 + 224), 0x29u) )
              v45 = v44 & 0xFFFFF00000FF8LL | ((unsigned __int16)v34 << 16) | 8 | ((v34 & 0xF | ((v34 & 0xFFFFFFFFFFFFFFF0uLL) << 36)) << 12);
            *(_QWORD *)&v76 = (16LL * v36) ^ (v45 ^ (16LL * v36)) & 0xFFFFFFFFFFFFFE0FuLL;
            if ( !a8 )
            {
              v52 = v43 & 0x7FF;
              v53 = 0x7FFFFFFFFFFFF800LL;
              goto LABEL_97;
            }
            if ( !v37 )
            {
              v52 = v43 & 0xFFF;
              v53 = v70 << 12;
LABEL_97:
              v54 = v53 | v52;
LABEL_120:
              *((_QWORD *)&v76 + 1) = v54;
              goto LABEL_71;
            }
            v46 = v43 & 0xFFE | ((v70 | ((1LL << v38) - 1)) << 12) | 1;
            goto LABEL_70;
          }
          if ( v30 )
          {
            v44 = v76;
            v43 = 1;
            goto LABEL_65;
          }
          if ( v65 )
            goto LABEL_35;
          v51 = ((unsigned __int64)(unsigned __int16)v34 << 32) | 3;
          if ( _bittest64((const signed __int64 *)(v69 + 224), 0x29u) )
            v51 |= (v34 & 0xF | ((v34 & 0xFFFFFFFFFFFFFFF0uLL) << 36)) << 12;
          *(_QWORD *)&v76 = ((unsigned __int64)v36 << 16) ^ (v51 ^ ((unsigned __int64)v36 << 16)) & 0xFFFFFFFFFFE0FFFFuLL;
        }
LABEL_71:
        v11 = v69;
        IvtIommuSendCommand(v69, &v76, 0LL);
LABEL_36:
        if ( !a7 )
          goto LABEL_37;
        if ( v13 )
        {
          v28 = (_QWORD *)*v28;
          v66 = v28;
          if ( v28 == a7 )
            goto LABEL_37;
          v40 = *(v28 - 5);
          v32 = (char *)v28 + 44;
          v30 = 0;
          v59 = 0;
          v68 = (char *)v28 + 44;
          v34 = *(_QWORD *)(v40 + 48);
          v35 = (struct _EX_RUNDOWN_REF *)(v40 + 64);
          v36 = *(_DWORD *)(v40 + 60);
          v72 = v34;
          v67 = (struct _EX_RUNDOWN_REF *)(v40 + 64);
          v64 = v36;
        }
        else
        {
          if ( !(unsigned __int8)HalpIommuGetNextFlushDevice(
                                   (_DWORD)a7,
                                   (unsigned int)&v66,
                                   (unsigned int)&v72,
                                   (unsigned int)&v64,
                                   (__int64)&v59,
                                   (__int64)&v67,
                                   (__int64)&v68) )
          {
LABEL_37:
            v19 = v71;
            v23 = v65;
            goto LABEL_38;
          }
          v35 = v67;
          v32 = v68;
          v30 = v59;
          v36 = v64;
          v28 = v66;
          v34 = v72;
        }
        v37 = v63;
      }
    }
    v11 = v69;
    v13 = a5;
LABEL_38:
    v21 = v60;
LABEL_39:
    v14 = v58;
    ++v23;
    v9 = (__int64)v75;
    v22 = v61;
    v10 = v74;
    v65 = v23;
  }
  while ( v23 < a8 );
  IvtIommuWaitCommand(v11, 0LL, 0LL);
  if ( v62 )
  {
    v67 = v75 + 8;
    ExReleaseRundownProtection_0(v75 + 8);
  }
  if ( a7 )
  {
    v39 = a7;
    v66 = a7;
    while ( 1 )
    {
      if ( v13 )
      {
        v39 = (_QWORD *)*v39;
        v66 = v39;
        if ( v39 == a7 )
          return;
        v41 = (char *)v39 + 44;
        v42 = (struct _EX_RUNDOWN_REF *)(*(v39 - 5) + 64LL);
        v68 = (char *)v39 + 44;
        v67 = v42;
      }
      else
      {
        if ( !(unsigned __int8)HalpIommuGetNextFlushDevice(
                                 (_DWORD)a7,
                                 (unsigned int)&v66,
                                 (unsigned int)&v72,
                                 (unsigned int)&v64,
                                 (__int64)&v59,
                                 (__int64)&v67,
                                 (__int64)&v68) )
          return;
        v42 = v67;
        v41 = v68;
        v39 = v66;
      }
      if ( *v41 )
      {
        *v41 = 0;
        ExReleaseRundownProtection_0(v42);
      }
    }
  }
}
