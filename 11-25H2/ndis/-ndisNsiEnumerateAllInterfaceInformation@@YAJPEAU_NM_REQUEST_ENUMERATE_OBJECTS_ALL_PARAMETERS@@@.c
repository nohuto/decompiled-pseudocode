/*
 * XREFs of ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x140004BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140007E60 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?FreeBit@IfIndexRange@@QEAAXK@Z @ 0x14000B190 (-FreeBit@IfIndexRange@@QEAAXK@Z.c)
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140010990 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1400109B0 (-ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x140010A70 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x140010AD0 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140010B10 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140010F10 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memcmp @ 0x1400EE8A0 (memcmp.c)
 *     ndisNsiGetInterfaceRosEnumObject @ 0x14015A5C0 (ndisNsiGetInterfaceRosEnumObject.c)
 *     ndisIsMacAddressHidden @ 0x14015CAC0 (ndisIsMacAddressHidden.c)
 *     ndisNsiGetInterfaceRodEnumObject @ 0x1401768B0 (ndisNsiGetInterfaceRodEnumObject.c)
 */

__int64 __fastcall ndisNsiEnumerateAllInterfaceInformation(
        struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1,
        __int16 a2)
{
  unsigned int v2; // r15d
  struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *v3; // rsi
  int v4; // r14d
  __int64 CurrentProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  int *ThreadProperty; // rax
  int v8; // r12d
  PACCESS_TOKEN v9; // rax
  void *v10; // rsi
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  KIRQL v14; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v15; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v16; // rdx
  _BYTE *v17; // rdx
  void *v18; // rcx
  size_t v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned int v22; // r10d
  unsigned int v23; // r9d
  _DEVICE_OBJECT *v24; // rdi
  unsigned int v25; // r8d
  _KDPC *v26; // rcx
  void **p_DeviceContext; // r13
  __int64 v28; // r15
  _QWORD *v29; // rsi
  __int64 v30; // rdx
  KIRQL v31; // bl
  void *v32; // rcx
  void *v33; // rax
  unsigned int v34; // r14d
  KIRQL v35; // al
  struct _NDIS_M_DRIVER_BLOCK *v36; // r13
  KIRQL v37; // si
  __int64 v38; // rdx
  KIRQL v39; // di
  unsigned __int16 v40; // cx
  KIRQL v41; // al
  _NDIS_MINIPORT_BLOCK *v42; // rbx
  KIRQL v43; // r15
  _NDIS_BIND_PATHS *v44; // rdx
  int (__fastcall *ResetHandlerEx)(void *, unsigned __int8 *); // rcx
  KIRQL v46; // al
  struct _NDIS_M_DRIVER_BLOCK *v47; // r14
  KIRQL v48; // al
  ULONG_PTR v49; // r8
  KIRQL v50; // r15
  __int64 v51; // r9
  bool v52; // zf
  _QWORD *v53; // r14
  __int64 v54; // rdi
  unsigned __int8 i2; // al
  _BYTE *v56; // rdx
  char v57; // cl
  char v58; // si
  __int64 v59; // rdx
  KIRQL v60; // r14
  NDIS_REFCOUNT_HANDLE__ *v61; // rcx
  unsigned int v62; // ecx
  __int64 v63; // rdx
  NDIS_REFCOUNT_HANDLE__ *v64; // rcx
  int *v65; // rax
  __int64 v66; // r12
  KIRQL v67; // si
  ULONG_PTR v68; // r8
  __int64 v69; // r10
  struct _KEVENT *v70; // rcx
  __int16 v71; // dx
  KIRQL v72; // al
  int v73; // edx
  ULONG_PTR v74; // r8
  KIRQL v75; // r14
  __int64 v76; // r10
  int v77; // edi
  __int16 v78; // dx
  __int64 v79; // r13
  unsigned int v80; // r14d
  KIRQL v81; // al
  struct _NDIS_M_DRIVER_BLOCK *v82; // rdi
  KIRQL v83; // r15
  _REFERENCE_EX *p_Ref; // r13
  __int64 v85; // rdx
  KIRQL v86; // bl
  unsigned __int16 ReferenceCount; // cx
  KIRQL v88; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  KIRQL v90; // r12
  _NDIS_BIND_PATHS *BindPaths; // rdx
  __int64 v92; // rcx
  KIRQL v93; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rsi
  KIRQL v95; // al
  ULONG_PTR v96; // r8
  KIRQL v97; // r14
  __int64 v98; // r10
  __int64 v99; // rdi
  unsigned __int8 m; // cl
  _BYTE *v101; // rdx
  char v102; // al
  char v103; // r14
  __int64 v104; // rdx
  KIRQL v105; // r15
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  unsigned int v107; // ecx
  __int64 v108; // rdx
  NDIS_REFCOUNT_HANDLE__ *NsiRefCountTracker; // rcx
  int *v110; // rax
  __int64 v111; // rdi
  KSPIN_LOCK *v112; // rsi
  KIRQL v113; // r14
  ULONG_PTR v114; // r8
  __int64 v115; // r10
  struct _KEVENT *v116; // rcx
  __int16 v117; // dx
  __int64 v118; // rsi
  KIRQL v119; // al
  _BYTE *v120; // rdx
  ULONG_PTR v121; // r8
  KIRQL v122; // r14
  __int64 v123; // r9
  int v124; // edi
  __int64 v125; // r15
  __int16 v126; // dx
  __int64 v127; // rdx
  KIRQL v128; // si
  unsigned __int16 v129; // cx
  KIRQL v130; // di
  ULONG_PTR v131; // r8
  __int64 v132; // r9
  struct _KEVENT *v133; // rcx
  __int16 v134; // dx
  KIRQL v135; // al
  _BYTE *v136; // rdx
  ULONG_PTR v137; // r8
  KIRQL v138; // si
  __int64 v139; // r9
  int v140; // ebx
  __int64 v141; // rdx
  __int64 v142; // rdx
  KIRQL v143; // si
  unsigned __int16 v144; // cx
  KIRQL v145; // di
  ULONG_PTR v146; // r8
  __int64 v147; // r9
  struct _KEVENT *v148; // rcx
  __int16 v149; // dx
  KIRQL v150; // al
  _BYTE *v151; // rdx
  ULONG_PTR v152; // r8
  KIRQL v153; // si
  __int64 v154; // r9
  int v155; // ebx
  __int16 v156; // dx
  KIRQL v157; // al
  void **v158; // rsi
  KIRQL v159; // di
  ULONG_PTR v160; // r8
  __int64 v161; // r9
  __int64 v162; // rbx
  __int64 v163; // rbx
  __int64 v164; // rbx
  KIRQL v165; // al
  ULONG_PTR v166; // r8
  KIRQL v167; // r14
  __int64 v168; // r9
  ULONG_PTR v169; // r8
  ULONG_PTR v170; // r8
  __int64 v171; // r9
  unsigned int v172; // ebx
  int v173; // edx
  unsigned __int8 i11; // cl
  char v176; // al
  unsigned __int8 i9; // cl
  _BYTE *v178; // r9
  char v179; // al
  unsigned __int8 i7; // cl
  _BYTE *v181; // rdx
  char v182; // al
  ULONG_PTR v183; // rbx
  unsigned int v184; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *i1; // rdi
  ULONG_PTR v186; // rbx
  unsigned int v187; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *k; // rdi
  unsigned __int8 kk; // cl
  _BYTE *v190; // rdx
  char v191; // al
  unsigned __int8 i4; // cl
  _BYTE *v193; // rdx
  char v194; // al
  unsigned __int8 i5; // cl
  char v196; // al
  unsigned __int8 ii; // cl
  _BYTE *v198; // rdx
  char v199; // al
  unsigned __int8 jj; // cl
  char v201; // al
  PVOID *v202; // rbx
  PVOID *v203; // rcx
  void **v204; // rdx
  __int64 v205; // rcx
  _DRIVER_OBJECT *DriverObject; // rax
  void ***v207; // rdx
  char **v208; // rcx
  void ***v209; // rdx
  char **v210; // rcx
  void *v211; // rax
  unsigned int v212; // edx
  int *v213; // rcx
  ULONG_PTR v214; // rbx
  unsigned int v215; // eax
  struct _NDIS_REFCOUNT_BLOCK *v216; // rax
  struct _NDIS_REFCOUNT_BLOCK *v217; // rbx
  void *v218; // rcx
  void *v219; // rcx
  struct _KEVENT *v220; // rcx
  PVOID *v221; // rdx
  PVOID **v222; // rax
  PVOID *v223; // rbx
  PVOID *v224; // rcx
  _DWORD *v225; // rdx
  __int64 v226; // rdx
  _QWORD *v227; // rcx
  __int64 v228; // rdx
  _QWORD *v229; // rcx
  __int64 v230; // rdx
  _QWORD *v231; // rcx
  __int64 v232; // rax
  unsigned int v233; // edx
  int *v234; // rcx
  ULONG_PTR v235; // rbx
  unsigned int v236; // eax
  struct _NDIS_REFCOUNT_BLOCK *v237; // rax
  struct _NDIS_REFCOUNT_BLOCK *v238; // rbx
  void *v239; // rcx
  void *v240; // rcx
  struct _KEVENT *v241; // rcx
  PVOID *v242; // rdx
  PVOID **v243; // rax
  unsigned __int8 mm; // cl
  _BYTE *v245; // rdx
  char v246; // al
  unsigned __int8 nn; // cl
  _BYTE *v248; // r9
  char v249; // al
  unsigned __int8 i; // cl
  _BYTE *v251; // r9
  char v252; // al
  void *v253; // rax
  struct _KEVENT *v254; // rcx
  unsigned __int8 j; // cl
  char v256; // al
  ULONG_PTR v257; // rbx
  unsigned int v258; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *i10; // rdi
  ULONG_PTR v260; // rdi
  unsigned int v261; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *i6; // rsi
  ULONG_PTR v263; // rbx
  unsigned int v264; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *i8; // rdi
  struct _KEVENT *v266; // rcx
  struct _KEVENT *v267; // rcx
  struct _KTHREAD *v268; // rsi
  PACCESS_TOKEN v269; // rax
  void *v270; // rdi
  unsigned int ThreadSessionId; // eax
  struct _KEVENT *v272; // rcx
  ULONG_PTR v273; // rbx
  unsigned int v274; // r9d
  NTSTATUS v275; // ebx
  struct _KEVENT *v276; // rcx
  ULONG_PTR v277; // rbx
  unsigned int v278; // r9d
  ULONG_PTR v279; // rbx
  unsigned int v280; // r9d
  ULONG_PTR v281; // rbx
  unsigned int v282; // r9d
  ULONG_PTR v283; // rbx
  unsigned int v284; // r9d
  _DEVICE_OBJECT *Blink; // rcx
  _KDPC *BufferChainingDpc; // rdx
  unsigned __int64 v287; // r8
  ULONG_PTR v288; // rdi
  unsigned int v289; // edx
  ULONG_PTR v290; // rdi
  unsigned int v291; // edx
  ULONG_PTR v292; // rdi
  unsigned int v293; // edx
  ULONG_PTR v294; // rdi
  unsigned int v295; // edx
  NTSTATUS v296; // ebx
  KIRQL v297; // al
  ULONG_PTR v298; // rbx
  unsigned int v299; // eax
  struct _NDIS_REFCOUNT_BLOCK *v300; // rax
  struct _NDIS_REFCOUNT_BLOCK *v301; // rbx
  __int16 v302; // dx
  struct _NDIS_M_DRIVER_BLOCK **i3; // rcx
  struct _NDIS_M_DRIVER_BLOCK *v304; // rax
  wchar_t *v305; // rcx
  _NDIS_WRAPPER_HANDLE *v306; // rcx
  _NDIS_PENDING_IM_INSTANCE *v307; // rcx
  __int16 v308; // dx
  _NDIS_PENDING_IM_INSTANCE *v309; // rbx
  ULONG_PTR v310; // rbx
  unsigned int AnyActiveRefTag; // eax
  struct _NDIS_REFCOUNT_BLOCK *v312; // rax
  struct _NDIS_REFCOUNT_BLOCK *v313; // rbx
  __int16 v314; // dx
  struct _NDIS_M_DRIVER_BLOCK **n; // rcx
  struct _NDIS_M_DRIVER_BLOCK *v316; // rax
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  __int16 v321; // dx
  ULONG_PTR v322; // rdi
  unsigned int v323; // eax
  struct _NDIS_REFCOUNT_BLOCK *v324; // rax
  struct _NDIS_REFCOUNT_BLOCK *v325; // rdi
  struct _KEVENT *v326; // rcx
  struct _KEVENT *v327; // rcx
  KIRQL v328; // [rsp+40h] [rbp-C0h]
  KIRQL v329; // [rsp+41h] [rbp-BFh]
  int v330; // [rsp+44h] [rbp-BCh]
  int v331; // [rsp+44h] [rbp-BCh]
  BOOLEAN EffectiveOnly; // [rsp+48h] [rbp-B8h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+49h] [rbp-B7h] BYREF
  BOOLEAN v334; // [rsp+4Ah] [rbp-B6h] BYREF
  BOOLEAN v335[5]; // [rsp+4Bh] [rbp-B5h] BYREF
  unsigned int v336; // [rsp+50h] [rbp-B0h]
  char v337[8]; // [rsp+58h] [rbp-A8h]
  _LIST_ENTRY *v338; // [rsp+60h] [rbp-A0h]
  char v339[8]; // [rsp+68h] [rbp-98h]
  char v340[8]; // [rsp+70h] [rbp-90h]
  unsigned int v341; // [rsp+78h] [rbp-88h]
  unsigned int v342; // [rsp+7Ch] [rbp-84h]
  int v343; // [rsp+80h] [rbp-80h]
  unsigned int v344; // [rsp+84h] [rbp-7Ch]
  struct _NDIS_M_DRIVER_BLOCK *v345; // [rsp+88h] [rbp-78h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+90h] [rbp-70h] BYREF
  _SECURITY_IMPERSONATION_LEVEL v347; // [rsp+94h] [rbp-6Ch] BYREF
  void *v348; // [rsp+98h] [rbp-68h]
  char v349[8]; // [rsp+A0h] [rbp-60h]
  PVOID TokenInformation; // [rsp+A8h] [rbp-58h] BYREF
  PVOID v351; // [rsp+B0h] [rbp-50h] BYREF
  void **v352; // [rsp+B8h] [rbp-48h]
  __int64 v353; // [rsp+C0h] [rbp-40h]
  __int64 v354; // [rsp+C8h] [rbp-38h]
  _DEVICE_OBJECT *v355; // [rsp+D0h] [rbp-30h]
  __int128 v356; // [rsp+E0h] [rbp-20h]
  __int128 v357; // [rsp+F0h] [rbp-10h]
  __int128 v358; // [rsp+100h] [rbp+0h]
  __int128 v359; // [rsp+110h] [rbp+10h]
  _BYTE v360[24]; // [rsp+120h] [rbp+20h] BYREF

  v2 = *((_DWORD *)a1 + 22);
  v356 = 0LL;
  v3 = a1;
  *(_QWORD *)v349 = a1;
  v357 = 0LL;
  v4 = 0;
  v344 = v2;
  v358 = 0LL;
  v359 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      22,
      14,
      (struct _GUID *)&WPP_f142ecdf0a6f33a49e2e175c00018497_Traceguids,
      (char)a1);
  }
  CurrentProcess = PsGetCurrentProcess();
  v335[1] = ndisIsMacAddressHidden(CurrentProcess);
  KeEnterCriticalRegion();
  CurrentThread = KeGetCurrentThread();
  memset(v360, 0, sizeof(v360));
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v8 = 1;
  if ( ThreadProperty )
  {
    v8 = *ThreadProperty;
    *(_DWORD *)v360 = ThreadProperty[1];
    *(_DWORD *)&v360[4] = v8;
    ObfDereferenceObject(ThreadProperty);
    v13 = v8;
    if ( v8 )
      goto LABEL_12;
    v8 = 1;
  }
  else
  {
    *(_DWORD *)v360 = 0;
  }
  CopyOnOpen = 0;
  EffectiveOnly = 0;
  ImpersonationLevel = SecurityAnonymous;
  TokenInformation = 0LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    goto LABEL_8;
  }
  v9 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
  v10 = v9;
  if ( !v9
    || (v275 = SeQueryInformationToken(v9, TokenSessionId, &TokenInformation),
        PsDereferenceImpersonationToken(v10),
        v275 < 0) )
  {
    CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
LABEL_8:
    v12 = CurrentProcessSessionId;
    goto LABEL_9;
  }
  v12 = (unsigned int)TokenInformation;
