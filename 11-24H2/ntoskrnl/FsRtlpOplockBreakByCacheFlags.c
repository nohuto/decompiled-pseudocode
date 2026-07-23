/*
 * XREFs of FsRtlpOplockBreakByCacheFlags @ 0x1403CF664
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1403CE7F0 (FsRtlCheckOplockEx2.c)
 *     FsRtlOplockBreakToNoneEx @ 0x14057DA80 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlCheckUpperOplock @ 0x140708AB0 (FsRtlCheckUpperOplock.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x1409E64C0 (FsRtlCheckOplockForFsFilterCallback.c)
 *     FsRtlOplockBreakH2 @ 0x140A294A0 (FsRtlOplockBreakH2.c)
 * Callees:
 *     FsRtlpClearOwner @ 0x1402907B4 (FsRtlpClearOwner.c)
 *     FsRtlpWaitOnIrp @ 0x1402B72F8 (FsRtlpWaitOnIrp.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1402B8E90 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1402B9194 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403CB79C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     FsRtlpOplockKeysEqual @ 0x1403CE290 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047A8E8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x14048F158 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpCheckSharingAgainstOplockOwner @ 0x1404AA7AC (FsRtlpCheckSharingAgainstOplockOwner.c)
 *     FsRtlpComputeShareableOplockState @ 0x1404DA8E8 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404DAB70 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14070A1C4 (FsRtlpOplockTryStartBreakAckTimeout.c)
 */

