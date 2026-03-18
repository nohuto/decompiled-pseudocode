/*
 * XREFs of FsRtlpOplockBreakByCacheFlags @ 0x1404E1CD0
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1403EEA60 (FsRtlCheckOplockEx2.c)
 *     FsRtlOplockBreakToNoneEx @ 0x14057D320 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlCheckUpperOplock @ 0x1406FF010 (FsRtlCheckUpperOplock.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x1409F2950 (FsRtlCheckOplockForFsFilterCallback.c)
 *     FsRtlOplockBreakH2 @ 0x140A2FA90 (FsRtlOplockBreakH2.c)
 * Callees:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpOplockKeysEqual @ 0x1403EE550 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x14042513C (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140425440 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     FsRtlpWaitOnIrp @ 0x140427034 (FsRtlpWaitOnIrp.c)
 *     FsRtlpClearOwner @ 0x140465220 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047F2B8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1404953E4 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404A9C7C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpCheckSharingAgainstOplockOwner @ 0x1404AED4C (FsRtlpCheckSharingAgainstOplockOwner.c)
 *     FsRtlpComputeShareableOplockState @ 0x1404E19F4 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404E51D4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057C46C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_5645_7108__private_IsEnabledDeviceUsageNoInline @ 0x14057D1B8 (Feature_5645_7108__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x140700750 (FsRtlpOplockTryStartBreakAckTimeout.c)
 */