LABEL_9:
  if ( v12 == -1 )
  {
    v268 = KeGetCurrentThread();
    v335[0] = 0;
    v334 = 0;
    v347 = SecurityAnonymous;
    v351 = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      ThreadSessionId = PsGetCurrentProcessSessionId();
    }
    else
    {
      v269 = PsReferenceImpersonationToken(v268, v335, &v334, &v347);
      v270 = v269;
      if ( v269 )
      {
        v296 = SeQueryInformationToken(v269, TokenSessionId, &v351);
        PsDereferenceImpersonationToken(v270);
        if ( v296 >= 0 )
        {
          v12 = (unsigned int)v351;
          goto LABEL_10;
        }
      }
      ThreadSessionId = PsGetThreadSessionId(v268);
    }
    v12 = ThreadSessionId;
  }
LABEL_10:
  if ( v12 < dword_140126990 )
  {
    v8 = 0;
    v297 = KeAcquireSpinLockRaiseToDpc(&qword_1401269E0);
    if ( v12 < dword_140126990 )
      v8 = *((_DWORD *)qword_140126A30 + 6 * v12);
    KeReleaseSpinLock(&qword_1401269E0, v297);
    if ( !v8 )
      v8 = 1;
  }
  v3 = *(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS **)v349;
  v13 = v8;
  *(_DWORD *)&v360[4] = v8;
