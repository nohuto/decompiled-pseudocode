/*
 * XREFs of ?GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z @ 0x180083C04
 * Callers:
 *     ?DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@W4DPCF_OPTIONS@@_JPEAI8888@Z @ 0x1800449C0 (-DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ULongLCM@@YAJKKPEAK@Z @ 0x1800A3988 (-ULongLCM@@YAJKKPEAK@Z.c)
 *     ?HnsToBlocksRU@@YAJ_KKKPEAK@Z @ 0x18015E2E8 (-HnsToBlocksRU@@YAJ_KKKPEAK@Z.c)
 */

__int64 __fastcall GetPacketSizesFromConstraints(
        const struct PacketSizeConstraints *a1,
        unsigned int a2,
        unsigned __int16 a3,
        struct _GUID *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned int *a8,
        unsigned int *a9,
        unsigned int *a10,
        unsigned int *a11)
{
  unsigned int *v11; // r14
  unsigned __int64 v13; // rbx
  unsigned int v14; // esi
  unsigned int v15; // edx
  unsigned int v16; // r15d
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v20; // edi
  __int64 i; // rcx
  __int64 v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // esi
  unsigned int v25; // ecx
  unsigned int *v26; // r12
  const struct PacketSizeConstraints *v27; // rax
  unsigned int v28; // ebx
  unsigned int v29; // eax
  unsigned int v30; // [rsp+20h] [rbp-40h] BYREF
  struct _GUID *v31; // [rsp+28h] [rbp-38h]
  unsigned __int64 v32; // [rsp+30h] [rbp-30h]
  unsigned int *v33; // [rsp+38h] [rbp-28h]
  unsigned int *v34; // [rsp+40h] [rbp-20h]
  const struct PacketSizeConstraints *v35; // [rsp+48h] [rbp-18h]
  unsigned int *v36; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v11 = (unsigned int *)*((_QWORD *)a1 + 1);
  v13 = 5000LL;
  v14 = 1;
  v34 = a8;
  v15 = v11[1];
  v16 = a3;
  v33 = a10;
  v36 = a11;
  v17 = *v11;
  v35 = a1;
  v31 = a4;
  if ( v17 > 0x1388 )
    v13 = (unsigned int)v17;
  v30 = a3;
  v32 = v13;
  if ( (int)ULongLCM(a3, v15 + 1, &v30) < 0 )
  {
    v18 = 171LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\packetsizeconstraintsutil.cpp",
      (const char *)0x88890008LL);
    return 2290679816LL;
  }
  v20 = v30 / v16;
  if ( a9 )
    *a9 = v30 / v16;
  for ( i = 0LL; (unsigned int)i < v11[3]; i = (unsigned int)(i + 1) )
  {
    v22 = *(_QWORD *)&v11[6 * i + 4] - *(_QWORD *)&v31->Data1;
    if ( !v22 )
      v22 = *(_QWORD *)&v11[6 * i + 6] - *(_QWORD *)v31->Data4;
    if ( !v22 )
    {
      v13 = v11[6 * i + 9];
      if ( v32 > v13 )
        v13 = v32;
      if ( v11[6 * i + 8] )
        v14 = v11[6 * i + 8];
      break;
    }
  }
  v30 = 0;
  if ( HnsToBlocksRU(v13, a2, v16, &v30) < 0 )
  {
    v18 = 194LL;
    goto LABEL_5;
  }
  v23 = v30;
  if ( v14 > v30 )
    v23 = v14;
  v30 = 0;
  v24 = v23 - 1 + v20 - (v23 - 1) % v20;
  *v33 = v24;
  if ( HnsToBlocksRU(a5, a2, v16, &v30) < 0 )
  {
    v18 = 200LL;
    goto LABEL_5;
  }
  v25 = v24;
  v26 = v34;
  if ( v30 > v24 )
    v25 = v30;
  v27 = v35;
  v28 = v25 - 1 + v20 - (v25 - 1) % v20;
  *v34 = v28;
  if ( *(_BYTE *)v27 )
  {
    v29 = v11[2];
    v28 = -1;
    if ( v29 )
      v28 = v20 * (v29 / (v20 * v16));
    v30 = 0;
    if ( HnsToBlocksRU(0x1E8480uLL, a2, v16, &v30) < 0 )
    {
      v18 = 217LL;
      goto LABEL_5;
    }
    if ( v30 > v24 )
      v24 = v30;
    if ( v28 >= v20 - (v24 - 1) % v20 + v24 - 1 )
      v28 = v20 - (v24 - 1) % v20 + v24 - 1;
    if ( v28 <= *v26 )
      v28 = *v26;
  }
  *v36 = v28;
  return 0LL;
}