__int64 __fastcall FsRtlpOplockBreakByCacheFlags(
        __int64 a1,
        __int64 a2,
        PIRP a3,
        unsigned int a4,
        int a5,
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
  __int64 *v18; // rdx
  unsigned int v19; // edi
  int v21; // eax
  int v22; // r12d
  __int64 v23; // r13
  struct _EVENT_DATA_DESCRIPTOR *v24; // rax
  unsigned __int8 *v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  PIRP v30; // rdi
  __int64 v31; // rcx
  struct _IRP *v32; // rcx
  __int64 v33; // rcx
  PIRP v34; // rdi
  struct _IRP *v35; // rcx
  __int64 v36; // rcx
  char v37; // r12
  int v38; // eax
  PVOID *v39; // rsi
  int v40; // r13d
  unsigned int v41; // eax
  PVOID *v42; // rsi
  PVOID *j; // rsi
  PVOID *v44; // rsi
  PVOID *v45; // r13
  PVOID *v46; // rsi
  int v47; // edx
  __int16 v48; // cx
  int v49; // eax
  PVOID *k; // rsi
  unsigned int v51; // eax
  char v52; // al
  PVOID *v53; // rsi
  PVOID *v54; // r13
  PVOID *v55; // rsi
  PVOID *v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rcx
  __int64 v59; // rcx
  PIRP v60; // rsi
  struct _IRP *v61; // rdx
  int v62; // eax
  __int64 v63; // rcx
  PIRP v64; // rdi
  __int64 v65; // rcx
  struct _IRP *MasterIrp; // rcx
  __int64 v67; // rcx
  bool v68; // zf
  PIRP v69; // rsi
  int v70; // eax
  PVOID *i; // rsi
  int v72; // eax
  bool v73; // [rsp+60h] [rbp-CD8h]
  PIRP Irp; // [rsp+68h] [rbp-CD0h] BYREF
  unsigned int v75; // [rsp+70h] [rbp-CC8h] BYREF
  char v76; // [rsp+74h] [rbp-CC4h]
  char v77; // [rsp+75h] [rbp-CC3h]
  char v78; // [rsp+76h] [rbp-CC2h]
  int v79; // [rsp+78h] [rbp-CC0h] BYREF
  PVOID *v80; // [rsp+80h] [rbp-CB8h]
  char v81; // [rsp+88h] [rbp-CB0h]
  __int64 v82; // [rsp+90h] [rbp-CA8h] BYREF
  int v83; // [rsp+98h] [rbp-CA0h] BYREF
  int v84; // [rsp+9Ch] [rbp-C9Ch] BYREF
  unsigned int v85; // [rsp+A0h] [rbp-C98h]
  struct _IRP *v86; // [rsp+A8h] [rbp-C90h]
  int v87; // [rsp+B0h] [rbp-C88h] BYREF
  unsigned int v88; // [rsp+B4h] [rbp-C84h] BYREF
  int v89; // [rsp+B8h] [rbp-C80h] BYREF
  int v90; // [rsp+BCh] [rbp-C7Ch] BYREF
  unsigned int v91; // [rsp+C0h] [rbp-C78h] BYREF
  int v92; // [rsp+C4h] [rbp-C74h] BYREF
  int v93; // [rsp+C8h] [rbp-C70h] BYREF
  unsigned int v94; // [rsp+CCh] [rbp-C6Ch] BYREF
  int v95; // [rsp+D0h] [rbp-C68h] BYREF
  int v96; // [rsp+D4h] [rbp-C64h] BYREF
  int v97; // [rsp+D8h] [rbp-C60h] BYREF
  unsigned int v98; // [rsp+DCh] [rbp-C5Ch] BYREF
  int v99; // [rsp+E0h] [rbp-C58h] BYREF
  int v100; // [rsp+E4h] [rbp-C54h] BYREF
  unsigned int v101; // [rsp+E8h] [rbp-C50h] BYREF
  int v102; // [rsp+ECh] [rbp-C4Ch] BYREF
  int v103; // [rsp+F0h] [rbp-C48h] BYREF
  int v104; // [rsp+F4h] [rbp-C44h] BYREF
  unsigned int v105; // [rsp+F8h] [rbp-C40h] BYREF
  int v106; // [rsp+FCh] [rbp-C3Ch] BYREF
  int v107; // [rsp+100h] [rbp-C38h] BYREF
  unsigned int v108; // [rsp+104h] [rbp-C34h] BYREF
  int v109; // [rsp+108h] [rbp-C30h] BYREF
  int v110; // [rsp+10Ch] [rbp-C2Ch] BYREF
  unsigned int v111; // [rsp+110h] [rbp-C28h] BYREF
  int v112; // [rsp+114h] [rbp-C24h] BYREF
  int v113; // [rsp+118h] [rbp-C20h] BYREF
  int v114; // [rsp+11Ch] [rbp-C1Ch]
  int v115; // [rsp+120h] [rbp-C18h] BYREF
  unsigned int v116; // [rsp+124h] [rbp-C14h] BYREF
  int v117; // [rsp+128h] [rbp-C10h] BYREF
  int v118; // [rsp+12Ch] [rbp-C0Ch] BYREF
  int v119; // [rsp+130h] [rbp-C08h] BYREF
  unsigned int v120; // [rsp+134h] [rbp-C04h] BYREF
  int v121; // [rsp+138h] [rbp-C00h] BYREF
  int v122; // [rsp+13Ch] [rbp-BFCh] BYREF
  int v123; // [rsp+140h] [rbp-BF8h] BYREF
  unsigned int v124; // [rsp+144h] [rbp-BF4h] BYREF
  int v125; // [rsp+148h] [rbp-BF0h] BYREF
  int v126; // [rsp+14Ch] [rbp-BECh] BYREF
  unsigned int v127; // [rsp+150h] [rbp-BE8h] BYREF
  int v128; // [rsp+154h] [rbp-BE4h] BYREF
  unsigned int v129; // [rsp+158h] [rbp-BE0h] BYREF
  int v130; // [rsp+15Ch] [rbp-BDCh] BYREF
  int v131; // [rsp+160h] [rbp-BD8h] BYREF
  unsigned int v132; // [rsp+164h] [rbp-BD4h] BYREF
  int v133; // [rsp+168h] [rbp-BD0h] BYREF
  int v134; // [rsp+16Ch] [rbp-BCCh] BYREF
  unsigned int v135; // [rsp+170h] [rbp-BC8h] BYREF
  int v136; // [rsp+174h] [rbp-BC4h] BYREF
  int v137; // [rsp+178h] [rbp-BC0h] BYREF
  unsigned int v138; // [rsp+17Ch] [rbp-BBCh] BYREF
  int v139; // [rsp+180h] [rbp-BB8h] BYREF
  int v140; // [rsp+184h] [rbp-BB4h] BYREF
  unsigned int v141; // [rsp+188h] [rbp-BB0h] BYREF
  int v142; // [rsp+18Ch] [rbp-BACh] BYREF
  int v143; // [rsp+190h] [rbp-BA8h] BYREF
  int v144; // [rsp+194h] [rbp-BA4h] BYREF
  int v145; // [rsp+198h] [rbp-BA0h] BYREF
  int v146; // [rsp+19Ch] [rbp-B9Ch] BYREF
  int v147; // [rsp+1A0h] [rbp-B98h] BYREF
  unsigned int v148; // [rsp+1A4h] [rbp-B94h] BYREF
  int v149; // [rsp+1A8h] [rbp-B90h] BYREF
  int v150; // [rsp+1ACh] [rbp-B8Ch] BYREF
  unsigned int v151; // [rsp+1B0h] [rbp-B88h] BYREF
  int v152; // [rsp+1B4h] [rbp-B84h] BYREF
  int v153; // [rsp+1B8h] [rbp-B80h] BYREF
  unsigned int v154; // [rsp+1BCh] [rbp-B7Ch] BYREF
  int v155; // [rsp+1C0h] [rbp-B78h] BYREF
  int v156; // [rsp+1C4h] [rbp-B74h] BYREF
  unsigned int v157; // [rsp+1C8h] [rbp-B70h] BYREF
  int v158; // [rsp+1CCh] [rbp-B6Ch] BYREF
  int v159; // [rsp+1D0h] [rbp-B68h] BYREF
  int v160; // [rsp+1D4h] [rbp-B64h] BYREF
  unsigned int v161; // [rsp+1D8h] [rbp-B60h] BYREF
  unsigned int v162; // [rsp+1DCh] [rbp-B5Ch] BYREF
  unsigned int v163; // [rsp+1E0h] [rbp-B58h] BYREF
  int v164; // [rsp+1E4h] [rbp-B54h] BYREF
  int v165; // [rsp+1E8h] [rbp-B50h] BYREF
  __int64 v166; // [rsp+1F0h] [rbp-B48h] BYREF
  __int64 v167; // [rsp+1F8h] [rbp-B40h] BYREF
  char *v168; // [rsp+200h] [rbp-B38h] BYREF
  _BYTE *v169; // [rsp+208h] [rbp-B30h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+210h] [rbp-B28h] BYREF
  __int64 v171; // [rsp+220h] [rbp-B18h] BYREF
  __int64 v172; // [rsp+228h] [rbp-B10h] BYREF
  __int64 v173; // [rsp+230h] [rbp-B08h] BYREF
  __int64 v174; // [rsp+238h] [rbp-B00h] BYREF
  __int64 v175; // [rsp+240h] [rbp-AF8h] BYREF
  __int64 v176; // [rsp+248h] [rbp-AF0h] BYREF
  __int64 v177; // [rsp+250h] [rbp-AE8h] BYREF
  __int64 v178; // [rsp+258h] [rbp-AE0h] BYREF
  __int64 v179; // [rsp+260h] [rbp-AD8h] BYREF
  __int64 v180; // [rsp+268h] [rbp-AD0h] BYREF
  __int64 v181; // [rsp+270h] [rbp-AC8h] BYREF
  __int64 v182; // [rsp+278h] [rbp-AC0h] BYREF
  __int64 v183; // [rsp+280h] [rbp-AB8h] BYREF
  __int64 v184; // [rsp+288h] [rbp-AB0h] BYREF
  __int64 v185; // [rsp+290h] [rbp-AA8h] BYREF
  __int64 v186; // [rsp+298h] [rbp-AA0h] BYREF
  __int64 v187; // [rsp+2A0h] [rbp-A98h] BYREF
  __int64 v188; // [rsp+2A8h] [rbp-A90h] BYREF
  __int64 v189; // [rsp+2B0h] [rbp-A88h] BYREF
  __int64 v190; // [rsp+2B8h] [rbp-A80h] BYREF
  EVENT_DESCRIPTOR v191; // [rsp+2C0h] [rbp-A78h] BYREF
  __int128 v192; // [rsp+2D0h] [rbp-A68h] BYREF
  __int64 v193; // [rsp+2E0h] [rbp-A58h]
  struct _EVENT_DATA_DESCRIPTOR v194; // [rsp+2F0h] [rbp-A48h] BYREF
  char *v195; // [rsp+300h] [rbp-A38h]
  int v196; // [rsp+308h] [rbp-A30h]
  int v197; // [rsp+30Ch] [rbp-A2Ch]
  int *v198; // [rsp+310h] [rbp-A28h]
  __int64 v199; // [rsp+318h] [rbp-A20h]
  unsigned int *v200; // [rsp+320h] [rbp-A18h]
  __int64 v201; // [rsp+328h] [rbp-A10h]
  __int64 *v202; // [rsp+330h] [rbp-A08h]
  __int64 v203; // [rsp+338h] [rbp-A00h]
  PIRP *p_Irp; // [rsp+340h] [rbp-9F8h]
  __int64 v205; // [rsp+348h] [rbp-9F0h]
  int *v206; // [rsp+350h] [rbp-9E8h]
  __int64 v207; // [rsp+358h] [rbp-9E0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+360h] [rbp-9D8h] BYREF
  int *v209; // [rsp+370h] [rbp-9C8h]
  int v210; // [rsp+378h] [rbp-9C0h]
  int v211; // [rsp+37Ch] [rbp-9BCh]
  unsigned int *v212; // [rsp+380h] [rbp-9B8h]
  __int64 v213; // [rsp+388h] [rbp-9B0h]
  int *v214; // [rsp+390h] [rbp-9A8h]
  __int64 v215; // [rsp+398h] [rbp-9A0h]
  __int64 *v216; // [rsp+3A0h] [rbp-998h]
  __int64 v217; // [rsp+3A8h] [rbp-990h]
  int *v218; // [rsp+3B0h] [rbp-988h]
  __int64 v219; // [rsp+3B8h] [rbp-980h]
  char v220; // [rsp+3C0h] [rbp-978h] BYREF
  int *v221; // [rsp+3E0h] [rbp-958h]
  __int64 v222; // [rsp+3E8h] [rbp-950h]
  unsigned int *v223; // [rsp+3F0h] [rbp-948h]
  __int64 v224; // [rsp+3F8h] [rbp-940h]
  __int64 *v225; // [rsp+400h] [rbp-938h]
  __int64 v226; // [rsp+408h] [rbp-930h]
  EVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+410h] [rbp-928h]
  __int64 v228; // [rsp+418h] [rbp-920h]
  PIRP *v229; // [rsp+420h] [rbp-918h]
  __int64 v230; // [rsp+428h] [rbp-910h]
  struct _EVENT_DATA_DESCRIPTOR v231; // [rsp+430h] [rbp-908h] BYREF
  int *v232; // [rsp+450h] [rbp-8E8h]
  __int64 v233; // [rsp+458h] [rbp-8E0h]
  unsigned int *v234; // [rsp+460h] [rbp-8D8h]
  __int64 v235; // [rsp+468h] [rbp-8D0h]
  int *v236; // [rsp+470h] [rbp-8C8h]
  __int64 v237; // [rsp+478h] [rbp-8C0h]
  __int64 *v238; // [rsp+480h] [rbp-8B8h]
  __int64 v239; // [rsp+488h] [rbp-8B0h]
  int *v240; // [rsp+490h] [rbp-8A8h]
  __int64 v241; // [rsp+498h] [rbp-8A0h]
  char v242; // [rsp+4A0h] [rbp-898h] BYREF
  int *v243; // [rsp+4C0h] [rbp-878h]
  __int64 v244; // [rsp+4C8h] [rbp-870h]
  int *v245; // [rsp+4D0h] [rbp-868h]
  __int64 v246; // [rsp+4D8h] [rbp-860h]
  int *v247; // [rsp+4E0h] [rbp-858h]
  __int64 v248; // [rsp+4E8h] [rbp-850h]
  __int64 *v249; // [rsp+4F0h] [rbp-848h]
  __int64 v250; // [rsp+4F8h] [rbp-840h]
  unsigned int *v251; // [rsp+500h] [rbp-838h]
  __int64 v252; // [rsp+508h] [rbp-830h]
  struct _EVENT_DATA_DESCRIPTOR v253; // [rsp+510h] [rbp-828h] BYREF
  int *v254; // [rsp+530h] [rbp-808h]
  __int64 v255; // [rsp+538h] [rbp-800h]
  unsigned int *v256; // [rsp+540h] [rbp-7F8h]
  __int64 v257; // [rsp+548h] [rbp-7F0h]
  int *v258; // [rsp+550h] [rbp-7E8h]
  __int64 v259; // [rsp+558h] [rbp-7E0h]
  __int64 *v260; // [rsp+560h] [rbp-7D8h]
  __int64 v261; // [rsp+568h] [rbp-7D0h]
  int *v262; // [rsp+570h] [rbp-7C8h]
  __int64 v263; // [rsp+578h] [rbp-7C0h]
  struct _EVENT_DATA_DESCRIPTOR v264; // [rsp+580h] [rbp-7B8h] BYREF
  int *v265; // [rsp+5A0h] [rbp-798h]
  __int64 v266; // [rsp+5A8h] [rbp-790h]
  unsigned int *v267; // [rsp+5B0h] [rbp-788h]
  __int64 v268; // [rsp+5B8h] [rbp-780h]
  int *v269; // [rsp+5C0h] [rbp-778h]
  __int64 v270; // [rsp+5C8h] [rbp-770h]
  __int64 *v271; // [rsp+5D0h] [rbp-768h]
  __int64 v272; // [rsp+5D8h] [rbp-760h]
  int *v273; // [rsp+5E0h] [rbp-758h]
  __int64 v274; // [rsp+5E8h] [rbp-750h]
  struct _EVENT_DATA_DESCRIPTOR v275; // [rsp+5F0h] [rbp-748h] BYREF
  int *v276; // [rsp+610h] [rbp-728h]
  __int64 v277; // [rsp+618h] [rbp-720h]
  unsigned int *v278; // [rsp+620h] [rbp-718h]
  __int64 v279; // [rsp+628h] [rbp-710h]
  int *v280; // [rsp+630h] [rbp-708h]
  __int64 v281; // [rsp+638h] [rbp-700h]
  __int64 *v282; // [rsp+640h] [rbp-6F8h]
  __int64 v283; // [rsp+648h] [rbp-6F0h]
  int *v284; // [rsp+650h] [rbp-6E8h]
  __int64 v285; // [rsp+658h] [rbp-6E0h]
  struct _EVENT_DATA_DESCRIPTOR v286; // [rsp+660h] [rbp-6D8h] BYREF
  int *v287; // [rsp+680h] [rbp-6B8h]
  __int64 v288; // [rsp+688h] [rbp-6B0h]
  unsigned int *v289; // [rsp+690h] [rbp-6A8h]
  __int64 v290; // [rsp+698h] [rbp-6A0h]
  int *v291; // [rsp+6A0h] [rbp-698h]
  __int64 v292; // [rsp+6A8h] [rbp-690h]
  __int64 *v293; // [rsp+6B0h] [rbp-688h]
  __int64 v294; // [rsp+6B8h] [rbp-680h]
  int *v295; // [rsp+6C0h] [rbp-678h]
  __int64 v296; // [rsp+6C8h] [rbp-670h]
  struct _EVENT_DATA_DESCRIPTOR v297; // [rsp+6D0h] [rbp-668h] BYREF
  int *v298; // [rsp+6F0h] [rbp-648h]
  __int64 v299; // [rsp+6F8h] [rbp-640h]
  unsigned int *v300; // [rsp+700h] [rbp-638h]
  __int64 v301; // [rsp+708h] [rbp-630h]
  int *v302; // [rsp+710h] [rbp-628h]
  __int64 v303; // [rsp+718h] [rbp-620h]
  char **v304; // [rsp+720h] [rbp-618h]
  __int64 v305; // [rsp+728h] [rbp-610h]
  int *v306; // [rsp+730h] [rbp-608h]
  __int64 v307; // [rsp+738h] [rbp-600h]
  struct _EVENT_DATA_DESCRIPTOR v308; // [rsp+740h] [rbp-5F8h] BYREF
  int *v309; // [rsp+760h] [rbp-5D8h]
  __int64 v310; // [rsp+768h] [rbp-5D0h]
  unsigned int *v311; // [rsp+770h] [rbp-5C8h]
  __int64 v312; // [rsp+778h] [rbp-5C0h]
  int *v313; // [rsp+780h] [rbp-5B8h]
  __int64 v314; // [rsp+788h] [rbp-5B0h]
  _BYTE **v315; // [rsp+790h] [rbp-5A8h]
  __int64 v316; // [rsp+798h] [rbp-5A0h]
  int *v317; // [rsp+7A0h] [rbp-598h]
  __int64 v318; // [rsp+7A8h] [rbp-590h]
  struct _EVENT_DATA_DESCRIPTOR v319; // [rsp+7B0h] [rbp-588h] BYREF
  unsigned int *v320; // [rsp+7D0h] [rbp-568h]
  __int64 v321; // [rsp+7D8h] [rbp-560h]
  int *v322; // [rsp+7E0h] [rbp-558h]
  __int64 v323; // [rsp+7E8h] [rbp-550h]
  __int64 *v324; // [rsp+7F0h] [rbp-548h]
  __int64 v325; // [rsp+7F8h] [rbp-540h]
  int *v326; // [rsp+800h] [rbp-538h]
  __int64 v327; // [rsp+808h] [rbp-530h]
  struct _EVENT_DATA_DESCRIPTOR v328; // [rsp+810h] [rbp-528h] BYREF
  unsigned int *v329; // [rsp+830h] [rbp-508h]
  __int64 v330; // [rsp+838h] [rbp-500h]
  int *v331; // [rsp+840h] [rbp-4F8h]
  __int64 v332; // [rsp+848h] [rbp-4F0h]
  __int64 *v333; // [rsp+850h] [rbp-4E8h]
  __int64 v334; // [rsp+858h] [rbp-4E0h]
  int *v335; // [rsp+860h] [rbp-4D8h]
  __int64 v336; // [rsp+868h] [rbp-4D0h]
  struct _EVENT_DATA_DESCRIPTOR v337; // [rsp+870h] [rbp-4C8h] BYREF
  unsigned int *v338; // [rsp+890h] [rbp-4A8h]
  __int64 v339; // [rsp+898h] [rbp-4A0h]
  int *v340; // [rsp+8A0h] [rbp-498h]
  __int64 v341; // [rsp+8A8h] [rbp-490h]
  __int64 *v342; // [rsp+8B0h] [rbp-488h]
  __int64 v343; // [rsp+8B8h] [rbp-480h]
  int *v344; // [rsp+8C0h] [rbp-478h]
  __int64 v345; // [rsp+8C8h] [rbp-470h]
  struct _EVENT_DATA_DESCRIPTOR v346; // [rsp+8D0h] [rbp-468h] BYREF
  unsigned int *v347; // [rsp+8F0h] [rbp-448h]
  __int64 v348; // [rsp+8F8h] [rbp-440h]
  int *v349; // [rsp+900h] [rbp-438h]
  __int64 v350; // [rsp+908h] [rbp-430h]
  __int64 *v351; // [rsp+910h] [rbp-428h]
  __int64 v352; // [rsp+918h] [rbp-420h]
  int *v353; // [rsp+920h] [rbp-418h]
  __int64 v354; // [rsp+928h] [rbp-410h]
  struct _EVENT_DATA_DESCRIPTOR v355; // [rsp+930h] [rbp-408h] BYREF
  unsigned int *v356; // [rsp+950h] [rbp-3E8h]
  __int64 v357; // [rsp+958h] [rbp-3E0h]
  int *v358; // [rsp+960h] [rbp-3D8h]
  __int64 v359; // [rsp+968h] [rbp-3D0h]
  __int64 *v360; // [rsp+970h] [rbp-3C8h]
  __int64 v361; // [rsp+978h] [rbp-3C0h]
  int *v362; // [rsp+980h] [rbp-3B8h]
  __int64 v363; // [rsp+988h] [rbp-3B0h]
  struct _EVENT_DATA_DESCRIPTOR v364; // [rsp+990h] [rbp-3A8h] BYREF
  unsigned int *v365; // [rsp+9B0h] [rbp-388h]
  __int64 v366; // [rsp+9B8h] [rbp-380h]
  int *v367; // [rsp+9C0h] [rbp-378h]
  __int64 v368; // [rsp+9C8h] [rbp-370h]
  __int64 *v369; // [rsp+9D0h] [rbp-368h]
  __int64 v370; // [rsp+9D8h] [rbp-360h]
  int *v371; // [rsp+9E0h] [rbp-358h]
  __int64 v372; // [rsp+9E8h] [rbp-350h]
  struct _EVENT_DATA_DESCRIPTOR v373; // [rsp+9F0h] [rbp-348h] BYREF
  unsigned int *v374; // [rsp+A10h] [rbp-328h]
  __int64 v375; // [rsp+A18h] [rbp-320h]
  int *v376; // [rsp+A20h] [rbp-318h]
  __int64 v377; // [rsp+A28h] [rbp-310h]
  __int64 *v378; // [rsp+A30h] [rbp-308h]
  __int64 v379; // [rsp+A38h] [rbp-300h]
  int *v380; // [rsp+A40h] [rbp-2F8h]
  __int64 v381; // [rsp+A48h] [rbp-2F0h]
  struct _EVENT_DATA_DESCRIPTOR v382; // [rsp+A50h] [rbp-2E8h] BYREF
  unsigned int *v383; // [rsp+A70h] [rbp-2C8h]
  __int64 v384; // [rsp+A78h] [rbp-2C0h]
  int *v385; // [rsp+A80h] [rbp-2B8h]
  __int64 v386; // [rsp+A88h] [rbp-2B0h]
  __int64 *v387; // [rsp+A90h] [rbp-2A8h]
  __int64 v388; // [rsp+A98h] [rbp-2A0h]
  int *v389; // [rsp+AA0h] [rbp-298h]
  __int64 v390; // [rsp+AA8h] [rbp-290h]
  struct _EVENT_DATA_DESCRIPTOR v391; // [rsp+AB0h] [rbp-288h] BYREF
  unsigned int *v392; // [rsp+AD0h] [rbp-268h]
  __int64 v393; // [rsp+AD8h] [rbp-260h]
  int *v394; // [rsp+AE0h] [rbp-258h]
  __int64 v395; // [rsp+AE8h] [rbp-250h]
  __int64 *v396; // [rsp+AF0h] [rbp-248h]
  __int64 v397; // [rsp+AF8h] [rbp-240h]
  int *v398; // [rsp+B00h] [rbp-238h]
  __int64 v399; // [rsp+B08h] [rbp-230h]
  struct _EVENT_DATA_DESCRIPTOR v400; // [rsp+B10h] [rbp-228h] BYREF
  unsigned int *v401; // [rsp+B30h] [rbp-208h]
  __int64 v402; // [rsp+B38h] [rbp-200h]
  int *v403; // [rsp+B40h] [rbp-1F8h]
  __int64 v404; // [rsp+B48h] [rbp-1F0h]
  __int64 *v405; // [rsp+B50h] [rbp-1E8h]
  __int64 v406; // [rsp+B58h] [rbp-1E0h]
  int *v407; // [rsp+B60h] [rbp-1D8h]
  __int64 v408; // [rsp+B68h] [rbp-1D0h]
  struct _EVENT_DATA_DESCRIPTOR v409; // [rsp+B70h] [rbp-1C8h] BYREF
  unsigned int *v410; // [rsp+B90h] [rbp-1A8h]
  __int64 v411; // [rsp+B98h] [rbp-1A0h]
  int *v412; // [rsp+BA0h] [rbp-198h]
  __int64 v413; // [rsp+BA8h] [rbp-190h]
  __int64 *v414; // [rsp+BB0h] [rbp-188h]
  __int64 v415; // [rsp+BB8h] [rbp-180h]
  int *v416; // [rsp+BC0h] [rbp-178h]
  __int64 v417; // [rsp+BC8h] [rbp-170h]
  struct _EVENT_DATA_DESCRIPTOR v418; // [rsp+BD0h] [rbp-168h] BYREF
  unsigned int *v419; // [rsp+BF0h] [rbp-148h]
  __int64 v420; // [rsp+BF8h] [rbp-140h]
  int *v421; // [rsp+C00h] [rbp-138h]
  __int64 v422; // [rsp+C08h] [rbp-130h]
  __int64 *v423; // [rsp+C10h] [rbp-128h]
  __int64 v424; // [rsp+C18h] [rbp-120h]
  int *v425; // [rsp+C20h] [rbp-118h]
  __int64 v426; // [rsp+C28h] [rbp-110h]
  struct _EVENT_DATA_DESCRIPTOR v427; // [rsp+C30h] [rbp-108h] BYREF
  unsigned int *v428; // [rsp+C50h] [rbp-E8h]
  __int64 v429; // [rsp+C58h] [rbp-E0h]
  int *v430; // [rsp+C60h] [rbp-D8h]
  __int64 v431; // [rsp+C68h] [rbp-D0h]
  __int64 *v432; // [rsp+C70h] [rbp-C8h]
  __int64 v433; // [rsp+C78h] [rbp-C0h]
  int *v434; // [rsp+C80h] [rbp-B8h]
  __int64 v435; // [rsp+C88h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR v436; // [rsp+C90h] [rbp-A8h] BYREF
  unsigned int *v437; // [rsp+CB0h] [rbp-88h]
  __int64 v438; // [rsp+CB8h] [rbp-80h]
  int *v439; // [rsp+CC0h] [rbp-78h]
  __int64 v440; // [rsp+CC8h] [rbp-70h]
  __int64 *v441; // [rsp+CD0h] [rbp-68h]
  __int64 v442; // [rsp+CD8h] [rbp-60h]
  int *v443; // [rsp+CE0h] [rbp-58h]
  __int64 v444; // [rsp+CE8h] [rbp-50h]

  Irp = a3;
  v82 = a2;
  v166 = a9;
  v167 = a13;
  v169 = a15;
  v168 = a16;
  v18 = 0LL;
  v19 = 0;
  v75 = 0;
  v192 = 0LL;
  v193 = 0LL;
  v73 = 0;
  v76 = 0;
  v78 = 0;
  v77 = 1;
  v79 = a4 & 8;
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v162 = a4;
    v212 = &v162;
    v213 = 4LL;
    v164 = a6;
    v214 = &v164;
    v215 = 4LL;
    v176 = a1;
    v216 = &v176;
    v217 = 8LL;
    v165 = *(_DWORD *)(a1 + 144);
    v218 = &v165;
    v219 = 4LL;
    *(_DWORD *)&v191.Id = 184549376;
    *(_DWORD *)&v191.Level = 261;
    v191.Keyword = 0LL;
    UserData.Ptr = (ULONGLONG)off_140E06C38;
    UserData.Size = *(unsigned __int16 *)off_140E06C38;
    UserData.Reserved = 2;
    v209 = &dword_1400446E4;
    v210 = 84;
    v211 = 1;
    v85 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteEx(RegHandle, &v191, 0LL, 0, 0LL, 0LL, 6u, &UserData);
    v19 = v75;
    a3 = Irp;
    v18 = 0LL;
  }
  if ( a6 != 28672 && a6 != 20480 && a6 != 0x4000 && a6 != 0x2000 )
  {
    if ( a3 )
    {
      a3->IoStatus.Status = -1073741597;
      IofCompleteRequest(a3, 1);
    }
    if ( (unsigned int)dword_140E06C30 > 3 )
    {
      v79 = -1073741597;
      v198 = &v79;
      v199 = 4LL;
      v75 = a4;
      v200 = &v75;
      v201 = 4LL;
      v83 = a6;
      v202 = (__int64 *)&v83;
      v203 = 4LL;
      Irp = (PIRP)a1;
      p_Irp = &Irp;
      v205 = 8LL;
      v84 = *(_DWORD *)(a1 + 144);
      v206 = &v84;
      v207 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 515;
      EventDescriptor.Keyword = 0LL;
      v194.Ptr = (ULONGLONG)off_140E06C38;
      v194.Size = *(unsigned __int16 *)off_140E06C38;
      v194.Reserved = 2;
      v195 = &byte_1400440CF;
      v196 = 95;
      v197 = 1;
      v85 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwWriteEx(RegHandle, &EventDescriptor, 0LL, 0, 0LL, 0LL, 7u, &v194);
    }
    return 3221225699LL;
  }
  if ( !a1 )
    return v19;
  v21 = *(_DWORD *)(a1 + 144);
  if ( v21 == 1 || (v21 & a6) == 0 )
  {
    if ( (unsigned int)dword_140E06C30 > 5 )
    {
      v160 = 0;
      v221 = &v160;
      v222 = 4LL;
      v161 = a4;
      v223 = &v161;
      v224 = 4LL;
      LODWORD(v82) = a6;
      v225 = &v82;
      v226 = 4LL;
      *(_QWORD *)&EventDescriptor.Id = a1;
      p_EventDescriptor = &EventDescriptor;
      v228 = 8LL;
      LODWORD(Irp) = v21;
      v229 = &Irp;
      v230 = 4LL;
      v24 = (struct _EVENT_DATA_DESCRIPTOR *)&v220;
      v25 = (unsigned __int8 *)word_14004404A;
      goto LABEL_269;
    }
    return 0;
  }
  v22 = v79;
  v23 = v82;
  if ( !v79 && FsRtlpOplockKeysEqual(*(_QWORD *)(v82 + 48), *(_QWORD *)(a1 + 8), a4) )
  {
    if ( (unsigned int)dword_140E06C30 > 5 )
    {
      v84 = 0;
      v243 = &v84;
      v244 = 4LL;
      v83 = a4;
      v245 = &v83;
      v246 = 4LL;
      v79 = a6;
      v247 = &v79;
      v248 = 4LL;
      v177 = a1;
      v249 = &v177;
      v250 = 8LL;
      v75 = *(_DWORD *)(a1 + 144);
      v251 = &v75;
      v252 = 4LL;
      v24 = (struct _EVENT_DATA_DESCRIPTOR *)&v242;
      v25 = (unsigned __int8 *)byte_140043FD3;
LABEL_269:
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, v25, 0LL, 0LL, 7u, v24);
      return 0;
    }
    return 0;
  }
  v26 = *(unsigned int *)(a1 + 144);
  if ( (v26 & 0x40) != 0 && (a4 & 0x10010000) != 0 )
  {
    if ( (unsigned int)dword_140E06C30 > 3 )
    {
      v19 = -1073739511;
      v87 = -1073739511;
      v254 = &v87;
      v255 = 4LL;
      v88 = a4;
      v256 = &v88;
      v257 = 4LL;
      v89 = a6;
      v258 = &v89;
      v259 = 4LL;
      v178 = a1;
      v260 = &v178;
      v261 = 8LL;
      v90 = v26;
      v262 = &v90;
      v263 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06C30,
        (unsigned __int8 *)&unk_140043F68,
        0LL,
        0LL,
        7u,
        &v253);
      return v19;
    }
    return (unsigned int)-1073739511;
  }
  v27 = v26 & 0x1F0FFDF;
  if ( ((unsigned int)v26 & 0x1F0FFDF) > 0x105040 )
  {
    if ( v27 > 0x803000 )
    {
      if ( v27 == 8409152 )
      {
        if ( (unsigned int)dword_140E06C30 > 5 )
        {
          v157 = a4;
          v198 = (int *)&v157;
          v199 = 4LL;
          v158 = a6;
          v200 = (unsigned int *)&v158;
          v201 = 4LL;
          v189 = a1;
          v202 = &v189;
          v203 = 8LL;
          v159 = v26;
          p_Irp = (PIRP *)&v159;
          v205 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06C30,
            (unsigned __int8 *)&byte_1400439FF,
            0LL,
            0LL,
            6u,
            &v194);
        }
        v26 = 1LL;
        v73 = (a6 & 0x5000) != 0;
        goto LABEL_255;
      }
      if ( v27 != 8417344 )
        goto LABEL_245;
      if ( (unsigned int)dword_140E06C30 > 5 )
      {
        v154 = a4;
        v347 = &v154;
        v348 = 4LL;
        v155 = a6;
        v349 = &v155;
        v350 = 4LL;
        v188 = a1;
        v351 = &v188;
        v352 = 8LL;
        v156 = v26;
        v353 = &v156;
        v354 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06C30,
          (unsigned __int8 *)&word_140043846,
          0LL,
          0LL,
          6u,
          &v346);
      }
