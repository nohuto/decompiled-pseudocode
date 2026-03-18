/*
 * XREFs of FsRtlpOplockBreakByCacheFlags @ 0x1404E1388
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1403DA5B0 (FsRtlCheckOplockEx2.c)
 *     FsRtlOplockBreakToNoneEx @ 0x140580610 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlCheckUpperOplock @ 0x14070AEF0 (FsRtlCheckUpperOplock.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x1409ED190 (FsRtlCheckOplockForFsFilterCallback.c)
 *     FsRtlOplockBreakH2 @ 0x140A35490 (FsRtlOplockBreakH2.c)
 * Callees:
 *     FsRtlpClearOwner @ 0x1402601A4 (FsRtlpClearOwner.c)
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140330618 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14033091C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x140330A70 (FsRtlpComputeShareableOplockState.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     FsRtlpOplockKeysEqual @ 0x1403DA0A0 (FsRtlpOplockKeysEqual.c)
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403DC8D4 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047FCA8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1404946C8 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpWaitOnIrp @ 0x14049F8AC (FsRtlpWaitOnIrp.c)
 *     FsRtlpCheckSharingAgainstOplockOwner @ 0x1404AFF28 (FsRtlpCheckSharingAgainstOplockOwner.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404E42B0 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     Feature_5645_7108__private_IsEnabledDeviceUsageNoInline @ 0x1404F48B4 (Feature_5645_7108__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057F78C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14070C630 (FsRtlpOplockTryStartBreakAckTimeout.c)
 */

