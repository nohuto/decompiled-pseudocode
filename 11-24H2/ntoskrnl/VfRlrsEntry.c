/*
 * XREFs of VfRlrsEntry @ 0x140613640
 * Callers:
 *     <none>
 * Callees:
 *     DifRegisterPlugin @ 0x140617190 (DifRegisterPlugin.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     VfFaultsInitPhase0 @ 0x140B98338 (VfFaultsInitPhase0.c)
 *     VfFaultsInitPhase1 @ 0x140B98468 (VfFaultsInitPhase1.c)
 */

__int64 VfRlrsEntry()
{
  unsigned int v0; // ebx
  const char *v2; // [rsp+20h] [rbp-E0h] BYREF
  int v3; // [rsp+28h] [rbp-D8h]
  __int64 v4; // [rsp+30h] [rbp-D0h]
  __int64 v5; // [rsp+38h] [rbp-C8h]
  const char *v6; // [rsp+40h] [rbp-C0h]
  int v7; // [rsp+48h] [rbp-B8h]
  __int64 v8; // [rsp+50h] [rbp-B0h]
  __int64 v9; // [rsp+58h] [rbp-A8h]
  const char *v10; // [rsp+60h] [rbp-A0h]
  int v11; // [rsp+68h] [rbp-98h]
  __int64 v12; // [rsp+70h] [rbp-90h]
  __int64 v13; // [rsp+78h] [rbp-88h]
  const char *v14; // [rsp+80h] [rbp-80h]
  int v15; // [rsp+88h] [rbp-78h]
  __int64 v16; // [rsp+90h] [rbp-70h]
  __int64 v17; // [rsp+98h] [rbp-68h]
  const char *v18; // [rsp+A0h] [rbp-60h]
  int v19; // [rsp+A8h] [rbp-58h]
  __int64 v20; // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  const char *v22; // [rsp+C0h] [rbp-40h]
  int v23; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v24)(); // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  const char *v26; // [rsp+E0h] [rbp-20h]
  int v27; // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall *v28)(); // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  const char *v30; // [rsp+100h] [rbp+0h]
  int v31; // [rsp+108h] [rbp+8h]
  __int64 v32; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]
  const char *v34; // [rsp+120h] [rbp+20h]
  int v35; // [rsp+128h] [rbp+28h]
  __int64 v36; // [rsp+130h] [rbp+30h]
  __int64 v37; // [rsp+138h] [rbp+38h]
  const char *v38; // [rsp+140h] [rbp+40h]
  int v39; // [rsp+148h] [rbp+48h]
  __int64 v40; // [rsp+150h] [rbp+50h]
  __int64 v41; // [rsp+158h] [rbp+58h]
  const char *v42; // [rsp+160h] [rbp+60h]
  int v43; // [rsp+168h] [rbp+68h]
  __int64 v44; // [rsp+170h] [rbp+70h]
  __int64 v45; // [rsp+178h] [rbp+78h]
  const char *v46; // [rsp+180h] [rbp+80h]
  int v47; // [rsp+188h] [rbp+88h]
  __int64 v48; // [rsp+190h] [rbp+90h]
  __int64 v49; // [rsp+198h] [rbp+98h]
  const char *v50; // [rsp+1A0h] [rbp+A0h]
  int v51; // [rsp+1A8h] [rbp+A8h]
  __int64 v52; // [rsp+1B0h] [rbp+B0h]
  __int64 v53; // [rsp+1B8h] [rbp+B8h]
  const char *v54; // [rsp+1C0h] [rbp+C0h]
  int v55; // [rsp+1C8h] [rbp+C8h]
  __int64 v56; // [rsp+1D0h] [rbp+D0h]
  __int64 v57; // [rsp+1D8h] [rbp+D8h]
  const char *v58; // [rsp+1E0h] [rbp+E0h]
  int v59; // [rsp+1E8h] [rbp+E8h]
  __int64 v60; // [rsp+1F0h] [rbp+F0h]
  __int64 v61; // [rsp+1F8h] [rbp+F8h]
  const char *v62; // [rsp+200h] [rbp+100h]
  int v63; // [rsp+208h] [rbp+108h]
  __int64 v64; // [rsp+210h] [rbp+110h]
  __int64 v65; // [rsp+218h] [rbp+118h]
  const char *v66; // [rsp+220h] [rbp+120h]
  int v67; // [rsp+228h] [rbp+128h]
  __int64 v68; // [rsp+230h] [rbp+130h]
  __int64 v69; // [rsp+238h] [rbp+138h]
  const char *v70; // [rsp+240h] [rbp+140h]
  int v71; // [rsp+248h] [rbp+148h]
  __int64 (__fastcall *v72)(); // [rsp+250h] [rbp+150h]
  __int64 v73; // [rsp+258h] [rbp+158h]
  const char *v74; // [rsp+260h] [rbp+160h]
  int v75; // [rsp+268h] [rbp+168h]
  __int64 v76; // [rsp+270h] [rbp+170h]
  __int64 v77; // [rsp+278h] [rbp+178h]
  const char *v78; // [rsp+280h] [rbp+180h]
  int v79; // [rsp+288h] [rbp+188h]
  __int64 v80; // [rsp+290h] [rbp+190h]
  __int64 v81; // [rsp+298h] [rbp+198h]
  const char *v82; // [rsp+2A0h] [rbp+1A0h]
  int v83; // [rsp+2A8h] [rbp+1A8h]
  __int64 v84; // [rsp+2B0h] [rbp+1B0h]
  __int64 v85; // [rsp+2B8h] [rbp+1B8h]
  const char *v86; // [rsp+2C0h] [rbp+1C0h]
  int v87; // [rsp+2C8h] [rbp+1C8h]
  __int64 v88; // [rsp+2D0h] [rbp+1D0h]
  __int64 v89; // [rsp+2D8h] [rbp+1D8h]
  const char *v90; // [rsp+2E0h] [rbp+1E0h]
  int v91; // [rsp+2E8h] [rbp+1E8h]
  __int64 v92; // [rsp+2F0h] [rbp+1F0h]
  __int64 v93; // [rsp+2F8h] [rbp+1F8h]
  const char *v94; // [rsp+300h] [rbp+200h]
  int v95; // [rsp+308h] [rbp+208h]
  __int64 v96; // [rsp+310h] [rbp+210h]
  __int64 v97; // [rsp+318h] [rbp+218h]
  const char *v98; // [rsp+320h] [rbp+220h]
  int v99; // [rsp+328h] [rbp+228h]
  __int64 v100; // [rsp+330h] [rbp+230h]
  __int64 v101; // [rsp+338h] [rbp+238h]
  const char *v102; // [rsp+340h] [rbp+240h]
  int v103; // [rsp+348h] [rbp+248h]
  __int64 v104; // [rsp+350h] [rbp+250h]
  __int64 v105; // [rsp+358h] [rbp+258h]
  const char *v106; // [rsp+360h] [rbp+260h]
  int v107; // [rsp+368h] [rbp+268h]
  __int64 v108; // [rsp+370h] [rbp+270h]
  __int64 v109; // [rsp+378h] [rbp+278h]

  v3 = 413;
  v4 = 0LL;
  qword_140F03CA8 = (__int64)ViRlrsUnload;
  v2 = "ExAllocatePool";
  v6 = "ExAllocatePoolWithTag";
  v10 = "ExAllocatePoolWithTagPriority";
  v14 = "ExAllocatePool2";
  v18 = "ExAllocatePool3";
  v22 = "MmProbeAndLockPages";
  v24 = ViRlrsMmProbeAndLockProcessPages_Entry;
  v26 = "MmProbeAndLockProcessPages";
  v28 = ViRlrsMmProbeAndLockProcessPages_Entry;
  v30 = "MmMapIoSpace";
  v34 = "MmAllocateMappingAddress";
  v38 = "MmAllocateContiguousMemory";
  v42 = "MmAllocateContiguousMemorySpecifyCacheNode";
  v46 = "MmAllocateContiguousMemorySpecifyCache";
  v50 = "MmAllocateContiguousNodeMemory";
  v54 = "MmAllocateNonCachedMemory";
  v58 = "MmAllocatePagesForMdl";
  v5 = 0LL;
  v7 = 414;
  v8 = 0LL;
  v9 = 0LL;
  v11 = 415;
  v12 = 0LL;
  v13 = 0LL;
  v15 = 419;
  v16 = 0LL;
  v17 = 0LL;
  v19 = 418;
  v20 = 0LL;
  v21 = 0LL;
  v23 = 217;
  v25 = 0LL;
  v27 = 216;
  v29 = 0LL;
  v31 = 221;
  v32 = 0LL;
  v33 = 0LL;
  v35 = 233;
  v36 = 0LL;
  v37 = 0LL;
  v39 = 238;
  v40 = 0LL;
  v41 = 0LL;
  v43 = 235;
  v44 = 0LL;
  v45 = 0LL;
  v47 = 236;
  v48 = 0LL;
  v49 = 0LL;
  v51 = 234;
  v52 = 0LL;
  v53 = 0LL;
  v55 = 231;
  v56 = 0LL;
  v57 = 0LL;
  v59 = 230;
  v60 = 0LL;
  v61 = 0LL;
  v62 = "MmAllocatePagesForMdlEx";
  v63 = 229;
  v66 = "MmAllocateNodePagesForMdlEx";
  v64 = 0LL;
  v70 = "MmMapLockedPages";
  v65 = 0LL;
  v72 = ViRlrsMmMapLockedPages_Entry;
  v67 = 232;
  v74 = "IoAllocateDriverObjectExtension";
  v78 = "IoAllocateErrorLogEntry";
  v82 = "IoSetCompletionRoutineEx";
  v86 = "IoAllocateIrp";
  v90 = "IoAllocateWorkItem";
  v94 = "IoAllocateMdl";
  v98 = "KeWaitForSingleObject";
  v102 = "KeWaitForMultipleObjects";
  v106 = "KeDelayExecutionThread";
  v68 = 0LL;
  v69 = 0LL;
  v71 = 220;
  v73 = 0LL;
  v75 = 369;
  v76 = 0LL;
  v77 = 0LL;
  v79 = 368;
  v80 = 0LL;
  v81 = 0LL;
  v83 = 314;
  v84 = 0LL;
  v85 = 0LL;
  v87 = 366;
  v88 = 0LL;
  v89 = 0LL;
  v91 = 364;
  v92 = 0LL;
  v93 = 0LL;
  v95 = 365;
  v96 = 0LL;
  v97 = 0LL;
  v99 = 240;
  v100 = 0LL;
  v101 = 0LL;
  v103 = 241;
  v104 = 0LL;
  v105 = 0LL;
  v107 = 288;
  v108 = 0LL;
  v109 = 0LL;
  v0 = DifRegisterPlugin(&v2, 27LL, 2LL, &ViRandomFailureSetting);
  VfFaultsInitPhase0();
  if ( VfDifRunningWithoutReboot )
    VfFaultsInitPhase1();
  return v0;
}
