/*
 * XREFs of MiLogPeriodicTelemetry @ 0x1402D2E24
 * Callers:
 *     MiWorkingSetManager @ 0x1402D3D20 (MiWorkingSetManager.c)
 * Callees:
 *     _tlgWriteAgg @ 0x1403D06F8 (_tlgWriteAgg.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1404251D0 (KiQueryUnbiasedInterruptTime.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x14046A884 (MiEnumerateSlabAllocatorsEx.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404A083C (_tlgWriteEx_EtwWriteEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall MiLogPeriodicTelemetry(ULONG *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  ULONG *v3; // rbx
  __int64 UnbiasedInterruptTime; // r12
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // r14
  int v7; // r8d
  __int64 v8; // r9
  int v9; // r8d
  __int64 v10; // r9
  int v11; // r8d
  __int64 v12; // rdx
  unsigned int v13; // esi
  _DWORD *v14; // rdi
  __int64 v15; // r15
  int v16; // eax
  int v17; // r8d
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // r11
  __int64 v21; // r8
  int v22; // r10d
  int v23; // [rsp+28h] [rbp-E0h]
  int v24; // [rsp+30h] [rbp-D8h]
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
  __int64 v36; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v38[4]; // [rsp+B8h] [rbp-50h] BYREF
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
  __int64 *v63; // [rsp+198h] [rbp+90h]
  __int64 v64; // [rsp+1A0h] [rbp+98h]
  _UNKNOWN *retaddr; // [rsp+1E0h] [rbp+D8h] BYREF

  result = (unsigned __int64)&retaddr;
  v3 = a1;
  if ( !*(_QWORD *)&qword_140E37518 )
    return result;
  LOBYTE(a1) = 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(a1, a2);
  v5 = (__int64)(v3 + 4608);
  if ( v3 != &MiSystemPartition || *(_QWORD *)v5 )
  {
    result = UnbiasedInterruptTime - *(_QWORD *)v5;
    v5 = 6000000000LL;
    if ( result < 0x165A0BC00LL )
      return result;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v5, 2LL);
  }
  if ( v3[4345]
    && **(_DWORD **)&qword_140E37518 > 5u
    && (unsigned __int8)tlgKeywordOn(*(_QWORD *)&qword_140E37518, 0x400000000400LL) )
  {
    v26 = v8;
    v39 = &v26;
    LODWORD(v25) = *(unsigned __int16 *)v3;
    v40 = 8LL;
    v41 = &v25;
    v43 = &v27;
    v42 = 4LL;
    v27 = 0x1000000LL;
    v44 = 8LL;
    tlgWriteAgg(v7, (unsigned int)&byte_14005867F, v7, 5, (__int64)v38);
  }
  if ( *((_QWORD *)v3 + 2086)
    && **(_DWORD **)&qword_140E37518 > 5u
    && (unsigned __int8)tlgKeywordOn(*(_QWORD *)&qword_140E37518, 0x400000000400LL) )
  {
    v27 = v10;
    v39 = &v27;
    LODWORD(v25) = *(unsigned __int16 *)v3;
    v40 = 8LL;
    v41 = &v25;
    v43 = &v26;
    v42 = 4LL;
    v26 = 0x1000000LL;
    v44 = 8LL;
    tlgWriteAgg(v9, (unsigned int)&dword_14005861C, v9, 5, (__int64)v38);
  }
  if ( **(_DWORD **)&qword_140E37518 > 5u
    && (unsigned __int8)tlgKeywordOn(*(_QWORD *)&qword_140E37518, 0x400000000400LL) )
  {
    v27 = *((_QWORD *)v3 + 2088);
    v40 = 8LL;
    v39 = &v27;
    v26 = *((_QWORD *)v3 + 2089);
    v41 = &v26;
    v33 = *((_QWORD *)v3 + 2090);
    v43 = &v33;
    v34 = *((_QWORD *)v3 + 2091);
    v45 = &v34;
    v35 = *((_QWORD *)v3 + 2092);
    v47 = &v35;
    v36 = *((_QWORD *)v3 + 2093);
    v49 = &v36;
    v37 = v3[4188];
    v51 = &v37;
    v30 = v3[4189];
    v53 = &v30;
    v31 = v3[4190];
    v55 = &v31;
    v32 = v3[4191];
    v57 = &v32;
    v28 = *((_QWORD *)v3 + 2096);
    v59 = &v28;
    LODWORD(v25) = *(unsigned __int16 *)v3;
    v61 = &v25;
    v63 = &v29;
    v42 = 8LL;
    v44 = 8LL;
    v46 = 8LL;
    v48 = 8LL;
    v50 = 8LL;
    v52 = 8LL;
    v54 = 8LL;
    v56 = 8LL;
    v58 = 8LL;
    v60 = 8LL;
    v62 = 4LL;
    v29 = 0x1000000LL;
    v64 = 8LL;
    tlgWriteAgg(v11, (unsigned int)word_14005883A, v11, 15, (__int64)v38);
  }
  MiEnumerateSlabAllocatorsEx((_DWORD)v3, (unsigned int)MiLogPeriodicTelemetryForSlabAllocator, 0, -1, 9);
  v13 = 0;
  v14 = v3 + 4129;
  do
  {
    v15 = (int)*(v14 - 1);
    v16 = 0;
    if ( (_DWORD)v15 )
    {
      v16 = 1;
      *(v14 - 1) = 0;
    }
    if ( *v14 )
    {
      v16 = 1;
      *v14 = 0;
    }
    if ( v14[1] )
    {
      v16 = 1;
      v14[1] = 0;
    }
    if ( v14[2] )
    {
      v14[2] = 0;
    }
    else if ( !v16 )
    {
      goto LABEL_31;
    }
    if ( **(_DWORD **)&qword_140E37518 > 5u
      && (unsigned __int8)tlgKeywordOn(*(_QWORD *)&qword_140E37518, 0x400000000800LL) )
    {
      v32 = v18;
      v39 = &v29;
      v29 = v15;
      v41 = &v28;
      v40 = 8LL;
      v43 = &v32;
      v28 = v20;
      v45 = &v31;
      v47 = &v25;
      LODWORD(v26) = *(unsigned __int16 *)v3;
      v49 = &v26;
      v51 = &v30;
      v42 = 8LL;
      v44 = 8LL;
      v31 = v19;
      v46 = 8LL;
      LODWORD(v25) = v13;
      v48 = 4LL;
      v50 = 4LL;
      v30 = 0x1000000LL;
      v52 = 8LL;
      tlgWriteAgg(v17, (unsigned int)&byte_14005875F, v17, 9, (__int64)v38);
    }
LABEL_31:
    ++v13;
    v14 += 12;
  }
  while ( v13 < 3 );
  if ( v3 == &MiSystemPartition
    && !*((_QWORD *)v3 + 2304)
    && **(_DWORD **)&qword_140E37518 > 5u
    && (unsigned __int8)tlgKeywordOn(*(_QWORD *)&qword_140E37518, 0x400000000000LL) )
  {
    v29 = v21;
    v39 = &v29;
    v40 = 8LL;
    v28 = 0x80000000LL;
    v42 = 8LL;
    v41 = &v28;
    tlgWriteEx_EtwWriteEx(v22, (int)&byte_140058A05, v21, 1, v23, v24, 4u, (__int64)v38);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v12) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  *((_QWORD *)v3 + 2304) = UnbiasedInterruptTime;
  return result;
}
