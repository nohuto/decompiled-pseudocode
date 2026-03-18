/*
 * XREFs of MiLogPeriodicTelemetry @ 0x1403BA494
 * Callers:
 *     MiWorkingSetManager @ 0x1403B36E0 (MiWorkingSetManager.c)
 * Callees:
 *     MiLogPeriodicTelemetryForSlabAllocator @ 0x1403BA6DC (MiLogPeriodicTelemetryForSlabAllocator.c)
 *     _tlgWriteAgg @ 0x1403BAC2C (_tlgWriteAgg.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall MiLogPeriodicTelemetry(unsigned __int16 *a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // r15
  __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v6; // rdx
  char v7; // al
  unsigned __int64 v8; // rdi
  unsigned __int64 i; // r14
  unsigned __int64 j; // rsi
  unsigned int v11; // esi
  _DWORD *v12; // rdi
  __int64 v13; // r14
  int v14; // eax
  int v15; // r8d
  __int64 v16; // r9
  int v17; // r8d
  __int64 v18; // r9
  int v19; // r8d
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // r11
  __int64 v23; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+70h] [rbp-98h] BYREF
  __int64 v31; // [rsp+78h] [rbp-90h] BYREF
  __int64 v32; // [rsp+80h] [rbp-88h] BYREF
  __int64 v33; // [rsp+88h] [rbp-80h] BYREF
  __int64 v34; // [rsp+90h] [rbp-78h] BYREF
  __int64 v35; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v36[32]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v37; // [rsp+C8h] [rbp-40h]
  __int64 v38; // [rsp+D0h] [rbp-38h]
  __int64 *v39; // [rsp+D8h] [rbp-30h]
  __int64 v40; // [rsp+E0h] [rbp-28h]
  __int64 *v41; // [rsp+E8h] [rbp-20h]
  __int64 v42; // [rsp+F0h] [rbp-18h]
  __int64 *v43; // [rsp+F8h] [rbp-10h]
  __int64 v44; // [rsp+100h] [rbp-8h]
  __int64 *v45; // [rsp+108h] [rbp+0h]
  __int64 v46; // [rsp+110h] [rbp+8h]
  __int64 *v47; // [rsp+118h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+18h]
  __int64 *v49; // [rsp+128h] [rbp+20h]
  __int64 v50; // [rsp+130h] [rbp+28h]
  __int64 *v51; // [rsp+138h] [rbp+30h]
  __int64 v52; // [rsp+140h] [rbp+38h]
  __int64 *v53; // [rsp+148h] [rbp+40h]
  __int64 v54; // [rsp+150h] [rbp+48h]
  __int64 *v55; // [rsp+158h] [rbp+50h]
  __int64 v56; // [rsp+160h] [rbp+58h]
  __int64 *v57; // [rsp+168h] [rbp+60h]
  __int64 v58; // [rsp+170h] [rbp+68h]
  __int64 *v59; // [rsp+178h] [rbp+70h]
  __int64 v60; // [rsp+180h] [rbp+78h]
  __int64 *v61; // [rsp+188h] [rbp+80h]
  __int64 v62; // [rsp+190h] [rbp+88h]
  _UNKNOWN *retaddr; // [rsp+1D0h] [rbp+C8h] BYREF

  result = (unsigned __int64)&retaddr;
  if ( !*(_QWORD *)&qword_140E372D8 )
    return result;
  v3 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v4 = 6000000000LL;
  result = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - *((_QWORD *)a1 + 2304);
  if ( result < 0x165A0BC00LL )
    return result;
  CurrentIrql = KeGetCurrentIrql();
  v6 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v4);
  }
  if ( *((_DWORD *)a1 + 4345)
    && **(_DWORD **)&qword_140E372D8 > 5u
    && (unsigned __int8)tlgKeywordOn(*(_QWORD *)&qword_140E372D8, 0x400000000400LL) )
  {
    v24 = v16;
    v37 = &v24;
    LODWORD(v23) = *a1;
    v38 = 8LL;
    v39 = &v23;
    v41 = &v25;
    v40 = 4LL;
    v25 = 0x1000000LL;
    v42 = 8LL;
    tlgWriteAgg(v15, (unsigned int)byte_140057571, v15, 5, (__int64)v36);
  }
  if ( *((_QWORD *)a1 + 2086)
    && **(_DWORD **)&qword_140E372D8 > 5u
    && (unsigned __int8)tlgKeywordOn(*(_QWORD *)&qword_140E372D8, 0x400000000400LL) )
  {
    v25 = v18;
    v37 = &v25;
    LODWORD(v23) = *a1;
    v38 = 8LL;
    v39 = &v23;
    v41 = &v24;
    v40 = 4LL;
    v24 = 0x1000000LL;
    v42 = 8LL;
    tlgWriteAgg(v17, (unsigned int)&dword_140056F1C, v17, 5, (__int64)v36);
  }
  if ( **(_DWORD **)&qword_140E372D8 > 5u )
  {
    if ( (*(_QWORD *)(*(_QWORD *)&qword_140E372D8 + 16LL) & 0x400000000400LL) == 0
      || (v7 = 1,
          (*(_QWORD *)(*(_QWORD *)&qword_140E372D8 + 24LL) & 0x400000000400LL) != *(_QWORD *)(*(_QWORD *)&qword_140E372D8
                                                                                            + 24LL)) )
    {
      v7 = 0;
    }
    if ( v7 )
    {
      v25 = *((_QWORD *)a1 + 2088);
      v38 = 8LL;
      v37 = &v25;
      v24 = *((_QWORD *)a1 + 2089);
      v39 = &v24;
      v31 = *((_QWORD *)a1 + 2090);
      v41 = &v31;
      v32 = *((_QWORD *)a1 + 2091);
      v43 = &v32;
      v33 = *((_QWORD *)a1 + 2092);
      v45 = &v33;
      v34 = *((_QWORD *)a1 + 2093);
      v47 = &v34;
      v35 = *((unsigned int *)a1 + 4188);
      v49 = &v35;
      v26 = *((unsigned int *)a1 + 4189);
      v51 = &v26;
      v27 = *((unsigned int *)a1 + 4190);
      v53 = &v27;
      v28 = *((unsigned int *)a1 + 4191);
      v55 = &v28;
      v29 = *((_QWORD *)a1 + 2096);
      v57 = &v29;
      LODWORD(v23) = *a1;
      v59 = &v23;
      v61 = &v30;
      v40 = 8LL;
      v42 = 8LL;
      v44 = 8LL;
      v46 = 8LL;
      v48 = 8LL;
      v50 = 8LL;
      v52 = 8LL;
      v54 = 8LL;
      v56 = 8LL;
      v58 = 8LL;
      v60 = 4LL;
      v30 = 0x1000000LL;
      v62 = 8LL;
      tlgWriteAgg(qword_140E372D8, (unsigned int)&byte_140056F7F, qword_140E372D8, 15, (__int64)v36);
    }
  }
  v8 = *((_QWORD *)a1 + 2);
  for ( i = v8 + 57216LL * (unsigned __int16)KeNumberNodes; v8 < i; v8 += 57216LL )
  {
    for ( j = v8 + 15696; j < v8 + 17784; j += 232LL )
    {
      if ( (unsigned int)MiLogPeriodicTelemetryForSlabAllocator(a1, j, 0LL) )
        goto LABEL_19;
    }
  }
LABEL_19:
  v11 = 0;
  v12 = a1 + 8258;
  do
  {
    v13 = (int)*(v12 - 1);
    v14 = 0;
    if ( (_DWORD)v13 )
    {
      v14 = 1;
      *(v12 - 1) = 0;
    }
    if ( *v12 )
    {
      v14 = 1;
      *v12 = 0;
    }
    if ( v12[1] )
    {
      v14 = 1;
      v12[1] = 0;
    }
    if ( v12[2] )
    {
      v12[2] = 0;
    }
    else if ( !v14 )
    {
      goto LABEL_28;
    }
    if ( **(_DWORD **)&qword_140E372D8 > 5u
      && (unsigned __int8)tlgKeywordOn(*(_QWORD *)&qword_140E372D8, 0x400000000800LL) )
    {
      v28 = v20;
      v37 = &v30;
      v30 = v13;
      v39 = &v29;
      v38 = 8LL;
      v41 = &v28;
      v29 = v22;
      v43 = &v27;
      v45 = &v23;
      LODWORD(v24) = *a1;
      v47 = &v24;
      v49 = &v26;
      v40 = 8LL;
      v42 = 8LL;
      v27 = v21;
      v44 = 8LL;
      LODWORD(v23) = v11;
      v46 = 4LL;
      v48 = 4LL;
      v26 = 0x1000000LL;
      v50 = 8LL;
      tlgWriteAgg(v19, (unsigned int)word_14005714A, v19, 9, (__int64)v36);
    }
LABEL_28:
    ++v11;
    v12 += 12;
  }
  while ( v11 < 3 );
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  *((_QWORD *)a1 + 2304) = v3;
  return result;
}