__int64 __fastcall FsRtlpOplockBreakByCacheFlags(
        __int64 a1,
        __int64 a2,
        IRP *a3,
        int a4,
        __int64 a5,
        int a6,
        unsigned int *a7,
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
  int v26; // ecx
  struct _EVENT_DATA_DESCRIPTOR *v27; // rax
  char *v28; // rdx
  int v29; // eax
  __int64 v30; // r8
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  char v37; // r12
  int v38; // eax
  __int64 *m; // r14
  unsigned int v40; // eax
  __int64 *n; // rdi
  __int64 v42; // rdi
  __int64 v43; // rcx
  int v44; // eax
  PIRP v45; // rdi
  __int64 v46; // rdi
  int v47; // eax
  struct _IRP *MasterIrp; // rdx
  int v49; // eax
  __int64 v50; // r9
  PIRP v51; // rdi
  struct _IRP *v52; // rcx
  PIRP v53; // rdi
  struct _IRP *v54; // rcx
  PIRP v55; // rdi
  _QWORD *v56; // rcx
  struct _IRP *v57; // rcx
  __int64 *i; // r14
  _QWORD *v59; // rdx
  __int64 *j; // r12
  int v61; // edx
  int v62; // eax
  __int16 v63; // cx
  __int64 *v64; // r14
  int v65; // r12d
  unsigned int v66; // eax
  char v67; // al
  __int64 *k; // r14
  __int64 *v69; // r13
  __int64 *v70; // rdi
  __int64 *ii; // rdi
  int v72; // eax
  int v73; // eax
  char v74; // [rsp+60h] [rbp-C48h]
  IRP *v75; // [rsp+68h] [rbp-C40h] BYREF
  char v76; // [rsp+70h] [rbp-C38h]
  char v77; // [rsp+71h] [rbp-C37h]
  char v78; // [rsp+72h] [rbp-C36h]
  unsigned int v79; // [rsp+74h] [rbp-C34h] BYREF
  int v80; // [rsp+78h] [rbp-C30h] BYREF
  __int64 *v81; // [rsp+80h] [rbp-C28h]
  char v82; // [rsp+88h] [rbp-C20h]
  __int64 v83; // [rsp+90h] [rbp-C18h] BYREF
  int v84; // [rsp+98h] [rbp-C10h] BYREF
  int v85; // [rsp+9Ch] [rbp-C0Ch] BYREF
  int v86; // [rsp+A0h] [rbp-C08h] BYREF
  struct _IRP *v87; // [rsp+A8h] [rbp-C00h]
  int v88; // [rsp+B0h] [rbp-BF8h] BYREF
  int v89; // [rsp+B4h] [rbp-BF4h] BYREF
  int v90; // [rsp+B8h] [rbp-BF0h] BYREF
  int v91; // [rsp+BCh] [rbp-BECh] BYREF
  int v92; // [rsp+C0h] [rbp-BE8h] BYREF
  int v93; // [rsp+C4h] [rbp-BE4h] BYREF
  int v94; // [rsp+C8h] [rbp-BE0h] BYREF
  int v95; // [rsp+CCh] [rbp-BDCh] BYREF
  int v96; // [rsp+D0h] [rbp-BD8h] BYREF
  int v97; // [rsp+D4h] [rbp-BD4h] BYREF
  int v98; // [rsp+D8h] [rbp-BD0h] BYREF
  int v99; // [rsp+DCh] [rbp-BCCh] BYREF
  int v100; // [rsp+E0h] [rbp-BC8h] BYREF
  int v101; // [rsp+E4h] [rbp-BC4h] BYREF
  int v102; // [rsp+E8h] [rbp-BC0h] BYREF
  int v103; // [rsp+ECh] [rbp-BBCh] BYREF
  int v104; // [rsp+F0h] [rbp-BB8h] BYREF
  int v105; // [rsp+F4h] [rbp-BB4h] BYREF
  int v106; // [rsp+F8h] [rbp-BB0h] BYREF
  int v107; // [rsp+FCh] [rbp-BACh] BYREF
  int v108; // [rsp+100h] [rbp-BA8h] BYREF
  int v109; // [rsp+104h] [rbp-BA4h] BYREF
  int v110; // [rsp+108h] [rbp-BA0h] BYREF
  int v111; // [rsp+10Ch] [rbp-B9Ch] BYREF
  int v112; // [rsp+110h] [rbp-B98h] BYREF
  int v113; // [rsp+114h] [rbp-B94h] BYREF
  int v114; // [rsp+118h] [rbp-B90h]
  int v115; // [rsp+11Ch] [rbp-B8Ch] BYREF
  int v116; // [rsp+120h] [rbp-B88h] BYREF
  int v117; // [rsp+124h] [rbp-B84h] BYREF
  int v118; // [rsp+128h] [rbp-B80h] BYREF
  int v119; // [rsp+12Ch] [rbp-B7Ch] BYREF
  int v120; // [rsp+130h] [rbp-B78h] BYREF
  int v121; // [rsp+134h] [rbp-B74h] BYREF
  int v122; // [rsp+138h] [rbp-B70h] BYREF
  int v123; // [rsp+13Ch] [rbp-B6Ch] BYREF
  int v124; // [rsp+140h] [rbp-B68h] BYREF
  int v125; // [rsp+144h] [rbp-B64h] BYREF
  int v126; // [rsp+148h] [rbp-B60h] BYREF
  int v127; // [rsp+14Ch] [rbp-B5Ch] BYREF
  int v128; // [rsp+150h] [rbp-B58h] BYREF
  int v129; // [rsp+154h] [rbp-B54h] BYREF
  int v130; // [rsp+158h] [rbp-B50h] BYREF
  int v131; // [rsp+15Ch] [rbp-B4Ch] BYREF
  int v132; // [rsp+160h] [rbp-B48h] BYREF
  int v133; // [rsp+164h] [rbp-B44h] BYREF
  int v134; // [rsp+168h] [rbp-B40h] BYREF
  int v135; // [rsp+16Ch] [rbp-B3Ch] BYREF
  int v136; // [rsp+170h] [rbp-B38h] BYREF
  int v137; // [rsp+174h] [rbp-B34h] BYREF
  int v138; // [rsp+178h] [rbp-B30h] BYREF
  int v139; // [rsp+17Ch] [rbp-B2Ch] BYREF
  int v140; // [rsp+180h] [rbp-B28h] BYREF
  int v141; // [rsp+184h] [rbp-B24h] BYREF
  int v142; // [rsp+188h] [rbp-B20h] BYREF
  int v143; // [rsp+18Ch] [rbp-B1Ch] BYREF
  int v144; // [rsp+190h] [rbp-B18h] BYREF
  int v145; // [rsp+194h] [rbp-B14h] BYREF
  int v146; // [rsp+198h] [rbp-B10h] BYREF
  int v147; // [rsp+19Ch] [rbp-B0Ch] BYREF
  int v148; // [rsp+1A0h] [rbp-B08h] BYREF
  int v149; // [rsp+1A4h] [rbp-B04h] BYREF
  int v150; // [rsp+1A8h] [rbp-B00h] BYREF
  int v151; // [rsp+1ACh] [rbp-AFCh] BYREF
  int v152; // [rsp+1B0h] [rbp-AF8h] BYREF
  int v153; // [rsp+1B4h] [rbp-AF4h] BYREF
  int v154; // [rsp+1B8h] [rbp-AF0h] BYREF
  int v155; // [rsp+1BCh] [rbp-AECh] BYREF
  int v156; // [rsp+1C0h] [rbp-AE8h] BYREF
  int v157; // [rsp+1C4h] [rbp-AE4h] BYREF
  __int64 v158; // [rsp+1C8h] [rbp-AE0h] BYREF
  int v159; // [rsp+1D0h] [rbp-AD8h] BYREF
  int v160; // [rsp+1D4h] [rbp-AD4h] BYREF
  int v161; // [rsp+1D8h] [rbp-AD0h] BYREF
  int v162; // [rsp+1DCh] [rbp-ACCh] BYREF
  _QWORD *v163; // [rsp+1E0h] [rbp-AC8h] BYREF
  __int64 v164; // [rsp+1E8h] [rbp-AC0h] BYREF
  __int64 v165; // [rsp+1F0h] [rbp-AB8h] BYREF
  char *v166; // [rsp+1F8h] [rbp-AB0h] BYREF
  _BYTE *v167; // [rsp+200h] [rbp-AA8h] BYREF
  __int64 v168; // [rsp+208h] [rbp-AA0h] BYREF
  __int64 v169; // [rsp+210h] [rbp-A98h] BYREF
  __int64 v170; // [rsp+218h] [rbp-A90h] BYREF
  __int64 v171; // [rsp+220h] [rbp-A88h] BYREF
  __int64 v172; // [rsp+228h] [rbp-A80h] BYREF
  __int64 v173; // [rsp+230h] [rbp-A78h] BYREF
  __int64 v174; // [rsp+238h] [rbp-A70h] BYREF
  __int64 v175; // [rsp+240h] [rbp-A68h] BYREF
  __int64 v176; // [rsp+248h] [rbp-A60h] BYREF
  __int64 v177; // [rsp+250h] [rbp-A58h] BYREF
  __int64 v178; // [rsp+258h] [rbp-A50h] BYREF
  __int64 v179; // [rsp+260h] [rbp-A48h] BYREF
  __int64 v180; // [rsp+268h] [rbp-A40h] BYREF
  __int64 v181; // [rsp+270h] [rbp-A38h] BYREF
  __int64 v182; // [rsp+278h] [rbp-A30h] BYREF
  __int64 v183; // [rsp+280h] [rbp-A28h] BYREF
  __int64 v184; // [rsp+288h] [rbp-A20h] BYREF
  __int64 v185; // [rsp+290h] [rbp-A18h] BYREF
  __int64 v186; // [rsp+298h] [rbp-A10h] BYREF
  __int128 v187; // [rsp+2A0h] [rbp-A08h] BYREF
  __int64 v188; // [rsp+2B0h] [rbp-9F8h]
  struct _EVENT_DATA_DESCRIPTOR v189[2]; // [rsp+2C0h] [rbp-9E8h] BYREF
  int *v190; // [rsp+2E0h] [rbp-9C8h]
  __int64 v191; // [rsp+2E8h] [rbp-9C0h]
  int *v192; // [rsp+2F0h] [rbp-9B8h]
  __int64 v193; // [rsp+2F8h] [rbp-9B0h]
  __int64 *v194; // [rsp+300h] [rbp-9A8h]
  __int64 v195; // [rsp+308h] [rbp-9A0h]
  int *v196; // [rsp+310h] [rbp-998h]
  __int64 v197; // [rsp+318h] [rbp-990h]
  struct _EVENT_DATA_DESCRIPTOR v198[2]; // [rsp+320h] [rbp-988h] BYREF
  int *v199; // [rsp+340h] [rbp-968h]
  __int64 v200; // [rsp+348h] [rbp-960h]
  int *v201; // [rsp+350h] [rbp-958h]
  __int64 v202; // [rsp+358h] [rbp-950h]
  __int64 *v203; // [rsp+360h] [rbp-948h]
  __int64 v204; // [rsp+368h] [rbp-940h]
  IRP **v205; // [rsp+370h] [rbp-938h]
  __int64 v206; // [rsp+378h] [rbp-930h]
  int *v207; // [rsp+380h] [rbp-928h]
  __int64 v208; // [rsp+388h] [rbp-920h]
  char v209; // [rsp+390h] [rbp-918h] BYREF
  int *v210; // [rsp+3B0h] [rbp-8F8h]
  __int64 v211; // [rsp+3B8h] [rbp-8F0h]
  __int64 *v212; // [rsp+3C0h] [rbp-8E8h]
  __int64 v213; // [rsp+3C8h] [rbp-8E0h]
  __int64 *v214; // [rsp+3D0h] [rbp-8D8h]
  __int64 v215; // [rsp+3D8h] [rbp-8D0h]
  __int64 *v216; // [rsp+3E0h] [rbp-8C8h]
  __int64 v217; // [rsp+3E8h] [rbp-8C0h]
  IRP **v218; // [rsp+3F0h] [rbp-8B8h]
  __int64 v219; // [rsp+3F8h] [rbp-8B0h]
  char v220; // [rsp+400h] [rbp-8A8h] BYREF
  int *v221; // [rsp+420h] [rbp-888h]
  __int64 v222; // [rsp+428h] [rbp-880h]
  int *v223; // [rsp+430h] [rbp-878h]
  __int64 v224; // [rsp+438h] [rbp-870h]
  int *v225; // [rsp+440h] [rbp-868h]
  __int64 v226; // [rsp+448h] [rbp-860h]
  __int64 *v227; // [rsp+450h] [rbp-858h]
  __int64 v228; // [rsp+458h] [rbp-850h]
  int *v229; // [rsp+460h] [rbp-848h]
  __int64 v230; // [rsp+468h] [rbp-840h]
  char v231; // [rsp+470h] [rbp-838h] BYREF
  int *v232; // [rsp+490h] [rbp-818h]
  __int64 v233; // [rsp+498h] [rbp-810h]
  int *v234; // [rsp+4A0h] [rbp-808h]
  __int64 v235; // [rsp+4A8h] [rbp-800h]
  int *v236; // [rsp+4B0h] [rbp-7F8h]
  __int64 v237; // [rsp+4B8h] [rbp-7F0h]
  __int64 *v238; // [rsp+4C0h] [rbp-7E8h]
  __int64 v239; // [rsp+4C8h] [rbp-7E0h]
  int *v240; // [rsp+4D0h] [rbp-7D8h]
  __int64 v241; // [rsp+4D8h] [rbp-7D0h]
  char v242; // [rsp+4E0h] [rbp-7C8h] BYREF
  unsigned int *v243; // [rsp+500h] [rbp-7A8h]
  __int64 v244; // [rsp+508h] [rbp-7A0h]
  int *v245; // [rsp+510h] [rbp-798h]
  __int64 v246; // [rsp+518h] [rbp-790h]
  int *v247; // [rsp+520h] [rbp-788h]
  __int64 v248; // [rsp+528h] [rbp-780h]
  __int64 *v249; // [rsp+530h] [rbp-778h]
  __int64 v250; // [rsp+538h] [rbp-770h]
  int *v251; // [rsp+540h] [rbp-768h]
  __int64 v252; // [rsp+548h] [rbp-760h]
  char v253; // [rsp+550h] [rbp-758h] BYREF
  int *v254; // [rsp+570h] [rbp-738h]
  __int64 v255; // [rsp+578h] [rbp-730h]
  int *v256; // [rsp+580h] [rbp-728h]
  __int64 v257; // [rsp+588h] [rbp-720h]
  int *v258; // [rsp+590h] [rbp-718h]
  __int64 v259; // [rsp+598h] [rbp-710h]
  __int64 *v260; // [rsp+5A0h] [rbp-708h]
  __int64 v261; // [rsp+5A8h] [rbp-700h]
  int *v262; // [rsp+5B0h] [rbp-6F8h]
  __int64 v263; // [rsp+5B8h] [rbp-6F0h]
  char v264; // [rsp+5C0h] [rbp-6E8h] BYREF
  int *v265; // [rsp+5E0h] [rbp-6C8h]
  __int64 v266; // [rsp+5E8h] [rbp-6C0h]
  int *v267; // [rsp+5F0h] [rbp-6B8h]
  __int64 v268; // [rsp+5F8h] [rbp-6B0h]
  int *v269; // [rsp+600h] [rbp-6A8h]
  __int64 v270; // [rsp+608h] [rbp-6A0h]
  __int64 *v271; // [rsp+610h] [rbp-698h]
  __int64 v272; // [rsp+618h] [rbp-690h]
  int *v273; // [rsp+620h] [rbp-688h]
  __int64 v274; // [rsp+628h] [rbp-680h]
  char v275; // [rsp+630h] [rbp-678h] BYREF
  int *v276; // [rsp+650h] [rbp-658h]
  __int64 v277; // [rsp+658h] [rbp-650h]
  int *v278; // [rsp+660h] [rbp-648h]
  __int64 v279; // [rsp+668h] [rbp-640h]
  int *v280; // [rsp+670h] [rbp-638h]
  __int64 v281; // [rsp+678h] [rbp-630h]
  __int64 *v282; // [rsp+680h] [rbp-628h]
  __int64 v283; // [rsp+688h] [rbp-620h]
  int *v284; // [rsp+690h] [rbp-618h]
  __int64 v285; // [rsp+698h] [rbp-610h]
  char v286; // [rsp+6A0h] [rbp-608h] BYREF
  int *v287; // [rsp+6C0h] [rbp-5E8h]
  __int64 v288; // [rsp+6C8h] [rbp-5E0h]
  int *v289; // [rsp+6D0h] [rbp-5D8h]
  __int64 v290; // [rsp+6D8h] [rbp-5D0h]
  int *v291; // [rsp+6E0h] [rbp-5C8h]
  __int64 v292; // [rsp+6E8h] [rbp-5C0h]
  char **v293; // [rsp+6F0h] [rbp-5B8h]
  __int64 v294; // [rsp+6F8h] [rbp-5B0h]
  int *v295; // [rsp+700h] [rbp-5A8h]
  __int64 v296; // [rsp+708h] [rbp-5A0h]
  char v297; // [rsp+710h] [rbp-598h] BYREF
  int *v298; // [rsp+730h] [rbp-578h]
  __int64 v299; // [rsp+738h] [rbp-570h]
  int *v300; // [rsp+740h] [rbp-568h]
  __int64 v301; // [rsp+748h] [rbp-560h]
  int *v302; // [rsp+750h] [rbp-558h]
  __int64 v303; // [rsp+758h] [rbp-550h]
  _BYTE **v304; // [rsp+760h] [rbp-548h]
  __int64 v305; // [rsp+768h] [rbp-540h]
  int *v306; // [rsp+770h] [rbp-538h]
  __int64 v307; // [rsp+778h] [rbp-530h]
  struct _EVENT_DATA_DESCRIPTOR v308; // [rsp+780h] [rbp-528h] BYREF
  int *v309; // [rsp+7A0h] [rbp-508h]
  __int64 v310; // [rsp+7A8h] [rbp-500h]
  int *v311; // [rsp+7B0h] [rbp-4F8h]
  __int64 v312; // [rsp+7B8h] [rbp-4F0h]
  __int64 *v313; // [rsp+7C0h] [rbp-4E8h]
  __int64 v314; // [rsp+7C8h] [rbp-4E0h]
  int *v315; // [rsp+7D0h] [rbp-4D8h]
  __int64 v316; // [rsp+7D8h] [rbp-4D0h]
  struct _EVENT_DATA_DESCRIPTOR v317; // [rsp+7E0h] [rbp-4C8h] BYREF
  int *v318; // [rsp+800h] [rbp-4A8h]
  __int64 v319; // [rsp+808h] [rbp-4A0h]
  int *v320; // [rsp+810h] [rbp-498h]
  __int64 v321; // [rsp+818h] [rbp-490h]
  __int64 *v322; // [rsp+820h] [rbp-488h]
  __int64 v323; // [rsp+828h] [rbp-480h]
  int *v324; // [rsp+830h] [rbp-478h]
  __int64 v325; // [rsp+838h] [rbp-470h]
  struct _EVENT_DATA_DESCRIPTOR v326; // [rsp+840h] [rbp-468h] BYREF
  int *v327; // [rsp+860h] [rbp-448h]
  __int64 v328; // [rsp+868h] [rbp-440h]
  int *v329; // [rsp+870h] [rbp-438h]
  __int64 v330; // [rsp+878h] [rbp-430h]
  __int64 *v331; // [rsp+880h] [rbp-428h]
  __int64 v332; // [rsp+888h] [rbp-420h]
  int *v333; // [rsp+890h] [rbp-418h]
  __int64 v334; // [rsp+898h] [rbp-410h]
  struct _EVENT_DATA_DESCRIPTOR v335; // [rsp+8A0h] [rbp-408h] BYREF
  int *v336; // [rsp+8C0h] [rbp-3E8h]
  __int64 v337; // [rsp+8C8h] [rbp-3E0h]
  int *v338; // [rsp+8D0h] [rbp-3D8h]
  __int64 v339; // [rsp+8D8h] [rbp-3D0h]
  __int64 *v340; // [rsp+8E0h] [rbp-3C8h]
  __int64 v341; // [rsp+8E8h] [rbp-3C0h]
  int *v342; // [rsp+8F0h] [rbp-3B8h]
  __int64 v343; // [rsp+8F8h] [rbp-3B0h]
  struct _EVENT_DATA_DESCRIPTOR v344; // [rsp+900h] [rbp-3A8h] BYREF
  int *v345; // [rsp+920h] [rbp-388h]
  __int64 v346; // [rsp+928h] [rbp-380h]
  int *v347; // [rsp+930h] [rbp-378h]
  __int64 v348; // [rsp+938h] [rbp-370h]
  _QWORD *v349; // [rsp+940h] [rbp-368h]
  __int64 v350; // [rsp+948h] [rbp-360h]
  int *v351; // [rsp+950h] [rbp-358h]
  __int64 v352; // [rsp+958h] [rbp-350h]
  struct _EVENT_DATA_DESCRIPTOR v353; // [rsp+960h] [rbp-348h] BYREF
  int *v354; // [rsp+980h] [rbp-328h]
  __int64 v355; // [rsp+988h] [rbp-320h]
  int *v356; // [rsp+990h] [rbp-318h]
  __int64 v357; // [rsp+998h] [rbp-310h]
  __int64 *v358; // [rsp+9A0h] [rbp-308h]
  __int64 v359; // [rsp+9A8h] [rbp-300h]
  int *v360; // [rsp+9B0h] [rbp-2F8h]
  __int64 v361; // [rsp+9B8h] [rbp-2F0h]
  struct _EVENT_DATA_DESCRIPTOR v362; // [rsp+9C0h] [rbp-2E8h] BYREF
  int *v363; // [rsp+9E0h] [rbp-2C8h]
  __int64 v364; // [rsp+9E8h] [rbp-2C0h]
  int *v365; // [rsp+9F0h] [rbp-2B8h]
  __int64 v366; // [rsp+9F8h] [rbp-2B0h]
  __int64 *v367; // [rsp+A00h] [rbp-2A8h]
  __int64 v368; // [rsp+A08h] [rbp-2A0h]
  int *v369; // [rsp+A10h] [rbp-298h]
  __int64 v370; // [rsp+A18h] [rbp-290h]
  struct _EVENT_DATA_DESCRIPTOR v371; // [rsp+A20h] [rbp-288h] BYREF
  int *v372; // [rsp+A40h] [rbp-268h]
  __int64 v373; // [rsp+A48h] [rbp-260h]
  int *v374; // [rsp+A50h] [rbp-258h]
  __int64 v375; // [rsp+A58h] [rbp-250h]
  __int64 *v376; // [rsp+A60h] [rbp-248h]
  __int64 v377; // [rsp+A68h] [rbp-240h]
  int *v378; // [rsp+A70h] [rbp-238h]
  __int64 v379; // [rsp+A78h] [rbp-230h]
  struct _EVENT_DATA_DESCRIPTOR v380; // [rsp+A80h] [rbp-228h] BYREF
  int *v381; // [rsp+AA0h] [rbp-208h]
  __int64 v382; // [rsp+AA8h] [rbp-200h]
  int *v383; // [rsp+AB0h] [rbp-1F8h]
  __int64 v384; // [rsp+AB8h] [rbp-1F0h]
  __int64 *v385; // [rsp+AC0h] [rbp-1E8h]
  __int64 v386; // [rsp+AC8h] [rbp-1E0h]
  int *v387; // [rsp+AD0h] [rbp-1D8h]
  __int64 v388; // [rsp+AD8h] [rbp-1D0h]
  struct _EVENT_DATA_DESCRIPTOR v389; // [rsp+AE0h] [rbp-1C8h] BYREF
  int *v390; // [rsp+B00h] [rbp-1A8h]
  __int64 v391; // [rsp+B08h] [rbp-1A0h]
  int *v392; // [rsp+B10h] [rbp-198h]
  __int64 v393; // [rsp+B18h] [rbp-190h]
  __int64 *v394; // [rsp+B20h] [rbp-188h]
  __int64 v395; // [rsp+B28h] [rbp-180h]
  int *v396; // [rsp+B30h] [rbp-178h]
  __int64 v397; // [rsp+B38h] [rbp-170h]
  struct _EVENT_DATA_DESCRIPTOR v398; // [rsp+B40h] [rbp-168h] BYREF
  int *v399; // [rsp+B60h] [rbp-148h]
  __int64 v400; // [rsp+B68h] [rbp-140h]
  int *v401; // [rsp+B70h] [rbp-138h]
  __int64 v402; // [rsp+B78h] [rbp-130h]
  __int64 *v403; // [rsp+B80h] [rbp-128h]
  __int64 v404; // [rsp+B88h] [rbp-120h]
  int *v405; // [rsp+B90h] [rbp-118h]
  __int64 v406; // [rsp+B98h] [rbp-110h]
  struct _EVENT_DATA_DESCRIPTOR v407; // [rsp+BA0h] [rbp-108h] BYREF
  int *v408; // [rsp+BC0h] [rbp-E8h]
  __int64 v409; // [rsp+BC8h] [rbp-E0h]
  int *v410; // [rsp+BD0h] [rbp-D8h]
  __int64 v411; // [rsp+BD8h] [rbp-D0h]
  __int64 *v412; // [rsp+BE0h] [rbp-C8h]
  __int64 v413; // [rsp+BE8h] [rbp-C0h]
  int *v414; // [rsp+BF0h] [rbp-B8h]
  __int64 v415; // [rsp+BF8h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR v416; // [rsp+C00h] [rbp-A8h] BYREF
  int *v417; // [rsp+C20h] [rbp-88h]
  __int64 v418; // [rsp+C28h] [rbp-80h]
  int *v419; // [rsp+C30h] [rbp-78h]
  __int64 v420; // [rsp+C38h] [rbp-70h]
  __int64 *v421; // [rsp+C40h] [rbp-68h]
  __int64 v422; // [rsp+C48h] [rbp-60h]
  int *v423; // [rsp+C50h] [rbp-58h]
  __int64 v424; // [rsp+C58h] [rbp-50h]

  v17 = a3;
  v75 = a3;
  v18 = a2;
  v83 = a2;
  v164 = a9;
  v165 = a13;
  v167 = a15;
  v166 = a16;
  v79 = 0;
  v187 = 0LL;
  v188 = 0LL;
  v74 = 0;
  v76 = 0;
  v78 = 0;
  v77 = 1;
  v20 = a4 & 8;
  v80 = v20;
  v21 = (int *)(a1 + 144);
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v84 = a4;
    v190 = &v84;
    v191 = 4LL;
    v85 = a6;
    v192 = &v85;
    v193 = 4LL;
    v158 = a1;
    v194 = &v158;
    v195 = 8LL;
    v86 = *v21;
    v196 = &v86;
    v197 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)word_14004507A, 0LL, 0LL, 6u, v189);
    v20 = v80;
    v18 = v83;
    v17 = v75;
  }
  if ( a6 == 28672 || a6 == 20480 || a6 == 0x4000 || a6 == 0x2000 )
  {
    if ( !a1 )
      return v79;
    v23 = *v21;
    if ( *v21 == 1 || (v23 & a6) == 0 )
    {
      if ( (unsigned int)dword_140E06C30 > 5 )
      {
        v157 = 0;
        v210 = &v157;
        v211 = 4LL;
        LODWORD(v158) = a4;
        v212 = &v158;
        v213 = 4LL;
        LODWORD(v83) = a6;
        v214 = &v83;
        v215 = 4LL;
        v186 = a1;
        v216 = &v186;
        v217 = 8LL;
        LODWORD(v75) = v23;
        v218 = &v75;
        v219 = 4LL;
        v24 = (struct _EVENT_DATA_DESCRIPTOR *)&v209;
        v25 = (unsigned __int8 *)word_1400450DA;
        goto LABEL_243;
      }
      return 0;
    }
    if ( !v20 && FsRtlpOplockKeysEqual(*(_QWORD *)(v18 + 48), *(_QWORD *)(a1 + 8), a4) )
    {
      if ( (unsigned int)dword_140E06C30 > 5 )
      {
        v86 = 0;
        v232 = &v86;
        v233 = 4LL;
        v85 = a4;
        v234 = &v85;
        v235 = 4LL;
        v84 = a6;
        v236 = &v84;
        v237 = 4LL;
        v171 = a1;
        v238 = &v171;
        v239 = 8LL;
        v80 = *(_DWORD *)(a1 + 144);
        v240 = &v80;
        v241 = 4LL;
        v24 = (struct _EVENT_DATA_DESCRIPTOR *)&v231;
        v25 = (unsigned __int8 *)&qword_140044F30;
LABEL_243:
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, v25, 0LL, 0LL, 7u, v24);
        return 0;
      }
      return 0;
    }
    v26 = *(_DWORD *)(a1 + 144);
    if ( (v26 & 0x40) != 0 && (a4 & 0x10010000) != 0 )
    {
      if ( (unsigned int)dword_140E06C30 > 3 )
      {
        v79 = -1073739511;
        v243 = &v79;
        v244 = 4LL;
        v159 = a4;
        v245 = &v159;
        v246 = 4LL;
        v161 = a6;
        v247 = &v161;
        v248 = 4LL;
        v173 = a1;
        v249 = &v173;
        v250 = 8LL;
        v162 = v26;
        v251 = &v162;
        v252 = 4LL;
        v27 = (struct _EVENT_DATA_DESCRIPTOR *)&v242;
        v28 = byte_140044EC5;
        goto LABEL_23;
      }
      return (unsigned int)-1073739511;
    }
    v29 = v26 & 0x1F0FFDF;
    v30 = 1069120LL;
    if ( (v26 & 0x1F0FFDFu) <= 0x105040 )
    {
      if ( v29 != 1069120 )
      {
        v31 = v29 - 4096;
        if ( !v31 || (v32 = v31 - 16) == 0 )
        {
LABEL_92:
          if ( (unsigned int)dword_140E06C30 > 5 )
          {
            v101 = a4;
            v336 = &v101;
            v337 = 4LL;
            v102 = a6;
            v338 = &v102;
            v339 = 4LL;
            v169 = a1;
            v340 = &v169;
            v341 = 8LL;
            v103 = v26;
            v342 = &v103;
            v343 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E06C30,
              (unsigned __int8 *)word_140045012,
              0LL,
              0LL,
              6u,
              &v335);
          }
          if ( (a6 & 0x1000) != 0 )
          {
            for ( i = *(__int64 **)(a1 + 40); ; i = (__int64 *)*i )
            {
              v81 = i;
              if ( i == (__int64 *)(a1 + 40) )
                break;
              v59 = (_QWORD *)i[2];
              if ( *((_DWORD *)v59 + 6) == 590400 && (v80 || !FsRtlpOplockKeysEqual(*(_QWORD *)(v83 + 48), v59[6], a4)) )
              {
                if ( (a4 & 0x10010000) != 0 )
                {
                  if ( (unsigned int)dword_140E06C30 > 3 )
                  {
                    v104 = -1073739511;
                    v221 = &v104;
                    v222 = 4LL;
                    v105 = a4;
                    v223 = &v105;
                    v224 = 4LL;
                    v106 = a6;
                    v225 = &v106;
                    v226 = 4LL;
                    v170 = a1;
                    v227 = &v170;
                    v228 = 8LL;
                    v107 = *(_DWORD *)(a1 + 144);
                    v229 = &v107;
                    v230 = 4LL;
                    v27 = (struct _EVENT_DATA_DESCRIPTOR *)&v220;
                    v28 = &byte_140044FA7;
                    goto LABEL_23;
                  }
                  return (unsigned int)-1073739511;
                }
                i = (__int64 *)i[1];
                v81 = i;
                FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*i, 0, 0, a1);
              }
            }
          }
          v26 = *(_DWORD *)(a1 + 144);
          if ( (v26 & 0x1F0FFDF) != 0xB000 )
          {
            FsRtlpComputeShareableOplockState(a1);
            goto LABEL_65;
          }
LABEL_106:
          if ( (unsigned int)dword_140E06C30 > 5 )
          {
            v108 = a4;
            v345 = &v108;
            v346 = 4LL;
            v109 = a6;
            v347 = &v109;
            v348 = 4LL;
            v163 = (_QWORD *)a1;
            v349 = &v163;
            v350 = 8LL;
            v110 = v26;
            v351 = &v110;
            v352 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E06C30,
              (unsigned __int8 *)&byte_1400446B7,
              0LL,
              0LL,
              6u,
              &v344);
          }
          if ( a6 == 0x2000 )
          {
            for ( j = *(__int64 **)(a1 + 56); ; j = (__int64 *)*j )
            {
              v81 = j;
              if ( j == (__int64 *)(a1 + 56) )
                break;
              v163 = j;
              if ( (v80 || !FsRtlpOplockKeysEqual(*(_QWORD *)(v83 + 48), j[3], 0))
                && ((a4 & 0x40000080) != 0x40000080 || (int)FsRtlpCheckSharingAgainstOplockOwner(v75, j[3], *a7, *a8) < 0) )
              {
                if ( (a4 & 0x10010000) != 0 )
                {
                  if ( (unsigned int)dword_140E06C30 > 3 )
                  {
                    v115 = -1073739511;
                    v265 = &v115;
                    v266 = 4LL;
                    v116 = a4;
                    v267 = &v116;
                    v268 = 4LL;
                    v117 = 0x2000;
                    v269 = &v117;
                    v270 = 4LL;
                    v164 = a1;
                    v271 = &v164;
                    v272 = 8LL;
                    v118 = *(_DWORD *)(a1 + 144);
                    v273 = &v118;
                    v274 = 4LL;
                    v27 = (struct _EVENT_DATA_DESCRIPTOR *)&v264;
                    v28 = (char *)&dword_14004464C;
                    goto LABEL_23;
                  }
                  return (unsigned int)-1073739511;
                }
                if ( j[7] )
                {
                  if ( (unsigned int)dword_140E06C30 > 5 )
                  {
                    v111 = a4;
                    v354 = &v111;
                    v355 = 4LL;
                    v112 = 0x2000;
                    v356 = &v112;
                    v357 = 4LL;
                    v172 = a1;
                    v358 = &v172;
                    v359 = 8LL;
                    v113 = *(_DWORD *)(a1 + 144);
                    v360 = &v113;
                    v361 = 4LL;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_140E06C30,
                      (unsigned __int8 *)byte_14004478B,
                      0LL,
                      0LL,
                      6u,
                      &v353);
                  }
                  v74 = 1;
                  FsRtlpOplockTryStartBreakAckTimeout(j + 9, j[11]);
                }
                else
                {
                  j = (__int64 *)j[1];
                  v81 = j;
                  v61 = 1;
                  v114 = 1;
                  v62 = 0;
                  v63 = 0;
                  if ( !*(_BYTE *)v83 )
                  {
                    v61 = 3;
                    v114 = 3;
                    v62 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v83 + 8) + 8LL) + 20LL);
                    v63 = *(_WORD *)(v83 + 26);
                  }
                  if ( (unsigned __int8)FsRtlpRemoveAndCompleteRHIrp((PVOID)*j, v61, v62, v63, 0) )
                  {
                    v77 = 0;
                    v74 = 1;
                    v78 = v80 != 0;
                    FsRtlpOplockTryStartBreakAckTimeout(v163 + 9, v163[11]);
                  }
                  else
                  {
                    v76 = 1;
                  }
                }
              }
            }
          }
          else if ( (a6 & 0x5000) == 0x5000 )
          {
            v64 = *(__int64 **)(a1 + 72);
            v81 = v64;
            v65 = v80;
            while ( v64 != (__int64 *)(a1 + 72) )
            {
              if ( v65 || !FsRtlpOplockKeysEqual(*(_QWORD *)(v83 + 48), v64[3], a4) )
              {
                if ( (a4 & 0x10010000) != 0 )
                {
                  if ( (unsigned int)dword_140E06C30 > 3 )
                  {
                    v119 = -1073739511;
                    v276 = &v119;
                    v277 = 4LL;
                    v120 = a4;
                    v278 = &v120;
                    v279 = 4LL;
                    v121 = a6;
                    v280 = &v121;
                    v281 = 4LL;
                    v165 = a1;
                    v282 = &v165;
                    v283 = 8LL;
                    v122 = *(_DWORD *)(a1 + 144);
                    v284 = &v122;
                    v285 = 4LL;
                    v27 = (struct _EVENT_DATA_DESCRIPTOR *)&v275;
                    v28 = (char *)&unk_140044720;
                    goto LABEL_23;
                  }
                  return (unsigned int)-1073739511;
                }
                v66 = v64[6] & 0xFF0FFFFF;
                *((_DWORD *)v64 + 12) = v66;
                *((_DWORD *)v64 + 12) = v66 | 0x800000;
                v67 = v74;
                if ( (a6 & 0x2000) != 0 )
                  v67 = 1;
                v74 = v67;
              }
              v64 = (__int64 *)*v64;
              v81 = v64;
            }
            for ( k = *(__int64 **)(a1 + 56); ; k = (__int64 *)*k )
            {
              v81 = k;
              if ( k == (__int64 *)(a1 + 56) )
                break;
              v69 = k;
              if ( v65 || !FsRtlpOplockKeysEqual(*(_QWORD *)(v83 + 48), k[3], a4) )
              {
                if ( (a4 & 0x10010000) != 0 )
                {
                  if ( (unsigned int)dword_140E06C30 > 3 )
                  {
                    v123 = -1073739511;
                    v287 = &v123;
                    v288 = 4LL;
                    v124 = a4;
                    v289 = &v124;
                    v290 = 4LL;
                    v125 = a6;
                    v291 = &v125;
                    v292 = 4LL;
                    v166 = (char *)a1;
                    v293 = &v166;
                    v294 = 8LL;
                    v126 = *(_DWORD *)(a1 + 144);
                    v295 = &v126;
                    v296 = 4LL;
                    v27 = (struct _EVENT_DATA_DESCRIPTOR *)&v286;
                    v28 = &byte_140044507;
                    goto LABEL_23;
                  }
                  return (unsigned int)-1073739511;
                }
                if ( k[7] )
                {
                  if ( (a6 & 0x2000) != 0 )
                  {
                    v74 = 1;
                    FsRtlpOplockTryStartBreakAckTimeout(k + 9, k[11]);
                  }
                }
                else
                {
                  k = (__int64 *)k[1];
                  v81 = k;
                  if ( (unsigned __int8)FsRtlpRemoveAndCompleteRHIrp((PVOID)*k, 1, 0, 0, 0) )
                  {
                    v77 = 0;
                    if ( (a6 & 0x2000) != 0 )
                    {
                      v74 = 1;
                      FsRtlpOplockTryStartBreakAckTimeout(v69 + 9, v69[11]);
                    }
                    v78 = v65 != 0;
                  }
                  else
                  {
                    v76 = 1;
                  }
                }
              }
            }
          }
          if ( v76 )
            FsRtlpReleaseIrpsWaitingForRH(a1);
          if ( !v74 )
          {
            v70 = *(__int64 **)(a1 + 72);
            if ( v70 != (__int64 *)(a1 + 72) && (a6 & 0x2000) != 0 )
            {
              if ( v80 )
              {
LABEL_165:
                v74 = 1;
              }
              else
              {
                while ( 1 )
                {
                  v81 = v70;
                  if ( v70 == (__int64 *)(a1 + 72) )
                    break;
                  if ( !FsRtlpOplockKeysEqual(v70[3], *(_QWORD *)(v83 + 48), 0) )
                    goto LABEL_165;
                  v70 = (__int64 *)*v70;
                }
              }
            }
          }
          FsRtlpComputeShareableOplockState(a1);
          goto LABEL_168;
        }
        v33 = v32 - 8176;
        if ( !v33 )
          goto LABEL_106;
        v34 = v33 - 8256;
        if ( v34 )
        {
          v35 = v34 - 0x2000;
          if ( v35 )
          {
            v36 = v35 - 16320;
            if ( v36 )
            {
              if ( v36 == 1015808 )
              {
                if ( (unsigned int)dword_140E06C30 > 5 )
                {
                  v88 = a4;
                  v190 = &v88;
                  v191 = 4LL;
                  v89 = a6;
                  v192 = &v89;
                  v193 = 4LL;
                  v174 = a1;
                  v194 = &v174;
                  v195 = 8LL;
                  v90 = v26;
                  v196 = &v90;
                  v197 = 4LL;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_140E06C30,
                    (unsigned __int8 *)byte_14004449B,
                    0LL,
                    0LL,
                    6u,
                    v189);
                }
                v37 = 0;
                v82 = 0;
                v38 = a6 & 0x1000;
                if ( (a6 & 0x1000) != 0 )
                {
                  for ( m = *(__int64 **)(a1 + 72); ; m = (__int64 *)*m )
                  {
                    v81 = m;
                    if ( m == (__int64 *)(a1 + 72) )
                    {
                      FsRtlpComputeShareableOplockState(a1);
                      v38 = a6 & 0x1000;
                      break;
                    }
                    if ( v80 || !FsRtlpOplockKeysEqual(*(_QWORD *)(v83 + 48), m[3], a4) )
                    {
                      v37 = 1;
                      v82 = 1;
                      if ( (a4 & 0x10010000) != 0 )
                      {
                        if ( (unsigned int)dword_140E06C30 <= 3 )
                          return (unsigned int)-1073739511;
                        v91 = -1073739511;
                        v254 = &v91;
                        v255 = 4LL;
                        v92 = a4;
                        v256 = &v92;
                        v257 = 4LL;
                        v93 = a6;
                        v258 = &v93;
                        v259 = 4LL;
                        v175 = a1;
                        v260 = &v175;
                        v261 = 8LL;
                        v94 = *(_DWORD *)(a1 + 144);
                        v262 = &v94;
                        v263 = 4LL;
                        v27 = (struct _EVENT_DATA_DESCRIPTOR *)&v253;
                        v28 = byte_1400445E1;
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
                      v40 = m[6] & 0xFF0FFFFF;
                      *((_DWORD *)m + 12) = v40;
                      *((_DWORD *)m + 12) = v40 | 0x800000;
                    }
                  }
                }
                if ( (a6 & 0x2000) == 0 )
                  goto LABEL_65;
                if ( !v37 )
                {
                  if ( !v38 )
                  {
                    for ( n = *(__int64 **)(a1 + 72); ; n = (__int64 *)*n )
                    {
                      v81 = n;
                      if ( n == (__int64 *)(a1 + 72) )
                        break;
                      if ( (v80 || !FsRtlpOplockKeysEqual(*(_QWORD *)(v83 + 48), n[3], 0))
                        && ((a4 & 0x40000080) != 0x40000080
                         || (int)FsRtlpCheckSharingAgainstOplockOwner(v75, n[3], *a7, *a8) < 0) )
                      {
                        goto LABEL_186;
                      }
                    }
                  }
                  goto LABEL_65;
                }
                goto LABEL_91;
              }
              goto LABEL_183;
            }
            goto LABEL_92;
          }
          if ( (unsigned int)dword_140E06C30 > 5 )
          {
            v95 = a4;
            v363 = &v95;
            v364 = 4LL;
            v96 = a6;
            v365 = &v96;
            v366 = 4LL;
            v182 = a1;
            v367 = &v182;
            v368 = 8LL;
            v97 = v26;
            v369 = &v97;
            v370 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E06C30,
              (unsigned __int8 *)&dword_140044AF4,
              0LL,
              0LL,
              6u,
              &v362);
          }
          if ( a6 == 0x4000 )
          {
            v42 = *(_QWORD *)a1;
            *(_BYTE *)(v42 + 69) = KeAcquireQueuedSpinLock(7uLL);
            _InterlockedExchange64((volatile __int64 *)(v42 + 104), 0LL);
            KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v42 + 69));
            if ( !*(_BYTE *)(v42 + 68) )
            {
              v43 = *(_QWORD *)(v42 + 24);
              v87 = (struct _IRP *)v43;
              *(_OWORD *)v43 = 0LL;
              *(_QWORD *)(v43 + 16) = 0LL;
              *(_DWORD *)v43 = 1572865;
              *(_DWORD *)(v43 + 4) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
              *(_DWORD *)(v43 + 8) = 3;
              *(_DWORD *)(v43 + 12) |= 1u;
              *(_QWORD *)(v42 + 56) = 24LL;
              *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
              IofCompleteRequest(*(PIRP *)a1, 1);
              *(_QWORD *)a1 = 0LL;
              v44 = *(_DWORD *)(a1 + 144) & 0x20 | 0x507040;
LABEL_90:
              *(_DWORD *)(a1 + 144) = v44;
              goto LABEL_91;
            }
          }
          else if ( a6 == 0x2000 )
          {
            v45 = *(PIRP *)a1;
            if ( (a4 & 0x40000080) == 0x40000080
              && (int)FsRtlpCheckSharingAgainstOplockOwner(v75, *(_QWORD *)(a1 + 8), *a7, *a8) >= 0 )
            {
              goto LABEL_65;
            }
            v45->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
            _InterlockedExchange64((volatile __int64 *)&v45->CancelRoutine, 0LL);
            KeReleaseQueuedSpinLock(7uLL, v45->CancelIrql);
            if ( !v45->Cancel )
            {
              MasterIrp = v45->AssociatedIrp.MasterIrp;
              v87 = MasterIrp;
              *(_OWORD *)&MasterIrp->Type = 0LL;
              *(_QWORD *)&MasterIrp->Flags = 0LL;
              *(_DWORD *)&MasterIrp->Type = 1572865;
              *(_DWORD *)(&MasterIrp->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
              LODWORD(MasterIrp->MdlAddress) = 5;
              v49 = HIDWORD(MasterIrp->MdlAddress) | 1;
              HIDWORD(MasterIrp->MdlAddress) = v49;
              v50 = v83;
              if ( !*(_BYTE *)v83 )
              {
                HIDWORD(MasterIrp->MdlAddress) = v49 | 2;
                MasterIrp->Flags = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v50 + 8) + 8LL) + 20LL);
                *((_WORD *)&MasterIrp->Flags + 2) = *(_WORD *)(v50 + 26);
              }
              v45->IoStatus.Information = 24LL;
              *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
              IofCompleteRequest(*(PIRP *)a1, 1);
              *(_QWORD *)a1 = 0LL;
              v44 = *(_DWORD *)(a1 + 144) & 0x20 | 0x307040;
              goto LABEL_90;
            }
          }
          else
          {
            v51 = *(PIRP *)a1;
            v51->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
            _InterlockedExchange64((volatile __int64 *)&v51->CancelRoutine, 0LL);
            KeReleaseQueuedSpinLock(7uLL, v51->CancelIrql);
            if ( !v51->Cancel )
            {
              v52 = v51->AssociatedIrp.MasterIrp;
              v87 = v52;
              *(_OWORD *)&v52->Type = 0LL;
              *(_QWORD *)&v52->Flags = 0LL;
              *(_DWORD *)&v52->Type = 1572865;
              *(_DWORD *)(&v52->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
              HIDWORD(v52->MdlAddress) |= 1u;
              v51->IoStatus.Information = 24LL;
              *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
              IofCompleteRequest(*(PIRP *)a1, 1);
              *(_QWORD *)a1 = 0LL;
              v44 = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
              goto LABEL_90;
            }
          }
        }
        else
        {
          if ( (unsigned int)dword_140E06C30 > 5 )
          {
            v98 = a4;
            v327 = &v98;
            v328 = 4LL;
            v99 = a6;
            v329 = &v99;
            v330 = 4LL;
            v168 = a1;
            v331 = &v168;
            v332 = 8LL;
            v100 = v26;
            v333 = &v100;
            v334 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E06C30,
              (unsigned __int8 *)&dword_1400449B4,
              0LL,
              0LL,
              6u,
              &v326);
          }
          if ( (a6 & 0x5000) == 0x5000 )
          {
            v53 = *(PIRP *)a1;
            v53->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
            _InterlockedExchange64((volatile __int64 *)&v53->CancelRoutine, 0LL);
            KeReleaseQueuedSpinLock(7uLL, v53->CancelIrql);
            if ( !v53->Cancel )
            {
              v54 = v53->AssociatedIrp.MasterIrp;
              v87 = v54;
              *(_OWORD *)&v54->Type = 0LL;
              *(_QWORD *)&v54->Flags = 0LL;
              *(_DWORD *)&v54->Type = 1572865;
              *(_DWORD *)(&v54->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
              HIDWORD(v54->MdlAddress) |= 1u;
              v53->IoStatus.Information = 24LL;
              *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
              IofCompleteRequest(*(PIRP *)a1, 1);
              *(_QWORD *)a1 = 0LL;
              v44 = *(_DWORD *)(a1 + 144) & 0x20 | 0x805040;
              goto LABEL_90;
            }
          }
          else
          {
            if ( (a6 & 0x4000) == 0 )
              goto LABEL_65;
            v55 = *(PIRP *)a1;
            v55->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
            _InterlockedExchange64((volatile __int64 *)&v55->CancelRoutine, 0LL);
            KeReleaseQueuedSpinLock(7uLL, v55->CancelIrql);
            if ( !v55->Cancel )
            {
              v57 = v55->AssociatedIrp.MasterIrp;
              v87 = v57;
              *(_OWORD *)&v57->Type = 0LL;
              *(_QWORD *)&v57->Flags = 0LL;
              *(_DWORD *)&v57->Type = 1572865;
              *(_DWORD *)(&v57->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
              LODWORD(v57->MdlAddress) = 1;
              HIDWORD(v57->MdlAddress) |= 1u;
              v55->IoStatus.Information = 24LL;
              *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
              IofCompleteRequest(*(PIRP *)a1, 1);
              *(_QWORD *)a1 = 0LL;
              v44 = *(_DWORD *)(a1 + 144) & 0x20 | 0x105040;
              goto LABEL_90;
            }
          }
        }
        FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
        FsRtlpClearOwner(a1, 0LL);
        *(_BYTE *)(a1 + 32) = 0;
        if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
          *(_QWORD *)(*(_QWORD *)a1 + 56LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)a1 + 48LL) = -1073741536;
        IofCompleteRequest(*(PIRP *)a1, 1);
        *(_QWORD *)a1 = 0LL;
        ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
        while ( 1 )
        {
          v56 = *(_QWORD **)(a1 + 88);
          if ( v56 == (_QWORD *)(a1 + 88) )
            break;
          FsRtlpRemoveAndCompleteWaitingIrp(v56);
        }
        goto LABEL_168;
      }
      if ( (unsigned int)dword_140E06C30 > 5 )
      {
        v143 = a4;
        v417 = &v143;
        v418 = 4LL;
        v127 = a6;
        v419 = &v127;
        v420 = 4LL;
        v176 = a1;
        v421 = &v176;
        v422 = 8LL;
        v128 = v26;
        v423 = &v128;
        v424 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06C30,
          (unsigned __int8 *)byte_140044A88,
          0LL,
          0LL,
          6u,
          &v416);
      }
      if ( (a6 & 0x1000) != 0 )
        *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x805040;
