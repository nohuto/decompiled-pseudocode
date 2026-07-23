/*
 * XREFs of EtwpCCSwapTrace @ 0x1404ED100
 * Callers:
 *     EtwpLogContextSwapEvent @ 0x140415D90 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

struct _KPRCB *__fastcall EtwpCCSwapTrace(__int64 a1, __int64 a2, unsigned int a3, struct _KPRCB **a4)
{
  struct _KPRCB *result; // rax
  unsigned int v5; // r13d
  __int64 v6; // rsi
  __int64 v7; // r11
  __int64 v8; // r15
  _QWORD *EtwSupport; // rcx
  unsigned int *v10; // r14
  unsigned int *v11; // r10
  struct _KPRCB *v12; // rdx
  unsigned int *v13; // rdi
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // r8d
  _QWORD *v18; // r12
  _DWORD *v19; // rax
  unsigned __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // r13d
  bool v23; // zf
  __int64 v24; // rcx
  unsigned int v25; // r14d
  __int64 v26; // rsi
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // r15
  char v30; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v32; // r8
  signed __int64 *v33; // r9
  signed __int64 v34; // rax
  signed __int64 v35; // rtt
  __int64 v36; // rcx
  __int64 v37; // rcx
  struct _KPRCB *v38; // rcx
  _QWORD *v39; // rax
  unsigned int v40; // ebx
  char v41; // r9
  unsigned int v42; // eax
  int v43; // edx
  char v44; // al
  int v45; // eax
  __int64 Src; // [rsp+30h] [rbp-69h] BYREF
  unsigned int *v47; // [rsp+38h] [rbp-61h]
  int v48; // [rsp+40h] [rbp-59h]
  _QWORD *v49; // [rsp+48h] [rbp-51h]
  unsigned int v50; // [rsp+50h] [rbp-49h]
  unsigned int v51; // [rsp+54h] [rbp-45h]
  unsigned int *v52; // [rsp+58h] [rbp-41h]
  unsigned int *v53; // [rsp+60h] [rbp-39h]
  struct _KPRCB **v54; // [rsp+68h] [rbp-31h]
  unsigned int *v55; // [rsp+70h] [rbp-29h]
  __int64 v56; // [rsp+78h] [rbp-21h]
  __int64 v57; // [rsp+80h] [rbp-19h]
  __int64 v58; // [rsp+88h] [rbp-11h]
  _QWORD *v59; // [rsp+90h] [rbp-9h] BYREF
  int v60; // [rsp+98h] [rbp-1h]
  int v61; // [rsp+9Ch] [rbp+3h]

  result = KeGetCurrentPrcb();
  v5 = 0;
  v6 = a3;
  v7 = a1;
  v56 = a1;
  v8 = a2;
  v54 = a4;
  EtwSupport = result->EtwSupport;
  v50 = a3;
  v58 = a2;
  Src = 0LL;
  v10 = (unsigned int *)EtwSupport[a3 + 51];
  v49 = EtwSupport;
  v57 = a3;
  v55 = v10;
  if ( !v10 )
    return result;
  v11 = v10 + 6;
  v12 = *a4;
  v13 = v10 + 1;
  v53 = v10 + 1;
  v52 = v10 + 6;
  if ( *v10 )
  {
    v14 = (__int64)v12 - *((_QWORD *)v10 + 1);
  }
  else
  {
    v15 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)v10 + 1) = v12;
    *((_QWORD *)v10 + 2) = v12;
    v14 = 0LL;
    *v13 = v15;
    *v10 = 104;
    *(_OWORD *)v11 = 0LL;
    v52 = v10 + 6;
    *(_OWORD *)(v10 + 10) = 0LL;
    v53 = v10 + 1;
    *(_OWORD *)(v10 + 14) = 0LL;
    *(_OWORD *)(v10 + 18) = 0LL;
  }
  v16 = *(_DWORD *)(v7 + 1296);
  v17 = 0;
  v51 = v16;
  v18 = v10 + 4;
  v47 = v10 + 4;
  if ( v16 )
  {
    v19 = v10 + 6;
    while ( *v19 != v16 )
    {
      if ( !*v19 )
      {
        v47 = v10 + 4;
        v10[v17 + 6] = v16;
        *((_BYTE *)v10 + v17 + 88) = *(_BYTE *)(v7 + 563);
        goto LABEL_13;
      }
      ++v17;
      ++v19;
      if ( v17 >= 0x10 )
      {
        v47 = v10 + 4;
        goto LABEL_13;
      }
    }
    v18 = v10 + 4;
    v47 = v10 + 4;
LABEL_13:
    EtwSupport = v49;
  }
  if ( MEMORY[0xFFFFF78000000320] - *v13 <= 0x1F4 )
  {
    v47 = v10 + 4;
    v18 = v10 + 4;
    if ( v17 != 16 )
    {
      v20 = *v10 + 8LL;
      v47 = v10 + 4;
      if ( v20 <= 0x400 )
      {
        v47 = v10 + 4;
        if ( v14 <= 0x40000000 )
        {
          v47 = v10 + 4;
          if ( !*((_BYTE *)EtwSupport + v6 + 400) )
            goto LABEL_44;
        }
      }
    }
  }
  v21 = *v10 - 16;
  v61 = 0;
  v60 = v21;
  v59 = v18;
  v22 = *(_DWORD *)(EtwpHostSiloState + 4520);
  v23 = !_BitScanForward((unsigned int *)&v24, v22);
  v48 = v24;
  if ( v23 )
    goto LABEL_43;
  v25 = v50;
  do
  {
    v26 = EtwpHostSiloState;
    v22 &= v22 - 1;
    v27 = EtwpHostSiloState + 32LL * (unsigned int)v24 + 4556;
    if ( v27 )
    {
      v28 = *(_DWORD *)(v27 + 4);
      if ( (v28 & 4) != 0 && (v28 & 0x100) != 0 )
      {
        v29 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v24 + 4504);
        v30 = 0;
        if ( KeAreInterruptsEnabled() && KeGetCurrentIrql() < 2u )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v32 = *(_QWORD *)(*(_QWORD *)(v26 + 704) + 8 * v29);
          v33 = (signed __int64 *)(*(_QWORD *)v32
                                 + *(_DWORD *)(v32 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v32 + 20)));
          _m_prefetchw(v33);
          v34 = *v33;
          if ( (*v33 & 1) != 0 )
            goto LABEL_40;
          while ( 1 )
          {
            v35 = v34;
            v34 = _InterlockedCompareExchange64(v33, v34 + 2, v34);
            if ( v35 == v34 )
              break;
            if ( (v34 & 1) != 0 )
              goto LABEL_40;
          }
          v30 = 1;
        }
        v36 = *(_QWORD *)(8 * v29 + *(_QWORD *)(v26 + 712));
        if ( (v36 & 1) != 0 )
        {
          if ( !v30 )
            goto LABEL_41;
          v37 = *(_QWORD *)(v26 + 704);
          goto LABEL_39;
        }
        if ( v36 )
        {
          if ( *(_DWORD *)(v36 + 200) == v25 )
            EtwpLogKernelEvent((__int64)&v59, EtwpHostSiloState, v29, 1u, 1317, 0x202u);
          if ( v30 )
          {
            v37 = *(_QWORD *)(EtwpHostSiloState + 704);
LABEL_39:
            ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v37 + 8 * v29), 1u);
LABEL_40:
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          }
        }
      }
    }
LABEL_41:
    v23 = !_BitScanForward((unsigned int *)&v24, v22);
    v48 = v24;
  }
  while ( !v23 );
  v10 = v55;
  v18 = v47;
  v11 = v52;
  v7 = v56;
  v16 = v51;
  v13 = v53;
  v6 = v57;
  v8 = v58;
LABEL_43:
  v5 = 0;
  v14 = 0LL;
  v17 = 0;
  v38 = *v54;
  *v13 = MEMORY[0xFFFFF78000000320];
  v39 = v49;
  *((_QWORD *)v10 + 1) = v38;
  *v18 = v38;
  *v10 = 104;
  *(_OWORD *)v11 = 0LL;
  *((_OWORD *)v11 + 1) = 0LL;
  *((_OWORD *)v11 + 2) = 0LL;
  *((_OWORD *)v11 + 3) = 0LL;
  *((_BYTE *)v39 + v6 + 400) = 0;
  *v11 = v16;
LABEL_44:
  if ( v16 )
  {
    if ( *(_DWORD *)(v8 + 1296) )
      v5 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v8 + 436);
    v41 = *(_BYTE *)(v7 + 195);
    v42 = v41 - *((char *)v10 + v17 + 88);
    if ( v5 > 1 || v14 >= 0x20000 || v42 > 7 )
    {
      LODWORD(Src) = (4 * v14) | 3;
      v45 = 0x1FFFF;
      if ( v5 < 0x1FFFF )
        v45 = v5;
      HIDWORD(Src) = v17 & 0xF | WORD2(Src) & 0x3F0 | ((v41 & 0x1F | (32 * v45)) << 10);
      if ( *(_BYTE *)(v7 + 388) == 5 )
        HIDWORD(Src) = HIDWORD(Src) & 0xFFFFFC0F | (16 * (*(_BYTE *)(v7 + 643) & 0x3F));
      else
        HIDWORD(Src) = (16 * *(unsigned __int8 *)(v7 + 388) - 321) & 0x3F0 | HIDWORD(Src) & 0xFFFFFC0F;
      v40 = 8;
    }
    else
    {
      v43 = v42 & 7 | ((_DWORD)v14 << 9);
      v44 = *(_BYTE *)(v7 + 388);
      LODWORD(Src) = (4 * (v17 & 0xF | (16 * v43))) | 2;
      v40 = 4;
      if ( v44 == 5 )
        LODWORD(Src) = Src & 0xFFFF81FF | ((*(_BYTE *)(v7 + 643) & 0x3F) << 9);
      else
        LODWORD(Src) = ((*(unsigned __int8 *)(v7 + 388) << 9) - 10241) & 0x7E00 | Src & 0xFFFF81FF;
    }
  }
  else if ( v14 >= 0x4000 )
  {
    v40 = 4;
    LODWORD(Src) = (4 * v14) | 1;
  }
  else
  {
    v40 = 2;
    LOWORD(Src) = 4 * v14;
  }
  memmove((char *)v10 + *v10, &Src, v40);
  *v10 += v40;
  result = *v54;
  *((_QWORD *)v10 + 1) = *v54;
  return result;
}
