/*
 * XREFs of ExpSetSoftRebootFlags @ 0x14064720C
 * Callers:
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpSetSoftRebootFlags(int a1)
{
  int v1; // r14d
  char PreviousMode; // r10
  int v4; // r13d
  unsigned int v5; // edi
  int v6; // r8d
  char *v7; // rdx
  signed __int32 v8; // eax
  __int32 v9; // esi
  int v10; // ebx
  int v11; // r12d
  int v12; // ecx
  unsigned int v13; // r15d
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned __int64 Buffer; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h]
  int v22; // [rsp+68h] [rbp-A0h]
  __int64 v23; // [rsp+70h] [rbp-98h]
  __int64 v24; // [rsp+78h] [rbp-90h]
  char v25; // [rsp+80h] [rbp-88h]
  __int64 v26; // [rsp+88h] [rbp-80h]
  __int64 v27; // [rsp+90h] [rbp-78h]
  char v28; // [rsp+98h] [rbp-70h]
  int v29; // [rsp+A0h] [rbp-68h]
  int v30; // [rsp+A4h] [rbp-64h]
  __int64 (__fastcall *v31)(int, int); // [rsp+A8h] [rbp-60h]
  char v32; // [rsp+B0h] [rbp-58h]
  int v33; // [rsp+B8h] [rbp-50h]
  int v34; // [rsp+BCh] [rbp-4Ch]
  __int64 (__fastcall *v35)(int, int); // [rsp+C0h] [rbp-48h]
  char v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  __int64 (__fastcall *v38)(int, int); // [rsp+D8h] [rbp-30h]
  char v39; // [rsp+E0h] [rbp-28h]
  int v40; // [rsp+E8h] [rbp-20h]
  int v41; // [rsp+ECh] [rbp-1Ch]
  __int64 (__fastcall *v42)(int, int); // [rsp+F0h] [rbp-18h]
  char v43; // [rsp+F8h] [rbp-10h]
  int v44; // [rsp+100h] [rbp-8h]
  int v45; // [rsp+104h] [rbp-4h]
  __int64 v46; // [rsp+108h] [rbp+0h]
  char v47; // [rsp+110h] [rbp+8h]
  __int64 v48; // [rsp+118h] [rbp+10h]
  __int64 (__fastcall *v49)(int, int); // [rsp+120h] [rbp+18h]
  char v50; // [rsp+128h] [rbp+20h]
  int v51; // [rsp+130h] [rbp+28h]
  int v52; // [rsp+134h] [rbp+2Ch]
  __int64 (__fastcall *v53)(int, int); // [rsp+138h] [rbp+30h]
  char v54; // [rsp+140h] [rbp+38h]
  int v55; // [rsp+148h] [rbp+40h]
  int v56; // [rsp+14Ch] [rbp+44h]
  __int64 v57; // [rsp+150h] [rbp+48h]
  char v58; // [rsp+158h] [rbp+50h]
  int v59; // [rsp+160h] [rbp+58h]
  int v60; // [rsp+164h] [rbp+5Ch]
  __int64 v61; // [rsp+168h] [rbp+60h]
  char v62; // [rsp+170h] [rbp+68h]
  int v63; // [rsp+178h] [rbp+70h]
  int v64; // [rsp+17Ch] [rbp+74h]
  __int64 v65; // [rsp+180h] [rbp+78h]
  char v66; // [rsp+188h] [rbp+80h]
  int v67; // [rsp+190h] [rbp+88h]
  int v68; // [rsp+194h] [rbp+8Ch]
  __int64 v69; // [rsp+198h] [rbp+90h]
  char v70; // [rsp+1A0h] [rbp+98h]
  int v71; // [rsp+1A8h] [rbp+A0h]
  int v72; // [rsp+1ACh] [rbp+A4h]
  __int64 v73; // [rsp+1B0h] [rbp+A8h]
  char v74; // [rsp+1B8h] [rbp+B0h]
  __int64 v75; // [rsp+1C0h] [rbp+B8h]
  __int64 v76; // [rsp+1C8h] [rbp+C0h]
  char v77; // [rsp+1D0h] [rbp+C8h]
  int v78; // [rsp+1D8h] [rbp+D0h]
  int v79; // [rsp+1DCh] [rbp+D4h]
  __int64 (__fastcall *v80)(int, int); // [rsp+1E0h] [rbp+D8h]
  char v81; // [rsp+1E8h] [rbp+E0h]
  int v82; // [rsp+1F0h] [rbp+E8h]
  int v83; // [rsp+1F4h] [rbp+ECh]
  __int64 (__fastcall *v84)(int, int); // [rsp+1F8h] [rbp+F0h]
  char v85; // [rsp+200h] [rbp+F8h]
  int v86; // [rsp+208h] [rbp+100h]
  int v87; // [rsp+20Ch] [rbp+104h]
  __int64 (__fastcall *v88)(unsigned int, int); // [rsp+210h] [rbp+108h]
  char v89; // [rsp+218h] [rbp+110h]
  int v90; // [rsp+220h] [rbp+118h]
  int v91; // [rsp+224h] [rbp+11Ch]
  __int64 v92; // [rsp+228h] [rbp+120h]
  char v93; // [rsp+230h] [rbp+128h]
  int v94; // [rsp+238h] [rbp+130h]
  int v95; // [rsp+23Ch] [rbp+134h]
  __int64 (__fastcall *v96)(int, int); // [rsp+240h] [rbp+138h]
  char v97; // [rsp+248h] [rbp+140h]
  int v98; // [rsp+250h] [rbp+148h]
  int v99; // [rsp+254h] [rbp+14Ch]
  __int64 (__fastcall *v100)(int, int); // [rsp+258h] [rbp+150h]
  char v101; // [rsp+260h] [rbp+158h]
  __int64 v102; // [rsp+268h] [rbp+160h]
  __int64 v103; // [rsp+270h] [rbp+168h]
  char v104; // [rsp+278h] [rbp+170h]
  int v105; // [rsp+280h] [rbp+178h]
  int v106; // [rsp+284h] [rbp+17Ch]
  __int64 v107; // [rsp+288h] [rbp+180h]
  char v108; // [rsp+290h] [rbp+188h]
  int v109; // [rsp+298h] [rbp+190h]
  int v110; // [rsp+29Ch] [rbp+194h]
  __int64 v111; // [rsp+2A0h] [rbp+198h]
  char v112; // [rsp+2A8h] [rbp+1A0h]
  int v113; // [rsp+2B0h] [rbp+1A8h]
  int v114; // [rsp+2B4h] [rbp+1ACh]
  __int64 v115; // [rsp+2B8h] [rbp+1B0h]
  char v116; // [rsp+2C0h] [rbp+1B8h]

  v1 = 0;
  Buffer = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  LOBYTE(v22) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v23 = 0x2000000000LL;
  v24 = 0LL;
  v25 = 0;
  v35 = BapdpKsrCompleteScenarioPhase0;
  v38 = BapdpKsrCancelScenario;
  v49 = BapdpKsrCancelScenario;
  v53 = BapdpKsrCompleteScenario;
  v60 = 80;
  v63 = 80;
  v26 = 32LL;
  v27 = 0LL;
  v28 = 0;
  v29 = 0;
  v30 = 8;
  v31 = BapdpKsrInitiateScenarioPhase0;
  v32 = 0;
  v33 = 8;
  v34 = 16;
  v36 = 0;
  v37 = 8LL;
  v39 = 0;
  v40 = 0;
  v41 = 16;
  v42 = BapdpKsrpInitiateScenario;
  v43 = 0;
  v44 = 16;
  v45 = 16;
  v46 = 0LL;
  v47 = 0;
  v48 = 16LL;
  v50 = 0;
  v51 = 16;
  v52 = 2;
  v54 = 0;
  v55 = 0;
  v56 = 1;
  v57 = 0LL;
  v58 = 0;
  v59 = 16;
  v61 = 0LL;
  v62 = 1;
  v64 = 16;
  v65 = 0LL;
  v66 = 1;
  v67 = 0;
  v68 = 144;
  v69 = 0LL;
  v70 = 0;
  v71 = 144;
  v72 = 144;
  v73 = 0LL;
  v74 = 0;
  v75 = 144LL;
  v76 = 0LL;
  v77 = 0;
  v78 = 2;
  v79 = 8;
  v80 = BapdpKsrInitiateScenarioPhase0;
  v81 = 0;
  v82 = 2;
  v106 = 32;
  v83 = 16;
  v4 = a1 & 0x20000000;
  v84 = BapdpKsrpInitiateScenario;
  v85 = 0;
  v86 = 2;
  v87 = 1;
  v88 = BapdpKsrComplete;
  v89 = 0;
  v90 = 1;
  v91 = 1;
  v92 = 0LL;
  v93 = 0;
  v94 = 1;
  v95 = 8;
  v96 = BapdpKsrInitiateScenarioPhase0;
  v97 = 0;
  v98 = 1;
  v99 = 16;
  v100 = BapdpKsrpInitiateScenario;
  v101 = 0;
  v102 = 1LL;
  v103 = 0LL;
  v104 = 0;
  v105 = 1;
  v107 = 0LL;
  v108 = 0;
  v109 = 2;
  v110 = 144;
  v111 = 0LL;
  v112 = 0;
  v113 = 1;
  v114 = 144;
  v115 = 0LL;
  v116 = 0;
  v5 = a1 & 0xC00000BB;
  if ( a1 < 0 || (a1 & 0x40000000) != 0 )
    return 3221225485LL;
  v6 = 0;
  v7 = (char *)&v20 + 4;
  while ( (unsigned __int64)v6 < 0x1A )
  {
    v8 = *((_DWORD *)v7 - 1);
    if ( v5 == *(_DWORD *)v7 && (!v7[12] || !PreviousMode) )
    {
      v9 = _InterlockedCompareExchange(&ExSoftRebootState, a1 & 0x400000BB | 0x80000000, v8);
      if ( v8 == v9 )
      {
        _m_prefetchw(&ExSoftRebootFlags);
        v10 = ExSoftRebootFlags;
        v11 = ExSoftRebootFlags & 0x40000000;
        if ( *(&v21 + 3 * v6) )
          v1 = guard_dispatch_icall_no_overrides((unsigned int)ExSoftRebootFlags);
        v12 = ExSoftRebootFlags & 0x3AFFFF44;
        v13 = a1 & 0xC50000BB;
        v14 = v10 & 0xC50000BB;
        if ( v1 < 0 )
        {
          ExSoftRebootFlags = v12 | v14;
          _InterlockedExchange(&ExSoftRebootState, v9);
        }
        else
        {
          v15 = v13 | 0x40000000;
          if ( !v11 )
            v15 = v13;
          v16 = v12 | v15;
          ExSoftRebootFlags = v16;
          if ( v5 == 32 )
          {
            v17 = v16 | 0x40000000;
            goto LABEL_20;
          }
          if ( v9 == 32 && v4 )
          {
            v17 = v16 & 0xBFFFFFFF;
LABEL_20:
            ExSoftRebootFlags = v17;
          }
          _InterlockedExchange(&ExSoftRebootState, v5);
          Buffer = __PAIR64__(v5, v9);
          ZwUpdateWnfStateData(&WNF_KSR_STATE_TRANSITION, &Buffer, 8u, 0LL, 0LL, 0, 0);
        }
        return (unsigned int)v1;
      }
    }
    ++v6;
    v7 += 24;
  }
  return 3221266435LL;
}
