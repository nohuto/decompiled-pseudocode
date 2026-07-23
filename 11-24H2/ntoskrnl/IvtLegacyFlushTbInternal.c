/*
 * XREFs of IvtLegacyFlushTbInternal @ 0x14056D5F8
 * Callers:
 *     IvtLegacyAttachDeviceDomainInternal @ 0x14056CFEC (IvtLegacyAttachDeviceDomainInternal.c)
 *     IvtLegacyFlushDomainTb @ 0x14056D530 (IvtLegacyFlushDomainTb.c)
 *     IvtLegacyFlushTb @ 0x14056D5B0 (IvtLegacyFlushTb.c)
 *     IvtInitializeIommu @ 0x140B53BE0 (IvtInitializeIommu.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     IvtIommuWaitCommand @ 0x140374F34 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x140375084 (IvtIommuSendCommand.c)
 *     HalpIommuGetNextFlushDevice @ 0x1404F7A44 (HalpIommuGetNextFlushDevice.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall IvtLegacyFlushTbInternal(
        __int64 a1,
        int a2,
        __int64 a3,
        char a4,
        __int64 a5,
        _QWORD *a6,
        unsigned int a7,
        __int64 a8)
{
  __int64 v8; // rsi
  __int64 v10; // rcx
  char v11; // r10
  char v12; // r12
  __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  char v18; // di
  char v19; // al
  unsigned int v20; // r9d
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  unsigned int v23; // edx
  __int64 v24; // rdi
  unsigned int v25; // r14d
  bool v26; // cl
  struct _EX_RUNDOWN_REF *v27; // rax
  char *v28; // rsi
  _QWORD *v29; // rsi
  __int64 v30; // rax
  int v31; // r9d
  unsigned __int64 v32; // r12
  char v33; // bl
  BOOLEAN v34; // al
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int16 v37; // dx
  unsigned __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  _QWORD *v44; // rsi
  __int64 v45; // rax
  _QWORD *v46; // rbx
  struct _EX_RUNDOWN_REF *v47; // rcx
  char *v48; // rax
  char v50; // [rsp+49h] [rbp-78h]
  bool v51; // [rsp+4Ah] [rbp-77h] BYREF
  char v52; // [rsp+4Bh] [rbp-76h]
  char v53; // [rsp+4Ch] [rbp-75h]
  char v54; // [rsp+4Dh] [rbp-74h] BYREF
  unsigned int v55; // [rsp+50h] [rbp-71h] BYREF
  int v56; // [rsp+54h] [rbp-6Dh]
  unsigned int v57; // [rsp+58h] [rbp-69h]
  PEX_RUNDOWN_REF RunRef; // [rsp+60h] [rbp-61h] BYREF
  char *v59; // [rsp+68h] [rbp-59h] BYREF
  __int64 v60; // [rsp+70h] [rbp-51h] BYREF
  _QWORD *v61; // [rsp+78h] [rbp-49h] BYREF
  unsigned __int64 v62; // [rsp+80h] [rbp-41h]
  int v63; // [rsp+88h] [rbp-39h]
  unsigned __int64 v64; // [rsp+90h] [rbp-31h]
  __int64 v65; // [rsp+98h] [rbp-29h]
  __int64 v66; // [rsp+A0h] [rbp-21h]
  __int128 v67; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v68; // [rsp+B8h] [rbp-9h] BYREF

  v8 = a5;
  v10 = a8;
  v11 = a4;
  v65 = a8;
  v63 = a2;
  v66 = a5;
  RunRef = 0LL;
  v59 = 0LL;
  v51 = 0;
  v55 = 0;
  v60 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  if ( !a4 )
  {
    if ( a2 == -1 )
    {
      v50 = 0;
      v12 = 0;
      if ( _bittest64((const signed __int64 *)(a1 + 216), 0x27u) )
      {
        *((_QWORD *)&v68 + 1) |= 0x40uLL;
        v13 = 50LL;
      }
      else
      {
        v13 = 34LL;
      }
      v14 = v13 | 0xC0;
      goto LABEL_18;
    }
    v15 = (unsigned __int64)(a2 & 0xFFFFF) << 32;
    if ( a7 )
    {
      v12 = 1;
      v14 = v15 | 0x36;
      v50 = 1;
      goto LABEL_18;
    }
    v14 = v15 | 0x26;
LABEL_17:
    v50 = 0;
    v12 = 0;
    goto LABEL_18;
  }
  if ( !a3 )
  {
    v14 = 18LL;
    goto LABEL_17;
  }
  if ( a7 && _bittest64((const signed __int64 *)(a1 + 216), 0x27u) )
  {
    v12 = 1;
    v16 = 50LL;
  }
  else
  {
    v12 = 0;
    v16 = 34LL;
  }
  v50 = v12;
  v17 = (v16 ^ ((unsigned __int64)*(unsigned int *)(a3 + 48) << 16)) & 0xFFFFFFFF0000FFFFuLL;
  v10 = v65;
  v14 = ((unsigned __int64)*(unsigned int *)(a3 + 48) << 16) ^ v17 | 0xC0;
LABEL_18:
  v62 = v14;
  *(_QWORD *)&v68 = v14;
  if ( !a5 && !a6 )
  {
    v18 = 0;
    v52 = 0;
LABEL_22:
    v19 = 0;
    goto LABEL_23;
  }
  v18 = 1;
  v19 = 1;
  v52 = 1;
  if ( !a7 )
    goto LABEL_22;
LABEL_23:
  v53 = v19;
  v20 = 0;
  v54 = 0;
  v64 = 0LL;
  v56 = 0;
  v57 = 0;
  do
  {
    if ( !v12 && !v19 )
      goto LABEL_29;
    v21 = *(_QWORD *)(v10 + 8LL * v20);
    v22 = v21 >> 12;
    v64 = v21 >> 12;
    LODWORD(v10) = 9 * ((v21 >> 10) & 3);
    v56 = v10;
    v23 = v21 & 0x3FF;
    if ( v23 )
    {
      _BitScanReverse64((unsigned __int64 *)&v10, v22 ^ (v22 + v23 * (1LL << v10)));
      LODWORD(v10) = v10 + 1;
      v56 = v10;
      v22 &= ~((1LL << v10) - 1);
      v64 = v22;
    }
    if ( v12 )
    {
      if ( v11 && (unsigned int)v10 > (*(_WORD *)(a1 + 222) & 0x3Fu) )
      {
        v50 = 0;
        v12 = 0;
        *(_QWORD *)&v68 = v14 & 0xFFFFFFFFFFFFFFCFuLL | 0x20;
      }
      else
      {
        *((_QWORD *)&v68 + 1) = (v22 << 12) | WORD4(v68) & 0xFC0 | (unsigned __int64)(v10 & 0x3F);
      }
    }
    else
    {
LABEL_29:
      if ( v20 )
        goto LABEL_36;
    }
    IvtIommuSendCommand(a1, &v68, 0);
    v14 = v68;
    v20 = v57;
    v11 = a4;
    v62 = v68;
LABEL_36:
    if ( !v18 )
      goto LABEL_88;
    v61 = a6;
    if ( v8 )
    {
      v24 = *(_QWORD *)(v8 + 48);
      v25 = *(_DWORD *)(v8 + 60);
      v60 = v24;
      v55 = v25;
      if ( v11 )
        v26 = 0;
      else
        v26 = (*(_DWORD *)(*(_QWORD *)(v8 + 96) + 48LL) & 0x800) != 0;
      v27 = (struct _EX_RUNDOWN_REF *)(v8 + 64);
      v51 = v26;
      v28 = &v54;
    }
    else
    {
      if ( !v11 )
      {
        if ( !HalpIommuGetNextFlushDevice(a6, &v61, &v60, &v55, &v51, &RunRef, &v59) )
          goto LABEL_87;
        v28 = v59;
        v25 = v55;
        v24 = v60;
        v11 = a4;
        goto LABEL_49;
      }
      v29 = (_QWORD *)*a6;
      v61 = v29;
      v51 = 0;
      if ( v29 == a6 )
      {
        v8 = v66;
        v60 = 0LL;
        v55 = 0;
        RunRef = 0LL;
        v59 = 0LL;
        goto LABEL_88;
      }
      v30 = *(v29 - 5);
      v24 = *(_QWORD *)(v30 + 48);
      v25 = *(_DWORD *)(v30 + 60);
      v27 = (struct _EX_RUNDOWN_REF *)(v30 + 64);
      v28 = (char *)v29 + 44;
      v60 = v24;
      v55 = v25;
    }
    v59 = v28;
    RunRef = v27;
LABEL_49:
    v31 = v56;
    v32 = v64;
    v33 = v56 - 1;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !*v28 )
        {
          v34 = ExAcquireRundownProtection_0(RunRef);
          v11 = a4;
          if ( !v34 )
            goto LABEL_80;
          v31 = v56;
          *v28 = 1;
        }
        v67 = 0LL;
        if ( !v11 )
        {
          if ( v63 == -1 )
          {
            if ( !v51 )
            {
              if ( v57 )
                goto LABEL_80;
              v35 = ((unsigned __int64)(unsigned __int16)v24 << 32) | 3;
              if ( _bittest64((const signed __int64 *)(a1 + 224), 0x29u) )
                v35 |= (v24 & 0xF | ((v24 & 0xFFFFFFFFFFFFFFF0uLL) << 36)) << 12;
              *(_QWORD *)&v67 = ((unsigned __int64)v25 << 16) ^ (v35 ^ ((unsigned __int64)v25 << 16)) & 0xFFFFFFFFFFE0FFFFuLL;
              goto LABEL_79;
            }
            v36 = v67;
            v37 = 1;
          }
          else
          {
            v37 = WORD4(v67);
            v36 = (unsigned __int64)(v63 & 0xFFFFF) << 32;
          }
          v38 = v36 & 0xFFFFFFFF0000FFF8uLL | ((unsigned __int64)(unsigned __int16)v24 << 16) | 8;
          if ( _bittest64((const signed __int64 *)(a1 + 224), 0x29u) )
            v38 = v36 & 0xFFFFF00000FF8LL | ((unsigned __int16)v24 << 16) | 8 | ((v24 & 0xF | ((v24 & 0xFFFFFFFFFFFFFFF0uLL) << 36)) << 12);
          *(_QWORD *)&v67 = (16LL * v25) ^ (v38 ^ (16LL * v25)) & 0xFFFFFFFFFFFFFE0FuLL;
          if ( !a7 )
          {
            v39 = v37 & 0x7FF;
            v40 = 0x7FFFFFFFFFFFF800LL;
            goto LABEL_66;
          }
          if ( !v31 )
          {
            v39 = v37 & 0xFFF;
            v40 = v32 << 12;
LABEL_66:
            v41 = v40 | v39;
LABEL_78:
            *((_QWORD *)&v67 + 1) = v41;
            goto LABEL_79;
          }
          v42 = v37 & 0xFFE | ((v32 | ((1LL << v33) - 1)) << 12) | 1;
          goto LABEL_74;
        }
        v43 = ((unsigned __int64)(unsigned __int16)v24 << 32) | 3;
        if ( _bittest64((const signed __int64 *)(a1 + 224), 0x29u) )
          v43 |= (v24 & 0xF | ((v24 & 0xFFFFFFFFFFFFFFF0uLL) << 36)) << 12;
        *(_QWORD *)&v67 = ((unsigned __int64)v25 << 16) ^ (v43 ^ ((unsigned __int64)v25 << 16)) & 0xFFFFFFFFFFE0FFFFuLL;
        if ( !a7 )
        {
          v42 = WORD4(v67) & 0xFFE | 0x7FFFFFFFFFFFF001LL;
LABEL_74:
          *((_QWORD *)&v67 + 1) = v42;
          goto LABEL_79;
        }
        if ( v31 )
        {
          v41 = WORD4(v67) & 0xFFE | ((v32 | ((1LL << v33) - 1)) << 12) | 1;
          goto LABEL_78;
        }
        *((_QWORD *)&v67 + 1) = (v32 << 12) | WORD4(v67) & 0xFFF;
LABEL_79:
        IvtIommuSendCommand(a1, &v67, 0);
        v11 = a4;
LABEL_80:
        if ( !a6 )
          goto LABEL_86;
        if ( v11 )
          break;
        if ( !HalpIommuGetNextFlushDevice(a6, &v61, &v60, &v55, &v51, &RunRef, &v59) )
          goto LABEL_86;
        v28 = v59;
        v25 = v55;
        v24 = v60;
        v31 = v56;
        v11 = a4;
      }
      v44 = (_QWORD *)*v61;
      v61 = v44;
      if ( v44 == a6 )
        break;
      v45 = *(v44 - 5);
      v31 = v56;
      v51 = 0;
      v24 = *(_QWORD *)(v45 + 48);
      v25 = *(_DWORD *)(v45 + 60);
      v28 = (char *)v44 + 44;
      v60 = v24;
      v59 = v28;
      v55 = v25;
      RunRef = (PEX_RUNDOWN_REF)(v45 + 64);
    }
LABEL_86:
    v14 = v62;
    v12 = v50;
    v8 = v66;
    v18 = v52;
LABEL_87:
    v20 = v57;
LABEL_88:
    v11 = a4;
    ++v20;
    v19 = v53;
    v10 = v65;
    v57 = v20;
  }
  while ( v20 < a7 );
  IvtIommuWaitCommand(a1, 0, 0);
  if ( v54 )
  {
    RunRef = (PEX_RUNDOWN_REF)(v8 + 64);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v8 + 64));
  }
  if ( a6 )
  {
    v46 = a6;
    v61 = a6;
    while ( 1 )
    {
      if ( a4 )
      {
        v46 = (_QWORD *)*v46;
        v61 = v46;
        if ( v46 == a6 )
          return;
        v48 = (char *)v46 + 44;
        v47 = (struct _EX_RUNDOWN_REF *)(*(v46 - 5) + 64LL);
        v59 = (char *)v46 + 44;
        RunRef = v47;
      }
      else
      {
        if ( !HalpIommuGetNextFlushDevice(a6, &v61, &v60, &v55, &v51, &RunRef, &v59) )
          return;
        v47 = RunRef;
        v48 = v59;
        v46 = v61;
      }
      if ( *v48 )
      {
        *v48 = 0;
        ExReleaseRundownProtection_0(v47);
      }
    }
  }
}
