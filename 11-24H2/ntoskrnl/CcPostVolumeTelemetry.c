/*
 * XREFs of CcPostVolumeTelemetry @ 0x1404C405C
 * Callers:
 *     CcTelemetryPeriodicTimerCallback @ 0x140A71200 (CcTelemetryPeriodicTimerCallback.c)
 * Callees:
 *     CcHasVolumeCumulativeTelemetryChanged @ 0x140200444 (CcHasVolumeCumulativeTelemetryChanged.c)
 *     KeRcuReadUnlock @ 0x1402CE230 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x1402CE360 (KeRcuReadLock.c)
 *     McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x14032E3C8 (McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteT.c)
 *     McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x14032EAF4 (McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140330A30 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     CcHasVolumeTelemetryChanged @ 0x1404B8BC8 (CcHasVolumeTelemetryChanged.c)
 *     McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1404C2EC8 (McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer.c)
 *     CcAggregateCumulativeVolumeTelemetry @ 0x1404DEC60 (CcAggregateCumulativeVolumeTelemetry.c)
 *     McTemplateK0xxxxxxxxxxxxxxxxxxq_EtwWriteTransfer @ 0x1404F66A8 (McTemplateK0xxxxxxxxxxxxxxxxxxq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CcAggregateCumulativeGlobalTelemetry @ 0x140AB1508 (CcAggregateCumulativeGlobalTelemetry.c)
 *     CcResetGlobalTelemetry @ 0x140AB78B4 (CcResetGlobalTelemetry.c)
 *     ExAllocatePoolWithTag @ 0x140B72010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void CcPostVolumeTelemetry()
{
  char v0; // r14
  __int64 v1; // rsi
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rcx
  char *PoolWithTag; // r15
  _QWORD *v6; // rcx
  __int64 v7; // r8
  __int64 *v8; // r12
  unsigned int v9; // r13d
  __int64 v10; // rdx
  const void *v11; // r14
  int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // r11
  __int16 v15; // r8
  char *v16; // r14
  __int64 v17; // r13
  char *v18; // rdi
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r9
  __int16 v21; // r8
  __int16 v22; // r11
  __int64 v23; // [rsp+E8h] [rbp-890h]
  __int64 v24; // [rsp+F0h] [rbp-888h]
  __int64 v25; // [rsp+F8h] [rbp-880h]
  __int64 v26; // [rsp+100h] [rbp-878h]
  __int64 v27; // [rsp+108h] [rbp-870h]
  __int64 v28; // [rsp+110h] [rbp-868h]
  __int64 v29; // [rsp+118h] [rbp-860h]
  __int64 v30; // [rsp+120h] [rbp-858h]
  __int64 v31; // [rsp+128h] [rbp-850h]
  __int64 v32; // [rsp+130h] [rbp-848h]
  __int64 v33; // [rsp+138h] [rbp-840h]
  __int64 v34; // [rsp+140h] [rbp-838h]
  __int64 v35; // [rsp+148h] [rbp-830h]
  __int64 v36; // [rsp+150h] [rbp-828h]
  __int64 v37; // [rsp+158h] [rbp-820h]
  __int64 v38; // [rsp+160h] [rbp-818h]
  __int64 v39; // [rsp+168h] [rbp-810h]
  __int64 v40; // [rsp+168h] [rbp-810h]
  __int64 v41; // [rsp+170h] [rbp-808h]
  __int64 v42; // [rsp+170h] [rbp-808h]
  __int64 v43; // [rsp+178h] [rbp-800h]
  __int64 v44; // [rsp+178h] [rbp-800h]
  __int64 v45; // [rsp+180h] [rbp-7F8h]
  __int64 v46; // [rsp+180h] [rbp-7F8h]
  __int64 v47; // [rsp+188h] [rbp-7F0h]
  __int64 v48; // [rsp+188h] [rbp-7F0h]
  __int64 v49; // [rsp+190h] [rbp-7E8h]
  __int64 v50; // [rsp+190h] [rbp-7E8h]
  __int64 v51; // [rsp+198h] [rbp-7E0h]
  __int64 v52; // [rsp+198h] [rbp-7E0h]
  __int64 v53; // [rsp+1A0h] [rbp-7D8h]
  __int64 v54; // [rsp+1A0h] [rbp-7D8h]
  __int64 v55; // [rsp+1A8h] [rbp-7D0h]
  __int64 v56; // [rsp+1B0h] [rbp-7C8h]
  __int64 v57; // [rsp+1B8h] [rbp-7C0h]
  __int64 v58; // [rsp+1C0h] [rbp-7B8h]
  __int64 v59; // [rsp+1C8h] [rbp-7B0h]
  __int64 v60; // [rsp+1D0h] [rbp-7A8h]
  __int64 v61; // [rsp+1D8h] [rbp-7A0h]
  __int64 v62; // [rsp+1E0h] [rbp-798h]
  __int64 v63; // [rsp+1E8h] [rbp-790h]
  __int64 v64; // [rsp+1F0h] [rbp-788h]
  char v65; // [rsp+270h] [rbp-708h]
  _WORD v66[2]; // [rsp+274h] [rbp-704h] BYREF
  unsigned int v67; // [rsp+278h] [rbp-700h] BYREF
  __int16 v68; // [rsp+27Ch] [rbp-6FCh] BYREF
  __int16 v69; // [rsp+280h] [rbp-6F8h] BYREF
  __int16 v70; // [rsp+284h] [rbp-6F4h] BYREF
  __int16 v71; // [rsp+288h] [rbp-6F0h] BYREF
  __int16 v72; // [rsp+28Ch] [rbp-6ECh] BYREF
  __int16 v73; // [rsp+290h] [rbp-6E8h] BYREF
  __int16 v74; // [rsp+294h] [rbp-6E4h] BYREF
  __int16 v75; // [rsp+298h] [rbp-6E0h] BYREF
  __int16 v76; // [rsp+29Ch] [rbp-6DCh] BYREF
  __int16 v77; // [rsp+2A0h] [rbp-6D8h] BYREF
  unsigned int v78; // [rsp+2A4h] [rbp-6D4h]
  unsigned int v79; // [rsp+2A8h] [rbp-6D0h]
  __int64 v80; // [rsp+2B0h] [rbp-6C8h] BYREF
  unsigned __int64 v81; // [rsp+2B8h] [rbp-6C0h] BYREF
  PVOID P; // [rsp+2C0h] [rbp-6B8h]
  __int64 v83; // [rsp+2C8h] [rbp-6B0h] BYREF
  __int64 v84; // [rsp+2D0h] [rbp-6A8h] BYREF
  __int64 v85; // [rsp+2D8h] [rbp-6A0h] BYREF
  __int64 v86; // [rsp+2E0h] [rbp-698h] BYREF
  __int64 v87; // [rsp+2E8h] [rbp-690h] BYREF
  __int64 v88; // [rsp+2F0h] [rbp-688h] BYREF
  __int64 v89; // [rsp+2F8h] [rbp-680h] BYREF
  __int64 v90; // [rsp+300h] [rbp-678h] BYREF
  __int64 v91; // [rsp+308h] [rbp-670h] BYREF
  __int64 v92; // [rsp+310h] [rbp-668h] BYREF
  __int64 v93; // [rsp+318h] [rbp-660h] BYREF
  __int64 v94; // [rsp+320h] [rbp-658h] BYREF
  __int64 v95; // [rsp+328h] [rbp-650h] BYREF
  __int64 v96; // [rsp+330h] [rbp-648h] BYREF
  __int64 v97; // [rsp+338h] [rbp-640h] BYREF
  __int64 v98; // [rsp+340h] [rbp-638h] BYREF
  __int64 v99; // [rsp+348h] [rbp-630h] BYREF
  __int64 v100; // [rsp+350h] [rbp-628h] BYREF
  _QWORD v101[20]; // [rsp+358h] [rbp-620h] BYREF
  __int64 v102; // [rsp+3F8h] [rbp-580h]
  __int64 v103; // [rsp+400h] [rbp-578h]
  __int64 v104; // [rsp+408h] [rbp-570h] BYREF
  __int64 v105; // [rsp+410h] [rbp-568h] BYREF
  __int64 v106; // [rsp+418h] [rbp-560h] BYREF
  __int64 v107; // [rsp+420h] [rbp-558h] BYREF
  __int64 v108; // [rsp+428h] [rbp-550h] BYREF
  __int64 v109; // [rsp+430h] [rbp-548h] BYREF
  __int64 v110; // [rsp+438h] [rbp-540h] BYREF
  __int64 v111; // [rsp+440h] [rbp-538h] BYREF
  __int64 v112; // [rsp+448h] [rbp-530h] BYREF
  __int64 v113; // [rsp+450h] [rbp-528h] BYREF
  __int64 v114; // [rsp+458h] [rbp-520h] BYREF
  __int64 v115; // [rsp+460h] [rbp-518h] BYREF
  __int64 v116; // [rsp+468h] [rbp-510h] BYREF
  __int64 v117; // [rsp+470h] [rbp-508h] BYREF
  __int64 v118; // [rsp+478h] [rbp-500h] BYREF
  __int64 v119; // [rsp+480h] [rbp-4F8h] BYREF
  __int64 v120; // [rsp+488h] [rbp-4F0h] BYREF
  __int64 v121; // [rsp+490h] [rbp-4E8h] BYREF
  unsigned __int64 v122; // [rsp+498h] [rbp-4E0h] BYREF
  __int64 v123; // [rsp+4A0h] [rbp-4D8h] BYREF
  __int64 v124; // [rsp+4A8h] [rbp-4D0h] BYREF
  __int64 v125; // [rsp+4B0h] [rbp-4C8h] BYREF
  __int64 v126; // [rsp+4B8h] [rbp-4C0h] BYREF
  __int64 v127; // [rsp+4C0h] [rbp-4B8h] BYREF
  __int64 v128; // [rsp+4C8h] [rbp-4B0h] BYREF
  __int64 v129; // [rsp+4D0h] [rbp-4A8h] BYREF
  __int64 v130; // [rsp+4D8h] [rbp-4A0h] BYREF
  __int64 v131; // [rsp+4E0h] [rbp-498h] BYREF
  __int64 v132; // [rsp+4E8h] [rbp-490h] BYREF
  __int64 v133; // [rsp+4F0h] [rbp-488h] BYREF
  __int64 v134; // [rsp+4F8h] [rbp-480h] BYREF
  __int64 v135; // [rsp+500h] [rbp-478h] BYREF
  __int64 v136; // [rsp+508h] [rbp-470h] BYREF
  __int64 v137; // [rsp+510h] [rbp-468h] BYREF
  __int64 v138; // [rsp+518h] [rbp-460h] BYREF
  __int64 v139; // [rsp+520h] [rbp-458h] BYREF
  __int64 v140; // [rsp+528h] [rbp-450h] BYREF
  __int64 v141; // [rsp+530h] [rbp-448h] BYREF
  unsigned __int64 v142; // [rsp+538h] [rbp-440h]
  struct _EVENT_DATA_DESCRIPTOR v143[2]; // [rsp+540h] [rbp-438h] BYREF
  unsigned __int64 *v144; // [rsp+560h] [rbp-418h]
  __int64 v145; // [rsp+568h] [rbp-410h]
  _WORD *v146; // [rsp+570h] [rbp-408h]
  __int64 v147; // [rsp+578h] [rbp-400h]
  __int64 *v148; // [rsp+580h] [rbp-3F8h]
  __int64 v149; // [rsp+588h] [rbp-3F0h]
  __int64 *v150; // [rsp+590h] [rbp-3E8h]
  __int64 v151; // [rsp+598h] [rbp-3E0h]
  __int64 *v152; // [rsp+5A0h] [rbp-3D8h]
  __int64 v153; // [rsp+5A8h] [rbp-3D0h]
  __int64 *v154; // [rsp+5B0h] [rbp-3C8h]
  __int64 v155; // [rsp+5B8h] [rbp-3C0h]
  __int64 *v156; // [rsp+5C0h] [rbp-3B8h]
  __int64 v157; // [rsp+5C8h] [rbp-3B0h]
  __int64 *v158; // [rsp+5D0h] [rbp-3A8h]
  __int64 v159; // [rsp+5D8h] [rbp-3A0h]
  __int64 *v160; // [rsp+5E0h] [rbp-398h]
  __int64 v161; // [rsp+5E8h] [rbp-390h]
  __int64 *v162; // [rsp+5F0h] [rbp-388h]
  __int64 v163; // [rsp+5F8h] [rbp-380h]
  __int64 *v164; // [rsp+600h] [rbp-378h]
  __int64 v165; // [rsp+608h] [rbp-370h]
  __int64 *v166; // [rsp+610h] [rbp-368h]
  __int64 v167; // [rsp+618h] [rbp-360h]
  __int64 *v168; // [rsp+620h] [rbp-358h]
  __int64 v169; // [rsp+628h] [rbp-350h]
  __int64 *v170; // [rsp+630h] [rbp-348h]
  __int64 v171; // [rsp+638h] [rbp-340h]
  __int64 *v172; // [rsp+640h] [rbp-338h]
  __int64 v173; // [rsp+648h] [rbp-330h]
  __int64 *v174; // [rsp+650h] [rbp-328h]
  __int64 v175; // [rsp+658h] [rbp-320h]
  __int64 *v176; // [rsp+660h] [rbp-318h]
  __int64 v177; // [rsp+668h] [rbp-310h]
  __int64 *v178; // [rsp+670h] [rbp-308h]
  __int64 v179; // [rsp+678h] [rbp-300h]
  __int64 *v180; // [rsp+680h] [rbp-2F8h]
  __int64 v181; // [rsp+688h] [rbp-2F0h]
  __int64 *v182; // [rsp+690h] [rbp-2E8h]
  __int64 v183; // [rsp+698h] [rbp-2E0h]
  __int64 *v184; // [rsp+6A0h] [rbp-2D8h]
  __int64 v185; // [rsp+6A8h] [rbp-2D0h]
  __int64 *v186; // [rsp+6B0h] [rbp-2C8h]
  __int64 v187; // [rsp+6B8h] [rbp-2C0h]
  unsigned __int64 *v188; // [rsp+6C0h] [rbp-2B8h]
  __int64 v189; // [rsp+6C8h] [rbp-2B0h]
  __int64 *v190; // [rsp+6D0h] [rbp-2A8h]
  __int64 v191; // [rsp+6D8h] [rbp-2A0h]
  __int64 *v192; // [rsp+6E0h] [rbp-298h]
  __int64 v193; // [rsp+6E8h] [rbp-290h]
  __int64 *v194; // [rsp+6F0h] [rbp-288h]
  __int64 v195; // [rsp+6F8h] [rbp-280h]
  __int64 *v196; // [rsp+700h] [rbp-278h]
  __int64 v197; // [rsp+708h] [rbp-270h]
  __int64 *v198; // [rsp+710h] [rbp-268h]
  __int64 v199; // [rsp+718h] [rbp-260h]
  __int64 *v200; // [rsp+720h] [rbp-258h]
  __int64 v201; // [rsp+728h] [rbp-250h]
  __int64 *v202; // [rsp+730h] [rbp-248h]
  __int64 v203; // [rsp+738h] [rbp-240h]
  __int64 *v204; // [rsp+740h] [rbp-238h]
  __int64 v205; // [rsp+748h] [rbp-230h]
  __int64 *v206; // [rsp+750h] [rbp-228h]
  __int64 v207; // [rsp+758h] [rbp-220h]
  __int64 *v208; // [rsp+760h] [rbp-218h]
  __int64 v209; // [rsp+768h] [rbp-210h]
  __int64 *v210; // [rsp+770h] [rbp-208h]
  __int64 v211; // [rsp+778h] [rbp-200h]
  __int64 *v212; // [rsp+780h] [rbp-1F8h]
  __int64 v213; // [rsp+788h] [rbp-1F0h]
  __int64 *v214; // [rsp+790h] [rbp-1E8h]
  __int64 v215; // [rsp+798h] [rbp-1E0h]
  __int64 *v216; // [rsp+7A0h] [rbp-1D8h]
  __int64 v217; // [rsp+7A8h] [rbp-1D0h]
  __int64 *v218; // [rsp+7B0h] [rbp-1C8h]
  __int64 v219; // [rsp+7B8h] [rbp-1C0h]
  __int64 *v220; // [rsp+7C0h] [rbp-1B8h]
  __int64 v221; // [rsp+7C8h] [rbp-1B0h]
  __int64 *v222; // [rsp+7D0h] [rbp-1A8h]
  __int64 v223; // [rsp+7D8h] [rbp-1A0h]
  __int64 *v224; // [rsp+7E0h] [rbp-198h]
  __int64 v225; // [rsp+7E8h] [rbp-190h]
  __int64 *v226; // [rsp+7F0h] [rbp-188h]
  __int64 v227; // [rsp+7F8h] [rbp-180h]
  char v228[16]; // [rsp+800h] [rbp-178h] BYREF
  __int16 *v229; // [rsp+810h] [rbp-168h]
  __int64 v230; // [rsp+818h] [rbp-160h]
  char *v231; // [rsp+820h] [rbp-158h]
  __int64 v232; // [rsp+828h] [rbp-150h]
  __int16 *v233; // [rsp+830h] [rbp-148h]
  __int64 v234; // [rsp+838h] [rbp-140h]
  char *v235; // [rsp+840h] [rbp-138h]
  __int64 v236; // [rsp+848h] [rbp-130h]
  __int16 *v237; // [rsp+850h] [rbp-128h]
  __int64 v238; // [rsp+858h] [rbp-120h]
  char *v239; // [rsp+860h] [rbp-118h]
  __int64 v240; // [rsp+868h] [rbp-110h]
  __int16 *v241; // [rsp+870h] [rbp-108h]
  __int64 v242; // [rsp+878h] [rbp-100h]
  char *v243; // [rsp+880h] [rbp-F8h]
  __int64 v244; // [rsp+888h] [rbp-F0h]
  __int16 *v245; // [rsp+890h] [rbp-E8h]
  __int64 v246; // [rsp+898h] [rbp-E0h]
  char *v247; // [rsp+8A0h] [rbp-D8h]
  __int64 v248; // [rsp+8A8h] [rbp-D0h]
  __int16 *v249; // [rsp+8B0h] [rbp-C8h]
  __int64 v250; // [rsp+8B8h] [rbp-C0h]
  char *v251; // [rsp+8C0h] [rbp-B8h]
  __int64 v252; // [rsp+8C8h] [rbp-B0h]
  __int16 *v253; // [rsp+8D0h] [rbp-A8h]
  __int64 v254; // [rsp+8D8h] [rbp-A0h]
  char *v255; // [rsp+8E0h] [rbp-98h]
  __int64 v256; // [rsp+8E8h] [rbp-90h]
  __int16 *v257; // [rsp+8F0h] [rbp-88h]
  __int64 v258; // [rsp+8F8h] [rbp-80h]
  char *v259; // [rsp+900h] [rbp-78h]
  __int64 v260; // [rsp+908h] [rbp-70h]
  __int16 *v261; // [rsp+910h] [rbp-68h]
  __int64 v262; // [rsp+918h] [rbp-60h]
  char *v263; // [rsp+920h] [rbp-58h]
  __int64 v264; // [rsp+928h] [rbp-50h]
  __int16 *v265; // [rsp+930h] [rbp-48h]
  __int64 v266; // [rsp+938h] [rbp-40h]
  char *v267; // [rsp+940h] [rbp-38h]
  __int64 v268; // [rsp+948h] [rbp-30h]

  v0 = 0;
  v65 = 0;
  v78 = 0;
  v79 = 0;
  v1 = MEMORY[0xFFFFF78000000014];
  v2 = MEMORY[0xFFFFF78000000014] - qword_140F8E4D0;
  v3 = MEMORY[0xFFFFF78000000014] - qword_140F8E4D8;
  if ( MEMORY[0xFFFFF78000000014] - qword_140F8E4D0 >= unk_140F8E4E8 || qword_140F8E4F8 <= 0 )
  {
    if ( v3 >= qword_140F8E4F0 || !qword_140F8E4F8 )
    {
      v0 = 1;
      v65 = 1;
    }
    ++qword_140F8E4F8;
    v81 = qword_140F8E508 + 10;
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)1536, 2480 * (qword_140F8E508 + 10), 0x65546343u);
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      KeRcuReadLock(v4);
      v8 = (__int64 *)CcVolumeCacheMapList;
      v102 = CcVolumeCacheMapList;
      v9 = v78;
LABEL_8:
      v10 = v79;
      while ( v8 != &CcVolumeCacheMapList && (unsigned int)v10 < v81 )
      {
        v79 = v10 + 1;
        if ( CcHasVolumeTelemetryChanged(v8 - 3) || v0 && CcHasVolumeCumulativeTelemetryChanged(v6) )
        {
          v11 = v6 + 29;
          CcAggregateCumulativeVolumeTelemetry(v6 + 29);
          memmove(&PoolWithTag[2480 * v9], v11, 0x9B0uLL);
          memset_0(v8 + 28, 0, 0x4D0uLL);
          v0 = v65;
          if ( v65 )
            memset_0(v8 + 182, 0, 0x4D0uLL);
          v8 = (__int64 *)*v8;
          v102 = (__int64)v8;
          v9 = ++v78;
          goto LABEL_8;
        }
      }
      KeRcuReadUnlock((__int64)v6, v10, v7);
      CcAggregateCumulativeGlobalTelemetry();
      if ( (Microsoft_Windows_Kernel_CacheEnableBits & 1) != 0 )
        McTemplateK0xxxxxxxxxxxxxxxxxxq_EtwWriteTransfer(
          Microsoft_Windows_Kernel_CacheEnableBits,
          (__int64)((unsigned __int128)(v2 * (__int128)0x6666666666666667LL) >> 64) >> 2,
          v12,
          (int)v2 / 10,
          qword_140F8E510,
          qword_140F8E518,
          qword_140F8E548,
          qword_140F8E550,
          qword_140F8E558,
          qword_140F8E560,
          qword_140F8E568,
          qword_140F8E570,
          qword_140F8E578,
          qword_140F8E580,
          qword_140F8E588,
          qword_140F8E590,
          qword_140F8E520,
          qword_140F8E528,
          qword_140F8E530,
          qword_140F8E538,
          qword_140F8E540);
      CcResetGlobalTelemetry();
      v14 = 0LL;
      if ( v0 )
      {
        if ( (unsigned int)dword_140E06BF8 > 5 && tlgKeywordOn((__int64)&dword_140E06BF8, 0x400000000000LL) )
        {
          v81 = 0x1000000LL;
          v144 = &v81;
          v145 = (unsigned int)(v14 + 8);
          v66[0] = v15;
          v146 = v66;
          v147 = 2LL;
          v80 = v3 / 10;
          v148 = &v80;
          v149 = v145;
          v67 = CcNumberNumaNodes;
          v150 = (__int64 *)&v67;
          v151 = 4LL;
          v84 = qword_140F8E598;
          v152 = &v84;
          v153 = v145;
          v85 = qword_140F8E5A0;
          v154 = &v85;
          v155 = v145;
          v86 = qword_140F8E5D0;
          v156 = &v86;
          v157 = v145;
          v87 = qword_140F8E5D8;
          v158 = &v87;
          v159 = v145;
          v88 = qword_140F8E5E0;
          v160 = &v88;
          v161 = v145;
          v89 = qword_140F8E5E8;
          v162 = &v89;
          v163 = v145;
          v90 = qword_140F8E5F0;
          v164 = &v90;
          v165 = v145;
          v91 = qword_140F8E5F8;
          v166 = &v91;
          v167 = v145;
          v92 = qword_140F8E600;
          v168 = &v92;
          v169 = v145;
          v93 = qword_140F8E608;
          v170 = &v93;
          v171 = v145;
          v94 = qword_140F8E610;
          v172 = &v94;
          v173 = v145;
          v95 = qword_140F8E618;
          v174 = &v95;
          v175 = v145;
          v96 = qword_140F8E5A8;
          v176 = &v96;
          v177 = v145;
          v97 = qword_140F8E5B0;
          v178 = &v97;
          v179 = v145;
          v98 = qword_140F8E5B8;
          v180 = &v98;
          v181 = v145;
          v99 = qword_140F8E5C0;
          v182 = &v99;
          v183 = v145;
          v83 = qword_140F8E5C8;
          v184 = &v83;
          v185 = v145;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06BF8,
            (unsigned __int8 *)word_1400435BA,
            0LL,
            0LL,
            0x17u,
            v143);
          v14 = 0LL;
        }
        qword_140F8E598 = v14;
        qword_140F8E5A0 = v14;
        qword_140F8E5A8 = v14;
        qword_140F8E5B0 = v14;
        qword_140F8E5B8 = v14;
        qword_140F8E5C0 = v14;
        qword_140F8E5C8 = v14;
        qword_140F8E5D0 = v14;
        qword_140F8E5D8 = v14;
        qword_140F8E5E0 = v14;
        qword_140F8E5E8 = v14;
        qword_140F8E5F0 = v14;
        qword_140F8E5F8 = v14;
        qword_140F8E600 = v14;
        qword_140F8E608 = v14;
        qword_140F8E610 = v14;
        qword_140F8E618 = v14;
        qword_140F8E4D8 = v1;
      }
      v142 = v9;
      v67 = v14;
      v16 = (char *)P;
      if ( v9 )
      {
        v17 = v14;
        v80 = v14;
        do
        {
          v18 = &v16[2480 * v17];
          v19 = *((_QWORD *)v18 + 14);
          if ( v19 )
            v20 = 100 * (v19 - *((_QWORD *)v18 + 15)) / v19;
          else
            v20 = v14;
          v81 = v20;
          if ( (Microsoft_Windows_Kernel_CacheEnableBits & 1) != 0 )
            McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer(
              v13,
              v2 / 10,
              v19,
              (__int64)&v16[2480 * v17],
              v2 / 10,
              *((_QWORD *)v18 + 2),
              *((_QWORD *)v18 + 3),
              *((_QWORD *)v18 + 4),
              *((_QWORD *)v18 + 5),
              *((_QWORD *)v18 + 6),
              *((_QWORD *)v18 + 7),
              *((_QWORD *)v18 + 23),
              *((_QWORD *)v18 + 24),
              *((_QWORD *)v18 + 25),
              *((_QWORD *)v18 + 26),
              *((_QWORD *)v18 + 8),
              *((_QWORD *)v18 + 9),
              *((_QWORD *)v18 + 10),
              *((_QWORD *)v18 + 11),
              *((_QWORD *)v18 + 12),
              *((_QWORD *)v18 + 13),
              v19,
              *((_QWORD *)v18 + 15),
              *((_QWORD *)v18 + 16),
              v20,
              *((_QWORD *)v18 + 20),
              *((_QWORD *)v18 + 21),
              *((_QWORD *)v18 + 22),
              *((_QWORD *)v18 + 17),
              *((_QWORD *)v18 + 18),
              *((_QWORD *)v18 + 19),
              *((_QWORD *)v18 + 27),
              *((_QWORD *)v18 + 28),
              *((_QWORD *)v18 + 77),
              *((_QWORD *)v18 + 78),
              *((_QWORD *)v18 + 79),
              *((_QWORD *)v18 + 80),
              *((_QWORD *)v18 + 81),
              *((_QWORD *)v18 + 130),
              *((_QWORD *)v18 + 131));
          if ( (Microsoft_Windows_Kernel_CacheEnableBits & 1) != 0 )
          {
            v64 = *((_QWORD *)v18 + 141);
            v63 = *((_QWORD *)v18 + 140);
            v62 = *((_QWORD *)v18 + 139);
            v61 = *((_QWORD *)v18 + 138);
            v60 = *((_QWORD *)v18 + 137);
            v59 = *((_QWORD *)v18 + 136);
            v58 = *((_QWORD *)v18 + 135);
            v57 = *((_QWORD *)v18 + 134);
            v56 = *((_QWORD *)v18 + 133);
            v55 = *((_QWORD *)v18 + 132);
            v53 = *((_QWORD *)v18 + 76);
            v51 = *((_QWORD *)v18 + 75);
            v49 = *((_QWORD *)v18 + 74);
            v47 = *((_QWORD *)v18 + 73);
            v45 = *((_QWORD *)v18 + 72);
            v43 = *((_QWORD *)v18 + 71);
            v41 = *((_QWORD *)v18 + 70);
            v39 = *((_QWORD *)v18 + 69);
            McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer(
              v13,
              v2 / 10,
              v19,
              (__int64)&v16[2480 * v17],
              v2 / 10,
              *((_QWORD *)v18 + 29),
              *((_QWORD *)v18 + 30),
              *((_QWORD *)v18 + 31),
              *((_QWORD *)v18 + 32),
              *((_QWORD *)v18 + 33),
              *((_QWORD *)v18 + 34),
              *((_QWORD *)v18 + 35),
              *((_QWORD *)v18 + 36),
              *((_QWORD *)v18 + 37),
              *((_QWORD *)v18 + 38),
              *((_QWORD *)v18 + 39),
              *((_QWORD *)v18 + 40),
              *((_QWORD *)v18 + 41),
              *((_QWORD *)v18 + 42),
              *((_QWORD *)v18 + 43),
              *((_QWORD *)v18 + 44),
              *((_QWORD *)v18 + 45),
              *((_QWORD *)v18 + 46),
              *((_QWORD *)v18 + 47),
              *((_QWORD *)v18 + 48),
              *((_QWORD *)v18 + 49),
              *((_QWORD *)v18 + 50),
              *((_QWORD *)v18 + 51),
              *((_QWORD *)v18 + 52),
              *((_QWORD *)v18 + 53),
              *((_QWORD *)v18 + 54),
              *((_QWORD *)v18 + 55),
              *((_QWORD *)v18 + 56),
              *((_QWORD *)v18 + 57),
              *((_QWORD *)v18 + 58),
              *((_QWORD *)v18 + 59),
              *((_QWORD *)v18 + 60),
              *((_QWORD *)v18 + 61),
              *((_QWORD *)v18 + 62),
              *((_QWORD *)v18 + 63),
              *((_QWORD *)v18 + 64),
              *((_QWORD *)v18 + 65),
              *((_QWORD *)v18 + 66),
              *((_QWORD *)v18 + 67),
              *((_QWORD *)v18 + 68),
              v39,
              v41,
              v43,
              v45,
              v47,
              v49,
              v51,
              v53,
              v55,
              v56,
              v57,
              v58,
              v59,
              v60,
              v61,
              v62,
              v63,
              v64);
          }
          if ( (Microsoft_Windows_Kernel_CacheEnableBits & 1) != 0 )
          {
            v83 = 2480 * v80;
            v99 = 2480 * v80;
            v98 = 2480 * v80;
            v97 = 2480 * v80;
            v96 = 2480 * v80;
            v95 = 2480 * v80;
            v94 = 2480 * v80;
            v93 = 2480 * v80;
            v92 = 2480 * v80;
            v91 = 2480 * v80;
            v90 = 2480 * v80;
            v89 = 2480 * v80;
            v88 = 2480 * v80;
            v87 = 2480 * v80;
            v86 = 2480 * v80;
            v85 = 2480 * v80;
            v84 = 2480 * v80;
            v103 = 2480 * v80;
            v101[1] = 2480 * v80;
            v101[2] = 2480 * v80;
            v101[3] = 2480 * v80;
            v101[4] = 2480 * v80;
            v101[5] = 2480 * v80;
            v101[6] = 2480 * v80;
            v101[7] = 2480 * v80;
            v101[8] = 2480 * v80;
            v101[9] = 2480 * v80;
            v101[10] = 2480 * v80;
            v101[11] = 2480 * v80;
            v101[12] = 2480 * v80;
            v101[13] = 2480 * v80;
            v101[14] = 2480 * v80;
            v101[15] = 2480 * v80;
            v101[16] = 2480 * v80;
            v101[17] = 2480 * v80;
            v101[18] = 2480 * v80;
            v101[19] = 2480 * v80;
            v100 = 2480 * v80;
            v101[0] = v2 / 10;
            v54 = *((_QWORD *)P + 310 * v17 + 129);
            v52 = *((_QWORD *)P + 310 * v17 + 128);
            v50 = *((_QWORD *)P + 310 * v17 + 127);
            v48 = *((_QWORD *)P + 310 * v17 + 126);
            v46 = *((_QWORD *)P + 310 * v17 + 125);
            v44 = *((_QWORD *)P + 310 * v17 + 124);
            v42 = *((_QWORD *)P + 310 * v17 + 123);
            v16 = (char *)P;
            v40 = *((_QWORD *)P + 310 * v17 + 122);
            v38 = *((_QWORD *)P + 310 * v17 + 121);
            v37 = *((_QWORD *)P + 310 * v17 + 120);
            v36 = *((_QWORD *)P + 310 * v80 + 119);
            v35 = *((_QWORD *)P + 310 * v80 + 118);
            v34 = *((_QWORD *)P + 310 * v80 + 117);
            v33 = *((_QWORD *)P + 310 * v80 + 116);
            v32 = *((_QWORD *)P + 310 * v80 + 115);
            v31 = *((_QWORD *)P + 310 * v80 + 114);
            v30 = *((_QWORD *)P + 310 * v80 + 113);
            v29 = *((_QWORD *)P + 310 * v80 + 112);
            v28 = *((_QWORD *)P + 310 * v80 + 111);
            v27 = *((_QWORD *)P + 310 * v80 + 110);
            v26 = *((_QWORD *)P + 310 * v80 + 109);
            v25 = *((_QWORD *)P + 310 * v80 + 108);
            v24 = *((_QWORD *)P + 310 * v80 + 107);
            v23 = *((_QWORD *)P + 310 * v80 + 106);
            McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer(
              (__int64)P,
              (__int64)P + 2480 * v80,
              2480 * v17,
              (__int64)P + 2480 * v80,
              v2 / 10,
              *((_QWORD *)P + 310 * v80 + 82),
              *((_QWORD *)P + 310 * v80 + 83),
              *((_QWORD *)P + 310 * v80 + 84),
              *((_QWORD *)P + 310 * v80 + 85),
              *((_QWORD *)P + 310 * v80 + 86),
              *((_QWORD *)P + 310 * v80 + 87),
              *((_QWORD *)P + 310 * v80 + 88),
              *((_QWORD *)P + 310 * v80 + 89),
              *((_QWORD *)P + 310 * v80 + 90),
              *((_QWORD *)P + 310 * v80 + 91),
              *((_QWORD *)P + 310 * v80 + 92),
              *((_QWORD *)P + 310 * v80 + 93),
              *((_QWORD *)P + 310 * v80 + 94),
              *((_QWORD *)P + 310 * v80 + 95),
              *((_QWORD *)P + 310 * v80 + 96),
              *((_QWORD *)P + 310 * v80 + 97),
              *((_QWORD *)P + 310 * v80 + 98),
              *((_QWORD *)P + 310 * v80 + 99),
              *((_QWORD *)P + 310 * v80 + 100),
              *((_QWORD *)P + 310 * v80 + 101),
              *((_QWORD *)P + 310 * v80 + 102),
              *((_QWORD *)P + 310 * v80 + 103),
              *((_QWORD *)P + 310 * v80 + 104),
              *((_QWORD *)P + 310 * v80 + 105),
              v23,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33,
              v34,
              v35,
              v36,
              v37,
              v38,
              v40,
              v42,
              v44,
              v46,
              v48,
              v50,
              v52,
              v54);
            v17 = v80;
          }
          v14 = 0LL;
          if ( v65 && (unsigned int)dword_140E06BF8 > 5 && tlgKeywordOn((__int64)&dword_140E06BF8, 0x400000000000LL) )
          {
            v101[0] = 0x1000000LL;
            v144 = v101;
            v145 = 8LL;
            v66[0] = v21;
            v146 = v66;
            v147 = 2LL;
            v148 = (__int64 *)&v16[2480 * v17];
            v149 = 16LL;
            v100 = v2 / 10;
            v150 = &v100;
            v151 = 8LL;
            v104 = v148[156];
            v152 = &v104;
            v153 = 8LL;
            v105 = v148[157];
            v154 = &v105;
            v155 = 8LL;
            v106 = v148[158];
            v156 = &v106;
            v157 = 8LL;
            v107 = v148[159];
            v158 = &v107;
            v159 = 8LL;
            v108 = v148[160];
            v160 = &v108;
            v161 = 8LL;
            v109 = v148[161];
            v162 = &v109;
            v163 = 8LL;
            v110 = v148[177];
            v164 = &v110;
            v165 = 8LL;
            v111 = v148[178];
            v166 = &v111;
            v167 = 8LL;
            v112 = v148[179];
            v168 = &v112;
            v169 = 8LL;
            v113 = v148[180];
            v170 = &v113;
            v171 = 8LL;
            v114 = v148[162];
            v172 = &v114;
            v173 = 8LL;
            v115 = v148[163];
            v174 = &v115;
            v175 = 8LL;
            v116 = v148[164];
            v176 = &v116;
            v177 = 8LL;
            v117 = v148[165];
            v178 = &v117;
            v179 = 8LL;
            v118 = v148[166];
            v180 = &v118;
            v181 = 8LL;
            v119 = v148[167];
            v182 = &v119;
            v183 = 8LL;
            v120 = v148[168];
            v184 = &v120;
            v185 = 8LL;
            v121 = v148[169];
            v186 = &v121;
            v187 = 8LL;
            v122 = v81;
            v188 = &v122;
            v189 = 8LL;
            v123 = v148[170];
            v190 = &v123;
            v191 = 8LL;
            v124 = v148[174];
            v192 = &v124;
            v193 = 8LL;
            v125 = v148[175];
            v194 = &v125;
            v195 = 8LL;
            v126 = v148[176];
            v196 = &v126;
            v197 = 8LL;
            v127 = v148[171];
            v198 = &v127;
            v199 = 8LL;
            v128 = v148[172];
            v200 = &v128;
            v201 = 8LL;
            v129 = v148[173];
            v202 = &v129;
            v203 = 8LL;
            v130 = v148[181];
            v204 = &v130;
            v205 = 8LL;
            v131 = v148[182];
            v206 = &v131;
            v207 = 8LL;
            v132 = v148[231];
            v208 = &v132;
            v209 = 8LL;
            v133 = v148[232];
            v210 = &v133;
            v211 = 8LL;
            v134 = v148[233];
            v212 = &v134;
            v213 = 8LL;
            v135 = v148[234];
            v214 = &v135;
            v215 = 8LL;
            v136 = v148[235];
            v216 = &v136;
            v217 = 8LL;
            v137 = v148[284];
            v218 = &v137;
            v219 = 8LL;
            v138 = v148[285];
            v220 = &v138;
            v221 = 8LL;
            v139 = v148[177];
            v222 = &v139;
            v223 = 8LL;
            v140 = v148[178];
            v224 = &v140;
            v225 = 8LL;
            v141 = v148[179];
            v226 = &v141;
            v227 = 8LL;
            tlgCreate1Sz_wchar_t(
              (__int64)v228,
              L"256us, 1ms, 4ms, 16ms, 64ms, 128ms, 256ms, 2000ms, 6000ms, 10000ms, 20000ms, 20000+ms");
            v68 = v22 + 12;
            v229 = &v68;
            v230 = 2LL;
            v231 = &v16[2480 * v17 + 1464];
            v232 = 96LL;
            v69 = v22 + 12;
            v233 = &v69;
            v234 = 2LL;
            v235 = &v16[2480 * v17 + 1560];
            v236 = 96LL;
            v70 = v22 + 12;
            v237 = &v70;
            v238 = 2LL;
            v239 = &v16[2480 * v17 + 1656];
            v240 = 96LL;
            v71 = v22 + 12;
            v241 = &v71;
            v242 = 2LL;
            v243 = &v16[2480 * v17 + 1752];
            v244 = 96LL;
            v72 = v22 + 12;
            v245 = &v72;
            v246 = 2LL;
            v247 = &v16[2480 * v17 + 1888];
            v248 = 96LL;
            v73 = v22 + 12;
            v249 = &v73;
            v250 = 2LL;
            v251 = &v16[2480 * v17 + 1984];
            v252 = 96LL;
            v74 = v22 + 12;
            v253 = &v74;
            v254 = 2LL;
            v255 = &v16[2480 * v17 + 2080];
            v256 = 96LL;
            v75 = v22 + 12;
            v257 = &v75;
            v258 = 2LL;
            v259 = &v16[2480 * v17 + 2176];
            v260 = 96LL;
            v76 = v22 + 12;
            v261 = &v76;
            v262 = 2LL;
            v263 = &v16[2480 * v17 + 2288];
            v264 = 96LL;
            v77 = v22 + 12;
            v265 = &v77;
            v266 = 2LL;
            v267 = &v16[2480 * v17 + 2384];
            v268 = 96LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E06BF8,
              (unsigned __int8 *)&word_14004300E,
              0LL,
              0LL,
              0x41u,
              v143);
            v14 = 0LL;
          }
          v17 = ++v67;
          v80 = v67;
        }
        while ( v67 < v142 );
      }
      qword_140F8E4D0 = v1;
      ExFreePoolWithTag(v16, 0);
    }
  }
}