__int64 __fastcall FsRtlpOplockBreakByCacheFlags(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        int *a7,
        unsigned __int16 *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        _BYTE *a15,
        char *a16)
{
  IRP *v17; // rax
  __int64 v18; // r9
  int v20; // ecx
  int *v21; // r13
  int v23; // eax
  struct _EVENT_DATA_DESCRIPTOR *v24; // rax
  unsigned __int8 *v25; // rdx
  _QWORD *v26; // rcx
  struct _EVENT_DATA_DESCRIPTOR *v27; // rax
  __int16 *v28; // rdx
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  char v36; // r12
  int v37; // eax
  __int64 *m; // r14
  unsigned int v39; // eax
  __int64 *n; // rdi
  __int64 v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // eax
  PIRP v45; // rdi
  __int64 v46; // rdi
  int v47; // eax
  struct _IRP *MasterIrp; // rdx
  int v49; // eax
  __int64 v50; // r9
  __int64 v51; // rcx
  PIRP v52; // rdi
  struct _IRP *v53; // rcx
  __int64 v54; // rcx
  PIRP v55; // rdi
  struct _IRP *v56; // rcx
  __int64 v57; // rcx
  PIRP v58; // rdi
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  struct _IRP *v63; // rcx
  __int64 v64; // rcx
  __int64 *i; // r14
  _QWORD *v66; // rdx
  __int64 *j; // r12
  int v68; // edx
  int v69; // eax
  __int16 v70; // cx
  __int64 *v71; // r14
  int v72; // r12d
  unsigned int v73; // eax
  char v74; // al
  __int64 *k; // r14
  __int64 *v76; // r13
  __int64 *v77; // rdi
  __int64 *ii; // rdi
  int v79; // eax
  int v80; // eax
  __int64 v81; // r8
  char v82; // [rsp+60h] [rbp-C48h]
  IRP *v83; // [rsp+68h] [rbp-C40h] BYREF
  char v84; // [rsp+70h] [rbp-C38h]
  char v85; // [rsp+71h] [rbp-C37h]
  char v86; // [rsp+72h] [rbp-C36h]
  unsigned int v87; // [rsp+74h] [rbp-C34h] BYREF
  int v88; // [rsp+78h] [rbp-C30h] BYREF
  __int64 *v89; // [rsp+80h] [rbp-C28h]
  char v90; // [rsp+88h] [rbp-C20h]
  __int64 v91; // [rsp+90h] [rbp-C18h] BYREF
  int v92; // [rsp+98h] [rbp-C10h] BYREF
  int v93; // [rsp+9Ch] [rbp-C0Ch] BYREF
  int v94; // [rsp+A0h] [rbp-C08h] BYREF
  struct _IRP *v95; // [rsp+A8h] [rbp-C00h]
  int v96; // [rsp+B0h] [rbp-BF8h] BYREF
  int v97; // [rsp+B4h] [rbp-BF4h] BYREF
  int v98; // [rsp+B8h] [rbp-BF0h] BYREF
  int v99; // [rsp+BCh] [rbp-BECh] BYREF
  int v100; // [rsp+C0h] [rbp-BE8h] BYREF
  int v101; // [rsp+C4h] [rbp-BE4h] BYREF
  int v102; // [rsp+C8h] [rbp-BE0h] BYREF
  int v103; // [rsp+CCh] [rbp-BDCh] BYREF
  int v104; // [rsp+D0h] [rbp-BD8h] BYREF
  int v105; // [rsp+D4h] [rbp-BD4h] BYREF
  int v106; // [rsp+D8h] [rbp-BD0h] BYREF
  int v107; // [rsp+DCh] [rbp-BCCh] BYREF
  int v108; // [rsp+E0h] [rbp-BC8h] BYREF
  int v109; // [rsp+E4h] [rbp-BC4h] BYREF
  int v110; // [rsp+E8h] [rbp-BC0h] BYREF
  int v111; // [rsp+ECh] [rbp-BBCh] BYREF
  int v112; // [rsp+F0h] [rbp-BB8h] BYREF
  int v113; // [rsp+F4h] [rbp-BB4h] BYREF
  int v114; // [rsp+F8h] [rbp-BB0h] BYREF
  int v115; // [rsp+FCh] [rbp-BACh] BYREF
  int v116; // [rsp+100h] [rbp-BA8h] BYREF
  int v117; // [rsp+104h] [rbp-BA4h] BYREF
  int v118; // [rsp+108h] [rbp-BA0h] BYREF
  int v119; // [rsp+10Ch] [rbp-B9Ch] BYREF
  int v120; // [rsp+110h] [rbp-B98h] BYREF
  int v121; // [rsp+114h] [rbp-B94h] BYREF
  int v122; // [rsp+118h] [rbp-B90h]
  int v123; // [rsp+11Ch] [rbp-B8Ch] BYREF
  int v124; // [rsp+120h] [rbp-B88h] BYREF
  int v125; // [rsp+124h] [rbp-B84h] BYREF
  int v126; // [rsp+128h] [rbp-B80h] BYREF
  int v127; // [rsp+12Ch] [rbp-B7Ch] BYREF
  int v128; // [rsp+130h] [rbp-B78h] BYREF
  int v129; // [rsp+134h] [rbp-B74h] BYREF
  int v130; // [rsp+138h] [rbp-B70h] BYREF
  int v131; // [rsp+13Ch] [rbp-B6Ch] BYREF
  int v132; // [rsp+140h] [rbp-B68h] BYREF
  int v133; // [rsp+144h] [rbp-B64h] BYREF
  int v134; // [rsp+148h] [rbp-B60h] BYREF
  int v135; // [rsp+14Ch] [rbp-B5Ch] BYREF
  int v136; // [rsp+150h] [rbp-B58h] BYREF
  int v137; // [rsp+154h] [rbp-B54h] BYREF
  int v138; // [rsp+158h] [rbp-B50h] BYREF
  int v139; // [rsp+15Ch] [rbp-B4Ch] BYREF
  int v140; // [rsp+160h] [rbp-B48h] BYREF
  int v141; // [rsp+164h] [rbp-B44h] BYREF
  int v142; // [rsp+168h] [rbp-B40h] BYREF
  int v143; // [rsp+16Ch] [rbp-B3Ch] BYREF
  int v144; // [rsp+170h] [rbp-B38h] BYREF
  int v145; // [rsp+174h] [rbp-B34h] BYREF
  int v146; // [rsp+178h] [rbp-B30h] BYREF
  int v147; // [rsp+17Ch] [rbp-B2Ch] BYREF
  int v148; // [rsp+180h] [rbp-B28h] BYREF
  int v149; // [rsp+184h] [rbp-B24h] BYREF
  int v150; // [rsp+188h] [rbp-B20h] BYREF
  int v151; // [rsp+18Ch] [rbp-B1Ch] BYREF
  int v152; // [rsp+190h] [rbp-B18h] BYREF
  int v153; // [rsp+194h] [rbp-B14h] BYREF
  int v154; // [rsp+198h] [rbp-B10h] BYREF
  int v155; // [rsp+19Ch] [rbp-B0Ch] BYREF
  int v156; // [rsp+1A0h] [rbp-B08h] BYREF
  int v157; // [rsp+1A4h] [rbp-B04h] BYREF
  int v158; // [rsp+1A8h] [rbp-B00h] BYREF
  int v159; // [rsp+1ACh] [rbp-AFCh] BYREF
  int v160; // [rsp+1B0h] [rbp-AF8h] BYREF
  int v161; // [rsp+1B4h] [rbp-AF4h] BYREF
  int v162; // [rsp+1B8h] [rbp-AF0h] BYREF
  int v163; // [rsp+1BCh] [rbp-AECh] BYREF
  int v164; // [rsp+1C0h] [rbp-AE8h] BYREF
  int v165; // [rsp+1C4h] [rbp-AE4h] BYREF
  __int64 v166; // [rsp+1C8h] [rbp-AE0h] BYREF
  int v167; // [rsp+1D0h] [rbp-AD8h] BYREF
  int v168; // [rsp+1D4h] [rbp-AD4h] BYREF
  int v169; // [rsp+1D8h] [rbp-AD0h] BYREF
  int v170; // [rsp+1DCh] [rbp-ACCh] BYREF
  _QWORD *v171; // [rsp+1E0h] [rbp-AC8h] BYREF
  __int64 v172; // [rsp+1E8h] [rbp-AC0h] BYREF
  __int64 v173; // [rsp+1F0h] [rbp-AB8h] BYREF
  char *v174; // [rsp+1F8h] [rbp-AB0h] BYREF
  _BYTE *v175; // [rsp+200h] [rbp-AA8h] BYREF
  __int64 v176; // [rsp+208h] [rbp-AA0h] BYREF
  __int64 v177; // [rsp+210h] [rbp-A98h] BYREF
  __int64 v178; // [rsp+218h] [rbp-A90h] BYREF
  __int64 v179; // [rsp+220h] [rbp-A88h] BYREF
  __int64 v180; // [rsp+228h] [rbp-A80h] BYREF
  __int64 v181; // [rsp+230h] [rbp-A78h] BYREF
  __int64 v182; // [rsp+238h] [rbp-A70h] BYREF
  __int64 v183; // [rsp+240h] [rbp-A68h] BYREF
  __int64 v184; // [rsp+248h] [rbp-A60h] BYREF
  __int64 v185; // [rsp+250h] [rbp-A58h] BYREF
  __int64 v186; // [rsp+258h] [rbp-A50h] BYREF
  __int64 v187; // [rsp+260h] [rbp-A48h] BYREF
  __int64 v188; // [rsp+268h] [rbp-A40h] BYREF
  __int64 v189; // [rsp+270h] [rbp-A38h] BYREF
  __int64 v190; // [rsp+278h] [rbp-A30h] BYREF
  __int64 v191; // [rsp+280h] [rbp-A28h] BYREF
  __int64 v192; // [rsp+288h] [rbp-A20h] BYREF
  __int64 v193; // [rsp+290h] [rbp-A18h] BYREF
  __int64 v194; // [rsp+298h] [rbp-A10h] BYREF
  __int128 v195; // [rsp+2A0h] [rbp-A08h] BYREF
  __int64 v196; // [rsp+2B0h] [rbp-9F8h]
  struct _EVENT_DATA_DESCRIPTOR v197[2]; // [rsp+2C0h] [rbp-9E8h] BYREF
  int *v198; // [rsp+2E0h] [rbp-9C8h]
  __int64 v199; // [rsp+2E8h] [rbp-9C0h]
  int *v200; // [rsp+2F0h] [rbp-9B8h]
  __int64 v201; // [rsp+2F8h] [rbp-9B0h]
  __int64 *v202; // [rsp+300h] [rbp-9A8h]
  __int64 v203; // [rsp+308h] [rbp-9A0h]
  int *v204; // [rsp+310h] [rbp-998h]
  __int64 v205; // [rsp+318h] [rbp-990h]
  struct _EVENT_DATA_DESCRIPTOR v206[2]; // [rsp+320h] [rbp-988h] BYREF
  int *v207; // [rsp+340h] [rbp-968h]
  __int64 v208; // [rsp+348h] [rbp-960h]
  int *v209; // [rsp+350h] [rbp-958h]
  __int64 v210; // [rsp+358h] [rbp-950h]
  __int64 *v211; // [rsp+360h] [rbp-948h]
  __int64 v212; // [rsp+368h] [rbp-940h]
  __int64 *v213; // [rsp+370h] [rbp-938h]
  __int64 v214; // [rsp+378h] [rbp-930h]
  int *v215; // [rsp+380h] [rbp-928h]
  __int64 v216; // [rsp+388h] [rbp-920h]
  char v217; // [rsp+390h] [rbp-918h] BYREF
  int *v218; // [rsp+3B0h] [rbp-8F8h]
  __int64 v219; // [rsp+3B8h] [rbp-8F0h]
  __int64 *v220; // [rsp+3C0h] [rbp-8E8h]
  __int64 v221; // [rsp+3C8h] [rbp-8E0h]
  __int64 *v222; // [rsp+3D0h] [rbp-8D8h]
  __int64 v223; // [rsp+3D8h] [rbp-8D0h]
  __int64 *v224; // [rsp+3E0h] [rbp-8C8h]
  __int64 v225; // [rsp+3E8h] [rbp-8C0h]
  __int64 *v226; // [rsp+3F0h] [rbp-8B8h]
  __int64 v227; // [rsp+3F8h] [rbp-8B0h]
  char v228; // [rsp+400h] [rbp-8A8h] BYREF
  int *v229; // [rsp+420h] [rbp-888h]
  __int64 v230; // [rsp+428h] [rbp-880h]
  int *v231; // [rsp+430h] [rbp-878h]
  __int64 v232; // [rsp+438h] [rbp-870h]
  int *v233; // [rsp+440h] [rbp-868h]
  __int64 v234; // [rsp+448h] [rbp-860h]
  __int64 *v235; // [rsp+450h] [rbp-858h]
  __int64 v236; // [rsp+458h] [rbp-850h]
  int *v237; // [rsp+460h] [rbp-848h]
  __int64 v238; // [rsp+468h] [rbp-840h]
  char v239; // [rsp+470h] [rbp-838h] BYREF
  int *v240; // [rsp+490h] [rbp-818h]
  __int64 v241; // [rsp+498h] [rbp-810h]
  int *v242; // [rsp+4A0h] [rbp-808h]
  __int64 v243; // [rsp+4A8h] [rbp-800h]
  int *v244; // [rsp+4B0h] [rbp-7F8h]
  __int64 v245; // [rsp+4B8h] [rbp-7F0h]
  __int64 *v246; // [rsp+4C0h] [rbp-7E8h]
  __int64 v247; // [rsp+4C8h] [rbp-7E0h]
  int *v248; // [rsp+4D0h] [rbp-7D8h]
  __int64 v249; // [rsp+4D8h] [rbp-7D0h]
  char v250; // [rsp+4E0h] [rbp-7C8h] BYREF
  unsigned int *v251; // [rsp+500h] [rbp-7A8h]
  __int64 v252; // [rsp+508h] [rbp-7A0h]
  int *v253; // [rsp+510h] [rbp-798h]
  __int64 v254; // [rsp+518h] [rbp-790h]
  int *v255; // [rsp+520h] [rbp-788h]
  __int64 v256; // [rsp+528h] [rbp-780h]
  __int64 *v257; // [rsp+530h] [rbp-778h]
  __int64 v258; // [rsp+538h] [rbp-770h]
  int *v259; // [rsp+540h] [rbp-768h]
  __int64 v260; // [rsp+548h] [rbp-760h]
  char v261; // [rsp+550h] [rbp-758h] BYREF
  int *v262; // [rsp+570h] [rbp-738h]
  __int64 v263; // [rsp+578h] [rbp-730h]
  int *v264; // [rsp+580h] [rbp-728h]
  __int64 v265; // [rsp+588h] [rbp-720h]
  int *v266; // [rsp+590h] [rbp-718h]
  __int64 v267; // [rsp+598h] [rbp-710h]
  __int64 *v268; // [rsp+5A0h] [rbp-708h]
  __int64 v269; // [rsp+5A8h] [rbp-700h]
  int *v270; // [rsp+5B0h] [rbp-6F8h]
  __int64 v271; // [rsp+5B8h] [rbp-6F0h]
  char v272; // [rsp+5C0h] [rbp-6E8h] BYREF
  int *v273; // [rsp+5E0h] [rbp-6C8h]
  __int64 v274; // [rsp+5E8h] [rbp-6C0h]
  int *v275; // [rsp+5F0h] [rbp-6B8h]
  __int64 v276; // [rsp+5F8h] [rbp-6B0h]
  int *v277; // [rsp+600h] [rbp-6A8h]
  __int64 v278; // [rsp+608h] [rbp-6A0h]
  __int64 *v279; // [rsp+610h] [rbp-698h]
  __int64 v280; // [rsp+618h] [rbp-690h]
  int *v281; // [rsp+620h] [rbp-688h]
  __int64 v282; // [rsp+628h] [rbp-680h]
  char v283; // [rsp+630h] [rbp-678h] BYREF
  int *v284; // [rsp+650h] [rbp-658h]
  __int64 v285; // [rsp+658h] [rbp-650h]
  int *v286; // [rsp+660h] [rbp-648h]
  __int64 v287; // [rsp+668h] [rbp-640h]
  int *v288; // [rsp+670h] [rbp-638h]
  __int64 v289; // [rsp+678h] [rbp-630h]
  __int64 *v290; // [rsp+680h] [rbp-628h]
  __int64 v291; // [rsp+688h] [rbp-620h]
  int *v292; // [rsp+690h] [rbp-618h]
  __int64 v293; // [rsp+698h] [rbp-610h]
  char v294; // [rsp+6A0h] [rbp-608h] BYREF
  int *v295; // [rsp+6C0h] [rbp-5E8h]
  __int64 v296; // [rsp+6C8h] [rbp-5E0h]
  int *v297; // [rsp+6D0h] [rbp-5D8h]
  __int64 v298; // [rsp+6D8h] [rbp-5D0h]
  int *v299; // [rsp+6E0h] [rbp-5C8h]
  __int64 v300; // [rsp+6E8h] [rbp-5C0h]
  char **v301; // [rsp+6F0h] [rbp-5B8h]
  __int64 v302; // [rsp+6F8h] [rbp-5B0h]
  int *v303; // [rsp+700h] [rbp-5A8h]
  __int64 v304; // [rsp+708h] [rbp-5A0h]
  char v305; // [rsp+710h] [rbp-598h] BYREF
  int *v306; // [rsp+730h] [rbp-578h]
  __int64 v307; // [rsp+738h] [rbp-570h]
  int *v308; // [rsp+740h] [rbp-568h]
  __int64 v309; // [rsp+748h] [rbp-560h]
  int *v310; // [rsp+750h] [rbp-558h]
  __int64 v311; // [rsp+758h] [rbp-550h]
  _BYTE **v312; // [rsp+760h] [rbp-548h]
  __int64 v313; // [rsp+768h] [rbp-540h]
  int *v314; // [rsp+770h] [rbp-538h]
  __int64 v315; // [rsp+778h] [rbp-530h]
  struct _EVENT_DATA_DESCRIPTOR v316; // [rsp+780h] [rbp-528h] BYREF
  int *v317; // [rsp+7A0h] [rbp-508h]
  __int64 v318; // [rsp+7A8h] [rbp-500h]
  int *v319; // [rsp+7B0h] [rbp-4F8h]
  __int64 v320; // [rsp+7B8h] [rbp-4F0h]
  __int64 *v321; // [rsp+7C0h] [rbp-4E8h]
  __int64 v322; // [rsp+7C8h] [rbp-4E0h]
  int *v323; // [rsp+7D0h] [rbp-4D8h]
  __int64 v324; // [rsp+7D8h] [rbp-4D0h]
  struct _EVENT_DATA_DESCRIPTOR v325; // [rsp+7E0h] [rbp-4C8h] BYREF
  int *v326; // [rsp+800h] [rbp-4A8h]
  __int64 v327; // [rsp+808h] [rbp-4A0h]
  int *v328; // [rsp+810h] [rbp-498h]
  __int64 v329; // [rsp+818h] [rbp-490h]
  __int64 *v330; // [rsp+820h] [rbp-488h]
  __int64 v331; // [rsp+828h] [rbp-480h]
  int *v332; // [rsp+830h] [rbp-478h]
  __int64 v333; // [rsp+838h] [rbp-470h]
  struct _EVENT_DATA_DESCRIPTOR v334; // [rsp+840h] [rbp-468h] BYREF
  int *v335; // [rsp+860h] [rbp-448h]
  __int64 v336; // [rsp+868h] [rbp-440h]
  int *v337; // [rsp+870h] [rbp-438h]
  __int64 v338; // [rsp+878h] [rbp-430h]
  __int64 *v339; // [rsp+880h] [rbp-428h]
  __int64 v340; // [rsp+888h] [rbp-420h]
  int *v341; // [rsp+890h] [rbp-418h]
  __int64 v342; // [rsp+898h] [rbp-410h]
  struct _EVENT_DATA_DESCRIPTOR v343; // [rsp+8A0h] [rbp-408h] BYREF
  int *v344; // [rsp+8C0h] [rbp-3E8h]
  __int64 v345; // [rsp+8C8h] [rbp-3E0h]
  int *v346; // [rsp+8D0h] [rbp-3D8h]
  __int64 v347; // [rsp+8D8h] [rbp-3D0h]
  __int64 *v348; // [rsp+8E0h] [rbp-3C8h]
  __int64 v349; // [rsp+8E8h] [rbp-3C0h]
  int *v350; // [rsp+8F0h] [rbp-3B8h]
  __int64 v351; // [rsp+8F8h] [rbp-3B0h]
  struct _EVENT_DATA_DESCRIPTOR v352; // [rsp+900h] [rbp-3A8h] BYREF
  int *v353; // [rsp+920h] [rbp-388h]
  __int64 v354; // [rsp+928h] [rbp-380h]
  int *v355; // [rsp+930h] [rbp-378h]
  __int64 v356; // [rsp+938h] [rbp-370h]
  _QWORD *v357; // [rsp+940h] [rbp-368h]
  __int64 v358; // [rsp+948h] [rbp-360h]
  int *v359; // [rsp+950h] [rbp-358h]
  __int64 v360; // [rsp+958h] [rbp-350h]
  struct _EVENT_DATA_DESCRIPTOR v361; // [rsp+960h] [rbp-348h] BYREF
  int *v362; // [rsp+980h] [rbp-328h]
  __int64 v363; // [rsp+988h] [rbp-320h]
  int *v364; // [rsp+990h] [rbp-318h]
  __int64 v365; // [rsp+998h] [rbp-310h]
  __int64 *v366; // [rsp+9A0h] [rbp-308h]
  __int64 v367; // [rsp+9A8h] [rbp-300h]
  int *v368; // [rsp+9B0h] [rbp-2F8h]
  __int64 v369; // [rsp+9B8h] [rbp-2F0h]
  struct _EVENT_DATA_DESCRIPTOR v370; // [rsp+9C0h] [rbp-2E8h] BYREF
  int *v371; // [rsp+9E0h] [rbp-2C8h]
  __int64 v372; // [rsp+9E8h] [rbp-2C0h]
  int *v373; // [rsp+9F0h] [rbp-2B8h]
  __int64 v374; // [rsp+9F8h] [rbp-2B0h]
  __int64 *v375; // [rsp+A00h] [rbp-2A8h]
  __int64 v376; // [rsp+A08h] [rbp-2A0h]
  int *v377; // [rsp+A10h] [rbp-298h]
  __int64 v378; // [rsp+A18h] [rbp-290h]
  struct _EVENT_DATA_DESCRIPTOR v379; // [rsp+A20h] [rbp-288h] BYREF
  int *v380; // [rsp+A40h] [rbp-268h]
  __int64 v381; // [rsp+A48h] [rbp-260h]
  int *v382; // [rsp+A50h] [rbp-258h]
  __int64 v383; // [rsp+A58h] [rbp-250h]
  __int64 *v384; // [rsp+A60h] [rbp-248h]
  __int64 v385; // [rsp+A68h] [rbp-240h]
  int *v386; // [rsp+A70h] [rbp-238h]
  __int64 v387; // [rsp+A78h] [rbp-230h]
  struct _EVENT_DATA_DESCRIPTOR v388; // [rsp+A80h] [rbp-228h] BYREF
  int *v389; // [rsp+AA0h] [rbp-208h]
  __int64 v390; // [rsp+AA8h] [rbp-200h]
  int *v391; // [rsp+AB0h] [rbp-1F8h]
  __int64 v392; // [rsp+AB8h] [rbp-1F0h]
  __int64 *v393; // [rsp+AC0h] [rbp-1E8h]
  __int64 v394; // [rsp+AC8h] [rbp-1E0h]
  int *v395; // [rsp+AD0h] [rbp-1D8h]
  __int64 v396; // [rsp+AD8h] [rbp-1D0h]
  struct _EVENT_DATA_DESCRIPTOR v397; // [rsp+AE0h] [rbp-1C8h] BYREF
  int *v398; // [rsp+B00h] [rbp-1A8h]
  __int64 v399; // [rsp+B08h] [rbp-1A0h]
  int *v400; // [rsp+B10h] [rbp-198h]
  __int64 v401; // [rsp+B18h] [rbp-190h]
  __int64 *v402; // [rsp+B20h] [rbp-188h]
  __int64 v403; // [rsp+B28h] [rbp-180h]
  int *v404; // [rsp+B30h] [rbp-178h]
  __int64 v405; // [rsp+B38h] [rbp-170h]
  struct _EVENT_DATA_DESCRIPTOR v406; // [rsp+B40h] [rbp-168h] BYREF
  int *v407; // [rsp+B60h] [rbp-148h]
  __int64 v408; // [rsp+B68h] [rbp-140h]
  int *v409; // [rsp+B70h] [rbp-138h]
  __int64 v410; // [rsp+B78h] [rbp-130h]
  __int64 *v411; // [rsp+B80h] [rbp-128h]
  __int64 v412; // [rsp+B88h] [rbp-120h]
  int *v413; // [rsp+B90h] [rbp-118h]
  __int64 v414; // [rsp+B98h] [rbp-110h]
  struct _EVENT_DATA_DESCRIPTOR v415; // [rsp+BA0h] [rbp-108h] BYREF
  int *v416; // [rsp+BC0h] [rbp-E8h]
  __int64 v417; // [rsp+BC8h] [rbp-E0h]
  int *v418; // [rsp+BD0h] [rbp-D8h]
  __int64 v419; // [rsp+BD8h] [rbp-D0h]
  __int64 *v420; // [rsp+BE0h] [rbp-C8h]
  __int64 v421; // [rsp+BE8h] [rbp-C0h]
  int *v422; // [rsp+BF0h] [rbp-B8h]
  __int64 v423; // [rsp+BF8h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR v424; // [rsp+C00h] [rbp-A8h] BYREF
  int *v425; // [rsp+C20h] [rbp-88h]
  __int64 v426; // [rsp+C28h] [rbp-80h]
  int *v427; // [rsp+C30h] [rbp-78h]
  __int64 v428; // [rsp+C38h] [rbp-70h]
  __int64 *v429; // [rsp+C40h] [rbp-68h]
  __int64 v430; // [rsp+C48h] [rbp-60h]
  int *v431; // [rsp+C50h] [rbp-58h]
  __int64 v432; // [rsp+C58h] [rbp-50h]

  v17 = (IRP *)a3;
  v83 = (IRP *)a3;
  v18 = a2;
  v91 = a2;
  v172 = a9;
  v173 = a13;
  v175 = a15;
  v174 = a16;
  v87 = 0;
  v195 = 0LL;
  v196 = 0LL;
  v82 = 0;
  v84 = 0;
  v86 = 0;
  v85 = 1;
  v20 = a4 & 8;
  v88 = v20;
  v21 = (int *)(a1 + 144);
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v92 = a4;
    v198 = &v92;
    v199 = 4LL;
    v93 = a6;
    v200 = &v93;
    v201 = 4LL;
    v166 = a1;
    v202 = &v166;
    v203 = 8LL;
    v94 = *v21;
    v204 = &v94;
    v205 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)byte_140044693, 0LL, 0LL, 6u, v197);
    v20 = v88;
    v18 = v91;
    v17 = v83;
  }
  if ( a6 == 28672 || a6 == 20480 || a6 == 0x4000 || a6 == 0x2000 )
  {
    if ( !a1 )
      return v87;
    v23 = *v21;
    if ( *v21 == 1 || (v23 & a6) == 0 )
    {
      if ( (unsigned int)dword_140E06C30 > 5 )
      {
        v165 = 0;
        v218 = &v165;
        v219 = 4LL;
        LODWORD(v166) = a4;
        v220 = &v166;
        v221 = 4LL;
        LODWORD(v91) = a6;
        v222 = &v91;
        v223 = 4LL;
        v194 = a1;
        v224 = &v194;
        v225 = 8LL;
        LODWORD(v83) = v23;
        v226 = (__int64 *)&v83;
        v227 = 4LL;
        v24 = (struct _EVENT_DATA_DESCRIPTOR *)&v217;
        v25 = (unsigned __int8 *)byte_140044619;
        goto LABEL_253;
      }
      return 0;
    }
    if ( !v20 && FsRtlpOplockKeysEqual(*(_QWORD *)(v18 + 48), *(_QWORD *)(a1 + 8), a4) )
    {
      if ( (unsigned int)dword_140E06C30 > 5 )
      {
        v94 = 0;
        v240 = &v94;
        v241 = 4LL;
        v93 = a4;
        v242 = &v93;
        v243 = 4LL;
        v92 = a6;
        v244 = &v92;
        v245 = 4LL;
        v179 = a1;
        v246 = &v179;
        v247 = 8LL;
        v88 = *(_DWORD *)(a1 + 144);
        v248 = &v88;
        v249 = 4LL;
        v24 = (struct _EVENT_DATA_DESCRIPTOR *)&v239;
        v25 = (unsigned __int8 *)&dword_140044AFC;
LABEL_253:
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, v25, 0LL, 0LL, 7u, v24);
        return 0;
      }
      return 0;
    }
    v26 = (_QWORD *)*(unsigned int *)(a1 + 144);
    if ( ((unsigned __int8)v26 & 0x40) != 0 && (a4 & 0x10010000) != 0 )
    {
      if ( (unsigned int)dword_140E06C30 > 3 )
      {
        v87 = -1073739511;
        v251 = &v87;
        v252 = 4LL;
        v167 = a4;
        v253 = &v167;
        v254 = 4LL;
        v169 = a6;
        v255 = &v169;
        v256 = 4LL;
        v181 = a1;
        v257 = &v181;
        v258 = 8LL;
        v170 = (int)v26;
        v259 = &v170;
        v260 = 4LL;
        v27 = (struct _EVENT_DATA_DESCRIPTOR *)&v250;
        v28 = (__int16 *)byte_140044B73;
        goto LABEL_23;
      }
      return (unsigned int)-1073739511;
    }
    v29 = (unsigned int)v26 & 0x1F0FFDF;
    if ( ((unsigned int)v26 & 0x1F0FFDF) <= 0x105040 )
    {
      if ( v29 != 1069120 )
      {
        v30 = v29 - 4096;
        if ( !v30 || (v31 = v30 - 16) == 0 )
        {
LABEL_95:
          if ( (unsigned int)dword_140E06C30 > 5 )
          {
            v109 = a4;
            v344 = &v109;
            v345 = 4LL;
            v110 = a6;
            v346 = &v110;
            v347 = 4LL;
            v177 = a1;
            v348 = &v177;
            v349 = 8LL;
            v111 = (int)v26;
            v350 = &v111;
            v351 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E06C30,
              (unsigned __int8 *)byte_140044A29,
              0LL,
              0LL,
              6u,
              &v343);
          }
          if ( (a6 & 0x1000) != 0 )
          {
            for ( i = *(__int64 **)(a1 + 40); ; i = (__int64 *)*i )
            {
              v89 = i;
              if ( i == (__int64 *)(a1 + 40) )
                break;
              v66 = (_QWORD *)i[2];
              if ( *((_DWORD *)v66 + 6) == 590400 && (v88 || !FsRtlpOplockKeysEqual(*(_QWORD *)(v91 + 48), v66[6], a4)) )
              {
                if ( (a4 & 0x10010000) != 0 )
                {
                  if ( (unsigned int)dword_140E06C30 > 3 )
                  {
                    v112 = -1073739511;
                    v229 = &v112;
                    v230 = 4LL;
                    v113 = a4;
                    v231 = &v113;
                    v232 = 4LL;
                    v114 = a6;
                    v233 = &v114;
                    v234 = 4LL;
                    v178 = a1;
                    v235 = &v178;
                    v236 = 8LL;
                    v115 = *(_DWORD *)(a1 + 144);
                    v237 = &v115;
                    v238 = 4LL;
                    v27 = (struct _EVENT_DATA_DESCRIPTOR *)&v228;
                    v28 = (__int16 *)byte_140044A91;
                    goto LABEL_23;
                  }
                  return (unsigned int)-1073739511;
                }
                i = (__int64 *)i[1];
                v89 = i;
                FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*i, 0, 0, a1);
              }
            }
          }
          v26 = (_QWORD *)*(unsigned int *)(a1 + 144);
          if ( (*(_DWORD *)(a1 + 144) & 0x1F0FFDF) == 0xB000 )
            goto LABEL_109;
          FsRtlpComputeShareableOplockState(a1);
LABEL_68:
          v46 = (__int64)v83;
          goto LABEL_69;
        }
        v32 = v31 - 8176;
        if ( !v32 )
        {
LABEL_109:
          if ( (unsigned int)dword_140E06C30 > 5 )
          {
            v116 = a4;
            v353 = &v116;
            v354 = 4LL;
            v117 = a6;
            v355 = &v117;
            v356 = 4LL;
            v171 = (_QWORD *)a1;
            v357 = &v171;
            v358 = 8LL;
            v118 = (int)v26;
            v359 = &v118;
            v360 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E06C30,
              (unsigned __int8 *)byte_140044955,
              0LL,
              0LL,
              6u,
              &v352);
          }
          if ( a6 == 0x2000 )
          {
            for ( j = *(__int64 **)(a1 + 56); ; j = (__int64 *)*j )
            {
              v89 = j;
              if ( j == (__int64 *)(a1 + 56) )
                break;
              v171 = j;
              if ( (v88 || !FsRtlpOplockKeysEqual(*(_QWORD *)(v91 + 48), j[3], 0))
                && ((a4 & 0x40000080) != 0x40000080
                 || (int)FsRtlpCheckSharingAgainstOplockOwner((__int64)v83, (_BYTE *)j[3], *a7, *a8) < 0) )
              {
                if ( (a4 & 0x10010000) != 0 )
                {
                  if ( (unsigned int)dword_140E06C30 > 3 )
                  {
                    v123 = -1073739511;
                    v273 = &v123;
                    v274 = 4LL;
                    v124 = a4;
                    v275 = &v124;
                    v276 = 4LL;
                    v125 = 0x2000;
                    v277 = &v125;
                    v278 = 4LL;
                    v172 = a1;
                    v279 = &v172;
                    v280 = 8LL;
                    v126 = *(_DWORD *)(a1 + 144);
                    v281 = &v126;
                    v282 = 4LL;
                    v27 = (struct _EVENT_DATA_DESCRIPTOR *)&v272;
                    v28 = &word_1400449BE;
                    goto LABEL_23;
                  }
                  return (unsigned int)-1073739511;
                }
                if ( j[7] )
                {
                  if ( (unsigned int)dword_140E06C30 > 5 )
                  {
                    v119 = a4;
                    v362 = &v119;
                    v363 = 4LL;
                    v120 = 0x2000;
                    v364 = &v120;
                    v365 = 4LL;
                    v180 = a1;
                    v366 = &v180;
                    v367 = 8LL;
                    v121 = *(_DWORD *)(a1 + 144);
                    v368 = &v121;
                    v369 = 4LL;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_140E06C30,
                      (unsigned __int8 *)byte_140044879,
                      0LL,
                      0LL,
                      6u,
                      &v361);
                  }
                  v82 = 1;
                  if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v26) )
                    FsRtlpOplockTryStartBreakAckTimeout(j + 9, j[11]);
                }
                else
                {
                  j = (__int64 *)j[1];
                  v89 = j;
                  v68 = 1;
                  v122 = 1;
                  v69 = 0;
                  v70 = 0;
                  if ( !*(_BYTE *)v91 )
                  {
                    v68 = 3;
                    v122 = 3;
                    v69 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v91 + 8) + 8LL) + 20LL);
                    v70 = *(_WORD *)(v91 + 26);
                  }
                  if ( (unsigned __int8)FsRtlpRemoveAndCompleteRHIrp((PVOID)*j, v68, v69, v70, 0) )
                  {
                    v85 = 0;
                    v82 = 1;
                    v86 = v88 != 0;
                    if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v26) )
                      FsRtlpOplockTryStartBreakAckTimeout(v171 + 9, v171[11]);
                  }
                  else
                  {
                    v84 = 1;
                  }
                }
              }
            }
          }
          else if ( (a6 & 0x5000) == 0x5000 )
          {
            v71 = *(__int64 **)(a1 + 72);
            v89 = v71;
            v72 = v88;
            while ( v71 != (__int64 *)(a1 + 72) )
            {
              if ( v72 || !FsRtlpOplockKeysEqual(*(_QWORD *)(v91 + 48), v71[3], a4) )
              {
                if ( (a4 & 0x10010000) != 0 )
                {
                  if ( (unsigned int)dword_140E06C30 > 3 )
                  {
                    v127 = -1073739511;
                    v284 = &v127;
                    v285 = 4LL;
                    v128 = a4;
                    v286 = &v128;
                    v287 = 4LL;
                    v129 = a6;
                    v288 = &v129;
                    v289 = 4LL;
                    v173 = a1;
                    v290 = &v173;
                    v291 = 8LL;
                    v130 = *(_DWORD *)(a1 + 144);
                    v292 = &v130;
                    v293 = 4LL;
                    v27 = (struct _EVENT_DATA_DESCRIPTOR *)&v283;
                    v28 = word_1400448EA;
                    goto LABEL_23;
                  }
                  return (unsigned int)-1073739511;
                }
                v73 = v71[6] & 0xFF0FFFFF;
                *((_DWORD *)v71 + 12) = v73;
                *((_DWORD *)v71 + 12) = v73 | 0x800000;
                v74 = v82;
                if ( (a6 & 0x2000) != 0 )
                  v74 = 1;
                v82 = v74;
              }
              v71 = (__int64 *)*v71;
              v89 = v71;
            }
            for ( k = *(__int64 **)(a1 + 56); ; k = (__int64 *)*k )
            {
              v89 = k;
              if ( k == (__int64 *)(a1 + 56) )
                break;
              v76 = k;
              if ( v72 || !FsRtlpOplockKeysEqual(*(_QWORD *)(v91 + 48), k[3], a4) )
              {
                if ( (a4 & 0x10010000) != 0 )
                {
                  if ( (unsigned int)dword_140E06C30 > 3 )
                  {
                    v131 = -1073739511;
                    v295 = &v131;
                    v296 = 4LL;
                    v132 = a4;
                    v297 = &v132;
                    v298 = 4LL;
                    v133 = a6;
                    v299 = &v133;
                    v300 = 4LL;
                    v174 = (char *)a1;
                    v301 = &v174;
                    v302 = 8LL;
                    v134 = *(_DWORD *)(a1 + 144);
                    v303 = &v134;
                    v304 = 4LL;
                    v27 = (struct _EVENT_DATA_DESCRIPTOR *)&v294;
                    v28 = word_14004415A;
                    goto LABEL_23;
                  }
                  return (unsigned int)-1073739511;
                }
                if ( k[7] )
                {
                  if ( (a6 & 0x2000) != 0 )
                  {
                    v82 = 1;
                    if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(0LL) )
                      FsRtlpOplockTryStartBreakAckTimeout(k + 9, k[11]);
                  }
                }
                else
                {
                  k = (__int64 *)k[1];
                  v89 = k;
                  if ( (unsigned __int8)FsRtlpRemoveAndCompleteRHIrp((PVOID)*k, 1, 0, 0, 0) )
                  {
                    v85 = 0;
                    if ( (a6 & 0x2000) != 0 )
                    {
                      v82 = 1;
                      if ( (unsigned int)((__int64 (*)(void))Feature_5466_1379__private_IsEnabledDeviceUsageNoInline)() )
                        FsRtlpOplockTryStartBreakAckTimeout(v76 + 9, v76[11]);
                    }
                    v86 = v72 != 0;
                  }
                  else
                  {
                    v84 = 1;
                  }
                }
              }
            }
          }
          if ( v84 )
            FsRtlpReleaseIrpsWaitingForRH(a1);
          if ( !v82 )
          {
            v77 = *(__int64 **)(a1 + 72);
            if ( v77 != (__int64 *)(a1 + 72) && (a6 & 0x2000) != 0 )
            {
              if ( v88 )
              {
LABEL_173:
                v82 = 1;
              }
              else
              {
                while ( 1 )
                {
                  v89 = v77;
                  if ( v77 == (__int64 *)(a1 + 72) )
                    break;
                  if ( !FsRtlpOplockKeysEqual(v77[3], *(_QWORD *)(v91 + 48), 0) )
                    goto LABEL_173;
                  v77 = (__int64 *)*v77;
                }
              }
            }
          }
          FsRtlpComputeShareableOplockState(a1);
          goto LABEL_176;
        }
        v33 = v32 - 8256;
        if ( v33 )
        {
          v34 = v33 - 0x2000;
          if ( v34 )
          {
            v35 = v34 - 16320;
            if ( v35 )
            {
              if ( v35 == 1015808 )
              {
                if ( (unsigned int)dword_140E06C30 > 5 )
                {
                  v96 = a4;
                  v198 = &v96;
                  v199 = 4LL;
                  v97 = a6;
                  v200 = &v97;
                  v201 = 4LL;
                  v182 = a1;
                  v202 = &v182;
                  v203 = 8LL;
                  v98 = (int)v26;
                  v204 = &v98;
                  v205 = 4LL;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_140E06C30,
                    (unsigned __int8 *)byte_1400441C5,
                    0LL,
                    0LL,
                    6u,
                    v197);
                }
                v26 = 0LL;
                v36 = 0;
                v90 = 0;
                v37 = a6 & 0x1000;
                if ( (a6 & 0x1000) != 0 )
                {
                  for ( m = *(__int64 **)(a1 + 72); ; m = (__int64 *)*m )
                  {
                    v89 = m;
                    if ( m == (__int64 *)(a1 + 72) )
                    {
                      FsRtlpComputeShareableOplockState(a1);
                      v37 = a6 & 0x1000;
                      break;
                    }
                    if ( v88 || !FsRtlpOplockKeysEqual(*(_QWORD *)(v91 + 48), m[3], a4) )
                    {
                      v36 = 1;
                      v90 = 1;
                      if ( (a4 & 0x10010000) != 0 )
                      {
                        if ( (unsigned int)dword_140E06C30 <= 3 )
                          return (unsigned int)-1073739511;
                        v99 = -1073739511;
                        v262 = &v99;
                        v263 = 4LL;
                        v100 = a4;
                        v264 = &v100;
                        v265 = 4LL;
                        v101 = a6;
                        v266 = &v101;
                        v267 = 4LL;
                        v183 = a1;
                        v268 = &v183;
                        v269 = 8LL;
                        v102 = *(_DWORD *)(a1 + 144);
                        v270 = &v102;
                        v271 = 4LL;
                        v27 = (struct _EVENT_DATA_DESCRIPTOR *)&v261;
                        v28 = (__int16 *)&unk_140044080;
LABEL_23:
                        tlgWriteTransfer_EtwWriteTransfer(
                          (__int64)&dword_140E06C30,
                          (unsigned __int8 *)v28,
                          0LL,
                          0LL,
                          7u,
                          v27);
                        return (unsigned int)-1073739511;
                      }
                      v39 = m[6] & 0xFF0FFFFF;
                      *((_DWORD *)m + 12) = v39;
                      *((_DWORD *)m + 12) = v39 | 0x800000;
                    }
                  }
                }
                if ( (a6 & 0x2000) == 0 )
                  goto LABEL_68;
                if ( !v36 )
                {
                  if ( !v37 )
                  {
                    for ( n = *(__int64 **)(a1 + 72); ; n = (__int64 *)*n )
                    {
                      v89 = n;
                      if ( n == (__int64 *)(a1 + 72) )
                        break;
                      if ( (v88 || !FsRtlpOplockKeysEqual(*(_QWORD *)(v91 + 48), n[3], 0))
                        && ((a4 & 0x40000080) != 0x40000080
                         || (int)FsRtlpCheckSharingAgainstOplockOwner((__int64)v83, (_BYTE *)n[3], *a7, *a8) < 0) )
                      {
                        goto LABEL_194;
                      }
                    }
                  }
                  goto LABEL_68;
                }
                goto LABEL_94;
              }
LABEL_191:
              if ( ((unsigned int)v26 & 0x1000000) != 0 )
              {
                if ( (unsigned int)dword_140E06C30 > 5 )
                {
                  v137 = a4;
                  v389 = &v137;
                  v390 = 4LL;
                  v138 = a6;
                  v391 = &v138;
                  v392 = 4LL;
                  v185 = a1;
                  v393 = &v185;
                  v394 = 8LL;
                  v139 = (int)v26;
                  v395 = &v139;
                  v396 = 4LL;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_140E06C30,
                    (unsigned __int8 *)byte_140044383,
                    0LL,
                    0LL,
                    6u,
                    &v388);
                }
LABEL_194:
                v82 = 1;
                v46 = (__int64)v83;
                goto LABEL_69;
              }
              if ( (unsigned int)dword_140E06C30 > 2 )
              {
                v140 = a4;
                v398 = &v140;
                v399 = 4LL;
                v141 = a6;
                v400 = &v141;
                v401 = 4LL;
                v186 = a1;
                v402 = &v186;
                v403 = 8LL;
                v142 = (int)v26;
                v404 = &v142;
                v405 = 4LL;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140E06C30,
                  (unsigned __int8 *)byte_140044231,
                  0LL,
                  0LL,
                  6u,
                  &v397);
              }
              goto LABEL_68;
            }
            goto LABEL_95;
          }
          if ( (unsigned int)dword_140E06C30 > 5 )
          {
            v103 = a4;
            v371 = &v103;
            v372 = 4LL;
            v104 = a6;
            v373 = &v104;
            v374 = 4LL;
            v190 = a1;
            v375 = &v190;
            v376 = 8LL;
            v105 = (int)v26;
            v377 = &v105;
            v378 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E06C30,
              (unsigned __int8 *)&word_140043ED6,
              0LL,
              0LL,
              6u,
              &v370);
          }
          if ( a6 == 0x4000 )
          {
            v41 = *(_QWORD *)a1;
            *(_BYTE *)(v41 + 69) = KeAcquireQueuedSpinLock(7uLL);
            _InterlockedExchange64((volatile __int64 *)(v41 + 104), 0LL);
            KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v41 + 69));
            if ( *(_BYTE *)(v41 + 68) )
              goto LABEL_61;
            v42 = *(_QWORD *)(v41 + 24);
            v95 = (struct _IRP *)v42;
            *(_OWORD *)v42 = 0LL;
            *(_QWORD *)(v42 + 16) = 0LL;
            *(_DWORD *)v42 = 1572865;
            *(_DWORD *)(v42 + 4) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
            *(_DWORD *)(v42 + 8) = 3;
            *(_DWORD *)(v42 + 12) |= 1u;
            *(_QWORD *)(v41 + 56) = 24LL;
            *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
            IofCompleteRequest(*(PIRP *)a1, 1);
            *(_QWORD *)a1 = 0LL;
            Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v43);
            v44 = *(_DWORD *)(a1 + 144) & 0x20 | 0x507040;
            goto LABEL_93;
          }
          if ( a6 == 0x2000 )
          {
            v45 = *(PIRP *)a1;
            if ( (a4 & 0x40000080) == 0x40000080
              && (int)FsRtlpCheckSharingAgainstOplockOwner((__int64)v83, *(_BYTE **)(a1 + 8), *a7, *a8) >= 0 )
            {
              goto LABEL_68;
            }
            v45->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
            _InterlockedExchange64((volatile __int64 *)&v45->CancelRoutine, 0LL);
            KeReleaseQueuedSpinLock(7uLL, v45->CancelIrql);
            if ( v45->Cancel )
              goto LABEL_61;
            MasterIrp = v45->AssociatedIrp.MasterIrp;
            v95 = MasterIrp;
            *(_OWORD *)&MasterIrp->Type = 0LL;
            *(_QWORD *)&MasterIrp->Flags = 0LL;
            *(_DWORD *)&MasterIrp->Type = 1572865;
            *(_DWORD *)(&MasterIrp->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
            LODWORD(MasterIrp->MdlAddress) = 5;
            v49 = HIDWORD(MasterIrp->MdlAddress) | 1;
            HIDWORD(MasterIrp->MdlAddress) = v49;
            v50 = v91;
            if ( !*(_BYTE *)v91 )
            {
              HIDWORD(MasterIrp->MdlAddress) = v49 | 2;
              MasterIrp->Flags = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v50 + 8) + 8LL) + 20LL);
              *((_WORD *)&MasterIrp->Flags + 2) = *(_WORD *)(v50 + 26);
            }
            v45->IoStatus.Information = 24LL;
            *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
            IofCompleteRequest(*(PIRP *)a1, 1);
            *(_QWORD *)a1 = 0LL;
            Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v51);
            v44 = *(_DWORD *)(a1 + 144) & 0x20 | 0x307040;
            goto LABEL_93;
          }
          v52 = *(PIRP *)a1;
          v52->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
          _InterlockedExchange64((volatile __int64 *)&v52->CancelRoutine, 0LL);
          KeReleaseQueuedSpinLock(7uLL, v52->CancelIrql);
          if ( !v52->Cancel )
          {
            v53 = v52->AssociatedIrp.MasterIrp;
            v95 = v53;
            *(_OWORD *)&v53->Type = 0LL;
            *(_QWORD *)&v53->Flags = 0LL;
            *(_DWORD *)&v53->Type = 1572865;
            *(_DWORD *)(&v53->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
            HIDWORD(v53->MdlAddress) |= 1u;
            v52->IoStatus.Information = 24LL;
            *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
            IofCompleteRequest(*(PIRP *)a1, 1);
            *(_QWORD *)a1 = 0LL;
            Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v54);
            v44 = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
LABEL_93:
            *(_DWORD *)(a1 + 144) = v44;
            goto LABEL_94;
          }
        }
        else
        {
          if ( (unsigned int)dword_140E06C30 > 5 )
          {
            v106 = a4;
            v335 = &v106;
            v336 = 4LL;
            v107 = a6;
            v337 = &v107;
            v338 = 4LL;
            v176 = a1;
            v339 = &v176;
            v340 = 8LL;
            v108 = (int)v26;
            v341 = &v108;
            v342 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E06C30,
              (unsigned __int8 *)&byte_140044017,
              0LL,
              0LL,
              6u,
              &v334);
          }
          if ( (a6 & 0x5000) != 0x5000 )
          {
            if ( (a6 & 0x4000) == 0 )
              goto LABEL_68;
            v58 = *(PIRP *)a1;
            v58->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
            _InterlockedExchange64((volatile __int64 *)&v58->CancelRoutine, 0LL);
            KeReleaseQueuedSpinLock(7uLL, v58->CancelIrql);
            if ( v58->Cancel )
            {
              FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
              FsRtlpClearOwner(a1, 0LL);
              *(_BYTE *)(a1 + 32) = 0;
              if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
                *(_QWORD *)(*(_QWORD *)a1 + 56LL) = 0LL;
              goto LABEL_89;
            }
            v63 = v58->AssociatedIrp.MasterIrp;
            v95 = v63;
            *(_OWORD *)&v63->Type = 0LL;
            *(_QWORD *)&v63->Flags = 0LL;
            *(_DWORD *)&v63->Type = 1572865;
            *(_DWORD *)(&v63->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
            LODWORD(v63->MdlAddress) = 1;
            HIDWORD(v63->MdlAddress) |= 1u;
            v58->IoStatus.Information = 24LL;
            *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
            IofCompleteRequest(*(PIRP *)a1, 1);
            *(_QWORD *)a1 = 0LL;
            Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v64);
            v44 = *(_DWORD *)(a1 + 144) & 0x20 | 0x105040;
            goto LABEL_93;
          }
          v55 = *(PIRP *)a1;
          v55->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
          _InterlockedExchange64((volatile __int64 *)&v55->CancelRoutine, 0LL);
          KeReleaseQueuedSpinLock(7uLL, v55->CancelIrql);
          if ( !v55->Cancel )
          {
            v56 = v55->AssociatedIrp.MasterIrp;
            v95 = v56;
            *(_OWORD *)&v56->Type = 0LL;
            *(_QWORD *)&v56->Flags = 0LL;
            *(_DWORD *)&v56->Type = 1572865;
            *(_DWORD *)(&v56->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
            HIDWORD(v56->MdlAddress) |= 1u;
            v55->IoStatus.Information = 24LL;
            *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
            IofCompleteRequest(*(PIRP *)a1, 1);
            *(_QWORD *)a1 = 0LL;
            Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v57);
            v44 = *(_DWORD *)(a1 + 144) & 0x20 | 0x805040;
            goto LABEL_93;
          }
        }