LABEL_12:
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v15 = qword_140126AF0;
  v16 = 0LL;
  while ( v15 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_140126AF0 )
  {
    if ( *((_DWORD *)v15 + 4) == v13 )
    {
      v16 = v15;
      break;
    }
    if ( *((_DWORD *)v15 + 4) > v13 )
      break;
    v15 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v15;
  }
  *(_OWORD *)&v360[8] = *(_OWORD *)((char *)v16 + 1684);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v14);
  v328 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v17 = (_BYTE *)v328;
  if ( !v2 )
  {
    Blink = (_DEVICE_OBJECT *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
    if ( (_LIST_ENTRY **)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink != &WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
    {
      do
      {
        BufferChainingDpc = Blink->Queue.Wcb.BufferChainingDpc;
        if ( v8 == LODWORD(BufferChainingDpc->ProcessorHistory) )
          goto LABEL_523;
        if ( *(_DWORD *)v360 == -1 )
        {
          v287 = *(_QWORD *)&v360[8] - *(unsigned __int64 *)((char *)&BufferChainingDpc[26].ProcessorHistory + 4);
          if ( *(_QWORD *)&v360[8] == *(unsigned __int64 *)((char *)&BufferChainingDpc[26].ProcessorHistory + 4) )
            v287 = *(_QWORD *)&v360[16] - *(unsigned __int64 *)((char *)&BufferChainingDpc[26].DeferredRoutine + 4);
          if ( !v287 )
            goto LABEL_523;
        }
        if ( (BufferChainingDpc[26].ProcessorHistory & 2) == 0 && v8 == 1 )
LABEL_523:
          ++v4;
        Blink = *(_DEVICE_OBJECT **)&Blink->Type;
      }
      while ( Blink != (_DEVICE_OBJECT *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink );
      LOBYTE(v17) = v328;
    }
    *((_DWORD *)v3 + 22) = v4;
    v172 = v4 != 0 ? 0x105 : 0;
    goto LABEL_273;
  }
  v18 = (void *)*((_QWORD *)v3 + 2);
  v19 = *((unsigned int *)v3 + 6);
  v20 = *((_QWORD *)v3 + 7);
  v21 = *((_QWORD *)v3 + 9);
  v22 = *((_DWORD *)v3 + 16);
  v23 = *((_DWORD *)v3 + 20);
  v336 = *((_DWORD *)v3 + 6);
  v341 = v22;
  v342 = v23;
  v348 = v18;
  v353 = v20;
  v354 = v21;
  if ( v18 && (_DWORD)v19 != 8
    || *((_QWORD *)v3 + 5)
    || *((_DWORD *)v3 + 12)
    || v20 && v22 < 0x28C
    || v21 && v23 < 0x238 )
  {
    v172 = -1073741306;
    goto LABEL_273;
  }
  v24 = (_DEVICE_OBJECT *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
  v338 = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
  v25 = 0;
  if ( (_LIST_ENTRY **)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink == &WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
    goto LABEL_272;
  do
  {
    v26 = v24->Queue.Wcb.BufferChainingDpc;
    p_DeviceContext = &v24[-4].Queue.Wcb.DeviceContext;
    v355 = v24;
    v352 = &v24[-4].Queue.Wcb.DeviceContext;
    if ( v8 != LODWORD(v26->ProcessorHistory) )
    {
      if ( *(_DWORD *)v360 != -1 )
        goto LABEL_418;
      v17 = (_BYTE *)(*(_QWORD *)&v360[8] - *(unsigned __int64 *)((char *)&v26[26].ProcessorHistory + 4));
      if ( *(_QWORD *)&v360[8] == *(unsigned __int64 *)((char *)&v26[26].ProcessorHistory + 4) )
        v17 = (_BYTE *)(*(_QWORD *)&v360[16] - *(unsigned __int64 *)((char *)&v26[26].DeferredRoutine + 4));
      if ( v17 )
      {
LABEL_418:
        if ( (v26[26].ProcessorHistory & 2) != 0 || v8 != 1 )
        {
          v24 = *(_DEVICE_OBJECT **)&v24->Type;
          v338 = (_LIST_ENTRY *)v24;
          continue;
        }
      }
    }
    v343 = ++v25;
    if ( v25 > v2 )
    {
      v24 = *(_DEVICE_OBJECT **)&v24->Type;
      v338 = (_LIST_ENTRY *)v24;
      continue;
    }
    LOBYTE(v17) = 6;
    NdisReferenceWithTag(p_DeviceContext[179], v17);
    ++*((_DWORD *)p_DeviceContext + 326);
    v28 = 0LL;
    if ( !*((_BYTE *)p_DeviceContext + 1393) || *((_QWORD *)v3 + 1) >= 2uLL )
      goto LABEL_238;
    *(_QWORD *)v339 = 0LL;
    v29 = 0LL;
    v31 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( *((_BYTE *)p_DeviceContext + 1395) )
    {
      v29 = p_DeviceContext[176];
      LOBYTE(v30) = 3;
      v32 = p_DeviceContext[180];
      *(_QWORD *)v339 = v29;
      NdisReferenceWithTag(v32, v30);
      ++*((_DWORD *)p_DeviceContext + 349);
    }
    KeReleaseSpinLock(&SpinLock, v31);
    if ( v29 )
    {
      v52 = v29[471] == 0LL;
      v79 = 0LL;
      *(_QWORD *)v340 = 0LL;
      *(_QWORD *)v337 = 0LL;
      v80 = 1;
      v331 = 1;
      if ( !v52 )
      {
        v81 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        v82 = ndisMiniDriverList;
        v83 = v81;
        v345 = ndisMiniDriverList;
        if ( ndisMiniDriverList )
        {
          while ( 1 )
          {
            p_Ref = &v82->Ref;
            v86 = KeAcquireSpinLockRaiseToDpc(&v82->Ref.SpinLock);
            if ( v82->Ref.Closing )
              goto LABEL_411;
            ReferenceCount = v82->Ref.ReferenceCount;
            if ( ReferenceCount >= 0xFFEBu )
            {
              ndisRefCountReferenceCountOverflow = 1;
LABEL_411:
              KeReleaseSpinLock(&v82->Ref.SpinLock, v86);
              NextDriver = v82->NextDriver;
              goto LABEL_121;
            }
            LOBYTE(v85) = 8;
            v82->Ref.ReferenceCount = ReferenceCount + 1;
            NdisReferenceWithTag(v82->Ref.RefCountTracker, v85);
            KeReleaseSpinLock(&v82->Ref.SpinLock, v86);
            KeReleaseSpinLock(&ndisMiniDriverListLock, v83);
            v88 = KeAcquireSpinLockRaiseToDpc(&v82->Ref.SpinLock);
            MiniportQueue = v82->MiniportQueue;
            v90 = v88;
            if ( !MiniportQueue )
              goto LABEL_112;
            do
            {
              BindPaths = MiniportQueue->BindPaths;
              if ( !BindPaths )
                goto LABEL_110;
              if ( BindPaths->Number < v80 )
                goto LABEL_110;
              v92 = v29[471];
              if ( *(_WORD *)(v92 + 8) != BindPaths->Paths[0].Length
                || memcmp(*(const void **)(v92 + 16), BindPaths->Paths[0].Buffer, *(unsigned __int16 *)(v92 + 8)) )
              {
                goto LABEL_110;
              }
              KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
              v52 = (MiniportQueue->Flags & 0x80200020) == 0;
              MiniportQueue->MiniportThread = KeGetCurrentThread();
              if ( v52
                && (MiniportQueue->PnPFlags & 0x1084110) == 0
                && MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
                && MiniportQueue->CurrentDevicePowerState == PowerDeviceD0 )
              {
                v103 = 1;
                v105 = KeAcquireSpinLockRaiseToDpc(&MiniportQueue->Ref.SpinLock);
                if ( MiniportQueue->Ref.Closing )
                  goto LABEL_143;
                RefCountTracker = MiniportQueue->RefCountTracker;
                if ( RefCountTracker )
                {
                  LOBYTE(v104) = 60;
                  NdisReferenceWithTag(RefCountTracker, v104);
                }
                v107 = MiniportQueue->Ref.ReferenceCount;
                MiniportQueue->Ref.ReferenceCount = v107 + 1;
                if ( v107 == -1 )
                {
                  MiniportQueue->Ref.ReferenceCount = -1;
LABEL_143:
                  v103 = 0;
                }
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v104) = 4;
                  WPP_RECORDER_SF_qL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v104,
                    20,
                    12,
                    (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
                    (char)MiniportQueue,
                    MiniportQueue->Ref.ReferenceCount);
                }
                KeReleaseSpinLock(&MiniportQueue->Ref.SpinLock, v105);
                if ( v103 )
                {
                  LOBYTE(v108) = 2;
                  NsiRefCountTracker = MiniportQueue->NsiRefCountTracker;
                  *(_QWORD *)v337 = *(_QWORD *)v340;
                  NdisReferenceWithTag(NsiRefCountTracker, v108);
                  v110 = (int *)MiniportQueue->BindPaths;
                  ++MiniportQueue->NsiOpenReferences;
                  *(_QWORD *)v340 = MiniportQueue;
                  v331 = *v110;
                }
              }
              MiniportQueue->MiniportThread = 0LL;
              KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
              v111 = *(_QWORD *)v337;
              if ( *(_QWORD *)v337 )
              {
                v112 = (KSPIN_LOCK *)(*(_QWORD *)v337 + 96LL);
                v113 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)v337 + 96LL));
                v114 = *(_QWORD *)(v111 + 4904);
                *(_QWORD *)(v111 + 520) = KeGetCurrentThread();
                if ( v114 - 2 > 1 )
                {
                  if ( v114 < 2 )
                    ndisBugCheckEx(0x1EuLL, 3uLL, v114, 0LL);
                  if ( *(_BYTE *)(v114 + 2) <= 2u )
                    ndisBugCheckEx(0x1EuLL, 2uLL, v114, 2uLL);
                  if ( *(_BYTE *)(v114 + 1) )
                  {
                    if ( *(_BYTE *)(v114 + 1) == 1 )
                    {
                      v292 = v114 + 136;
                      v293 = *(_DWORD *)(v114 + 192);
                      if ( v293 >> 17 < 0x3FFE && (unsigned __int16)v293 >> 1 == (v293 >> 17) + 1 )
                      {
                        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v114 + 136));
                        *(_DWORD *)(v292 + 56) &= 0x10001u;
                        v111 = *(_QWORD *)v337;
                      }
                      else
                      {
                        if ( !((unsigned __int16)v293 >> 1) && (v293 & 1) == 0 )
LABEL_455:
                          ndisReportRefcountImbalance(v114, 2u);
                        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v114 + 136), 0);
                        v111 = *(_QWORD *)v337;
                      }
                    }
                  }
                  else
                  {
                    v115 = *(_QWORD *)(v114 + 8);
                    if ( v115 )
                    {
                      for ( i = 0; ; ++i )
                      {
                        if ( i >= *(_BYTE *)(v114 + 3) )
                          goto LABEL_154;
                        v251 = (_BYTE *)(v115 + 2LL * i);
                        if ( *v251 == 2 )
                        {
                          v252 = v251[1];
                          if ( v252 )
                            break;
                        }
                      }
                      v251[1] = v252 - 1;
                    }
                    else
                    {
LABEL_154:
                      if ( !_bittestandreset((signed __int32 *)(v114 + 16), 2u) )
                        goto LABEL_455;
                    }
                  }
                }
                v52 = (*(_DWORD *)(v111 + 3124))-- == 1;
                if ( v52 )
                {
                  v116 = *(struct _KEVENT **)(v111 + 3136);
                  if ( v116 )
                    KeSetEvent(v116, 0, 0);
                }
                *(_QWORD *)(v111 + 520) = 0LL;
                KeReleaseSpinLock(v112, v113);
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v117) = 4;
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v117,
                    20,
                    25,
                    (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
                    v111);
                }
                v118 = v111 + 4432;
                v119 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v111 + 4432));
                v121 = *(_QWORD *)(v111 + 4896);
                v122 = v119;
                if ( v121 && v121 - 2 > 1 )
                {
                  if ( v121 == 1 )
                    ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
                  if ( *(_BYTE *)(v121 + 2) <= 0x3Cu )
                    ndisBugCheckEx(0x1EuLL, 2uLL, v121, 0x3CuLL);
                  if ( *(_BYTE *)(v121 + 1) )
                  {
                    if ( *(_BYTE *)(v121 + 1) == 1 )
                    {
                      v294 = v121 + 3848;
                      v295 = *(_DWORD *)(v121 + 3904);
                      if ( v295 >> 17 < 0x3FFE && (unsigned __int16)v295 >> 1 == (v295 >> 17) + 1 )
                      {
                        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v121 + 3848));
                        *(_DWORD *)(v294 + 56) &= 0x10001u;
                      }
                      else
                      {
                        if ( !((unsigned __int16)v295 >> 1) && (v295 & 1) == 0 )
LABEL_456:
                          ndisReportRefcountImbalance(v121, 0x3Cu);
                        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v121 + 3848), 0);
                      }
                    }
                  }
                  else
                  {
                    v123 = *(_QWORD *)(v121 + 8);
                    if ( v123 )
                    {
                      for ( j = 0; ; ++j )
                      {
                        if ( j >= *(_BYTE *)(v121 + 3) )
                          goto LABEL_166;
                        v120 = (_BYTE *)(v123 + 2LL * j);
                        if ( *v120 == 60 )
                        {
                          v256 = v120[1];
                          if ( v256 )
                            break;
                        }
                      }
                      v120[1] = v256 - 1;
                    }
                    else
                    {
LABEL_166:
                      if ( !_bittestandreset((signed __int32 *)(v121 + 20), 0x1Cu) )
                        goto LABEL_456;
                    }
                  }
                }
                v124 = *(_DWORD *)(v118 + 8) - 1;
                *(_DWORD *)(v118 + 8) = v124;
                v125 = *(_QWORD *)v337;
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v120) = 4;
                  WPP_RECORDER_SF_qL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    (int)v120,
                    20,
                    14,
                    (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
                    v337[0],
                    *(_DWORD *)(*(_QWORD *)v337 + 4440LL));
                }
                KeReleaseSpinLock((PKSPIN_LOCK)v118, v122);
                if ( !v124 )
                {
                  v276 = *(struct _KEVENT **)(v125 + 1608);
                  if ( v276 )
                    KeSetEvent(v276, 0, 0);
                }
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v126) = 4;
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v126,
                    20,
                    26,
                    (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
                    v125);
                }
                *(_QWORD *)v337 = 0LL;
              }