LABEL_218:
      v69 = Irp;
      if ( (a4 & 0x40000080) != 0x40000080
        || (int)FsRtlpCheckSharingAgainstOplockOwner((__int64)Irp, *(_BYTE **)(a1 + 8), *a7, *a8) < 0 )
      {
        v73 = 1;
      }
      goto LABEL_256;
    }
    switch ( v27 )
    {
      case 0x803000u:
        if ( (unsigned int)dword_140E06C30 > 5 )
        {
          v141 = a4;
          v320 = &v141;
          v321 = 4LL;
          v142 = a6;
          v322 = &v142;
          v323 = 4LL;
          v184 = a1;
          v324 = &v184;
          v325 = 8LL;
          v143 = v26;
          v326 = &v143;
          v327 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06C30,
            (unsigned __int8 *)byte_140044203,
            0LL,
            0LL,
            6u,
            &v319);
        }
        if ( (a6 & 0x3000) == 0 )
          goto LABEL_255;
        if ( (a4 & 0x80u) != 0 || (a4 & 0x10010000) == 0 )
        {
          if ( (a6 & 0x2000) != 0 )
          {
            for ( i = *(PVOID **)(a1 + 72); ; i = (PVOID *)*i )
            {
              while ( 1 )
              {
                v80 = i;
                if ( i == (PVOID *)(a1 + 72) )
                  goto LABEL_255;
                if ( v79 || !FsRtlpOplockKeysEqual(*(_QWORD *)(v82 + 48), (__int64)i[3], 0) )
                  break;
                i = (PVOID *)*i;
              }
              if ( (a4 & 0x40000080) != 0x40000080
                || (int)FsRtlpCheckSharingAgainstOplockOwner((__int64)Irp, i[3], *a7, *a8) < 0 )
              {
                break;
              }
            }
            if ( (a4 & 0x10010000) != 0 )
              return (unsigned int)-1073739511;
            v73 = 1;
          }
          goto LABEL_255;
        }
        if ( (unsigned int)dword_140E06C30 > 3 )
        {
          v19 = -1073739511;
          v144 = -1073739511;
          v309 = &v144;
          v310 = 4LL;
          v163 = a4;
          v311 = &v163;
          v312 = 4LL;
          v146 = a6;
          v313 = &v146;
          v314 = 4LL;
          v169 = (_BYTE *)a1;
          v315 = &v169;
          v316 = 8LL;
          v147 = *(_DWORD *)(a1 + 144);
          v317 = &v147;
          v318 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06C30,
            (unsigned __int8 *)&unk_140044198,
            0LL,
            0LL,
            7u,
            &v308);
          return v19;
        }
        return (unsigned int)-1073739511;
      case 0x107040u:
        if ( (unsigned int)dword_140E06C30 > 5 )
        {
          v138 = a4;
          v428 = &v138;
          v429 = 4LL;
          v139 = a6;
          v430 = &v139;
          v431 = 4LL;
          v183 = a1;
          v432 = &v183;
          v433 = 8LL;
          v140 = v26;
          v434 = &v140;
          v435 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06C30,
            (unsigned __int8 *)&word_1400438B6,
            0LL,
            0LL,
            6u,
            &v427);
        }
        if ( (a6 & 0x1000) == 0 )
          goto LABEL_218;
        break;
      case 0x307040u:
        if ( (unsigned int)dword_140E06C30 > 5 )
        {
          v135 = a4;
          v419 = &v135;
          v420 = 4LL;
          v136 = a6;
          v421 = &v136;
          v422 = 4LL;
          v182 = a1;
          v423 = &v182;
          v424 = 8LL;
          v137 = v26;
          v425 = &v137;
          v426 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06C30,
            (unsigned __int8 *)byte_140043991,
            0LL,
            0LL,
            6u,
            &v418);
        }
        if ( a6 == 0x4000 )
        {
          if ( (unsigned int)Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v26) )
          {
            *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x107040;
            v19 = v75;
            goto LABEL_218;
          }
          v70 = *(_DWORD *)(a1 + 144) & 0x20 | 0x107040;