LABEL_61:
        FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
        FsRtlpClearOwner(a1, 0LL);
        *(_BYTE *)(a1 + 32) = 0;
        if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
          *(_QWORD *)(*(_QWORD *)a1 + 56LL) = 0LL;
LABEL_89:
        *(_DWORD *)(*(_QWORD *)a1 + 48LL) = -1073741536;
        IofCompleteRequest(*(PIRP *)a1, 1);
        *(_QWORD *)a1 = 0LL;
        ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
        *(_QWORD *)(a1 + 8) = 0LL;
        Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v59);
        *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
        while ( 1 )
        {
          v26 = *(_QWORD **)(a1 + 88);
          if ( v26 == (_QWORD *)(a1 + 88) )
            break;
          FsRtlpRemoveAndCompleteWaitingIrp(v26, v60, v61, v62);
        }
        goto LABEL_176;
      }
      if ( (unsigned int)dword_140E06C30 > 5 )
      {
        v151 = a4;
        v425 = &v151;
        v426 = 4LL;
        v135 = a6;
        v427 = &v135;
        v428 = 4LL;
        v184 = a1;
        v429 = &v184;
        v430 = 8LL;
        v136 = (int)v26;
        v431 = &v136;
        v432 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06C30,
          (unsigned __int8 *)byte_140043F40,
          0LL,
          0LL,
          6u,
          &v424);
      }
      if ( (a6 & 0x1000) != 0 )
      {
        Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v26);
        *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x805040;
      }