LABEL_110:
              MiniportQueue = MiniportQueue->NextMiniport;
              v29 = *(_QWORD **)v339;
              v80 = v331;
            }
            while ( MiniportQueue );
            v82 = v345;
LABEL_112:
            KeReleaseSpinLock(&p_Ref->SpinLock, v90);
            v93 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
            NextDriver = v82->NextDriver;
            v83 = v93;
            v95 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
            v96 = (ULONG_PTR)p_Ref->RefCountTracker;
            v97 = v95;
            if ( v96 - 2 > 1 )
            {
              if ( v96 < 2 )
                ndisBugCheckEx(0x1EuLL, 3uLL, v96, 0LL);
              if ( *(_BYTE *)(v96 + 2) <= 8u )
                ndisBugCheckEx(0x1EuLL, 2uLL, v96, 8uLL);
              if ( *(_BYTE *)(v96 + 1) )
              {
                if ( *(_BYTE *)(v96 + 1) == 1 )
                {
                  v186 = v96 + 520;
                  v187 = *(_DWORD *)(v96 + 576);
                  if ( v187 >> 17 < 0x3FFE && (unsigned __int16)v187 >> 1 == (v187 >> 17) + 1 )
                  {
                    for ( k = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v186;
                          *(_QWORD *)v186;
                          k = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v186 )
                    {
                      *(_QWORD *)v186 = k->Next;
                      ndisFreeRefCountStacksInBlock(k);
                      ExFreePoolWithTag(k, 0);
                    }
                    ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v186);
                    *(_DWORD *)(v186 + 56) &= 0x10001u;
                    v82 = v345;
                  }
                  else
                  {
                    if ( !((unsigned __int16)v187 >> 1) && (v187 & 1) == 0 )
                      goto LABEL_133;
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v96 + 520), 0);
                  }
                }
              }
              else
              {
                v98 = *(_QWORD *)(v96 + 8);
                if ( !v98 )
                {
LABEL_117:
                  if ( _bittestandreset((signed __int32 *)(v96 + 16), 8u) )
                    goto LABEL_118;
LABEL_133:
                  ndisReportRefcountImbalance(v96, 8u);
                }
                for ( m = 0; ; ++m )
                {
                  if ( m >= *(_BYTE *)(v96 + 3) )
                    goto LABEL_117;
                  v101 = (_BYTE *)(v98 + 2LL * m);
                  if ( *v101 == 8 )
                  {
                    v102 = v101[1];
                    if ( v102 )
                      break;
                  }
                }
                v101[1] = v102 - 1;
              }
            }
LABEL_118:
            v52 = p_Ref->ReferenceCount-- == 1;
            if ( v52 )
            {
              if ( !p_Ref->ZeroBased )
              {
                v310 = (ULONG_PTR)p_Ref->RefCountTracker;
                if ( v310 )
                {
                  AnyActiveRefTag = ndisGetAnyActiveRefTag(p_Ref->RefCountTracker);
                  if ( AnyActiveRefTag != -2 )
                    ndisBugCheckEx(0x1EuLL, 4uLL, v310, AnyActiveRefTag);
                  v312 = ndisRefCountBlockFromRefCountHandle(v310);
                  v313 = v312;
                  if ( v312 )
                  {
                    ndisFreeRefCountAuxiliaryMemory(v312);
                    ExFreePoolWithTag(v313, 0);
                  }
                }
                p_Ref->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
              }
              KeReleaseSpinLock(&p_Ref->SpinLock, v97);
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v314) = 4;
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v314,
                  20,
                  23,
                  (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
                  (char)v82);
              }
              for ( n = &ndisMiniDriverList; ; n = &v316->NextDriver )
              {
                v316 = *n;
                if ( !*n )
                  goto LABEL_626;
                if ( v316 == v82 )
                  break;
              }
              *n = v82->NextDriver;
              ObfDereferenceObject(ndisDriverObject);
LABEL_626:
              Buffer = v82->ImageName.Buffer;
              if ( Buffer )
              {
                ExFreePoolWithTag(Buffer, 0);
                v82->ImageName.Buffer = 0LL;
              }
              NdisDriverInfo = v82->NdisDriverInfo;
              if ( NdisDriverInfo )
              {
                ExFreePoolWithTag(NdisDriverInfo, 0);
                v82->NdisDriverInfo = 0LL;
              }
              if ( (v82->Flags & 1) != 0 )
              {
                PendingDeviceList = v82->PendingDeviceList;
                if ( PendingDeviceList )
                {
                  do
                  {
                    Next = PendingDeviceList->Next;
                    ExFreePoolWithTag(PendingDeviceList, 0);
                    PendingDeviceList = Next;
                  }
                  while ( Next );
                }
              }
              KeSetEvent(&v82->MiniportsRemovedEvent, 0, 0);
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v321) = 4;
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v321,
                  20,
                  24,
                  (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
                  (char)v82);
              }
            }
            else
            {
              KeReleaseSpinLock(&p_Ref->SpinLock, v97);
            }
            v80 = v331;
LABEL_121:
            v82 = NextDriver;
            v345 = NextDriver;
            v52 = NextDriver == 0LL;
            v29 = *(_QWORD **)v339;
            if ( v52 )
            {
              v8 = *(_DWORD *)&v360[4];
              v79 = *(_QWORD *)v340;
              break;
            }
          }
        }
        KeReleaseSpinLock(&ndisMiniDriverListLock, v83);
        if ( v79 )
        {
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v79 + 96));
          v99 = *(_QWORD *)(v79 + 2048);
          *(_QWORD *)(v79 + 520) = KeGetCurrentThread();
          if ( !v99 )
          {
LABEL_125:
            v28 = *(_QWORD *)(v79 + 4040);
            goto LABEL_203;
          }
          while ( 1 )
          {
            v143 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v99 + 312));
            if ( !*(_BYTE *)(v99 + 322) )
            {
              v144 = *(_WORD *)(v99 + 320);
              if ( v144 < 0xFFEBu )
              {
                LOBYTE(v142) = 11;
                *(_WORD *)(v99 + 320) = v144 + 1;
                NdisReferenceWithTag(*(_QWORD *)(v99 + 328), v142);
                KeReleaseSpinLock((PKSPIN_LOCK)(v99 + 312), v143);
                v28 = *(_QWORD *)(v99 + 688);
LABEL_203:
                *(_QWORD *)(v79 + 520) = 0LL;
                KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v79 + 96));
                v145 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v79 + 96));
                v146 = *(_QWORD *)(v79 + 4904);
                *(_QWORD *)(v79 + 520) = KeGetCurrentThread();
                if ( v146 - 2 > 1 )
                {
                  if ( v146 < 2 )
                    ndisBugCheckEx(0x1EuLL, 3uLL, v146, 0LL);
                  if ( *(_BYTE *)(v146 + 2) <= 2u )
                    ndisBugCheckEx(0x1EuLL, 2uLL, v146, 2uLL);
                  if ( *(_BYTE *)(v146 + 1) )
                  {
                    if ( *(_BYTE *)(v146 + 1) != 1 )
                      goto LABEL_209;
                    v281 = v146 + 136;
                    v282 = *(_DWORD *)(v146 + 192);
                    if ( v282 >> 17 < 0x3FFE && (unsigned __int16)v282 >> 1 == (v282 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v146 + 136));
                      *(_DWORD *)(v281 + 56) &= 0x10001u;
                      goto LABEL_209;
                    }
                    if ( (unsigned __int16)v282 >> 1 || (v282 & 1) != 0 )
                    {
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v146 + 136), 0);
                      goto LABEL_209;
                    }
                    goto LABEL_377;
                  }
                  v147 = *(_QWORD *)(v146 + 8);
                  if ( !v147 )
                  {
LABEL_208:
                    if ( _bittestandreset((signed __int32 *)(v146 + 16), 2u) )
                      goto LABEL_209;
LABEL_377:
                    ndisReportRefcountImbalance(v146, 2u);
                  }
                  for ( ii = 0; ; ++ii )
                  {
                    if ( ii >= *(_BYTE *)(v146 + 3) )
                      goto LABEL_208;
                    v198 = (_BYTE *)(v147 + 2LL * ii);
                    if ( *v198 == 2 )
                    {
                      v199 = v198[1];
                      if ( v199 )
                        break;
                    }
                  }
                  v198[1] = v199 - 1;
                }