LABEL_217:
          *(_DWORD *)(a1 + 144) = v70;
          goto LABEL_218;
        }
        if ( (a6 & 0x5000) != 0x5000 )
          goto LABEL_218;
        break;
      case 0x507040u:
        if ( (unsigned int)dword_140E06C30 > 5 )
        {
          v132 = a4;
          v410 = &v132;
          v411 = 4LL;
          v133 = a6;
          v412 = &v133;
          v413 = 4LL;
          v181 = a1;
          v414 = &v181;
          v415 = 8LL;
          v134 = v26;
          v416 = &v134;
          v417 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06C30,
            (unsigned __int8 *)byte_140043923,
            0LL,
            0LL,
            6u,
            &v409);
        }
        if ( a6 != 0x2000 )
        {
          if ( (a6 & 0x1000) != 0 )
          {
            if ( (unsigned int)Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v26) )
            {
              *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
              v19 = v75;
              v73 = 1;
              goto LABEL_255;
            }
            *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
          }
          v73 = 1;
          goto LABEL_255;
        }
        if ( (a4 & 0x40000080) == 0x40000080 )
        {
          v69 = Irp;
          if ( (int)FsRtlpCheckSharingAgainstOplockOwner((__int64)Irp, *(_BYTE **)(a1 + 8), *a7, *a8) >= 0 )
          {
LABEL_256:
            if ( v73 )
            {
              if ( (a4 & 1) != 0 )
              {
                v72 = *(_DWORD *)(a1 + 144);
                if ( (v72 & 0x10000) != 0 )
                  *(_DWORD *)(a1 + 144) = v72 | 0x20000;
                return 264;
              }
              else
              {
                if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v26, v18, a3)
                  && (*(_DWORD *)(a1 + 144) & 0x40) != 0 )
                {
                  FsRtlpOplockTryStartBreakAckTimeout(a1 + 160, *(_QWORD *)(a1 + 176));
                }
                if ( v77 )
                {
                  FsRtlpModifyThreadPriorities(a1, 0LL, 1);
                  FsRtlpOplockSendModernAppTermination(a1, 0LL);
                }
                *v169 = 0;
                return (unsigned int)FsRtlpWaitOnIrp(a1, (__int64)v69, v166, a10, a11, &v192, v78, a12, v167, a14, v168);
              }
            }
            return v19;
          }
        }
        v68 = (unsigned int)Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v26) == 0;
        *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x107040;
        if ( !v68 )
          v19 = v75;
        v73 = 1;