LABEL_175:
      if ( (a6 & 0x5000) == 0 )
        goto LABEL_168;
      goto LABEL_91;
    }
    switch ( v29 )
    {
      case 1077312:
        if ( (unsigned int)dword_140E06C30 > 5 )
        {
          v154 = a4;
          v199 = &v154;
          v200 = 4LL;
          v155 = a6;
          v201 = &v155;
          v202 = 4LL;
          v185 = a1;
          v203 = &v185;
          v204 = 8LL;
          v156 = v26;
          v205 = (IRP **)&v156;
          v206 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06C30,
            (unsigned __int8 *)byte_1400448D9,
            0LL,
            0LL,
            6u,
            v198);
        }
        if ( (a6 & 0x1000) == 0 )
          goto LABEL_229;
        break;
      case 3174464:
        if ( (unsigned int)dword_140E06C30 > 5 )
        {
          v151 = a4;
          v372 = &v151;
          v373 = 4LL;
          v152 = a6;
          v374 = &v152;
          v375 = 4LL;
          v184 = a1;
          v376 = &v184;
          v377 = 8LL;
          v153 = v26;
          v378 = &v153;
          v379 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06C30,
            (unsigned __int8 *)&dword_1400447FC,
            0LL,
            0LL,
            6u,
            &v371);
        }
        if ( a6 == 0x4000 )
        {
          v73 = *(_DWORD *)(a1 + 144) & 0x20 | 0x107040;
LABEL_228:
          *(_DWORD *)(a1 + 144) = v73;
          goto LABEL_229;
        }
        if ( (a6 & 0x5000) != 0x5000 )
        {
LABEL_229:
          v46 = (__int64)v75;
          if ( (a4 & 0x40000080) != 0x40000080
            || (int)FsRtlpCheckSharingAgainstOplockOwner(v75, *(_QWORD *)(a1 + 8), *a7, *a8) < 0 )
          {
            v74 = 1;
          }
          goto LABEL_66;
        }
        break;
      case 5271616:
        if ( (unsigned int)dword_140E06C30 > 5 )
        {
          v148 = a4;
          v318 = &v148;
          v319 = 4LL;
          v149 = a6;
          v320 = &v149;
          v321 = 4LL;
          v183 = a1;
          v322 = &v183;
          v323 = 8LL;
          v150 = v26;
          v324 = &v150;
          v325 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06C30,
            (unsigned __int8 *)&word_140044946,
            0LL,
            0LL,
            6u,
            &v317);
        }
        if ( a6 == 0x2000 )
        {
          if ( (a4 & 0x40000080) == 0x40000080 )
          {
            v46 = (__int64)v75;
            if ( (int)FsRtlpCheckSharingAgainstOplockOwner(v75, *(_QWORD *)(a1 + 8), *a7, *a8) >= 0 )
            {
LABEL_66:
              if ( v74 )
              {
                v47 = *(_DWORD *)(a1 + 144);
                if ( (a4 & 1) != 0 )
                {
                  if ( (v47 & 0x10000) != 0 )
                    *(_DWORD *)(a1 + 144) = v47 | 0x20000;
                  return 264;
                }
                else
                {
                  if ( (v47 & 0x40) != 0 )
                    FsRtlpOplockTryStartBreakAckTimeout(a1 + 160, *(_QWORD *)(a1 + 176));
                  if ( v77 )
                  {
                    LOBYTE(v30) = 1;
                    FsRtlpModifyThreadPriorities(a1, 0LL, v30);
                    FsRtlpOplockSendModernAppTermination(a1, 0LL);
                  }
                  *v167 = 0;
                  return (unsigned int)FsRtlpWaitOnIrp(a1, v46, v164, a10, a11, &v187, v78, a12, v165, a14, v166);
                }
              }
              return v79;
            }
          }
          v72 = *(_DWORD *)(a1 + 144) & 0x20 | 0x107040;
        }
        else
        {
          if ( (a6 & 0x1000) == 0 )
          {
LABEL_186:
            v74 = 1;
            v46 = (__int64)v75;
            goto LABEL_66;
          }
          v72 = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
        }
        *(_DWORD *)(a1 + 144) = v72;
        goto LABEL_186;
      case 8400896:
        if ( (unsigned int)dword_140E06C30 > 5 )
        {
          v141 = a4;
          v309 = &v141;
          v310 = 4LL;
          v142 = a6;
          v311 = &v142;
          v312 = 4LL;
          v181 = a1;
          v313 = &v181;
          v314 = 8LL;
          v160 = v26;
          v315 = &v160;
          v316 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06C30,
            (unsigned __int8 *)word_140044572,
            0LL,
            0LL,
            6u,
            &v308);
        }
        if ( (a6 & 0x3000) != 0 )
        {
          if ( (a4 & 0x80u) == 0 && (a4 & 0x10010000) != 0 )
          {
            if ( (unsigned int)dword_140E06C30 > 3 )
            {
              v144 = -1073739511;
              v298 = &v144;
              v299 = 4LL;
              v145 = a4;
              v300 = &v145;
              v301 = 4LL;
              v146 = a6;
              v302 = &v146;
              v303 = 4LL;
              v167 = (_BYTE *)a1;
              v304 = &v167;
              v305 = 8LL;
              v147 = *(_DWORD *)(a1 + 144);
              v306 = &v147;
              v307 = 4LL;
              v27 = (struct _EVENT_DATA_DESCRIPTOR *)&v297;
              v28 = byte_140044A1D;
              goto LABEL_23;
            }
            return (unsigned int)-1073739511;
          }
          if ( (a6 & 0x2000) != 0 )
          {
            for ( ii = *(__int64 **)(a1 + 72); ; ii = (__int64 *)*ii )
            {
              v81 = ii;
              if ( ii == (__int64 *)(a1 + 72) )
                break;
              if ( (v80 || !FsRtlpOplockKeysEqual(*(_QWORD *)(v83 + 48), ii[3], 0))
                && ((a4 & 0x40000080) != 0x40000080
                 || (int)FsRtlpCheckSharingAgainstOplockOwner(v75, ii[3], *a7, *a8) < 0) )
              {
                if ( (a4 & 0x10010000) != 0 )
                  return (unsigned int)-1073739511;
                goto LABEL_186;
              }
            }
          }
        }
        goto LABEL_65;
      case 8409152:
        if ( (unsigned int)dword_140E06C30 > 5 )
        {
          v138 = a4;
          v408 = &v138;
          v409 = 4LL;
          v139 = a6;
          v410 = &v139;
          v411 = 4LL;
          v180 = a1;
          v412 = &v180;
          v413 = 8LL;
          v140 = v26;
          v414 = &v140;
          v415 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06C30,
            (unsigned __int8 *)word_14004486A,
            0LL,
            0LL,
            6u,
            &v407);
        }
        goto LABEL_175;
      case 8417344:
        if ( (unsigned int)dword_140E06C30 > 5 )
        {
          v135 = a4;
          v399 = &v135;
          v400 = 4LL;
          v136 = a6;
          v401 = &v136;
          v402 = 4LL;
          v179 = a1;
          v403 = &v179;
          v404 = 8LL;
          v137 = v26;
          v405 = &v137;
          v406 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06C30,
            (unsigned __int8 *)byte_1400441A5,
            0LL,
            0LL,
            6u,
            &v398);
        }
        if ( (a4 & 0x40000080) == 0x40000080
          && (int)FsRtlpCheckSharingAgainstOplockOwner(v75, *(_QWORD *)(a1 + 8), *a7, *a8) >= 0 )
        {
          goto LABEL_65;
        }