LABEL_209:
                v52 = (*(_DWORD *)(v79 + 3124))-- == 1;
                if ( v52 )
                {
                  v148 = *(struct _KEVENT **)(v79 + 3136);
                  if ( v148 )
                    KeSetEvent(v148, 0, 0);
                }
                *(_QWORD *)(v79 + 520) = 0LL;
                KeReleaseSpinLock((PKSPIN_LOCK)(v79 + 96), v145);
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v149) = 4;
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v149,
                    20,
                    25,
                    (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
                    v79);
                }
                v150 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v79 + 4432));
                v152 = *(_QWORD *)(v79 + 4896);
                v153 = v150;
                if ( v152 && v152 - 2 > 1 )
                {
                  if ( v152 == 1 )
                    ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
                  if ( *(_BYTE *)(v152 + 2) <= 0x3Cu )
                    ndisBugCheckEx(0x1EuLL, 2uLL, v152, 0x3CuLL);
                  if ( *(_BYTE *)(v152 + 1) )
                  {
                    if ( *(_BYTE *)(v152 + 1) == 1 )
                    {
                      v283 = v152 + 3848;
                      v284 = *(_DWORD *)(v152 + 3904);
                      if ( v284 >> 17 < 0x3FFE && (unsigned __int16)v284 >> 1 == (v284 >> 17) + 1 )
                      {
                        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v152 + 3848));
                        *(_DWORD *)(v283 + 56) &= 0x10001u;
                      }
                      else
                      {
                        if ( !((unsigned __int16)v284 >> 1) && (v284 & 1) == 0 )
                          goto LABEL_381;
                        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v152 + 3848), 0);
                      }
                    }
                  }
                  else
                  {
                    v154 = *(_QWORD *)(v152 + 8);
                    if ( !v154 )
                    {
LABEL_220:
                      if ( _bittestandreset((signed __int32 *)(v152 + 20), 0x1Cu) )
                        goto LABEL_221;
LABEL_381:
                      ndisReportRefcountImbalance(v152, 0x3Cu);
                    }
                    for ( jj = 0; ; ++jj )
                    {
                      if ( jj >= *(_BYTE *)(v152 + 3) )
                        goto LABEL_220;
                      v151 = (_BYTE *)(v154 + 2LL * jj);
                      if ( *v151 == 60 )
                      {
                        v201 = v151[1];
                        if ( v201 )
                          break;
                      }
                    }
                    v151[1] = v201 - 1;
                  }
                }
LABEL_221:
                v155 = *(_DWORD *)(v79 + 4440) - 1;
                *(_DWORD *)(v79 + 4440) = v155;
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v151) = 4;
                  WPP_RECORDER_SF_qL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    (int)v151,
                    20,
                    14,
                    (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
                    v79,
                    v155);
                }
                KeReleaseSpinLock((PKSPIN_LOCK)(v79 + 4432), v153);
                if ( !v155 )
                {
                  v267 = *(struct _KEVENT **)(v79 + 1608);
                  if ( v267 )
                    KeSetEvent(v267, 0, 0);
                }
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v156) = 4;
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v156,
                    20,
                    26,
                    (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
                    v79);
                }
                v8 = *(_DWORD *)&v360[4];
LABEL_227:
                v157 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
                v158 = v352;
                v159 = v157;
                v160 = (ULONG_PTR)v352[180];
                if ( v160 - 2 > 1 )
                {
                  if ( v160 < 2 )
                    ndisBugCheckEx(0x1EuLL, 3uLL, v160, 0LL);
                  if ( *(_BYTE *)(v160 + 2) <= 3u )
                    ndisBugCheckEx(0x1EuLL, 2uLL, v160, 3uLL);
                  if ( *(_BYTE *)(v160 + 1) )
                  {
                    if ( *(_BYTE *)(v160 + 1) == 1 )
                    {
                      v273 = v160 + 200;
                      v274 = *(_DWORD *)(v160 + 256);
                      if ( v274 >> 17 < 0x3FFE && (unsigned __int16)v274 >> 1 == (v274 >> 17) + 1 )
                      {
                        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v160 + 200));
                        *(_DWORD *)(v273 + 56) &= 0x10001u;
                      }
                      else
                      {
                        if ( !((unsigned __int16)v274 >> 1) && (v274 & 1) == 0 )
                          goto LABEL_322;
                        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v160 + 200), 0);
                      }
                    }
                  }
                  else
                  {
                    v161 = *(_QWORD *)(v160 + 8);
                    if ( !v161 )
                    {
LABEL_232:
                      if ( _bittestandreset((signed __int32 *)(v160 + 16), 3u) )
                        goto LABEL_233;
LABEL_322:
                      ndisReportRefcountImbalance(v160, 3u);
                    }
                    for ( kk = 0; ; ++kk )
                    {
                      if ( kk >= *(_BYTE *)(v160 + 3) )
                        goto LABEL_232;
                      v190 = (_BYTE *)(v161 + 2LL * kk);
                      if ( *v190 == 3 )
                      {
                        v191 = v190[1];
                        if ( v191 )
                          break;
                      }
                    }
                    v190[1] = v191 - 1;
                  }
                }
LABEL_233:
                v52 = (*((_DWORD *)v158 + 349))-- == 1;
                if ( v52 )
                {
                  v253 = v158[176];
                  if ( v253 )
                  {
                    v254 = (struct _KEVENT *)*((_QWORD *)v253 + 506);
                    if ( v254 )
                      KeSetEvent(v254, 0, 0);
                  }
                }
                KeReleaseSpinLock(&SpinLock, v159);
                goto LABEL_235;
              }
              ndisRefCountReferenceCountOverflow = 1;
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(v99 + 312), v143);
            v99 = *(_QWORD *)(v99 + 112);
            if ( !v99 )
              goto LABEL_125;
          }
        }
      }
      v28 = 0LL;
      goto LABEL_227;
    }
    if ( !*((_BYTE *)p_DeviceContext + 1394) )
      goto LABEL_237;
    v33 = p_DeviceContext[176];
    *(_QWORD *)v339 = 0LL;
    *(_QWORD *)v340 = 0LL;
    v345 = (struct _NDIS_M_DRIVER_BLOCK *)*((_QWORD *)v33 + 4);
    v34 = 1;
    v330 = 1;
    if ( !v345[3].MiniportDriverCharacteristics.ResetHandlerEx )
      goto LABEL_481;
    v35 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v36 = ndisMiniDriverList;
    v37 = v35;
    v329 = v35;
    if ( !ndisMiniDriverList )
      goto LABEL_51;
    do
    {
      v39 = KeAcquireSpinLockRaiseToDpc(&v36->Ref.SpinLock);
      if ( v36->Ref.Closing )
        goto LABEL_379;
      v40 = v36->Ref.ReferenceCount;
      if ( v40 >= 0xFFEBu )
      {
        ndisRefCountReferenceCountOverflow = 1;
LABEL_379:
        KeReleaseSpinLock(&v36->Ref.SpinLock, v39);
        v47 = v36->NextDriver;
        goto LABEL_49;
      }
      LOBYTE(v38) = 8;
      v36->Ref.ReferenceCount = v40 + 1;
      NdisReferenceWithTag(v36->Ref.RefCountTracker, v38);
      KeReleaseSpinLock(&v36->Ref.SpinLock, v39);
      KeReleaseSpinLock(&ndisMiniDriverListLock, v37);
      v41 = KeAcquireSpinLockRaiseToDpc(&v36->Ref.SpinLock);
      v42 = v36->MiniportQueue;
      v43 = v41;
      if ( v42 )
      {
        while ( 1 )
        {
          v44 = v42->BindPaths;
          if ( !v44 )
            goto LABEL_40;
          if ( v44->Number < v34 )
            goto LABEL_40;
          ResetHandlerEx = v345[3].MiniportDriverCharacteristics.ResetHandlerEx;
          if ( *((_WORD *)ResetHandlerEx + 4) != v44->Paths[0].Length
            || memcmp(
                 *((const void **)ResetHandlerEx + 2),
                 v44->Paths[0].Buffer,
                 *((unsigned __int16 *)ResetHandlerEx + 4)) )
          {
            goto LABEL_40;
          }
          KeAcquireSpinLockAtDpcLevel(&v42->Lock);
          v52 = (v42->Flags & 0x80200020) == 0;
          v42->MiniportThread = KeGetCurrentThread();
          if ( v52
            && (v42->PnPFlags & 0x1084110) == 0
            && v42->PnPDeviceState == NdisPnPDeviceStarted
            && v42->CurrentDevicePowerState == PowerDeviceD0 )
          {
            break;
          }
LABEL_76:
          v42->MiniportThread = 0LL;
          KeReleaseSpinLockFromDpcLevel(&v42->Lock);
          v66 = *(_QWORD *)v340;
          if ( *(_QWORD *)v340 )
          {
            v67 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)v340 + 96LL));
            v68 = *(_QWORD *)(v66 + 4904);
            *(_QWORD *)(v66 + 520) = KeGetCurrentThread();
            if ( v68 - 2 > 1 )
            {
              if ( v68 < 2 )
                ndisBugCheckEx(0x1EuLL, 3uLL, v68, 0LL);
              if ( *(_BYTE *)(v68 + 2) <= 2u )
                ndisBugCheckEx(0x1EuLL, 2uLL, v68, 2uLL);
              if ( *(_BYTE *)(v68 + 1) )
              {
                if ( *(_BYTE *)(v68 + 1) == 1 )
                {
                  v288 = v68 + 136;
                  v289 = *(_DWORD *)(v68 + 192);
                  if ( v289 >> 17 < 0x3FFE && (unsigned __int16)v289 >> 1 == (v289 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v68 + 136));
                    *(_DWORD *)(v288 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( !((unsigned __int16)v289 >> 1) && (v289 & 1) == 0 )
LABEL_452:
                      ndisReportRefcountImbalance(v68, 2u);
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v68 + 136), 0);
                  }
                }
              }
              else
              {
                v69 = *(_QWORD *)(v68 + 8);
                if ( v69 )
                {
                  for ( mm = 0; ; ++mm )
                  {
                    if ( mm >= *(_BYTE *)(v68 + 3) )
                      goto LABEL_82;
                    v245 = (_BYTE *)(v69 + 2LL * mm);
                    if ( *v245 == 2 )
                    {
                      v246 = v245[1];
                      if ( v246 )
                        break;
                    }
                  }
                  v245[1] = v246 - 1;
                }
                else
                {
LABEL_82:
                  if ( !_bittestandreset((signed __int32 *)(v68 + 16), 2u) )
                    goto LABEL_452;
                }
              }
            }
            v52 = (*(_DWORD *)(v66 + 3124))-- == 1;
            if ( v52 )
            {
              v70 = *(struct _KEVENT **)(v66 + 3136);
              if ( v70 )
                KeSetEvent(v70, 0, 0);
            }
            *(_QWORD *)(v66 + 520) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)(v66 + 96), v67);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v71) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v71,
                20,
                25,
                (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
                v66);
            }
            v72 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v66 + 4432));
            v74 = *(_QWORD *)(v66 + 4896);
            v75 = v72;
            if ( v74 && v74 - 2 > 1 )
            {
              if ( v74 == 1 )
                ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
              if ( *(_BYTE *)(v74 + 2) <= 0x3Cu )
                ndisBugCheckEx(0x1EuLL, 2uLL, v74, 0x3CuLL);
              if ( *(_BYTE *)(v74 + 1) )
              {
                if ( *(_BYTE *)(v74 + 1) == 1 )
                {
                  v290 = v74 + 3848;
                  v291 = *(_DWORD *)(v74 + 3904);
                  if ( v291 >> 17 < 0x3FFE && (unsigned __int16)v291 >> 1 == (v291 >> 17) + 1 )
                  {
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v74 + 3848));
                    *(_DWORD *)(v290 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( !((unsigned __int16)v291 >> 1) && (v291 & 1) == 0 )
LABEL_453:
                      ndisReportRefcountImbalance(v74, 0x3Cu);
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v74 + 3848), 0);
                  }
                }
              }
              else
              {
                v76 = *(_QWORD *)(v74 + 8);
                if ( v76 )
                {
                  v73 = *(unsigned __int8 *)(v74 + 3);
                  for ( nn = 0; ; ++nn )
                  {
                    if ( nn >= (unsigned __int8)v73 )
                      goto LABEL_94;
                    v248 = (_BYTE *)(v76 + 2LL * nn);
                    if ( *v248 == 60 )
                    {
                      v249 = v248[1];
                      if ( v249 )
                        break;
                    }
                  }
                  v248[1] = v249 - 1;
                }
                else
                {
LABEL_94:
                  if ( !_bittestandreset((signed __int32 *)(v74 + 20), 0x1Cu) )
                    goto LABEL_453;
                }
              }
            }
            v77 = *(_DWORD *)(v66 + 4440) - 1;
            *(_DWORD *)(v66 + 4440) = v77;
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v73) = 4;
              WPP_RECORDER_SF_qL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v73,
                20,
                14,
                (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
                v66,
                v77);
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(v66 + 4432), v75);
            if ( !v77 )
            {
              v272 = *(struct _KEVENT **)(v66 + 1608);
              if ( v272 )
                KeSetEvent(v272, 0, 0);
            }
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v78) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v78,
                20,
                26,
                (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
                v66);
            }
            *(_QWORD *)v340 = 0LL;
          }