LABEL_255:
        v69 = Irp;
        goto LABEL_256;
      default:
LABEL_245:
        if ( (v26 & 0x1000000) == 0 )
        {
          if ( (unsigned int)dword_140E06C30 > 2 )
          {
            v151 = a4;
            v338 = &v151;
            v339 = 4LL;
            v152 = a6;
            v340 = &v152;
            v341 = 4LL;
            v187 = a1;
            v342 = &v187;
            v343 = 8LL;
            v153 = v26;
            v344 = &v153;
            v345 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E06C30,
              (unsigned __int8 *)&dword_140043D54,
              0LL,
              0LL,
              6u,
              &v337);
          }
          goto LABEL_255;
        }
        if ( (unsigned int)dword_140E06C30 > 5 )
        {
          v148 = a4;
          v383 = &v148;
          v384 = 4LL;
          v149 = a6;
          v385 = &v149;
          v386 = 4LL;
          v186 = a1;
          v387 = &v186;
          v388 = 8LL;
          v150 = v26;
          v389 = &v150;
          v390 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06C30,
            (unsigned __int8 *)byte_1400437D3,
            0LL,
            0LL,
            6u,
            &v382);
          v73 = 1;
          goto LABEL_255;
        }
        goto LABEL_62;
    }
    if ( (unsigned int)Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v26) )
    {
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
      v19 = v75;
      goto LABEL_218;
    }
    v70 = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
    goto LABEL_217;
  }
  if ( v27 == 1069120 )
  {
    if ( (unsigned int)dword_140E06C30 > 5 )
    {
      v129 = a4;
      v401 = &v129;
      v402 = 4LL;
      v130 = a6;
      v403 = &v130;
      v404 = 4LL;
      v180 = a1;
      v405 = &v180;
      v406 = 8LL;
      v131 = v26;
      v407 = &v131;
      v408 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06C30,
        (unsigned __int8 *)&word_140043A6E,
        0LL,
        0LL,
        6u,
        &v400);
    }
    if ( (a6 & 0x1000) != 0 )
    {
      v68 = (unsigned int)Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v26) == 0;
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x805040;
      if ( !v68 )
        v19 = v75;
    }
    if ( (a6 & 0x5000) != 0 )
      v73 = 1;
    goto LABEL_255;
  }
  if ( v27 > 0x5040 )
  {
    if ( v27 != 28736 )
    {
      if ( v27 == 45056 )
      {
LABEL_72:
        if ( (unsigned int)dword_140E06C30 > 5 )
        {
          v101 = a4;
          v356 = &v101;
          v357 = 4LL;
          v102 = a6;
          v358 = &v102;
          v359 = 4LL;
          v172 = a1;
          v360 = &v172;
          v361 = 8LL;
          v103 = v26;
          v362 = &v103;
          v363 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06C30,
            (unsigned __int8 *)byte_140043F00,
            0LL,
            0LL,
            6u,
            &v355);
        }
        if ( (a6 & 0x1000) == 0 )
        {
LABEL_86:
          v26 = *(unsigned int *)(a1 + 144);
          if ( (*(_DWORD *)(a1 + 144) & 0x1F0FFDF) != 0xB000 )
          {
LABEL_157:
            FsRtlpComputeShareableOplockState((__int64 *)a1);
            goto LABEL_255;
          }
          goto LABEL_87;
        }
        for ( j = *(PVOID **)(a1 + 40); ; j = (PVOID *)*v80 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v80 = j;
              if ( j == (PVOID *)(a1 + 40) )
                goto LABEL_86;
              v18 = (__int64 *)j[2];
              if ( *((_DWORD *)v18 + 6) == 590400 )
                break;
              j = (PVOID *)*j;
            }
            if ( v79 || !FsRtlpOplockKeysEqual(*(_QWORD *)(v82 + 48), v18[6], a4) )
              break;
            j = (PVOID *)*j;
          }
          if ( (a4 & 0x10010000) != 0 )
            break;
          v80 = (PVOID *)j[1];
          FsRtlpRemoveAndCompleteReadOnlyIrp(*v80, 0, 0, a1);
        }
        if ( (unsigned int)dword_140E06C30 > 3 )
        {
          v19 = -1073739511;
          v104 = -1073739511;
          v265 = &v104;
          v266 = 4LL;
          v105 = a4;
          v267 = &v105;
          v268 = 4LL;
          v106 = a6;
          v269 = &v106;
          v270 = 4LL;
          v173 = a1;
          v271 = &v173;
          v272 = 8LL;
          v107 = *(_DWORD *)(a1 + 144);
          v273 = &v107;
          v274 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06C30,
            (unsigned __int8 *)byte_140043E95,
            0LL,
            0LL,
            7u,
            &v264);
          return v19;
        }
        return (unsigned int)-1073739511;
      }
      if ( v27 == 1060864 )
      {
        if ( (unsigned int)dword_140E06C30 > 5 )
        {
          v94 = a4;
          v329 = &v94;
          v330 = 4LL;
          v95 = a6;
          v331 = &v95;
          v332 = 4LL;
          v190 = a1;
          v333 = &v190;
          v334 = 8LL;
          v96 = v26;
          v335 = &v96;
          v336 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06C30,
            (unsigned __int8 *)byte_1400442DD,
            0LL,
            0LL,
            6u,
            &v328);
        }
        v37 = 0;
        v81 = 0;
        v38 = a6 & 0x1000;
        if ( (a6 & 0x1000) != 0 )
        {
          v39 = *(PVOID **)(a1 + 72);
          v80 = v39;
          v40 = v79;
          while ( v39 != (PVOID *)(a1 + 72) )
          {
            if ( v40 || !FsRtlpOplockKeysEqual(*(_QWORD *)(v82 + 48), (__int64)v39[3], a4) )
            {
              v37 = 1;
              v81 = 1;
              if ( (a4 & 0x10010000) != 0 )
              {
                if ( (unsigned int)dword_140E06C30 > 3 )
                {
                  v19 = -1073739511;
                  v97 = -1073739511;
                  v232 = &v97;
                  v233 = 4LL;
                  v98 = a4;
                  v234 = &v98;
                  v235 = 4LL;
                  v99 = a6;
                  v236 = &v99;
                  v237 = 4LL;
                  v171 = a1;
                  v238 = &v171;
                  v239 = 8LL;
                  v100 = *(_DWORD *)(a1 + 144);
                  v240 = &v100;
                  v241 = 4LL;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_140E06C30,
                    (unsigned __int8 *)word_140044272,
                    0LL,
                    0LL,
                    7u,
                    &v231);
                  return v19;
                }
                return (unsigned int)-1073739511;
              }
              v41 = (_DWORD)v39[6] & 0xFF0FFFFF;
              *((_DWORD *)v39 + 12) = v41;
              *((_DWORD *)v39 + 12) = v41 | 0x800000;
            }
            v39 = (PVOID *)*v39;
            v80 = v39;
          }
          FsRtlpComputeShareableOplockState((__int64 *)a1);
          v38 = a6 & 0x1000;
        }
        if ( (a6 & 0x2000) == 0 )
          goto LABEL_255;
        if ( !v37 )
        {
          if ( !v38 )
          {
            v42 = *(PVOID **)(a1 + 72);
            while ( 1 )
            {
              v80 = v42;
              if ( v42 == (PVOID *)(a1 + 72) )
                break;
              if ( v79 || !FsRtlpOplockKeysEqual(*(_QWORD *)(v82 + 48), (__int64)v42[3], 0) )
              {
                if ( (a4 & 0x40000080) != 0x40000080
                  || (int)FsRtlpCheckSharingAgainstOplockOwner((__int64)Irp, v42[3], *a7, *a8) < 0 )
                {
                  goto LABEL_62;
                }
                v42 = (PVOID *)*v42;
              }
              else
              {
                v42 = (PVOID *)*v42;
              }
            }
          }
          goto LABEL_255;
        }
