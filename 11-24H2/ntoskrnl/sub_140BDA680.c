/*
 * XREFs of sub_140BDA680 @ 0x140BDA680
 * Callers:
 *     sub_140507CD0 @ 0x140507CD0 (sub_140507CD0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BC3010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     KiAccessPage @ 0x140BDC740 (KiAccessPage.c)
 *     KeGuardCheckICall @ 0x140BDCA70 (KeGuardCheckICall.c)
 */

int __fastcall sub_140BDA680(__int64 a1, __int64 *a2, unsigned int a3)
{
  char v4; // r15
  __int64 *v5; // r14
  const char *v6; // rax
  unsigned __int64 v7; // rcx
  _BYTE *v8; // rbx
  int v9; // r10d
  unsigned __int64 v10; // rdi
  _BYTE *v11; // r12
  unsigned int v12; // r8d
  _BYTE *v13; // r13
  char v14; // dl
  _BYTE *v15; // rax
  _BYTE *v16; // rcx
  volatile signed __int32 *v17; // rsi
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned int v21; // eax
  unsigned __int8 CurrentIrql; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  char v25; // al
  __int64 v26; // rdx
  volatile signed __int32 *v27; // rsi
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  struct _KPRCB *v30; // rdx
  unsigned int v31; // eax
  unsigned __int8 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rdi
  unsigned __int64 v35; // rcx
  bool v36; // zf
  unsigned int v37; // r15d
  unsigned __int64 v38; // r12
  char v39; // al
  unsigned __int8 v40; // r13
  volatile signed __int32 *v41; // rsi
  unsigned __int64 v42; // rax
  unsigned __int128 v43; // rax
  __int64 v44; // rdx
  struct _KPRCB *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  char v48; // cl
  volatile signed __int32 *v49; // rsi
  unsigned __int64 v50; // rax
  unsigned __int128 v51; // rax
  __int64 v52; // rdx
  unsigned __int8 v53; // r12
  struct _KPRCB *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  int i; // eax
  unsigned int v60; // [rsp+28h] [rbp-90h]
  __int64 v61; // [rsp+30h] [rbp-88h]
  __int64 v62; // [rsp+30h] [rbp-88h]
  unsigned __int8 v63; // [rsp+38h] [rbp-80h]
  unsigned __int8 v64; // [rsp+40h] [rbp-78h]
  unsigned __int64 v65; // [rsp+48h] [rbp-70h]
  char v66; // [rsp+C0h] [rbp+8h]
  __int64 v67; // [rsp+C8h] [rbp+10h] BYREF
  unsigned int v68; // [rsp+D0h] [rbp+18h]
  int v69; // [rsp+D8h] [rbp+20h]

  v68 = a3;
  v67 = (__int64)a2;
  v4 = a3;
  *(_DWORD *)(a1 + 2120) += a3;
  v5 = a2;
  v6 = (const char *)a2;
  v7 = (unsigned __int64)a2 + a3;
  if ( (unsigned __int64)a2 < v7 )
  {
    do
    {
      _mm_prefetch(v6, 0);
      v6 += 64;
    }
    while ( (unsigned __int64)v6 < v7 );
  }
  v8 = (char *)a2 - 6;
  v9 = *(_DWORD *)(a1 + 2100);
  v10 = *(_QWORD *)(a1 + 2104);
  v65 = v10;
  v66 = v9;
  v60 = a3 >> 7;
  if ( a3 >> 7 )
  {
    v11 = v8 + 1;
    do
    {
      v12 = 128;
      v13 = v8 + 2;
      v69 = 128;
      do
      {
        v14 = v8[5];
        v15 = v11;
        v16 = v13;
        if ( *v8 == 76
          && (v11 = v8 + 1, v16 = v8 + 2, v15 = v8 + 1, v8[1] == 0x87)
          && (v13 = v8 + 2, v16 = v8 + 2, !v8[2])
          && v8[3] == 0x98
          && v8[4] == 0xC3
          && (v14 == -112 || v14 == -15) )
        {
          v63 = -1;
          v17 = 0LL;
          v18 = __rdtsc();
          v19 = __ROR8__(v18, 3) ^ v18;
          CurrentPrcb = (struct _KPRCB *)((v19 * (unsigned __int128)0x7010008004002001uLL) >> 64);
          v21 = ((unsigned __int8)CurrentPrcb ^ (unsigned __int8)v19) & 3;
          if ( v21 <= 1 )
          {
            CurrentIrql = KeGetCurrentIrql();
            v63 = CurrentIrql;
            __writecr8(2uLL);
            CurrentPrcb = KeGetCurrentPrcb();
            v23 = *(_QWORD *)(a1 + 1624);
            v17 = v21
                ? *(volatile signed __int32 **)(*(_QWORD *)(a1 + 1720)
                                              + *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v23)
                                              + *(_QWORD *)(a1 + 1688))
                : *(volatile signed __int32 **)((char *)&CurrentPrcb->MxCsr + v23);
            if ( _interlockedbittestandset(v17, (*(_DWORD *)(a1 + 2520) >> 9) & 0x1F) )
            {
              v17 = 0LL;
              __writecr8(CurrentIrql);
            }
          }
          KeGuardCheckICall(v8, CurrentPrcb);
          v61 = KiAccessPage(v8, v5, *v5);
          v24 = v61;
          if ( v17 )
          {
            _InterlockedAnd(v17, ~(1 << ((*(_DWORD *)(a1 + 2520) >> 9) & 0x1F)));
            __writecr8(v63);
            v24 = v61;
          }
          v12 = v69;
          LOBYTE(v9) = v66;
        }
        else
        {
          v24 = 0LL;
          v11 = v15;
          v13 = v16;
        }
        v25 = v8[5];
        v26 = __ROL8__(v10 ^ v24, v9);
        v62 = v26;
        if ( *v8 == 76 && *v11 == 0x87 && !*v13 && v8[3] == 0x98 && v8[4] == 0xC3 && (v25 == -112 || v25 == -15) )
        {
          v64 = -1;
          v27 = 0LL;
          v28 = __rdtsc();
          v29 = __ROR8__(v28, 3) ^ v28;
          v30 = (struct _KPRCB *)((v29 * (unsigned __int128)0x7010008004002001uLL) >> 64);
          v31 = ((unsigned __int8)v30 ^ (unsigned __int8)v29) & 3;
          if ( v31 <= 1 )
          {
            v32 = KeGetCurrentIrql();
            v64 = v32;
            __writecr8(2uLL);
            v30 = KeGetCurrentPrcb();
            v33 = *(_QWORD *)(a1 + 1624);
            v27 = v31
                ? *(volatile signed __int32 **)(*(_QWORD *)(a1 + 1720)
                                              + *(_QWORD *)((char *)&v30->MxCsr + v33)
                                              + *(_QWORD *)(a1 + 1688))
                : *(volatile signed __int32 **)((char *)&v30->MxCsr + v33);
            if ( _interlockedbittestandset(v27, (*(_DWORD *)(a1 + 2520) >> 9) & 0x1F) )
            {
              v27 = 0LL;
              __writecr8(v32);
            }
          }
          KeGuardCheckICall(v8, v30);
          v34 = KiAccessPage(v8, v5 + 1, v5[1]);
          if ( v27 )
          {
            _InterlockedAnd(v27, ~(1 << ((*(_DWORD *)(a1 + 2520) >> 9) & 0x1F)));
            __writecr8(v64);
          }
          v26 = v62;
          v12 = v69;
          LOBYTE(v9) = v66;
        }
        else
        {
          v34 = 0LL;
          v11 = v8 + 1;
          v13 = v8 + 2;
        }
        v12 -= 16;
        v10 = __ROL8__(v26 ^ v34, v9);
        v5 += 2;
        v69 = v12;
      }
      while ( v12 >= 8 );
      v35 = __ROL8__(v65 ^ ((unsigned __int64)v5 - v67), 17) ^ v65 ^ ((unsigned __int64)v5 - v67);
      v9 = ((unsigned __int8)(v35 ^ ((v35 * (unsigned __int128)0x7010008004002001uLL) >> 64)) ^ (unsigned __int8)v9) & 0x3F;
      if ( !v9 )
        LOBYTE(v9) = 1;
      v36 = v60-- == 1;
      v66 = v9;
    }
    while ( !v36 );
    v4 = v68;
  }
  v37 = v4 & 0x7F;
  if ( v37 >= 8 )
  {
    v38 = (unsigned __int64)v37 >> 3;
    do
    {
      v39 = v8[5];
      if ( *v8 == 76 && v8[1] == 0x87 && !v8[2] && v8[3] == 0x98 && v8[4] == 0xC3 && (v39 == -112 || v39 == -15) )
      {
        v40 = -1;
        v41 = 0LL;
        v42 = __rdtsc();
        v43 = (__ROR8__(v42, 3) ^ v42) * (unsigned __int128)0x7010008004002001uLL;
        v44 = ((unsigned __int8)v43 ^ BYTE8(v43)) & 3;
        if ( (unsigned int)v44 <= 1 )
        {
          v40 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v45 = KeGetCurrentPrcb();
          v46 = *(_QWORD *)(a1 + 1624);
          if ( (_DWORD)v44 )
          {
            v46 = *(_QWORD *)(a1 + 1720) + *(_QWORD *)((char *)&v45->MxCsr + v46);
            v45 = *(struct _KPRCB **)(a1 + 1688);
          }
          v41 = *(volatile signed __int32 **)((char *)&v45->MxCsr + v46);
          if ( _interlockedbittestandset(v41, (*(_DWORD *)(a1 + 2520) >> 9) & 0x1F) )
          {
            v41 = 0LL;
            __writecr8(v40);
          }
        }
        KeGuardCheckICall(v8, v44);
        v47 = KiAccessPage(v8, v5, *v5);
        if ( v41 )
        {
          _InterlockedAnd(v41, ~(1 << ((*(_DWORD *)(a1 + 2520) >> 9) & 0x1F)));
          __writecr8(v40);
        }
        LOBYTE(v9) = v66;
      }
      else
      {
        v47 = 0LL;
      }
      ++v5;
      v10 = __ROL8__(v47 ^ v10, v9);
      v37 -= 8;
      --v38;
    }
    while ( v38 );
    v8 = (_BYTE *)(v67 - 6);
  }
  if ( ((unsigned __int16)v5 & 0xFFFu) <= 0xFF8 )
  {
    v48 = v8[5];
    if ( *v8 == 76 && v8[1] == 0x87 && !v8[2] && v8[3] == 0x98 && v8[4] == 0xC3 && (v48 == -112 || v48 == -15) )
    {
      v49 = 0LL;
      v50 = __rdtsc();
      v51 = (__ROR8__(v50, 3) ^ v50) * (unsigned __int128)0x7010008004002001uLL;
      v52 = ((unsigned __int8)v51 ^ BYTE8(v51)) & 3;
      if ( (unsigned int)v52 > 1 )
      {
        v53 = -1;
      }
      else
      {
        v53 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v54 = KeGetCurrentPrcb();
        v55 = *(_QWORD *)(a1 + 1624);
        if ( (_DWORD)v52 )
        {
          v55 = *(_QWORD *)(a1 + 1720) + *(_QWORD *)((char *)&v54->MxCsr + v55);
          v54 = *(struct _KPRCB **)(a1 + 1688);
        }
        v49 = *(volatile signed __int32 **)((char *)&v54->MxCsr + v55);
        if ( _interlockedbittestandset(v49, (*(_DWORD *)(a1 + 2520) >> 9) & 0x1F) )
        {
          v49 = 0LL;
          __writecr8(v53);
        }
      }
      KeGuardCheckICall(v8, v52);
      v56 = KiAccessPage(v8, v5, *v5);
      if ( v49 )
      {
        _InterlockedAnd(v49, ~(1 << ((*(_DWORD *)(a1 + 2520) >> 9) & 0x1F)));
        __writecr8(v53);
      }
    }
    else
    {
      v56 = 0LL;
    }
    v67 = v56;
    v5 = &v67;
  }
  for ( ; v37; --v37 )
  {
    v57 = *(unsigned __int8 *)v5;
    v5 = (__int64 *)((char *)v5 + 1);
    v10 = __ROL8__(v57 ^ v10, v66);
  }
  for ( i = v10; ; i ^= v10 )
  {
    v10 >>= 31;
    if ( !v10 )
      break;
  }
  return i & 0x7FFFFFFF;
}