LABEL_40:
          v42 = v42->NextMiniport;
          v34 = v330;
          if ( !v42 )
            goto LABEL_41;
        }
        v58 = 1;
        v60 = KeAcquireSpinLockRaiseToDpc(&v42->Ref.SpinLock);
        if ( !v42->Ref.Closing )
        {
          v61 = v42->RefCountTracker;
          if ( v61 )
          {
            LOBYTE(v59) = 60;
            NdisReferenceWithTag(v61, v59);
          }
          v62 = v42->Ref.ReferenceCount;
          v42->Ref.ReferenceCount = v62 + 1;
          if ( v62 != -1 )
            goto LABEL_72;
          v42->Ref.ReferenceCount = -1;
        }
        v58 = 0;
LABEL_72:
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v59) = 4;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v59,
            20,
            12,
            (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
            (char)v42,
            v42->Ref.ReferenceCount);
        }
        KeReleaseSpinLock(&v42->Ref.SpinLock, v60);
        if ( v58 )
        {
          LOBYTE(v63) = 2;
          v64 = v42->NsiRefCountTracker;
          *(_QWORD *)v340 = *(_QWORD *)v339;
          NdisReferenceWithTag(v64, v63);
          v65 = (int *)v42->BindPaths;
          ++v42->NsiOpenReferences;
          *(_QWORD *)v339 = v42;
          v330 = *v65;
        }
        goto LABEL_76;
      }
LABEL_41:
      KeReleaseSpinLock(&v36->Ref.SpinLock, v43);
      v46 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      v47 = v36->NextDriver;
      v329 = v46;
      v48 = KeAcquireSpinLockRaiseToDpc(&v36->Ref.SpinLock);
      v49 = (ULONG_PTR)v36->Ref.RefCountTracker;
      v50 = v48;
      if ( v49 - 2 > 1 )
      {
        if ( v49 < 2 )
          ndisBugCheckEx(0x1EuLL, 3uLL, v49, 0LL);
        if ( *(_BYTE *)(v49 + 2) <= 8u )
          ndisBugCheckEx(0x1EuLL, 2uLL, v49, 8uLL);
        if ( *(_BYTE *)(v49 + 1) )
        {
          if ( *(_BYTE *)(v49 + 1) == 1 )
          {
            v183 = v49 + 520;
            v184 = *(_DWORD *)(v49 + 576);
            if ( v184 >> 17 < 0x3FFE && (unsigned __int16)v184 >> 1 == (v184 >> 17) + 1 )
            {
              for ( i1 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v183;
                    *(_QWORD *)v183;
                    i1 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v183 )
              {
                *(_QWORD *)v183 = i1->Next;
                ndisFreeRefCountStacksInBlock(i1);
                ExFreePoolWithTag(i1, 0);
              }
              ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v183);
              *(_DWORD *)(v183 + 56) &= 0x10001u;
            }
            else
            {
              if ( !((unsigned __int16)v184 >> 1) && (v184 & 1) == 0 )
LABEL_61:
                ndisReportRefcountImbalance(v49, 8u);
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v49 + 520), 0);
            }
          }
        }
        else
        {
          v51 = *(_QWORD *)(v49 + 8);
          if ( v51 )
          {
            for ( i2 = 0; ; ++i2 )
            {
              if ( i2 >= *(_BYTE *)(v49 + 3) )
                goto LABEL_46;
              v56 = (_BYTE *)(v51 + 2LL * i2);
              if ( *v56 == 8 )
              {
                v57 = v56[1];
                if ( v57 )
                  break;
              }
            }
            v56[1] = v57 - 1;
          }
          else
          {
LABEL_46:
            if ( !_bittestandreset((signed __int32 *)(v49 + 16), 8u) )
              goto LABEL_61;
          }
        }
      }
      v52 = v36->Ref.ReferenceCount-- == 1;
      if ( v52 )
      {
        if ( !v36->Ref.ZeroBased )
        {
          v298 = (ULONG_PTR)v36->Ref.RefCountTracker;
          if ( v298 )
          {
            v299 = ndisGetAnyActiveRefTag(v36->Ref.RefCountTracker);
            if ( v299 != -2 )
              ndisBugCheckEx(0x1EuLL, 4uLL, v298, v299);
            v300 = ndisRefCountBlockFromRefCountHandle(v298);
            v301 = v300;
            if ( v300 )
            {
              ndisFreeRefCountAuxiliaryMemory(v300);
              ExFreePoolWithTag(v301, 0);
            }
          }
          v36->Ref.RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
        }
        KeReleaseSpinLock(&v36->Ref.SpinLock, v50);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v302) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v302,
            20,
            23,
            (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
            (char)v36);
        }
        for ( i3 = &ndisMiniDriverList; ; i3 = &v304->NextDriver )
        {
          v304 = *i3;
          if ( !*i3 )
            break;
          if ( v304 == v36 )
          {
            *i3 = v36->NextDriver;
            ObfDereferenceObject(ndisDriverObject);
            break;
          }
        }
        v305 = v36->ImageName.Buffer;
        if ( v305 )
        {
          ExFreePoolWithTag(v305, 0);
          v36->ImageName.Buffer = 0LL;
        }
        v306 = v36->NdisDriverInfo;
        if ( v306 )
        {
          ExFreePoolWithTag(v306, 0);
          v36->NdisDriverInfo = 0LL;
        }
        if ( (v36->Flags & 1) != 0 )
        {
          v307 = v36->PendingDeviceList;
          if ( v307 )
          {
            do
            {
              v309 = v307->Next;
              ExFreePoolWithTag(v307, 0);
              v307 = v309;
            }
            while ( v309 );
          }
        }
        KeSetEvent(&v36->MiniportsRemovedEvent, 0, 0);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v308) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v308,
            20,
            24,
            (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
            (char)v36);
        }
      }
      else
      {
        KeReleaseSpinLock(&v36->Ref.SpinLock, v50);
      }
LABEL_49:
      v37 = v329;
      v36 = v47;
      v52 = v47 == 0LL;
      v34 = v330;
    }
    while ( !v52 );
    v8 = *(_DWORD *)&v360[4];
LABEL_51:
    KeReleaseSpinLock(&ndisMiniDriverListLock, v37);
    v53 = *(_QWORD **)v339;
    if ( !*(_QWORD *)v339 )
    {
LABEL_481:
      v28 = 0LL;
      goto LABEL_237;
    }
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)v339 + 96LL));
    v54 = v53[256];
    v53[65] = KeGetCurrentThread();
    if ( !v54 )
    {
LABEL_53:
      v28 = v53[505];
      goto LABEL_176;
    }
    while ( 2 )
    {
      v128 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v54 + 312));
      if ( *(_BYTE *)(v54 + 322) )
        goto LABEL_570;
      v129 = *(_WORD *)(v54 + 320);
      if ( v129 >= 0xFFEBu )
      {
        ndisRefCountReferenceCountOverflow = 1;
LABEL_570:
        KeReleaseSpinLock((PKSPIN_LOCK)(v54 + 312), v128);
        v54 = *(_QWORD *)(v54 + 112);
        if ( !v54 )
          goto LABEL_53;
        continue;
      }
      break;
    }
    LOBYTE(v127) = 11;
    *(_WORD *)(v54 + 320) = v129 + 1;
    NdisReferenceWithTag(*(_QWORD *)(v54 + 328), v127);
    KeReleaseSpinLock((PKSPIN_LOCK)(v54 + 312), v128);
    v28 = *(_QWORD *)(v54 + 688);
LABEL_176:
    v53[65] = 0LL;
    KeReleaseSpinLockFromDpcLevel(v53 + 12);
    v130 = KeAcquireSpinLockRaiseToDpc(v53 + 12);
    v131 = v53[613];
    v53[65] = KeGetCurrentThread();
    if ( v131 - 2 > 1 )
    {
      if ( v131 < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v131, 0LL);
      if ( *(_BYTE *)(v131 + 2) <= 2u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v131, 2uLL);
      if ( *(_BYTE *)(v131 + 1) )
      {
        if ( *(_BYTE *)(v131 + 1) != 1 )
          goto LABEL_182;
        v277 = v131 + 136;
        v278 = *(_DWORD *)(v131 + 192);
        if ( v278 >> 17 < 0x3FFE && (unsigned __int16)v278 >> 1 == (v278 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v131 + 136));
          *(_DWORD *)(v277 + 56) &= 0x10001u;
          goto LABEL_182;
        }
        if ( (unsigned __int16)v278 >> 1 || (v278 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v131 + 136), 0);
          goto LABEL_182;
        }
        goto LABEL_374;
      }
      v132 = *(_QWORD *)(v131 + 8);
      if ( !v132 )
      {
LABEL_181:
        if ( _bittestandreset((signed __int32 *)(v131 + 16), 2u) )
          goto LABEL_182;
LABEL_374:
        ndisReportRefcountImbalance(v131, 2u);
      }
      for ( i4 = 0; ; ++i4 )
      {
        if ( i4 >= *(_BYTE *)(v131 + 3) )
          goto LABEL_181;
        v193 = (_BYTE *)(v132 + 2LL * i4);
        if ( *v193 == 2 )
        {
          v194 = v193[1];
          if ( v194 )
            break;
        }
      }
      v193[1] = v194 - 1;
    }