LABEL_62:
        v73 = 1;
        goto LABEL_255;
      }
      goto LABEL_245;
    }
    if ( (unsigned int)dword_140E06C30 > 5 )
    {
      v127 = a4;
      v437 = &v127;
      v438 = 4LL;
      v145 = a6;
      v439 = &v145;
      v440 = 4LL;
      v179 = a1;
      v441 = &v179;
      v442 = 8LL;
      v128 = v26;
      v443 = &v128;
      v444 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06C30,
        (unsigned __int8 *)word_140043ADA,
        0LL,
        0LL,
        6u,
        &v436);
    }
    if ( a6 == 0x4000 )
    {
      v57 = *(_QWORD *)a1;
      *(_BYTE *)(v57 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v57 + 104), 0LL);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v57 + 69));
      if ( !*(_BYTE *)(v57 + 68) )
      {
        v58 = *(_QWORD *)(v57 + 24);
        v86 = (struct _IRP *)v58;
        *(_OWORD *)v58 = 0LL;
        *(_QWORD *)(v58 + 16) = 0LL;
        *(_DWORD *)v58 = 1572865;
        *(_DWORD *)(v58 + 4) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
        *(_DWORD *)(v58 + 8) = 3;
        *(_DWORD *)(v58 + 12) |= 1u;
        *(_QWORD *)(v57 + 56) = 24LL;
        *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
        IofCompleteRequest(*(PIRP *)a1, 1);
        *(_QWORD *)a1 = 0LL;
        Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v59);
        *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x507040;
        v73 = 1;
        v19 = v75;
        goto LABEL_255;
      }
    }
    else
    {
      if ( a6 != 0x2000 )
      {
        v64 = *(PIRP *)a1;
        v64->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
        _InterlockedExchange64((volatile __int64 *)&v64->CancelRoutine, 0LL);
        KeReleaseQueuedSpinLock(7uLL, v64->CancelIrql);
        if ( !v64->Cancel )
        {
          MasterIrp = v64->AssociatedIrp.MasterIrp;
          v86 = MasterIrp;
          *(_OWORD *)&MasterIrp->Type = 0LL;
          *(_QWORD *)&MasterIrp->Flags = 0LL;
          *(_DWORD *)&MasterIrp->Type = 1572865;
          *(_DWORD *)(&MasterIrp->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
          HIDWORD(MasterIrp->MdlAddress) |= 1u;
          v64->IoStatus.Information = 24LL;
          *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
          IofCompleteRequest(*(PIRP *)a1, 1);
          *(_QWORD *)a1 = 0LL;
          Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v67);
          *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
          v73 = 1;
          v19 = v75;
          goto LABEL_255;
        }
        FsRtlpModifyThreadPriorities(a1, 0LL, 0);
        FsRtlpClearOwner(a1, 0LL);
        *(_BYTE *)(a1 + 32) = 0;
        if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
          *(_QWORD *)(*(_QWORD *)a1 + 56LL) = 0LL;
        goto LABEL_176;
      }
      v60 = *(PIRP *)a1;
      if ( (a4 & 0x40000080) == 0x40000080
        && (int)FsRtlpCheckSharingAgainstOplockOwner((__int64)Irp, *(_BYTE **)(a1 + 8), *a7, *a8) >= 0 )
      {
        goto LABEL_255;
      }
      v60->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)&v60->CancelRoutine, 0LL);
      KeReleaseQueuedSpinLock(7uLL, v60->CancelIrql);
      if ( !v60->Cancel )
      {
        v61 = v60->AssociatedIrp.MasterIrp;
        v86 = v61;
        *(_OWORD *)&v61->Type = 0LL;
        *(_QWORD *)&v61->Flags = 0LL;
        *(_DWORD *)&v61->Type = 1572865;
        *(_DWORD *)(&v61->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
        LODWORD(v61->MdlAddress) = 5;
        v62 = HIDWORD(v61->MdlAddress) | 1;
        HIDWORD(v61->MdlAddress) = v62;
        if ( !*(_BYTE *)v23 )
        {
          HIDWORD(v61->MdlAddress) = v62 | 2;
          v61->Flags = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) + 8LL) + 20LL);
          *((_WORD *)&v61->Flags + 2) = *(_WORD *)(v23 + 26);
        }
        v60->IoStatus.Information = 24LL;
        *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
        IofCompleteRequest(*(PIRP *)a1, 1);
        *(_QWORD *)a1 = 0LL;
        Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v63);
        *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x307040;
        v73 = 1;
        v19 = v75;
        goto LABEL_255;
      }
    }
    FsRtlpModifyThreadPriorities(a1, 0LL, 0);
    FsRtlpClearOwner(a1, 0LL);
    *(_BYTE *)(a1 + 32) = 0;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
      *(_QWORD *)(*(_QWORD *)a1 + 56LL) = 0LL;