LABEL_91:
        v74 = 1;
LABEL_168:
        v46 = (__int64)v75;
        goto LABEL_66;
      default:
LABEL_183:
        if ( (v26 & 0x1000000) != 0 )
        {
          if ( (unsigned int)dword_140E06C30 > 5 )
          {
            v129 = a4;
            v381 = &v129;
            v382 = 4LL;
            v130 = a6;
            v383 = &v130;
            v384 = 4LL;
            v177 = a1;
            v385 = &v177;
            v386 = 8LL;
            v131 = v26;
            v387 = &v131;
            v388 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E06C30,
              (unsigned __int8 *)word_140044132,
              0LL,
              0LL,
              6u,
              &v380);
          }
          goto LABEL_186;
        }
        if ( (unsigned int)dword_140E06C30 > 2 )
        {
          v132 = a4;
          v390 = &v132;
          v391 = 4LL;
          v133 = a6;
          v392 = &v133;
          v393 = 4LL;
          v178 = a1;
          v394 = &v178;
          v395 = 8LL;
          v134 = v26;
          v396 = &v134;
          v397 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06C30,
            (unsigned __int8 *)word_14004428A,
            0LL,
            0LL,
            6u,
            &v389);
        }
LABEL_65:
        v46 = (__int64)v75;
        goto LABEL_66;
    }
    v73 = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
    goto LABEL_228;
  }
  if ( v17 )
  {
    v17->IoStatus.Status = -1073741597;
    IofCompleteRequest(v17, 1);
  }
  if ( (unsigned int)dword_140E06C30 > 3 )
  {
    v86 = -1073741597;
    v199 = &v86;
    v200 = 4LL;
    v85 = a4;
    v201 = &v85;
    v202 = 4LL;
    v84 = a6;
    v203 = (__int64 *)&v84;
    v204 = 4LL;
    v75 = (IRP *)a1;
    v205 = &v75;
    v206 = 8LL;
    v80 = *(_DWORD *)(a1 + 144);
    v207 = &v80;
    v208 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06C30,
      (unsigned __int8 *)&dword_140045154,
      0LL,
      0LL,
      7u,
      v198);
  }
  return 3221225699LL;
}