LABEL_182:
    v52 = (*((_DWORD *)v53 + 781))-- == 1;
    if ( v52 )
    {
      v133 = (struct _KEVENT *)v53[392];
      if ( v133 )
        KeSetEvent(v133, 0, 0);
    }
    v53[65] = 0LL;
    KeReleaseSpinLock(v53 + 12, v130);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v134) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v134,
        20,
        25,
        (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
        (char)v53);
    }
    v135 = KeAcquireSpinLockRaiseToDpc(v53 + 554);
    v137 = v53[612];
    v138 = v135;
    if ( v137 && v137 - 2 > 1 )
    {
      if ( v137 == 1 )
        ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
      if ( *(_BYTE *)(v137 + 2) <= 0x3Cu )
        ndisBugCheckEx(0x1EuLL, 2uLL, v137, 0x3CuLL);
      if ( *(_BYTE *)(v137 + 1) )
      {
        if ( *(_BYTE *)(v137 + 1) == 1 )
        {
          v279 = v137 + 3848;
          v280 = *(_DWORD *)(v137 + 3904);
          if ( v280 >> 17 < 0x3FFE && (unsigned __int16)v280 >> 1 == (v280 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v137 + 3848));
            *(_DWORD *)(v279 + 56) &= 0x10001u;
          }
          else
          {
            if ( !((unsigned __int16)v280 >> 1) && (v280 & 1) == 0 )
              goto LABEL_375;
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v137 + 3848), 0);
          }
        }
      }
      else
      {
        v139 = *(_QWORD *)(v137 + 8);
        if ( !v139 )
        {
LABEL_193:
          if ( _bittestandreset((signed __int32 *)(v137 + 20), 0x1Cu) )
            goto LABEL_194;
LABEL_375:
          ndisReportRefcountImbalance(v137, 0x3Cu);
        }
        for ( i5 = 0; ; ++i5 )
        {
          if ( i5 >= *(_BYTE *)(v137 + 3) )
            goto LABEL_193;
          v136 = (_BYTE *)(v139 + 2LL * i5);
          if ( *v136 == 60 )
          {
            v196 = v136[1];
            if ( v196 )
              break;
          }
        }
        v136[1] = v196 - 1;
      }
    }
LABEL_194:
    v140 = *((_DWORD *)v53 + 1110) - 1;
    *((_DWORD *)v53 + 1110) = v140;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v136) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v136,
        20,
        14,
        (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
        (char)v53,
        v140);
    }
    KeReleaseSpinLock(v53 + 554, v138);
    if ( !v140 )
    {
      v266 = (struct _KEVENT *)v53[201];
      if ( v266 )
        KeSetEvent(v266, 0, 0);
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v141) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (unsigned __int16)v141,
        20,
        26,
        (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
        (char)v53);
    }
    v8 = *(_DWORD *)&v360[4];
LABEL_235:
    if ( v28 )
    {
      LOBYTE(v141) = 7;
      NdisReferenceWithTag(*(_QWORD *)(v28 + 1432), v141);
      ++*(_DWORD *)(v28 + 1304);
    }
LABEL_237:
    p_DeviceContext = v352;
    v3 = *(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS **)v349;
    v24 = (_DEVICE_OBJECT *)v338;
    v19 = v336;
LABEL_238:
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v328);
    if ( *((_QWORD *)v3 + 2) )
    {
      memmove(v348, p_DeviceContext + 164, v19);
      v348 = (char *)v348 + v19;
    }
    if ( *((_QWORD *)v3 + 7) )
    {
      v162 = v353;
      LODWORD(v358) = 1;
      LODWORD(v359) = v341;
      *((_QWORD *)&v358 + 1) = v353;
      ndisNsiGetInterfaceRodEnumObject((char)p_DeviceContext);
      v353 = v341 + v162;
    }
    if ( *((_QWORD *)v3 + 9) )
    {
      v163 = v354;
      *((_QWORD *)&v358 + 1) = v354;
      LODWORD(v358) = 2;
      LODWORD(v359) = v342;
      ndisNsiGetInterfaceRosEnumObject((char)p_DeviceContext);
      v354 = v342 + v163;
    }
    v328 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    if ( v28 )
    {
      if ( *(_BYTE *)(v28 + 1394) )
      {
        v164 = *(_QWORD *)(v28 + 1408) + 312LL;
        v165 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v164);
        v166 = *(_QWORD *)(v164 + 16);
        v167 = v165;
        if ( v166 - 2 > 1 )
        {
          if ( v166 < 2 )
            ndisBugCheckEx(0x1EuLL, 3uLL, v166, 0LL);
          if ( *(_BYTE *)(v166 + 2) <= 0xBu )
            ndisBugCheckEx(0x1EuLL, 2uLL, v166, 0xBuLL);
          if ( *(_BYTE *)(v166 + 1) )
          {
            if ( *(_BYTE *)(v166 + 1) != 1 )
              goto LABEL_252;
            v260 = v166 + 712;
            v261 = *(_DWORD *)(v166 + 768);
            if ( v261 >> 17 >= 0x3FFE || (unsigned __int16)v261 >> 1 != (v261 >> 17) + 1 )
            {
              if ( (unsigned __int16)v261 >> 1 || (v261 & 1) != 0 )
              {
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v166 + 712), 0);
                goto LABEL_252;
              }
              goto LABEL_298;
            }
            for ( i6 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v260;
                  *(_QWORD *)v260;
                  i6 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v260 )
            {
              *(_QWORD *)v260 = i6->Next;
              ndisFreeRefCountStacksInBlock(i6);
              ExFreePoolWithTag(i6, 0);
            }
            ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v260);
            *(_DWORD *)(v260 + 56) &= 0x10001u;
            v3 = *(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS **)v349;
          }
          else
          {
            v168 = *(_QWORD *)(v166 + 8);
            if ( !v168 )
            {
LABEL_251:
              if ( _bittestandreset((signed __int32 *)(v166 + 16), 0xBu) )
                goto LABEL_252;
LABEL_298:
              ndisReportRefcountImbalance(v166, 0xBu);
            }
            for ( i7 = 0; ; ++i7 )
            {
              if ( i7 >= *(_BYTE *)(v166 + 3) )
                goto LABEL_251;
              v181 = (_BYTE *)(v168 + 2LL * i7);
              if ( *v181 == 11 )
              {
                v182 = v181[1];
                if ( v182 )
                  break;
              }
            }
            v181[1] = v182 - 1;
          }
        }
LABEL_252:
        v52 = (*(_WORD *)(v164 + 8))-- == 1;
        if ( v52 && !*(_BYTE *)(v164 + 11) )
        {
          v322 = *(_QWORD *)(v164 + 16);
          if ( v322 )
          {
            v323 = ndisGetAnyActiveRefTag(*(struct NDIS_REFCOUNT_HANDLE__ **)(v164 + 16));
            if ( v323 != -2 )
              ndisBugCheckEx(0x1EuLL, 4uLL, v322, v323);
            v324 = ndisRefCountBlockFromRefCountHandle(v322);
            v325 = v324;
            if ( v324 )
            {
              ndisFreeRefCountAuxiliaryMemory(v324);
              ExFreePoolWithTag(v325, 0);
            }
          }
          *(_QWORD *)(v164 + 16) = 1LL;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v164, v167);
      }
      v169 = *(_QWORD *)(v28 + 1432);
      if ( v169 - 2 > 1 )
      {
        if ( v169 < 2 )
          ndisBugCheckEx(0x1EuLL, 3uLL, v169, 0LL);
        if ( *(_BYTE *)(v169 + 2) <= 7u )
          ndisBugCheckEx(0x1EuLL, 2uLL, v169, 7uLL);
        if ( *(_BYTE *)(v169 + 1) )
        {
          if ( *(_BYTE *)(v169 + 1) == 1 )
          {
            v263 = v169 + 456;
            v264 = *(_DWORD *)(v169 + 512);
            if ( v264 >> 17 < 0x3FFE && (unsigned __int16)v264 >> 1 == (v264 >> 17) + 1 )
            {
              for ( i8 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v263;
                    *(_QWORD *)v263;
                    i8 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v263 )
              {
                *(_QWORD *)v263 = i8->Next;
                ndisFreeRefCountStacksInBlock(i8);
                ExFreePoolWithTag(i8, 0);
              }
              ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v263);
              *(_DWORD *)(v263 + 56) &= 0x10001u;
            }
            else
            {
              if ( !((unsigned __int16)v264 >> 1) && (v264 & 1) == 0 )
                goto LABEL_299;
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v169 + 456), 0);
            }
          }
        }
        else
        {
          v17 = *(_BYTE **)(v169 + 8);
          if ( !v17 )
          {
LABEL_259:
            if ( _bittestandreset((signed __int32 *)(v169 + 16), 7u) )
              goto LABEL_260;
LABEL_299:
            ndisReportRefcountImbalance(v169, 7u);
          }
          for ( i9 = 0; ; ++i9 )
          {
            if ( i9 >= *(_BYTE *)(v169 + 3) )
              goto LABEL_259;
            v178 = &v17[2 * i9];
            if ( *v178 == 7 )
            {
              v179 = v178[1];
              if ( v179 )
                break;
            }
          }
          v178[1] = v179 - 1;
        }
      }
