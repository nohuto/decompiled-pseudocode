/*
 * XREFs of ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140023A7C
 * Callers:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140023A1C (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140023FEC (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?ExpandDiagnosticsBuffer@DXGDIAGNOSTICS@@AEBAJXZ @ 0x1400243BC (-ExpandDiagnosticsBuffer@DXGDIAGNOSTICS@@AEBAJXZ.c)
 *     ?ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z @ 0x140024510 (-ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z.c)
 *     ?IsPersistentPacket@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140047604 (-IsPersistentPacket@DXGDIAGNOSTICS@@AEBAHPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::WriteDiagnosticEntryInternal(DXGDIAGNOSTICS *this, struct _DXGK_DIAG_HEADER *a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // r13d
  struct _DXGK_DIAG_HEADER *v7; // r14
  unsigned int v8; // r12d
  int i; // edx
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  int EventOrder; // eax
  unsigned int v13; // edx
  int v14; // r12d
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rbx
  unsigned int v18; // esi
  unsigned int v20; // eax
  __m128i v21; // xmm1
  __int64 v22; // r8
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  char *v25; // rdx
  size_t v26; // r8
  unsigned __int8 *v27; // rcx
  int j; // edx
  int v29; // eax
  unsigned int v30; // r8d
  unsigned int v31; // ecx
  __int128 v32; // xmm2
  unsigned int v33; // ebx
  _OWORD *v34; // rax
  __m128i v35; // xmm0
  unsigned int v36; // ebx
  __int64 v37; // rax
  size_t v38; // rbx
  int IsPersistentPacket; // r10d
  int v40; // r9d
  unsigned int v41; // edx
  int v42; // [rsp+30h] [rbp-99h]
  DXGDIAGNOSTICS *v43; // [rsp+38h] [rbp-91h]
  int v44; // [rsp+40h] [rbp-89h]
  char *v45; // [rsp+48h] [rbp-81h]
  unsigned __int8 v46[16]; // [rsp+50h] [rbp-79h] BYREF
  __int128 v47; // [rsp+60h] [rbp-69h]
  __m128i v48; // [rsp+70h] [rbp-59h]
  _OWORD Src[2]; // [rsp+80h] [rbp-49h] BYREF
  __m128i v50; // [rsp+A0h] [rbp-29h]
  _OWORD v51[3]; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v52; // [rsp+E0h] [rbp+17h]

  v52 = 0LL;
  memset(v51, 0, sizeof(v51));
  if ( !a2 )
    return 2147483653LL;
  v4 = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)this + 4);
  if ( v4 >= v5 || v4 < 0x30 )
    return 2147483653LL;
  v6 = *((_DWORD *)this + 8);
  v7 = a2;
  v8 = *((_DWORD *)this + 9);
  if ( v6 > v8 )
    v8 += v5;
  v43 = 0LL;
  v42 = 0;
  for ( i = 0; ; i = 1 )
  {
    if ( i )
      goto LABEL_12;
    if ( *(_DWORD *)a2 == *(_DWORD *)this )
      break;
  }
  v10 = *((_QWORD *)this + 1);
  v42 = 1;
  v43 = this;
  if ( v10 )
  {
    v43 = this;
    if ( v4 == *(_DWORD *)(v10 + 4) )
    {
      v43 = this;
      if ( RtlCompareMemory((char *)a2 + 48, (const void *)(v10 + 48), v4 - 48) == v4 - 48 )
      {
        v7 = (struct _DXGK_DIAG_HEADER *)v51;
        v42 = 0;
        *((_QWORD *)&v51[0] + 1) = *((_QWORD *)a2 + 1);
        v37 = *((_QWORD *)this + 1);
        *(_QWORD *)&v51[0] = 0x380000001CLL;
        v43 = this;
        LODWORD(v52) = *(_DWORD *)(v37 + 40);
      }
    }
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_12:
      v11 = *((unsigned int *)this + 4);
      if ( (unsigned __int64)(v8 + *((_DWORD *)v7 + 1) - v6) + 48 < v11 )
      {
        *((_DWORD *)v7 + 10) = (*((_DWORD *)this + 10))++;
        EventOrder = WdLogGetEventOrder();
        v13 = *((_DWORD *)v7 + 1);
        v14 = 0;
        *((_DWORD *)v7 + 11) = EventOrder;
        v15 = *((unsigned int *)this + 9);
        v16 = *((_DWORD *)this + 4);
        v17 = v15 + *((_QWORD *)this + 7);
        v18 = v15 + v13;
        if ( (unsigned int)v15 + v13 > v16 )
        {
          memmove((void *)(v15 + *((_QWORD *)this + 7)), v7, v16 - (unsigned int)v15);
          memmove(
            *((void **)this + 7),
            (char *)v7 + (unsigned int)(*((_DWORD *)this + 4) - *((_DWORD *)this + 9)),
            v18 - *((_DWORD *)this + 4));
          v14 = 1;
        }
        else
        {
          memmove((void *)(v15 + *((_QWORD *)this + 7)), v7, v13);
        }
        *((_DWORD *)this + 9) = v18 % *((_DWORD *)this + 4);
        if ( v42 )
        {
          if ( !v14 )
            *((_QWORD *)v43 + 1) = v17;
        }
        WriteDxgDiagnosticsEvent(a2);
        return 0LL;
      }
      v20 = *((_DWORD *)this + 9);
      v21 = 0LL;
      v22 = *((unsigned int *)this + 8);
      *(_OWORD *)v46 = 0LL;
      v23 = v20 + v11;
      if ( (unsigned int)v22 <= v20 )
        v23 = v20;
      v47 = 0LL;
      v48 = 0LL;
      if ( v23 > (unsigned int)v22 )
      {
        v24 = v23 - v22;
        if ( v24 > 0x30 )
          v24 = 48;
        v45 = (char *)*((_QWORD *)this + 7);
        v44 = v24 + v22;
        v25 = &v45[v22];
        if ( v24 + (unsigned int)v22 > (unsigned int)v11 )
        {
          v38 = (unsigned int)(v11 - v22);
          memmove(v46, v25, v38);
          v25 = v45;
          v26 = (unsigned int)(v44 - v11);
          v27 = &v46[v38];
        }
        else
        {
          v26 = v24;
          v27 = v46;
        }
        memmove(v27, v25, v26);
        v21 = *(__m128i *)v46;
      }
      if ( *((_QWORD *)v7 + 1) - _mm_srli_si128(v21, 8).m128i_u64[0] >= *((_QWORD *)this + 3) )
        break;
      if ( (unsigned int)DXGDIAGNOSTICS::ExpandDiagnosticsBuffer(this) )
      {
        v21.m128i_i64[1] = *(_QWORD *)&v46[8];
        break;
      }
      v6 = *((_DWORD *)this + 8);
      v8 = *((_DWORD *)this + 9);
    }
    for ( j = 0; ; j = 1 )
    {
      if ( j )
      {
        v29 = 0;
        goto LABEL_33;
      }
      if ( *((_QWORD *)this + 7) + *((unsigned int *)this + 8) == *((_QWORD *)this + 1) )
        break;
    }
    v29 = 1;
LABEL_33:
    v30 = *((_DWORD *)this + 4);
    if ( v29 )
      break;
    v6 += *(_DWORD *)&v46[4];
    *((_DWORD *)this + 8) = (*(_DWORD *)&v46[4] + *((_DWORD *)this + 8)) % v30;
  }
  v31 = *((_DWORD *)this + 9);
  v32 = v47;
  v50 = v48;
  v33 = v31 + 48;
  *((_QWORD *)&Src[0] + 1) = v21.m128i_i64[1];
  LODWORD(Src[0]) = 27;
  Src[1] = v47;
  v50.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v48, 8)) - 1;
  DWORD1(Src[0]) = v6 + v30 - v8;
  v34 = (_OWORD *)(*((_QWORD *)this + 7) + v31);
  if ( v31 + 48 > v30 )
  {
    memmove((void *)(*((_QWORD *)this + 7) + v31), Src, v30 - v31);
    memmove(
      *((void **)this + 7),
      (char *)Src + (unsigned int)(*((_DWORD *)this + 4) - *((_DWORD *)this + 9)),
      v33 - *((_DWORD *)this + 4));
  }
  else
  {
    *v34 = Src[0];
    v35 = v50;
    v34[1] = v32;
    v34[2] = v35;
  }
  v36 = *((_DWORD *)this + 8);
  while ( (int)DXGDIAGNOSTICS::ReadDiagnosticsInternal(this, 0xFFFFFFFF, 0x30u, v46, 0LL) >= 0 )
  {
    IsPersistentPacket = DXGDIAGNOSTICS::IsPersistentPacket(
                           this,
                           (struct _DXGK_DIAG_HEADER *)(*((_QWORD *)this + 7) + *((unsigned int *)this + 8)));
    v41 = (unsigned int)(v40 + *(_DWORD *)&v46[4]) % *((_DWORD *)this + 4);
    *((_DWORD *)this + 8) = v41;
    if ( !IsPersistentPacket )
      v41 = v36;
    v36 = v41;
    if ( !IsPersistentPacket )
      goto LABEL_41;
  }
  WdLogSingleEntry3(3LL, v6, v7, *((unsigned int *)v7 + 1));
  WdLogGlobalForLineNumber = 2087;
LABEL_41:
  *((_DWORD *)this + 9) = v36;
  return 3221226029LL;
}