LABEL_183:
      if ( (a6 & 0x5000) == 0 )
        goto LABEL_176;
      goto LABEL_94;
    }
    if ( v29 == 1077312 )
    {
      if ( (unsigned int)dword_140E06C30 > 5 )
      {
        v162 = a4;
        v207 = &v162;
        v208 = 4LL;
        v163 = a6;
        v209 = &v163;
        v210 = 4LL;
        v193 = a1;
        v211 = &v193;
        v212 = 8LL;
        v164 = (int)v26;
        v213 = (__int64 *)&v164;
        v214 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06C30,
          (unsigned __int8 *)&dword_140044464,
          0LL,
          0LL,
          6u,
          v206);
      }
      if ( (a6 & 0x1000) == 0 )
        goto LABEL_238;
    }
    else
    {
      if ( v29 != 3174464 )
      {
        switch ( v29 )
        {
          case 0x507040u:
            if ( (unsigned int)dword_140E06C30 > 5 )
            {
              v156 = a4;
              v326 = &v156;
              v327 = 4LL;
              v157 = a6;
              v328 = &v157;
              v329 = 4LL;
              v191 = a1;
              v330 = &v191;
              v331 = 8LL;
              v158 = (int)v26;
              v332 = &v158;
              v333 = 4LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140E06C30,
                (unsigned __int8 *)&word_1400443F6,
                0LL,
                0LL,
                6u,
                &v325);
            }
            if ( a6 == 0x2000 )
            {
              if ( (a4 & 0x40000080) == 0x40000080 )
              {
                v46 = (__int64)v83;
                if ( (int)FsRtlpCheckSharingAgainstOplockOwner((__int64)v83, *(_BYTE **)(a1 + 8), *a7, *a8) >= 0 )
                {
LABEL_69:
                  if ( v82 )
                  {
                    if ( (a4 & 1) != 0 )
                    {
                      v47 = *(_DWORD *)(a1 + 144);
                      if ( (v47 & 0x10000) != 0 )
                        *(_DWORD *)(a1 + 144) = v47 | 0x20000;
                      return 264;
                    }
                    else
                    {
                      if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v26)
                        && (*(_DWORD *)(a1 + 144) & 0x40) != 0 )
                      {
                        FsRtlpOplockTryStartBreakAckTimeout(a1 + 160, *(_QWORD *)(a1 + 176));
                      }
                      if ( v85 )
                      {
                        LOBYTE(v81) = 1;
                        FsRtlpModifyThreadPriorities(a1, 0LL, v81);
                        FsRtlpOplockSendModernAppTermination(a1, 0LL);
                      }
                      *v175 = 0;
                      return (unsigned int)FsRtlpWaitOnIrp(a1, v46, v172, a10, a11, &v195, v86, a12, v173, a14, v174);
                    }
                  }
                  return v87;
                }
              }
              Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v26);
              v79 = *(_DWORD *)(a1 + 144) & 0x20 | 0x107040;
            }
            else
            {
              if ( (a6 & 0x1000) == 0 )
                break;
              Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v26);
              v79 = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
            }
            *(_DWORD *)(a1 + 144) = v79;
            break;
          case 0x803000u:
            if ( (unsigned int)dword_140E06C30 > 5 )
            {
              v149 = a4;
              v317 = &v149;
              v318 = 4LL;
              v150 = a6;
              v319 = &v150;
              v320 = 4LL;
              v189 = a1;
              v321 = &v189;
              v322 = 8LL;
              v168 = (int)v26;
              v323 = &v168;
              v324 = 4LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140E06C30,
                (unsigned __int8 *)byte_1400440EB,
                0LL,
                0LL,
                6u,
                &v316);
            }
            if ( (a6 & 0x3000) != 0 )
            {
              if ( (a4 & 0x80u) == 0 && (a4 & 0x10010000) != 0 )
              {
                if ( (unsigned int)dword_140E06C30 > 3 )
                {
                  v152 = -1073739511;
                  v306 = &v152;
                  v307 = 4LL;
                  v153 = a4;
                  v308 = &v153;
                  v309 = 4LL;
                  v154 = a6;
                  v310 = &v154;
                  v311 = 4LL;
                  v175 = (_BYTE *)a1;
                  v312 = &v175;
                  v313 = 8LL;
                  v155 = *(_DWORD *)(a1 + 144);
                  v314 = &v155;
                  v315 = 4LL;
                  v27 = (struct _EVENT_DATA_DESCRIPTOR *)&v305;
                  v28 = (__int16 *)&dword_140043FAC;
                  goto LABEL_23;
                }
                return (unsigned int)-1073739511;
              }
              if ( (a6 & 0x2000) != 0 )
              {
                for ( ii = *(__int64 **)(a1 + 72); ; ii = (__int64 *)*ii )
                {
                  v89 = ii;
                  if ( ii == (__int64 *)(a1 + 72) )
                    break;
                  if ( (v88 || !FsRtlpOplockKeysEqual(*(_QWORD *)(v91 + 48), ii[3], 0))
                    && ((a4 & 0x40000080) != 0x40000080
                     || (int)FsRtlpCheckSharingAgainstOplockOwner((__int64)v83, (_BYTE *)ii[3], *a7, *a8) < 0) )
                  {
                    if ( (a4 & 0x10010000) != 0 )
                      return (unsigned int)-1073739511;
                    goto LABEL_194;
                  }
                }
              }
            }
            goto LABEL_68;
          case 0x805040u:
            if ( (unsigned int)dword_140E06C30 > 5 )
            {
              v146 = a4;
              v416 = &v146;
              v417 = 4LL;
              v147 = a6;
              v418 = &v147;
              v419 = 4LL;
              v188 = a1;
              v420 = &v188;
              v421 = 8LL;
              v148 = (int)v26;
              v422 = &v148;
              v423 = 4LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140E06C30,
                (unsigned __int8 *)byte_1400444D1,
                0LL,
                0LL,
                6u,
                &v415);
            }
            goto LABEL_183;
          case 0x807040u:
            if ( (unsigned int)dword_140E06C30 > 5 )
            {
              v143 = a4;
              v407 = &v143;
              v408 = 4LL;
              v144 = a6;
              v409 = &v144;
              v410 = 4LL;
              v187 = a1;
              v411 = &v187;
              v412 = 8LL;
              v145 = (int)v26;
              v413 = &v145;
              v414 = 4LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140E06C30,
                (unsigned __int8 *)byte_140044313,
                0LL,
                0LL,
                6u,
                &v406);
            }
            if ( (a4 & 0x40000080) == 0x40000080
              && (int)FsRtlpCheckSharingAgainstOplockOwner((__int64)v83, *(_BYTE **)(a1 + 8), *a7, *a8) >= 0 )
            {
              goto LABEL_68;
            }
            break;
          default:
            goto LABEL_191;
        }