LABEL_176:
    *(_DWORD *)(*(_QWORD *)a1 + 48LL) = -1073741536;
    IofCompleteRequest(*(PIRP *)a1, 1);
    *(_QWORD *)a1 = 0LL;
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
    *(_QWORD *)(a1 + 8) = 0LL;
    Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v65);
    goto LABEL_177;
  }
  if ( v27 == 20544 )
  {
    if ( (unsigned int)dword_140E06C30 > 5 )
    {
      v91 = a4;
      v392 = &v91;
      v393 = 4LL;
      v92 = a6;
      v394 = &v92;
      v395 = 4LL;
      v185 = a1;
      v396 = &v185;
      v397 = 8LL;
      v93 = v26;
      v398 = &v93;
      v399 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06C30,
        (unsigned __int8 *)&byte_14004412F,
        0LL,
        0LL,
        6u,
        &v391);
    }
    if ( (a6 & 0x5000) == 0x5000 )
    {
      v30 = *(PIRP *)a1;
      v30->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)&v30->CancelRoutine, 0LL);
      KeReleaseQueuedSpinLock(7uLL, v30->CancelIrql);
      if ( !v30->Cancel )
      {
        v32 = v30->AssociatedIrp.MasterIrp;
        v86 = v32;
        *(_OWORD *)&v32->Type = 0LL;
        *(_QWORD *)&v32->Flags = 0LL;
        *(_DWORD *)&v32->Type = 1572865;
        *(_DWORD *)(&v32->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
        HIDWORD(v32->MdlAddress) |= 1u;
        v30->IoStatus.Information = 24LL;
        *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
        IofCompleteRequest(*(PIRP *)a1, 1);
        *(_QWORD *)a1 = 0LL;
        Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v33);
        *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x805040;
        v73 = 1;
LABEL_40:
        v19 = v75;
        goto LABEL_255;
      }
    }
    else
    {
      if ( (a6 & 0x4000) == 0 )
        goto LABEL_255;
      v34 = *(PIRP *)a1;
      v34->CancelIrql = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)&v34->CancelRoutine, 0LL);
      KeReleaseQueuedSpinLock(7uLL, v34->CancelIrql);
      if ( !v34->Cancel )
      {
        v35 = v34->AssociatedIrp.MasterIrp;
        v86 = v35;
        *(_OWORD *)&v35->Type = 0LL;
        *(_QWORD *)&v35->Flags = 0LL;
        *(_DWORD *)&v35->Type = 1572865;
        *(_DWORD *)(&v35->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
        LODWORD(v35->MdlAddress) = 1;
        HIDWORD(v35->MdlAddress) |= 1u;
        v34->IoStatus.Information = 24LL;
        *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
        IofCompleteRequest(*(PIRP *)a1, 1);
        *(_QWORD *)a1 = 0LL;
        Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v36);
        *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x105040;
        v73 = 1;
        v19 = v75;
        goto LABEL_255;
      }
    }
    FsRtlpModifyThreadPriorities(a1, 0LL, 0);
    FsRtlpClearOwner(a1, 0LL);
    *(_BYTE *)(a1 + 32) = 0;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
      *(_QWORD *)(*(_QWORD *)a1 + 56LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)a1 + 48LL) = -1073741536;
    IofCompleteRequest(*(PIRP *)a1, 1);
    *(_QWORD *)a1 = 0LL;
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
    *(_QWORD *)(a1 + 8) = 0LL;
    Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v31);
