/*
 * XREFs of PpmPerfArbitratorApplyProcessorState @ 0x1403E8E10
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x1403E8944 (PpmPerfApplyProcessorState.c)
 *     PoSetProcessorQos @ 0x1403E8C70 (PoSetProcessorQos.c)
 *     PpmPerfSetProcessorIdle @ 0x1404C693C (PpmPerfSetProcessorIdle.c)
 * Callees:
 *     PpmEventProcessorPerfStateChange @ 0x1403E9280 (PpmEventProcessorPerfStateChange.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PpmPerfArbitratorApplyProcessorState(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 v3; // r10
  char v4; // r14
  __int64 v6; // rbx
  char v9; // cl
  signed int v10; // ebp
  int v11; // edx
  int v12; // eax
  __int64 v14; // rax
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // dx
  volatile signed __int32 *v17; // rbx
  unsigned __int64 v18; // rcx
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // dx
  unsigned __int64 v21; // rcx
  unsigned __int16 v22; // ax
  unsigned __int16 v23; // dx
  unsigned __int64 v24; // rcx
  unsigned __int16 v25; // ax
  unsigned __int16 v26; // dx
  unsigned __int64 v27; // rcx
  unsigned __int16 v28; // ax
  unsigned __int16 v29; // dx
  unsigned __int64 v30; // rcx
  unsigned __int16 v31; // ax
  unsigned __int16 v32; // dx
  unsigned __int64 v33; // rcx
  __int16 v34; // ax
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  __int128 v37; // xmm1
  __int64 v38; // rdx
  __int64 v39; // r9
  signed __int64 v40; // r10
  __int64 v41; // rcx
  signed __int64 v42; // rbx
  __int128 v43; // rt0
  unsigned __int8 v44; // tt
  __int64 v45; // [rsp+48h] [rbp-50h]

  v3 = *(_QWORD *)(a1 + 35256);
  v4 = 0;
  v6 = *(_QWORD *)(a1 + 35248);
  v9 = a3;
  if ( PpmPerfQosEnabled )
    v10 = *(_DWORD *)(a1 + 35392);
  else
    v10 = 0;
  v11 = *(_DWORD *)(v6 + 804);
  if ( v10 == *(_DWORD *)(a1 + 35396) )
  {
    if ( *(_DWORD *)(v3 + 120) == v11 )
      goto LABEL_9;
    if ( v10 )
    {
      if ( *(_BYTE *)(v6 + 491) && (struct _KPRCB *)a1 != KeGetCurrentPrcb() )
        return 0;
      a2 = 1;
    }
    *(_DWORD *)(v3 + 120) = v11;
    goto LABEL_15;
  }
  if ( !*(_BYTE *)(v6 + 491) || (struct _KPRCB *)a1 == KeGetCurrentPrcb() )
  {
    v12 = *(unsigned __int16 *)(a1 + 35400);
    if ( !_bittest(&v12, v10) || *(_DWORD *)(v3 + 120) != v11 )
    {
      v9 = 1;
      *(_DWORD *)(v3 + 120) = v11;
      a2 = 1;
    }
    *(_DWORD *)(a1 + 35396) = v10;
    v4 = 1;
LABEL_9:
    if ( !v9 )
    {
LABEL_10:
      if ( !v4 )
        return 1;
LABEL_11:
      PpmEventProcessorPerfStateChange(a1 + 35248, a2, *(unsigned int *)(a1 + 35396));
      return 1;
    }
LABEL_15:
    if ( a3 )
      *(_DWORD *)(v3 + 120) = 0;
    *(_DWORD *)(v3 + 128) = *(_DWORD *)(v3 + 80);
    *(_DWORD *)(v3 + 124) = *(_DWORD *)(v3 + 84);
    v14 = 56LL * v10;
    *(_OWORD *)(v3 + 64) = *(_OWORD *)(v14 + v6 + 808);
    *(_OWORD *)(v3 + 80) = *(_OWORD *)(v14 + v6 + 824);
    *(_OWORD *)(v3 + 96) = *(_OWORD *)(v14 + v6 + 840);
    *(_QWORD *)(v3 + 112) = *(_QWORD *)(v14 + v6 + 856);
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 8), v3 + 64);
    if ( PopHeteroSystem )
    {
      v15 = *(_WORD *)(v6 + 2LL * v10 + 788);
      v16 = *(_WORD *)(a1 + 35400);
      if ( v15 != v16 )
      {
        *(_WORD *)(a1 + 35400) = v15;
        v17 = *(volatile signed __int32 **)(a1 + 192);
        if ( (v15 & 1) != (v16 & 1) )
        {
          v18 = *(unsigned __int8 *)(a1 + 209);
          if ( (v15 & 1) != 0 )
            _interlockedbittestandset64(v17 + 64, v18);
          else
            _interlockedbittestandreset64(v17 + 64, v18);
        }
        v19 = v15 >> 1;
        v20 = v16 >> 1;
        if ( (v19 & 1) != (v20 & 1) )
        {
          v21 = *(unsigned __int8 *)(a1 + 209);
          if ( (v19 & 1) != 0 )
            _interlockedbittestandset64(v17 + 66, v21);
          else
            _interlockedbittestandreset64(v17 + 66, v21);
        }
        v22 = v19 >> 1;
        v23 = v20 >> 1;
        if ( (v22 & 1) != (v23 & 1) )
        {
          v24 = *(unsigned __int8 *)(a1 + 209);
          if ( (v22 & 1) != 0 )
            _interlockedbittestandset64(v17 + 68, v24);
          else
            _interlockedbittestandreset64(v17 + 68, v24);
        }
        v25 = v22 >> 1;
        v26 = v23 >> 1;
        if ( (v25 & 1) != (v26 & 1) )
        {
          v27 = *(unsigned __int8 *)(a1 + 209);
          if ( (v25 & 1) != 0 )
            _interlockedbittestandset64(v17 + 70, v27);
          else
            _interlockedbittestandreset64(v17 + 70, v27);
        }
        v28 = v25 >> 1;
        v29 = v26 >> 1;
        if ( (v28 & 1) != (v29 & 1) )
        {
          v30 = *(unsigned __int8 *)(a1 + 209);
          if ( (v28 & 1) != 0 )
            _interlockedbittestandset64(v17 + 72, v30);
          else
            _interlockedbittestandreset64(v17 + 72, v30);
        }
        v31 = v28 >> 1;
        v32 = v29 >> 1;
        if ( (v31 & 1) != (v32 & 1) )
        {
          v33 = *(unsigned __int8 *)(a1 + 209);
          if ( (v31 & 1) != 0 )
            _interlockedbittestandset64(v17 + 74, v33);
          else
            _interlockedbittestandreset64(v17 + 74, v33);
        }
        v34 = (v31 >> 1) & 1;
        if ( v34 != ((v32 >> 1) & 1) )
        {
          v35 = *(unsigned __int8 *)(a1 + 209);
          if ( v34 )
            _interlockedbittestandset64(v17 + 76, v35);
          else
            _interlockedbittestandreset64(v17 + 76, v35);
        }
      }
    }
    v36 = *(_QWORD *)(a1 + 192);
    v37 = *(_OWORD *)(v36 + 320);
    v38 = *(_QWORD *)(v36 + 328);
    v39 = *(_QWORD *)(v36 + 320);
    while ( 1 )
    {
      v40 = *((_QWORD *)&v37 + 1);
      if ( ((v10 - 1) & 0xFFFFFFFA) != 0 )
      {
        v42 = v39 & ~*(_QWORD *)(a1 + 200);
        v40 = ~*(_QWORD *)(a1 + 36448) & *((_QWORD *)&v37 + 1);
      }
      else
      {
        v41 = *(_QWORD *)(a1 + 36448);
        v42 = *(_QWORD *)(a1 + 200) | v39;
        if ( (v41 & v42) == v41 )
          v40 = v41 | *((_QWORD *)&v37 + 1);
      }
      *(_QWORD *)&v43 = v39;
      *((_QWORD *)&v43 + 1) = v38;
      v44 = _InterlockedCompareExchange128(
              (volatile signed __int64 *)(*(_QWORD *)(a1 + 192) + 320LL),
              v40,
              v42,
              (signed __int64 *)&v43);
      v38 = *((_QWORD *)&v43 + 1);
      v45 = *((_QWORD *)&v43 + 1);
      v39 = v43;
      if ( v44 )
        break;
      *((_QWORD *)&v37 + 1) = v45;
    }
    if ( !a3 )
      goto LABEL_11;
    goto LABEL_10;
  }
  return 0;
}