LABEL_260:
      v52 = (*(_DWORD *)(v28 + 1304))-- == 1;
      if ( !v52 )
      {
LABEL_261:
        v24 = (_DEVICE_OBJECT *)v338;
        goto LABEL_262;
      }
      KeAcquireSpinLockAtDpcLevel(&qword_140126A68);
      v223 = (PVOID *)P;
      if ( P != &P )
      {
        do
        {
          v224 = v223;
          v223 = (PVOID *)*v223;
          v225 = v224[3];
          if ( v225 == (_DWORD *)v28 || v224[4] == (PVOID)v28 )
          {
            --v225[324];
            --*((_DWORD *)v224[4] + 325);
            v242 = (PVOID *)*v224;
            if ( *((PVOID **)*v224 + 1) != v224 )
              goto LABEL_442;
            v243 = (PVOID **)v224[1];
            if ( *v243 != v224 )
              goto LABEL_442;
            *v243 = v242;
            v242[1] = v243;
            ExFreePoolWithTag(v224, 0);
          }
        }
        while ( v223 != &P );
      }
      *(_QWORD *)(v28 + 1296) = 0LL;
      KeReleaseSpinLockFromDpcLevel(&qword_140126A68);
      v226 = *(_QWORD *)(v28 + 1232);
      if ( *(_QWORD *)(v226 + 8) == v28 + 1232 )
      {
        v227 = *(_QWORD **)(v28 + 1240);
        if ( *v227 == v28 + 1232 )
        {
          *v227 = v226;
          *(_QWORD *)(v226 + 8) = v227;
          v228 = *(_QWORD *)(v28 + 1248);
          if ( *(_QWORD *)(v228 + 8) == v28 + 1248 )
          {
            v229 = *(_QWORD **)(v28 + 1256);
            if ( *v229 == v28 + 1248 )
            {
              *v229 = v228;
              *(_QWORD *)(v228 + 8) = v229;
              v230 = *(_QWORD *)(v28 + 1264);
              if ( *(_QWORD *)(v230 + 8) == v28 + 1264 )
              {
                v231 = *(_QWORD **)(v28 + 1272);
                if ( *v231 == v28 + 1264 )
                {
                  *v231 = v230;
                  *(_QWORD *)(v230 + 8) = v231;
                  v232 = *(_QWORD *)(v28 + 1368);
                  v52 = (*(_DWORD *)(v232 + 76))-- == 1;
                  if ( v52 )
                  {
                    v326 = *(struct _KEVENT **)(v232 + 608);
                    if ( v326 )
                      KeSetEvent(v326, 0, 0);
                  }
                  v233 = *(_DWORD *)(v28 + 4);
                  v234 = &dword_140126B60;
                  if ( v233 >= *(_DWORD *)dword_1401275E8 )
                    v234 = &dword_140126B78;
                  IfIndexRange::FreeBit((IfIndexRange *)v234, v233);
                  --ndisInterfaceCount;
                  v235 = *(_QWORD *)(v28 + 1432);
                  if ( v235 )
                  {
                    v236 = ndisGetAnyActiveRefTag(*(struct NDIS_REFCOUNT_HANDLE__ **)(v28 + 1432));
                    if ( v236 != -2 )
                      ndisBugCheckEx(0x1EuLL, 4uLL, v235, v236);
                    v237 = ndisRefCountBlockFromRefCountHandle(v235);
                    v238 = v237;
                    if ( v237 )
                    {
                      ndisFreeRefCountAuxiliaryMemory(v237);
                      ExFreePoolWithTag(v238, 0);
                    }
                  }
                  v239 = *(void **)(v28 + 1424);
                  *(_QWORD *)(v28 + 1432) = 0LL;
                  if ( v239 )
                  {
                    ExFreePoolWithTag(v239, 0);
                    *(_QWORD *)(v28 + 1424) = 0LL;
                  }
                  v240 = *(void **)(v28 + 1280);
                  if ( v240 )
                  {
                    ExFreePoolWithTag(v240, 0);
                    *(_QWORD *)(v28 + 1280) = 0LL;
                    *(_QWORD *)(v28 + 1288) = 0LL;
                  }
                  v241 = *(struct _KEVENT **)(v28 + 1384);
                  if ( v241 )
                    KeSetEvent(v241, 0, 0);
                  ExFreePoolWithTag((PVOID)v28, 0);
                  goto LABEL_261;
                }
              }
            }
          }
        }
      }
LABEL_442:
      __fastfail(3u);
    }
LABEL_262:
    v170 = (ULONG_PTR)p_DeviceContext[179];
    v24 = *(_DEVICE_OBJECT **)&v24->Type;
    v338 = (_LIST_ENTRY *)v24;
    if ( v170 - 2 > 1 )
    {
      if ( v170 < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v170, 0LL);
      if ( *(_BYTE *)(v170 + 2) <= 6u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v170, 6uLL);
      if ( *(_BYTE *)(v170 + 1) )
      {
        if ( *(_BYTE *)(v170 + 1) == 1 )
        {
          v257 = v170 + 392;
          v258 = *(_DWORD *)(v170 + 448);
          if ( v258 >> 17 < 0x3FFE && (unsigned __int16)v258 >> 1 == (v258 >> 17) + 1 )
          {
            for ( i10 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v257;
                  *(_QWORD *)v257;
                  i10 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v257 )
            {
              *(_QWORD *)v257 = i10->Next;
              ndisFreeRefCountStacksInBlock(i10);
              ExFreePoolWithTag(i10, 0);
            }
            ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v257);
            *(_DWORD *)(v257 + 56) &= 0x10001u;
            v24 = (_DEVICE_OBJECT *)v338;
          }
          else
          {
            if ( !((unsigned __int16)v258 >> 1) && (v258 & 1) == 0 )
              goto LABEL_285;
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v170 + 392), 0);
          }
        }
      }
      else
      {
        v171 = *(_QWORD *)(v170 + 8);
        if ( !v171 )
        {
LABEL_267:
          if ( _bittestandreset((signed __int32 *)(v170 + 16), 6u) )
            goto LABEL_268;
LABEL_285:
          ndisReportRefcountImbalance(v170, 6u);
        }
        for ( i11 = 0; ; ++i11 )
        {
          if ( i11 >= *(_BYTE *)(v170 + 3) )
            goto LABEL_267;
          v17 = (_BYTE *)(v171 + 2LL * i11);
          if ( *v17 == 6 )
          {
            v176 = v17[1];
            if ( v176 )
              break;
          }
        }
        v17[1] = v176 - 1;
      }
    }
LABEL_268:
    v52 = (*((_DWORD *)p_DeviceContext + 326))-- == 1;
    if ( v52 )
    {
      KeAcquireSpinLockAtDpcLevel(&qword_140126A68);
      v202 = (PVOID *)P;
      if ( P != &P )
      {
        do
        {
          v203 = v202;
          v202 = (PVOID *)*v202;
          v204 = (void **)v203[3];
          if ( v204 == p_DeviceContext || v203[4] == p_DeviceContext )
          {
            --*((_DWORD *)v204 + 324);
            --*((_DWORD *)v203[4] + 325);
            v221 = (PVOID *)*v203;
            if ( *((PVOID **)*v203 + 1) != v203 )
              goto LABEL_442;
            v222 = (PVOID **)v203[1];
            if ( *v222 != v203 )
              goto LABEL_442;
            *v222 = v221;
            v221[1] = v222;
            ExFreePoolWithTag(v203, 0);
          }
        }
        while ( v202 != &P );
      }
      p_DeviceContext[162] = 0LL;
      KeReleaseSpinLockFromDpcLevel(&qword_140126A68);
      v205 = *(_QWORD *)&v355->Type;
      if ( *(_DEVICE_OBJECT **)(*(_QWORD *)&v355->Type + 8LL) != v355 )
        goto LABEL_442;
      DriverObject = v355->DriverObject;
      if ( *(_DEVICE_OBJECT **)&DriverObject->Type != v355 )
        goto LABEL_442;
      *(_QWORD *)&DriverObject->Type = v205;
      *(_QWORD *)(v205 + 8) = DriverObject;
      v207 = (void ***)p_DeviceContext[156];
      if ( v207[1] != p_DeviceContext + 156 )
        goto LABEL_442;
      v208 = (char **)p_DeviceContext[157];
      if ( *v208 != (char *)(p_DeviceContext + 156) )
        goto LABEL_442;
      *v208 = (char *)v207;
      v207[1] = (void **)v208;
      v209 = (void ***)p_DeviceContext[158];
      if ( v209[1] != p_DeviceContext + 158 )
        goto LABEL_442;
      v210 = (char **)p_DeviceContext[159];
      if ( *v210 != (char *)(p_DeviceContext + 158) )
        goto LABEL_442;
      *v210 = (char *)v209;
      v209[1] = (void **)v210;
      v211 = p_DeviceContext[171];
      v52 = (*((_DWORD *)v211 + 19))-- == 1;
      if ( v52 )
      {
        v327 = (struct _KEVENT *)*((_QWORD *)v211 + 76);
        if ( v327 )
          KeSetEvent(v327, 0, 0);
      }
      v212 = *((_DWORD *)p_DeviceContext + 1);
      v213 = &dword_140126B60;
      if ( v212 >= *(_DWORD *)dword_1401275E8 )
        v213 = &dword_140126B78;
      IfIndexRange::FreeBit((IfIndexRange *)v213, v212);
      --ndisInterfaceCount;
      v214 = (ULONG_PTR)p_DeviceContext[179];
      if ( v214 )
      {
        v215 = ndisGetAnyActiveRefTag((struct NDIS_REFCOUNT_HANDLE__ *)p_DeviceContext[179]);
        if ( v215 != -2 )
          ndisBugCheckEx(0x1EuLL, 4uLL, v214, v215);
        v216 = ndisRefCountBlockFromRefCountHandle(v214);
        v217 = v216;
        if ( v216 )
        {
          ndisFreeRefCountAuxiliaryMemory(v216);
          ExFreePoolWithTag(v217, 0);
        }
      }
      v218 = p_DeviceContext[178];
      p_DeviceContext[179] = 0LL;
      if ( v218 )
      {
        ExFreePoolWithTag(v218, 0);
        p_DeviceContext[178] = 0LL;
      }
      v219 = p_DeviceContext[160];
      if ( v219 )
      {
        ExFreePoolWithTag(v219, 0);
        p_DeviceContext[160] = 0LL;
        p_DeviceContext[161] = 0LL;
      }
      v220 = (struct _KEVENT *)p_DeviceContext[173];
      if ( v220 )
        KeSetEvent(v220, 0, 0);
      ExFreePoolWithTag(p_DeviceContext, 0);
    }
    v19 = v336;
    v2 = v344;
    v25 = v343;
  }
  while ( v24 != (_DEVICE_OBJECT *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink );
  LOBYTE(v17) = v328;
LABEL_272:
  *((_DWORD *)v3 + 22) = v25;
  v172 = v2 < v25 ? 0x105 : 0;
LABEL_273:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, (KIRQL)v17);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v173) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v173,
      22,
      15,
      (struct _GUID *)&WPP_f142ecdf0a6f33a49e2e175c00018497_Traceguids,
      (char)v3,
      v172);
  }
  KeLeaveCriticalRegion();
  return v172;
}
