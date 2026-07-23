/*
 * XREFs of MiLogPeriodicTelemetry @ 0x14035409C
 * Callers:
 *     MiWorkingSetManager @ 0x140354FA0 (MiWorkingSetManager.c)
 * Callees:
 *     _tlgWriteAgg @ 0x140273698 (_tlgWriteAgg.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x14046321C (MiEnumerateSlabAllocatorsEx.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall MiLogPeriodicTelemetry(ULONG *a1)
{
  unsigned __int64 result; // rax
  ULONG *v2; // rbx
  __int64 UnbiasedInterruptTime; // r12
  __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // esi
  _DWORD *v13; // rdi
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 v20; // r8
  int v21; // r10d
  int v22; // [rsp+28h] [rbp-E0h]
  int v23; // [rsp+30h] [rbp-D8h]
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h] BYREF
  __int64 v30; // [rsp+78h] [rbp-90h] BYREF
  __int64 v31; // [rsp+80h] [rbp-88h] BYREF
  __int64 v32; // [rsp+88h] [rbp-80h] BYREF
  __int64 v33; // [rsp+90h] [rbp-78h] BYREF
  __int64 v34; // [rsp+98h] [rbp-70h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v37[4]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v38; // [rsp+D8h] [rbp-30h]
  __int64 v39; // [rsp+E0h] [rbp-28h]
  __int64 *v40; // [rsp+E8h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-18h]
  __int64 *v42; // [rsp+F8h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp-8h]
  __int64 *v44; // [rsp+108h] [rbp+0h]
  __int64 v45; // [rsp+110h] [rbp+8h]
  __int64 *v46; // [rsp+118h] [rbp+10h]
  __int64 v47; // [rsp+120h] [rbp+18h]
  __int64 *v48; // [rsp+128h] [rbp+20h]
  __int64 v49; // [rsp+130h] [rbp+28h]
  __int64 *v50; // [rsp+138h] [rbp+30h]
  __int64 v51; // [rsp+140h] [rbp+38h]
  __int64 *v52; // [rsp+148h] [rbp+40h]
  __int64 v53; // [rsp+150h] [rbp+48h]
  __int64 *v54; // [rsp+158h] [rbp+50h]
  __int64 v55; // [rsp+160h] [rbp+58h]
  __int64 *v56; // [rsp+168h] [rbp+60h]
  __int64 v57; // [rsp+170h] [rbp+68h]
  __int64 *v58; // [rsp+178h] [rbp+70h]
  __int64 v59; // [rsp+180h] [rbp+78h]
  __int64 *v60; // [rsp+188h] [rbp+80h]
  __int64 v61; // [rsp+190h] [rbp+88h]
  __int64 *v62; // [rsp+198h] [rbp+90h]
  __int64 v63; // [rsp+1A0h] [rbp+98h]
  _UNKNOWN *retaddr; // [rsp+1E0h] [rbp+D8h] BYREF

  result = (unsigned __int64)&retaddr;
  v2 = a1;
  if ( !*(_QWORD *)&qword_140E37658 )
    return result;
  LOBYTE(a1) = 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(a1);
  v4 = (__int64)(v2 + 4608);
  if ( v2 != &MiSystemPartition || *(_QWORD *)v4 )
  {
    result = UnbiasedInterruptTime - *(_QWORD *)v4;
    v4 = 6000000000LL;
    if ( result < 0x165A0BC00LL )
      return result;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v4, 2LL);
  }
  if ( v2[4345]
    && **(_DWORD **)&qword_140E37658 > 5u
    && (unsigned __int8)tlgKeywordOn(*(_QWORD *)&qword_140E37658, 0x400000000400LL) )
  {
    v25 = v7;
    v38 = &v25;
    LODWORD(v24) = *(unsigned __int16 *)v2;
    v39 = 8LL;
    v40 = &v24;
    v42 = &v26;
    v41 = 4LL;
    v26 = 0x1000000LL;
    v43 = 8LL;
    tlgWriteAgg(v6, (unsigned __int8 *)byte_140058F2B, v6, 5u, (__int64)v37);
  }
  if ( *((_QWORD *)v2 + 2086)
    && **(_DWORD **)&qword_140E37658 > 5u
    && (unsigned __int8)tlgKeywordOn(*(_QWORD *)&qword_140E37658, 0x400000000400LL) )
  {
    v26 = v9;
    v38 = &v26;
    LODWORD(v24) = *(unsigned __int16 *)v2;
    v39 = 8LL;
    v40 = &v24;
    v42 = &v25;
    v41 = 4LL;
    v25 = 0x1000000LL;
    v43 = 8LL;
    tlgWriteAgg(v8, (unsigned __int8 *)byte_140058F95, v8, 5u, (__int64)v37);
  }
  if ( **(_DWORD **)&qword_140E37658 > 5u
    && (unsigned __int8)tlgKeywordOn(*(_QWORD *)&qword_140E37658, 0x400000000400LL) )
  {
    v26 = *((_QWORD *)v2 + 2088);
    v39 = 8LL;
    v38 = &v26;
    v25 = *((_QWORD *)v2 + 2089);
    v40 = &v25;
    v32 = *((_QWORD *)v2 + 2090);
    v42 = &v32;
    v33 = *((_QWORD *)v2 + 2091);
    v44 = &v33;
    v34 = *((_QWORD *)v2 + 2092);
    v46 = &v34;
    v35 = *((_QWORD *)v2 + 2093);
    v48 = &v35;
    v36 = v2[4188];
    v50 = &v36;
    v29 = v2[4189];
    v52 = &v29;
    v30 = v2[4190];
    v54 = &v30;
    v31 = v2[4191];
    v56 = &v31;
    v27 = *((_QWORD *)v2 + 2096);
    v58 = &v27;
    LODWORD(v24) = *(unsigned __int16 *)v2;
    v60 = &v24;
    v62 = &v28;
    v41 = 8LL;
    v43 = 8LL;
    v45 = 8LL;
    v47 = 8LL;
    v49 = 8LL;
    v51 = 8LL;
    v53 = 8LL;
    v55 = 8LL;
    v57 = 8LL;
    v59 = 8LL;
    v61 = 4LL;
    v28 = 0x1000000LL;
    v63 = 8LL;
    tlgWriteAgg(v10, (unsigned __int8 *)&unk_140058FF8, v10, 0xFu, (__int64)v37);
  }
  MiEnumerateSlabAllocatorsEx((_DWORD)v2, (unsigned int)MiLogPeriodicTelemetryForSlabAllocator, 0, -1, 9);
  v12 = 0;
  v13 = v2 + 4129;
  do
  {
    v14 = (int)*(v13 - 1);
    v15 = 0;
    if ( (_DWORD)v14 )
    {
      v15 = 1;
      *(v13 - 1) = 0;
    }
    if ( *v13 )
    {
      v15 = 1;
      *v13 = 0;
    }
    if ( v13[1] )
    {
      v15 = 1;
      v13[1] = 0;
    }
    if ( v13[2] )
    {
      v13[2] = 0;
    }
    else if ( !v15 )
    {
      goto LABEL_31;
    }
    if ( **(_DWORD **)&qword_140E37658 > 5u
      && (unsigned __int8)tlgKeywordOn(*(_QWORD *)&qword_140E37658, 0x400000000800LL) )
    {
      v31 = v17;
      v38 = &v28;
      v28 = v14;
      v40 = &v27;
      v39 = 8LL;
      v42 = &v31;
      v27 = v19;
      v44 = &v30;
      v46 = &v24;
      LODWORD(v25) = *(unsigned __int16 *)v2;
      v48 = &v25;
      v50 = &v29;
      v41 = 8LL;
      v43 = 8LL;
      v30 = v18;
      v45 = 8LL;
      LODWORD(v24) = v12;
      v47 = 4LL;
      v49 = 4LL;
      v29 = 0x1000000LL;
      v51 = 8LL;
      tlgWriteAgg(v16, (unsigned __int8 *)byte_1400591C3, v16, 9u, (__int64)v37);
    }
LABEL_31:
    ++v12;
    v13 += 12;
  }
  while ( v12 < 3 );
  if ( v2 == &MiSystemPartition
    && !*((_QWORD *)v2 + 2304)
    && **(_DWORD **)&qword_140E37658 > 5u
    && (unsigned __int8)tlgKeywordOn(*(_QWORD *)&qword_140E37658, 0x400000000000LL) )
  {
    v28 = v20;
    v38 = &v28;
    v39 = 8LL;
    v27 = 0x80000000LL;
    v41 = 8LL;
    v40 = &v27;
    tlgWriteEx_EtwWriteEx(v21, (int)&byte_140058EEB, v20, 1, v22, v23, 4u, (__int64)v37);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v11) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  *((_QWORD *)v2 + 2304) = UnbiasedInterruptTime;
  return result;
}