LABEL_94:
        v82 = 1;
LABEL_176:
        v46 = (__int64)v83;
        goto LABEL_69;
      }
      if ( (unsigned int)dword_140E06C30 > 5 )
      {
        v159 = a4;
        v380 = &v159;
        v381 = 4LL;
        v160 = a6;
        v382 = &v160;
        v383 = 4LL;
        v192 = a1;
        v384 = &v192;
        v385 = 8LL;
        v161 = (int)v26;
        v386 = &v161;
        v387 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06C30,
          (unsigned __int8 *)byte_140044540,
          0LL,
          0LL,
          6u,
          &v379);
      }
      if ( a6 == 0x4000 )
      {
        Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v26);
        v80 = *(_DWORD *)(a1 + 144) & 0x20 | 0x107040;
LABEL_237:
        *(_DWORD *)(a1 + 144) = v80;
        goto LABEL_238;
      }
      if ( (a6 & 0x5000) != 0x5000 )
      {
LABEL_238:
        v46 = (__int64)v83;
        if ( (a4 & 0x40000080) != 0x40000080
          || (int)FsRtlpCheckSharingAgainstOplockOwner((__int64)v83, *(_BYTE **)(a1 + 8), *a7, *a8) < 0 )
        {
          v82 = 1;
        }
        goto LABEL_69;
      }
    }
    Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v26);
    v80 = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
    goto LABEL_237;
  }
  if ( v17 )
  {
    v17->IoStatus.Status = -1073741597;
    IofCompleteRequest(v17, 1);
  }
  if ( (unsigned int)dword_140E06C30 > 3 )
  {
    v94 = -1073741597;
    v207 = &v94;
    v208 = 4LL;
    v93 = a4;
    v209 = &v93;
    v210 = 4LL;
    v92 = a6;
    v211 = (__int64 *)&v92;
    v212 = 4LL;
    v83 = (IRP *)a1;
    v213 = (__int64 *)&v83;
    v214 = 8LL;
    v88 = *(_DWORD *)(a1 + 144);
    v215 = &v88;
    v216 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)&word_1400445AE, 0LL, 0LL, 7u, v206);
  }
  return 3221225699LL;
}