LABEL_177:
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
    while ( 1 )
    {
      v26 = *(_QWORD *)(a1 + 88);
      if ( v26 == a1 + 88 )
        break;
      FsRtlpRemoveAndCompleteWaitingIrp((_QWORD *)v26);
    }
    goto LABEL_40;
  }
  v28 = v27 - 4096;
  if ( !v28 )
    goto LABEL_72;
  v29 = v28 - 16;
  if ( !v29 )
    goto LABEL_72;
  if ( v29 != 8176 )
    goto LABEL_245;
LABEL_87:
  if ( (unsigned int)dword_140E06C30 > 5 )
  {
    v108 = a4;
    v365 = &v108;
    v366 = 4LL;
    v109 = a6;
    v367 = &v109;
    v368 = 4LL;
    v174 = a1;
    v369 = &v174;
    v370 = 8LL;
    v110 = v26;
    v371 = &v110;
    v372 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06C30,
      (unsigned __int8 *)&dword_140043E2C,
      0LL,
      0LL,
      6u,
      &v364);
  }
  if ( a6 == 0x2000 )
  {
    v44 = *(PVOID **)(a1 + 56);
    while ( 1 )
    {
      v80 = v44;
      if ( v44 == (PVOID *)(a1 + 56) )
        break;
      v45 = v44;
      if ( v79 || !FsRtlpOplockKeysEqual(*(_QWORD *)(v82 + 48), (__int64)v44[3], 0) )
      {
        if ( (a4 & 0x40000080) == 0x40000080
          && (int)FsRtlpCheckSharingAgainstOplockOwner((__int64)Irp, v44[3], *a7, *a8) >= 0 )
        {
          v44 = (PVOID *)*v44;
        }
        else
        {
          if ( (a4 & 0x10010000) != 0 )
          {
            if ( (unsigned int)dword_140E06C30 <= 3 )
              return (unsigned int)-1073739511;
            v19 = -1073739511;
            v115 = -1073739511;
            v276 = &v115;
            v277 = 4LL;
            v116 = a4;
            v278 = &v116;
            v279 = 4LL;
            v117 = 0x2000;
            v280 = &v117;
            v281 = 4LL;
            v166 = a1;
            v282 = &v166;
            v283 = 8LL;
            v118 = *(_DWORD *)(a1 + 144);
            v284 = &v118;
            v285 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E06C30,
              (unsigned __int8 *)byte_140043DC1,
              0LL,
              0LL,
              7u,
              &v275);
            return v19;
          }
          if ( v44[7] )
          {
            if ( (unsigned int)dword_140E06C30 > 5 )
            {
              v111 = a4;
              v374 = &v111;
              v375 = 4LL;
              v112 = 0x2000;
              v376 = &v112;
              v377 = 4LL;
              v175 = a1;
              v378 = &v175;
              v379 = 8LL;
              v113 = *(_DWORD *)(a1 + 144);
              v380 = &v113;
              v381 = 4LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140E06C30,
                (unsigned __int8 *)&byte_14004441F,
                0LL,
                0LL,
                6u,
                &v373);
            }
            v73 = 1;
            if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v26, v18, a3) )
              FsRtlpOplockTryStartBreakAckTimeout(v44 + 9, v44[11]);
            v44 = (PVOID *)*v44;
          }
          else
          {
            v46 = (PVOID *)v44[1];
            v80 = v46;
            v47 = 1;
            v114 = 1;
            v48 = 0;
            v49 = 0;
            if ( !*(_BYTE *)v82 )
            {
              v47 = 3;
              v114 = 3;
              v49 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v82 + 8) + 8LL) + 20LL);
              v48 = *(_WORD *)(v82 + 26);
            }
            if ( (unsigned __int8)FsRtlpRemoveAndCompleteRHIrp(*v46, v47, v49, v48, 0) )
            {
              v77 = 0;
              v73 = 1;
              v78 = v79 != 0;
              if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v26, v18, a3) )
                FsRtlpOplockTryStartBreakAckTimeout(v45 + 9, v45[11]);
            }
            else
            {
              v76 = 1;
            }
            v44 = (PVOID *)*v46;
          }
        }
      }
      else
      {
        v44 = (PVOID *)*v44;
      }
    }
LABEL_146:
    v23 = v82;
    goto LABEL_147;
  }
  if ( (a6 & 0x5000) != 0x5000 )
  {
LABEL_147:
    if ( v76 )
      FsRtlpReleaseIrpsWaitingForRH(a1);
    if ( !v73 )
    {
      v56 = *(PVOID **)(a1 + 72);
      if ( v56 != (PVOID *)(a1 + 72) && (a6 & 0x2000) != 0 )
      {
        if ( v22 )
        {
LABEL_156:
          v73 = 1;
        }
        else
        {
          while ( 1 )
          {
            v80 = v56;
            if ( v56 == (PVOID *)(a1 + 72) )
              break;
            if ( !FsRtlpOplockKeysEqual((__int64)v56[3], *(_QWORD *)(v23 + 48), 0) )
              goto LABEL_156;
            v56 = (PVOID *)*v56;
          }
        }
      }
    }
    goto LABEL_157;
  }
  for ( k = *(PVOID **)(a1 + 72); ; k = (PVOID *)*k )
  {
    v80 = k;
    if ( k == (PVOID *)(a1 + 72) )
    {
      v53 = *(PVOID **)(a1 + 56);
      while ( 1 )
      {
        v80 = v53;
        if ( v53 == (PVOID *)(a1 + 56) )
          break;
        v54 = v53;
        if ( v22 || !FsRtlpOplockKeysEqual(*(_QWORD *)(v82 + 48), (__int64)v53[3], a4) )
        {
          if ( (a4 & 0x10010000) != 0 )
          {
            if ( (unsigned int)dword_140E06C30 <= 3 )
              return (unsigned int)-1073739511;
            v19 = -1073739511;
            v123 = -1073739511;
            v298 = &v123;
            v299 = 4LL;
            v124 = a4;
            v300 = &v124;
            v301 = 4LL;
            v125 = a6;
            v302 = &v125;
            v303 = 4LL;
            v168 = (char *)a1;
            v304 = &v168;
            v305 = 8LL;
            v126 = *(_DWORD *)(a1 + 144);
            v306 = &v126;
            v307 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E06C30,
              (unsigned __int8 *)byte_140044349,
              0LL,
              0LL,
              7u,
              &v297);
            return v19;
          }
          if ( v53[7] )
          {
            if ( (a6 & 0x2000) != 0 )
            {
              v73 = 1;
              if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(v26, v18, a3) )
                FsRtlpOplockTryStartBreakAckTimeout(v53 + 9, v53[11]);
            }
            v53 = (PVOID *)*v53;
          }
          else
          {
            v55 = (PVOID *)v53[1];
            v80 = v55;
            if ( (unsigned __int8)FsRtlpRemoveAndCompleteRHIrp(*v55, 1, 0, 0, 0) )
            {
              v77 = 0;
              if ( (a6 & 0x2000) != 0 )
              {
                v73 = 1;
                if ( (unsigned int)((__int64 (*)(void))Feature_5466_1379__private_IsEnabledDeviceUsageNoInline)() )
                  FsRtlpOplockTryStartBreakAckTimeout(v54 + 9, v54[11]);
              }
              v78 = v22 != 0;
            }
            else
            {
              v76 = 1;
            }
            v53 = (PVOID *)*v55;
          }
        }
        else
        {
          v53 = (PVOID *)*v53;
        }
      }
      goto LABEL_146;
    }
    if ( v22 || !FsRtlpOplockKeysEqual(*(_QWORD *)(v23 + 48), (__int64)k[3], a4) )
      break;
LABEL_123:
    ;
  }
  if ( (a4 & 0x10010000) == 0 )
  {
    v51 = (_DWORD)k[6] & 0xFF0FFFFF;
    *((_DWORD *)k + 12) = v51;
    *((_DWORD *)k + 12) = v51 | 0x800000;
    v52 = v73;
    v26 = 1LL;
    if ( (a6 & 0x2000) != 0 )
      v52 = 1;
    v73 = v52;
    goto LABEL_123;
  }
  if ( (unsigned int)dword_140E06C30 <= 3 )
    return (unsigned int)-1073739511;
  v19 = -1073739511;
  v119 = -1073739511;
  v287 = &v119;
  v288 = 4LL;
  v120 = a4;
  v289 = &v120;
  v290 = 4LL;
  v121 = a6;
  v291 = &v121;
  v292 = 4LL;
  v167 = a1;
  v293 = &v167;
  v294 = 8LL;
  v122 = *(_DWORD *)(a1 + 144);
  v295 = &v122;
  v296 = 4LL;
  tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06C30, (unsigned __int8 *)&dword_1400443B4, 0LL, 0LL, 7u, &v286);
  return v19;
}
