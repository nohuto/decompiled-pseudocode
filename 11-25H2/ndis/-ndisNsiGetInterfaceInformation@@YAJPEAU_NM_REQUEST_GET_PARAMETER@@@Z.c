/*
 * XREFs of ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x14000B1E0
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
 *     memcmp @ 0x1400EE8A0 (memcmp.c)
 *     ndisNsiGetInterfaceRosEnumObject @ 0x14015A5C0 (ndisNsiGetInterfaceRosEnumObject.c)
 *     ndisNsiGetInterfaceRosInformation @ 0x14015C090 (ndisNsiGetInterfaceRosInformation.c)
 *     ndisNsiGetInterfaceRwInformation @ 0x14015C4E0 (ndisNsiGetInterfaceRwInformation.c)
 *     ndisIsMacAddressHidden @ 0x14015CAC0 (ndisIsMacAddressHidden.c)
 *     ndisNsiGetInterfaceRodEnumObject @ 0x1401768B0 (ndisNsiGetInterfaceRodEnumObject.c)
 *     ndisNsiGetInterfaceRodInformation @ 0x1401770E0 (ndisNsiGetInterfaceRodInformation.c)
 */

__int64 __fastcall ndisNsiGetInterfaceInformation(struct _NM_REQUEST_GET_PARAMETER *a1, __int16 a2)
{
  struct _NM_REQUEST_GET_PARAMETER *v2; // r13
  __int64 CurrentProcess; // rax
  struct _KTHREAD *CurrentThread; // rsi
  _LIST_ENTRY **v5; // rbx
  _LIST_ENTRY *Value; // rbx
  int *ThreadProperty; // rax
  PACCESS_TOKEN v8; // rax
  void *v9; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v11; // edi
  int v12; // r14d
  unsigned int v13; // edi
  KIRQL v14; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v15; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v16; // rdx
  KIRQL v17; // al
  int v18; // edx
  KIRQL v19; // r9
  _DEVICE_OBJECT *Blink; // rax
  struct _NDIS_IF_BLOCK *p_DeviceContext; // rsi
  unsigned int InterfaceRodEnumObject; // ebx
  char *v23; // r14
  int *v24; // r13
  KIRQL v25; // r12
  __int64 v26; // rdi
  KIRQL v27; // al
  ULONG_PTR v28; // r8
  KIRQL v29; // r15
  __int64 v30; // r9
  bool v31; // zf
  ULONG_PTR v32; // r8
  __int64 v33; // r9
  char *v34; // r14
  ULONG_PTR v35; // r8
  __int64 v36; // r9
  int v37; // edx
  struct _KTHREAD *v38; // r14
  PACCESS_TOKEN v39; // rax
  void *v40; // rsi
  unsigned int ThreadSessionId; // eax
  NTSTATUS v42; // edi
  unsigned __int8 i3; // cl
  _BYTE *v44; // rdx
  char v45; // al
  unsigned __int8 i5; // cl
  _BYTE *v47; // rdx
  char v48; // al
  unsigned __int8 i7; // cl
  _BYTE *v50; // rdx
  char v51; // al
  NTSTATUS v52; // edi
  PVOID *v53; // rdi
  PVOID *v54; // rcx
  char *v55; // rdx
  _QWORD *v56; // rdx
  PVOID *v57; // rcx
  _QWORD *v58; // rdx
  PVOID *v59; // rcx
  _QWORD *v60; // rdx
  PVOID *v61; // rcx
  __int64 v62; // rax
  unsigned int v63; // edx
  int *v64; // rcx
  ULONG_PTR v65; // rdi
  unsigned int v66; // eax
  struct _NDIS_REFCOUNT_BLOCK *v67; // rax
  struct _NDIS_REFCOUNT_BLOCK *v68; // rdi
  void *v69; // rcx
  void *v70; // rcx
  struct _KEVENT *v71; // rcx
  PVOID *v72; // rdx
  PVOID **v73; // rax
  PVOID *v74; // rdi
  PVOID *v75; // rcx
  char *v76; // rdx
  _QWORD *v77; // rdx
  PVOID *v78; // rcx
  _QWORD *v79; // rdx
  PVOID *v80; // rcx
  _QWORD *v81; // rdx
  PVOID *v82; // rcx
  __int64 v83; // rax
  unsigned int v84; // edx
  ULONG_PTR v85; // rdi
  unsigned int v86; // eax
  struct _NDIS_REFCOUNT_BLOCK *v87; // rax
  struct _NDIS_REFCOUNT_BLOCK *v88; // rdi
  void *v89; // rcx
  void *v90; // rcx
  struct _KEVENT *v91; // rcx
  PVOID *v92; // rdx
  PVOID **v93; // rax
  KIRQL v94; // al
  ULONG_PTR v95; // rsi
  unsigned int v96; // r9d
  struct _NDIS_REFCOUNT_STACK_BLOCK *i2; // r14
  ULONG_PTR v98; // rdi
  unsigned int v99; // r9d
  struct _NDIS_REFCOUNT_STACK_BLOCK *i4; // rsi
  ULONG_PTR v101; // rdi
  unsigned int v102; // r9d
  struct _NDIS_REFCOUNT_STACK_BLOCK *i6; // rsi
  int v104; // edx
  _DEVICE_OBJECT *v105; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *v106; // rcx
  __int64 v107; // rdx
  struct _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rcx
  __int64 v109; // r15
  KIRQL v110; // al
  __int64 v111; // rdx
  KIRQL v112; // bl
  __int64 v113; // rdi
  NDIS_REFCOUNT_HANDLE__ *MpRefCountTracker; // rcx
  _NDIS_MINIPORT_BLOCK *Miniport; // rax
  __int64 v116; // r14
  unsigned int v117; // esi
  __int64 v118; // r15
  KIRQL v119; // al
  struct _NDIS_M_DRIVER_BLOCK *v120; // r13
  KIRQL v121; // r12
  __int64 v122; // rdx
  KIRQL v123; // di
  unsigned __int16 ReferenceCount; // cx
  KIRQL v125; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  KIRQL v127; // r12
  _NDIS_BIND_PATHS *BindPaths; // rdx
  __int64 v129; // rcx
  KIRQL v130; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // r14
  KIRQL v132; // al
  ULONG_PTR v133; // r8
  KIRQL v134; // r15
  __int64 v135; // r9
  __int64 v136; // rdi
  unsigned __int8 ii; // cl
  _BYTE *v138; // rdx
  char v139; // al
  char v140; // si
  __int64 v141; // rdx
  KIRQL v142; // r14
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  unsigned int v144; // ecx
  __int64 v145; // rdx
  NDIS_REFCOUNT_HANDLE__ *NsiRefCountTracker; // rcx
  int *v147; // rax
  __int64 v148; // r15
  KIRQL v149; // r14
  ULONG_PTR v150; // r8
  __int64 v151; // r9
  struct _KEVENT *v152; // rcx
  __int16 v153; // dx
  __int64 v154; // r14
  KIRQL v155; // al
  _BYTE *v156; // rdx
  __int64 v157; // rsi
  KIRQL v158; // r15
  ULONG_PTR v159; // r8
  __int64 v160; // r9
  int v161; // edi
  __int16 v162; // dx
  __int64 v163; // r13
  unsigned int v164; // esi
  KIRQL v165; // al
  struct _NDIS_M_DRIVER_BLOCK *v166; // r15
  KIRQL v167; // r12
  _REFERENCE_EX *p_Ref; // r13
  KIRQL v169; // al
  __int64 v170; // rdx
  KIRQL v171; // bl
  unsigned __int16 v172; // cx
  KIRQL v173; // al
  _NDIS_MINIPORT_BLOCK *v174; // rbx
  KIRQL v175; // r12
  _NDIS_BIND_PATHS *v176; // rdx
  __int64 v177; // rcx
  KIRQL v178; // al
  struct _NDIS_M_DRIVER_BLOCK *v179; // rsi
  KIRQL v180; // al
  ULONG_PTR v181; // r8
  KIRQL v182; // r14
  __int64 v183; // r9
  unsigned __int8 i11; // cl
  _BYTE *v185; // rdx
  char v186; // al
  char v187; // si
  __int64 v188; // rdx
  KIRQL v189; // r14
  NDIS_REFCOUNT_HANDLE__ *v190; // rcx
  unsigned int v191; // ecx
  __int64 v192; // rdx
  NDIS_REFCOUNT_HANDLE__ *v193; // rcx
  int *v194; // rax
  __int64 v195; // r15
  KIRQL v196; // r14
  ULONG_PTR v197; // r8
  __int64 v198; // r9
  struct _KEVENT *v199; // rcx
  __int16 v200; // dx
  KIRQL v201; // al
  _BYTE *v202; // rdx
  ULONG_PTR v203; // r8
  KIRQL v204; // r14
  __int64 v205; // r9
  int v206; // edi
  __int16 v207; // dx
  __int64 v208; // rdi
  __int64 v209; // rdx
  KIRQL v210; // si
  unsigned __int16 v211; // cx
  KIRQL v212; // si
  ULONG_PTR v213; // r8
  __int64 v214; // r9
  struct _KEVENT *v215; // rcx
  __int16 v216; // dx
  __int64 v217; // rdi
  KIRQL v218; // al
  _BYTE *v219; // rdx
  __int64 v220; // rsi
  KIRQL v221; // r14
  ULONG_PTR v222; // r8
  __int64 v223; // r9
  int v224; // ebx
  __int64 v225; // rdx
  KIRQL v226; // al
  __int64 v227; // rdx
  KIRQL v228; // si
  unsigned __int16 v229; // cx
  KIRQL v230; // si
  ULONG_PTR v231; // r8
  __int64 v232; // r9
  struct _KEVENT *v233; // rcx
  __int16 v234; // dx
  KIRQL v235; // al
  _BYTE *v236; // rdx
  ULONG_PTR v237; // r8
  KIRQL v238; // r14
  __int64 v239; // r9
  int v240; // ebx
  __int16 v241; // dx
  KIRQL v242; // al
  KIRQL v243; // bl
  ULONG_PTR v244; // r8
  __int64 v245; // rdx
  KIRQL v246; // dl
  __int64 v247; // rax
  int v248; // eax
  ULONG_PTR v249; // rbx
  unsigned int v250; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *n; // rdi
  ULONG_PTR v252; // rbx
  unsigned int v253; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *i10; // rdi
  unsigned __int8 i17; // cl
  _BYTE *v256; // r9
  char v257; // al
  unsigned __int8 mm; // cl
  _BYTE *v259; // rdx
  char v260; // al
  unsigned __int8 i1; // cl
  char v262; // al
  unsigned __int8 i14; // cl
  _BYTE *v264; // rdx
  char v265; // al
  unsigned __int8 i16; // cl
  char v267; // al
  unsigned __int8 j; // cl
  _BYTE *v269; // rdx
  char v270; // al
  unsigned __int8 m; // cl
  char v272; // al
  unsigned __int8 i8; // cl
  _BYTE *v274; // rdx
  char v275; // al
  _NDIS_MINIPORT_BLOCK *v276; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx
  unsigned __int8 i9; // cl
  char v279; // al
  struct _KEVENT *v280; // rcx
  struct _KEVENT *v281; // rcx
  struct _KEVENT *v282; // rcx
  ULONG_PTR v283; // rdi
  unsigned int v284; // r9d
  struct _KEVENT *v285; // rcx
  ULONG_PTR v286; // rbx
  unsigned int v287; // r9d
  struct _NDIS_REFCOUNT_STACK_BLOCK *kk; // rdi
  ULONG_PTR v289; // rbx
  unsigned int v290; // r9d
  struct _NDIS_REFCOUNT_STACK_BLOCK *nn; // rsi
  ULONG_PTR v292; // rbx
  unsigned int v293; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *i13; // rdi
  ULONG_PTR v295; // rbx
  unsigned int v296; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *i15; // rsi
  ULONG_PTR v298; // rdi
  unsigned int v299; // r9d
  struct _NDIS_REFCOUNT_STACK_BLOCK *i; // rsi
  ULONG_PTR v301; // rdi
  unsigned int v302; // r9d
  struct _NDIS_REFCOUNT_STACK_BLOCK *k; // rsi
  ULONG_PTR v304; // rdi
  unsigned int v305; // r9d
  ULONG_PTR v306; // rdi
  unsigned int v307; // r9d
  ULONG_PTR v308; // rbx
  unsigned int AnyActiveRefTag; // eax
  struct _NDIS_REFCOUNT_BLOCK *v310; // rax
  struct _NDIS_REFCOUNT_BLOCK *v311; // rbx
  __int16 v312; // dx
  struct _NDIS_M_DRIVER_BLOCK **jj; // rcx
  struct _NDIS_M_DRIVER_BLOCK *v314; // rax
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  __int16 v318; // dx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  ULONG_PTR v320; // rbx
  unsigned int v321; // eax
  struct _NDIS_REFCOUNT_BLOCK *v322; // rax
  struct _NDIS_REFCOUNT_BLOCK *v323; // rbx
  __int16 v324; // dx
  struct _NDIS_M_DRIVER_BLOCK **i12; // rcx
  struct _NDIS_M_DRIVER_BLOCK *v326; // rax
  wchar_t *v327; // rcx
  _NDIS_WRAPPER_HANDLE *v328; // rcx
  _NDIS_PENDING_IM_INSTANCE *v329; // rcx
  _NDIS_PENDING_IM_INSTANCE *v330; // rbx
  __int16 v331; // dx
  __int64 v332; // rdx
  ULONG_PTR v333; // rsi
  unsigned int v334; // eax
  struct _NDIS_REFCOUNT_BLOCK *v335; // rax
  struct _NDIS_REFCOUNT_BLOCK *v336; // rsi
  int v337; // eax
  struct _KEVENT *v338; // rcx
  struct _KEVENT *v339; // rcx
  char *P; // [rsp+40h] [rbp-49h]
  int Pa; // [rsp+40h] [rbp-49h]
  int Pb; // [rsp+40h] [rbp-49h]
  BOOLEAN EffectiveOnly; // [rsp+48h] [rbp-41h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+49h] [rbp-40h] BYREF
  BOOLEAN v346; // [rsp+4Ah] [rbp-3Fh] BYREF
  BOOLEAN v347[2]; // [rsp+4Bh] [rbp-3Eh] BYREF
  KIRQL v348; // [rsp+4Dh] [rbp-3Ch]
  char v349[8]; // [rsp+50h] [rbp-39h]
  char v350[8]; // [rsp+58h] [rbp-31h]
  PVOID v351; // [rsp+60h] [rbp-29h]
  char v352[8]; // [rsp+68h] [rbp-21h]
  char v353[8]; // [rsp+70h] [rbp-19h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+78h] [rbp-11h] BYREF
  _SECURITY_IMPERSONATION_LEVEL v355; // [rsp+7Ch] [rbp-Dh] BYREF
  PVOID TokenInformation; // [rsp+80h] [rbp-9h] BYREF
  PVOID v357; // [rsp+88h] [rbp-1h] BYREF
  struct _NDIS_M_DRIVER_BLOCK *v358; // [rsp+90h] [rbp+7h]
  _BYTE v359[24]; // [rsp+98h] [rbp+Fh] BYREF

  *(_QWORD *)v353 = a1;
  P = 0LL;
  v2 = a1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      22,
      24,
      (struct _GUID *)&WPP_f142ecdf0a6f33a49e2e175c00018497_Traceguids,
      (char)a1);
  }
  CurrentProcess = PsGetCurrentProcess();
  v347[1] = ndisIsMacAddressHidden(CurrentProcess);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v2 + 6) != 8 || !*((_DWORD *)v2 + 12) || !*((_QWORD *)v2 + 5) )
  {
    InterfaceRodEnumObject = -1073741808;
    v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    goto LABEL_57;
  }
  CurrentThread = KeGetCurrentThread();
  v5 = (_LIST_ENTRY **)*((_QWORD *)v2 + 2);
  memset(v359, 0, sizeof(v359));
  Value = *v5;
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    v12 = *ThreadProperty;
    *(_DWORD *)v359 = ThreadProperty[1];
    *(_DWORD *)&v359[4] = v12;
    ObfDereferenceObject(ThreadProperty);
    v13 = v12;
    if ( v12 )
      goto LABEL_16;
  }
  else
  {
    *(_DWORD *)v359 = 0;
  }
  CopyOnOpen = 0;
  EffectiveOnly = 0;
  ImpersonationLevel = SecurityAnonymous;
  TokenInformation = 0LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    goto LABEL_11;
  }
  v8 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
  v9 = v8;
  if ( !v8
    || (v42 = SeQueryInformationToken(v8, TokenSessionId, &TokenInformation),
        PsDereferenceImpersonationToken(v9),
        v42 < 0) )
  {
    CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
LABEL_11:
    v11 = CurrentProcessSessionId;
    goto LABEL_12;
  }
  v11 = (unsigned int)TokenInformation;
LABEL_12:
  if ( v11 == -1 )
  {
    v38 = KeGetCurrentThread();
    v347[0] = 0;
    v346 = 0;
    v355 = SecurityAnonymous;
    v357 = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      ThreadSessionId = PsGetCurrentProcessSessionId();
    }
    else
    {
      v39 = PsReferenceImpersonationToken(v38, v347, &v346, &v355);
      v40 = v39;
      if ( v39 )
      {
        v52 = SeQueryInformationToken(v39, TokenSessionId, &v357);
        PsDereferenceImpersonationToken(v40);
        if ( v52 >= 0 )
        {
          v11 = (unsigned int)v357;
          goto LABEL_13;
        }
      }
      ThreadSessionId = PsGetThreadSessionId(v38);
    }
    v11 = ThreadSessionId;
  }
LABEL_13:
  if ( v11 < dword_140126990 )
  {
    v12 = 0;
    v94 = KeAcquireSpinLockRaiseToDpc(&qword_1401269E0);
    if ( v11 < dword_140126990 )
      v12 = *((_DWORD *)qword_140126A30 + 6 * v11);
    KeReleaseSpinLock(&qword_1401269E0, v94);
    if ( !v12 )
      v12 = 1;
  }
  else
  {
    v12 = 1;
  }
  *(_DWORD *)&v359[4] = v12;
  v13 = v12;
LABEL_16:
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
  *(_OWORD *)&v359[8] = *(_OWORD *)((char *)v16 + 1684);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v14);
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v18 = *((_DWORD *)v2 + 14);
  v19 = v17;
  v348 = v17;
  if ( !v18 )
  {
    Blink = (_DEVICE_OBJECT *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
    p_DeviceContext = 0LL;
    v351 = 0LL;
    while ( 1 )
    {
      if ( Blink == (_DEVICE_OBJECT *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
        goto LABEL_27;
      if ( Blink->Queue.ListEntry.Flink == Value )
        break;
      if ( Blink->Queue.ListEntry.Flink > Value )
        goto LABEL_27;
      Blink = *(_DEVICE_OBJECT **)&Blink->Type;
    }
    p_DeviceContext = (struct _NDIS_IF_BLOCK *)&Blink[-4].Queue.Wcb.DeviceContext;
    v351 = &Blink[-4].Queue.Wcb.DeviceContext;
LABEL_27:
    if ( !p_DeviceContext )
      goto LABEL_28;
    Compartment = p_DeviceContext->Compartment;
    if ( v12 != *((_DWORD *)Compartment + 4) )
    {
      v332 = *(_QWORD *)&v359[8] - *(_QWORD *)((char *)Compartment + 1684);
      if ( *(_QWORD *)&v359[8] == *(_QWORD *)((char *)Compartment + 1684) )
        v332 = *(_QWORD *)&v359[16] - *(_QWORD *)((char *)Compartment + 1692);
      if ( v332 && ((*((_DWORD *)Compartment + 420) & 2) != 0 || v12 != 1) )
      {
        v351 = 0LL;
        goto LABEL_28;
      }
    }
LABEL_199:
    NdisReferenceWithTag(p_DeviceContext->RefCountTracker, 1LL);
    ++p_DeviceContext->Ref;
    LOBYTE(v109) = 0;
    P = 0LL;
    if ( !p_DeviceContext->bNdisIsProvider )
    {
      P = 0LL;
      goto LABEL_412;
    }
    if ( *((_QWORD *)v2 + 1) >= 2uLL )
    {
      P = 0LL;
      goto LABEL_412;
    }
    v110 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    v112 = v110;
    if ( !p_DeviceContext->MiniportAvailable )
    {
      KeReleaseSpinLock(&SpinLock, v110);
LABEL_203:
      if ( !p_DeviceContext->IsNdisFilter )
        goto LABEL_411;
      Miniport = p_DeviceContext->Miniport;
      v116 = 0LL;
      v117 = 1;
      *(_QWORD *)v350 = 0LL;
      *(_QWORD *)v349 = 0LL;
      Pa = 1;
      v118 = *(_QWORD *)&Miniport->Reserved4.Length;
      *(_QWORD *)v352 = v118;
      if ( *(_QWORD *)(v118 + 3768) )
      {
        v119 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        v120 = ndisMiniDriverList;
        v121 = v119;
        if ( ndisMiniDriverList )
        {
          while ( 1 )
          {
            v123 = KeAcquireSpinLockRaiseToDpc(&v120->Ref.SpinLock);
            if ( v120->Ref.Closing )
              goto LABEL_471;
            ReferenceCount = v120->Ref.ReferenceCount;
            if ( ReferenceCount >= 0xFFEBu )
              break;
            LOBYTE(v122) = 8;
            v120->Ref.ReferenceCount = ReferenceCount + 1;
            NdisReferenceWithTag(v120->Ref.RefCountTracker, v122);
            KeReleaseSpinLock(&v120->Ref.SpinLock, v123);
            KeReleaseSpinLock(&ndisMiniDriverListLock, v121);
            v125 = KeAcquireSpinLockRaiseToDpc(&v120->Ref.SpinLock);
            MiniportQueue = v120->MiniportQueue;
            v127 = v125;
            if ( MiniportQueue )
            {
              while ( 1 )
              {
                BindPaths = MiniportQueue->BindPaths;
                if ( !BindPaths )
                  goto LABEL_213;
                if ( BindPaths->Number < v117 )
                  goto LABEL_213;
                v129 = *(_QWORD *)(v118 + 3768);
                if ( *(_WORD *)(v129 + 8) != BindPaths->Paths[0].Length
                  || memcmp(*(const void **)(v129 + 16), BindPaths->Paths[0].Buffer, *(unsigned __int16 *)(v129 + 8)) )
                {
                  goto LABEL_213;
                }
                KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
                v31 = (MiniportQueue->Flags & 0x80200020) == 0;
                MiniportQueue->MiniportThread = KeGetCurrentThread();
                if ( v31
                  && (MiniportQueue->PnPFlags & 0x1084110) == 0
                  && MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
                  && MiniportQueue->CurrentDevicePowerState == PowerDeviceD0 )
                {
                  break;
                }
LABEL_250:
                MiniportQueue->MiniportThread = 0LL;
                KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
                if ( *(_QWORD *)v349 )
                {
                  v148 = *(_QWORD *)v349;
                  v149 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)v349 + 96LL));
                  v150 = *(_QWORD *)(v148 + 4904);
                  *(_QWORD *)(v148 + 520) = KeGetCurrentThread();
                  if ( v150 - 2 > 1 )
                  {
                    if ( v150 < 2 )
                      ndisBugCheckEx(0x1EuLL, 3uLL, v150, 0LL);
                    if ( *(_BYTE *)(v150 + 2) <= 2u )
                      ndisBugCheckEx(0x1EuLL, 2uLL, v150, 2uLL);
                    if ( *(_BYTE *)(v150 + 1) )
                    {
                      if ( *(_BYTE *)(v150 + 1) == 1 )
                      {
                        v298 = v150 + 136;
                        v299 = *(_DWORD *)(v150 + 192);
                        if ( v299 >> 17 < 0x3FFE && (unsigned __int16)v299 >> 1 == (v299 >> 17) + 1 )
                        {
                          for ( i = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v298;
                                *(_QWORD *)v298;
                                i = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v298 )
                          {
                            *(_QWORD *)v298 = i->Next;
                            ndisFreeRefCountStacksInBlock(i);
                            ExFreePoolWithTag(i, 0);
                          }
                          ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v298);
                          *(_DWORD *)(v298 + 56) &= 0x10001u;
                        }
                        else
                        {
                          if ( !((unsigned __int16)v299 >> 1) && (v299 & 1) == 0 )
LABEL_509:
                            ndisReportRefcountImbalance(v150, 2u);
                          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v150 + 136), 0);
                        }
                      }
                    }
                    else
                    {
                      v151 = *(_QWORD *)(v150 + 8);
                      if ( v151 )
                      {
                        for ( j = 0; ; ++j )
                        {
                          if ( j >= *(_BYTE *)(v150 + 3) )
                            goto LABEL_256;
                          v269 = (_BYTE *)(v151 + 2LL * j);
                          if ( *v269 == 2 )
                          {
                            v270 = v269[1];
                            if ( v270 )
                              break;
                          }
                        }
                        v269[1] = v270 - 1;
                      }
                      else
                      {
LABEL_256:
                        if ( !_bittestandreset((signed __int32 *)(v150 + 16), 2u) )
                          goto LABEL_509;
                      }
                    }
                  }
                  v31 = (*(_DWORD *)(v148 + 3124))-- == 1;
                  if ( v31 )
                  {
                    v152 = *(struct _KEVENT **)(v148 + 3136);
                    if ( v152 )
                      KeSetEvent(v152, 0, 0);
                  }
                  *(_QWORD *)(v148 + 520) = 0LL;
                  KeReleaseSpinLock((PKSPIN_LOCK)(v148 + 96), v149);
                  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v153) = 4;
                    WPP_RECORDER_SF_q(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      v153,
                      20,
                      25,
                      (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
                      v148);
                  }
                  v154 = v148 + 4432;
                  v155 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v148 + 4432));
                  v157 = *(_QWORD *)v349;
                  v158 = v155;
                  v159 = *(_QWORD *)(*(_QWORD *)v349 + 4896LL);
                  if ( v159 && v159 - 2 > 1 )
                  {
                    if ( v159 == 1 )
                      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
                    if ( *(_BYTE *)(v159 + 2) <= 0x3Cu )
                      ndisBugCheckEx(0x1EuLL, 2uLL, v159, 0x3CuLL);
                    if ( *(_BYTE *)(v159 + 1) )
                    {
                      if ( *(_BYTE *)(v159 + 1) == 1 )
                      {
                        v301 = v159 + 3848;
                        v302 = *(_DWORD *)(v159 + 3904);
                        if ( v302 >> 17 < 0x3FFE && (unsigned __int16)v302 >> 1 == (v302 >> 17) + 1 )
                        {
                          for ( k = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v301;
                                *(_QWORD *)v301;
                                k = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v301 )
                          {
                            *(_QWORD *)v301 = k->Next;
                            ndisFreeRefCountStacksInBlock(k);
                            ExFreePoolWithTag(k, 0);
                          }
                          ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v301);
                          *(_DWORD *)(v301 + 56) &= 0x10001u;
                          v157 = *(_QWORD *)v349;
                        }
                        else
                        {
                          if ( !((unsigned __int16)v302 >> 1) && (v302 & 1) == 0 )
LABEL_510:
                            ndisReportRefcountImbalance(v159, 0x3Cu);
                          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v159 + 3848), 0);
                        }
                      }
                    }
                    else
                    {
                      v160 = *(_QWORD *)(v159 + 8);
                      if ( v160 )
                      {
                        for ( m = 0; ; ++m )
                        {
                          if ( m >= *(_BYTE *)(v159 + 3) )
                            goto LABEL_268;
                          v156 = (_BYTE *)(v160 + 2LL * m);
                          if ( *v156 == 60 )
                          {
                            v272 = v156[1];
                            if ( v272 )
                              break;
                          }
                        }
                        v156[1] = v272 - 1;
                      }
                      else
                      {
LABEL_268:
                        if ( !_bittestandreset((signed __int32 *)(v159 + 20), 0x1Cu) )
                          goto LABEL_510;
                      }
                    }
                  }
                  v161 = *(_DWORD *)(v154 + 8) - 1;
                  *(_DWORD *)(v154 + 8) = v161;
                  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v156) = 4;
                    WPP_RECORDER_SF_qL(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      (int)v156,
                      20,
                      14,
                      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
                      v157,
                      *(_DWORD *)(v157 + 4440));
                  }
                  KeReleaseSpinLock((PKSPIN_LOCK)v154, v158);
                  if ( !v161 )
                  {
                    v282 = *(struct _KEVENT **)(v157 + 1608);
                    if ( v282 )
                      KeSetEvent(v282, 0, 0);
                  }
                  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v162) = 4;
                    WPP_RECORDER_SF_q(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      v162,
                      20,
                      26,
                      (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
                      v157);
                  }
                  v118 = *(_QWORD *)v352;
                  *(_QWORD *)v349 = 0LL;
                }
LABEL_213:
                MiniportQueue = MiniportQueue->NextMiniport;
                v117 = Pa;
                if ( !MiniportQueue )
                  goto LABEL_214;
              }
              v140 = 1;
              v142 = KeAcquireSpinLockRaiseToDpc(&MiniportQueue->Ref.SpinLock);
              if ( MiniportQueue->Ref.Closing )
              {
LABEL_245:
                v140 = 0;
              }
              else
              {
                RefCountTracker = MiniportQueue->RefCountTracker;
                if ( RefCountTracker )
                {
                  LOBYTE(v141) = 60;
                  NdisReferenceWithTag(RefCountTracker, v141);
                }
                v144 = MiniportQueue->Ref.ReferenceCount;
                MiniportQueue->Ref.ReferenceCount = v144 + 1;
                if ( v144 == -1 )
                {
                  MiniportQueue->Ref.ReferenceCount = -1;
                  goto LABEL_245;
                }
              }
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v141) = 4;
                WPP_RECORDER_SF_qL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v141,
                  20,
                  12,
                  (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
                  (char)MiniportQueue,
                  MiniportQueue->Ref.ReferenceCount);
              }
              KeReleaseSpinLock(&MiniportQueue->Ref.SpinLock, v142);
              if ( v140 )
              {
                LOBYTE(v145) = 2;
                NsiRefCountTracker = MiniportQueue->NsiRefCountTracker;
                *(_QWORD *)v349 = *(_QWORD *)v350;
                NdisReferenceWithTag(NsiRefCountTracker, v145);
                v147 = (int *)MiniportQueue->BindPaths;
                ++MiniportQueue->NsiOpenReferences;
                *(_QWORD *)v350 = MiniportQueue;
                Pa = *v147;
              }
              goto LABEL_250;
            }
LABEL_214:
            KeReleaseSpinLock(&v120->Ref.SpinLock, v127);
            v130 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
            NextDriver = v120->NextDriver;
            v121 = v130;
            v132 = KeAcquireSpinLockRaiseToDpc(&v120->Ref.SpinLock);
            v133 = (ULONG_PTR)v120->Ref.RefCountTracker;
            v134 = v132;
            if ( v133 - 2 > 1 )
            {
              if ( v133 < 2 )
                ndisBugCheckEx(0x1EuLL, 3uLL, v133, 0LL);
              if ( *(_BYTE *)(v133 + 2) <= 8u )
                ndisBugCheckEx(0x1EuLL, 2uLL, v133, 8uLL);
              if ( *(_BYTE *)(v133 + 1) )
              {
                if ( *(_BYTE *)(v133 + 1) == 1 )
                {
                  v249 = v133 + 520;
                  v250 = *(_DWORD *)(v133 + 576);
                  if ( v250 >> 17 < 0x3FFE && (unsigned __int16)v250 >> 1 == (v250 >> 17) + 1 )
                  {
                    for ( n = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v249;
                          *(_QWORD *)v249;
                          n = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v249 )
                    {
                      *(_QWORD *)v249 = n->Next;
                      ndisFreeRefCountStacksInBlock(n);
                      ExFreePoolWithTag(n, 0);
                    }
                    ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v249);
                    *(_DWORD *)(v249 + 56) &= 0x10001u;
                  }
                  else
                  {
                    if ( !((unsigned __int16)v250 >> 1) && (v250 & 1) == 0 )
LABEL_235:
                      ndisReportRefcountImbalance(v133, 8u);
                    ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v133 + 520), 0);
                  }
                }
              }
              else
              {
                v135 = *(_QWORD *)(v133 + 8);
                if ( v135 )
                {
                  for ( ii = 0; ; ++ii )
                  {
                    if ( ii >= *(_BYTE *)(v133 + 3) )
                      goto LABEL_219;
                    v138 = (_BYTE *)(v135 + 2LL * ii);
                    if ( *v138 == 8 )
                    {
                      v139 = v138[1];
                      if ( v139 )
                        break;
                    }
                  }
                  v138[1] = v139 - 1;
                }
                else
                {
LABEL_219:
                  if ( !_bittestandreset((signed __int32 *)(v133 + 16), 8u) )
                    goto LABEL_235;
                }
              }
            }
            v31 = v120->Ref.ReferenceCount-- == 1;
            if ( v31 )
            {
              if ( !v120->Ref.ZeroBased )
              {
                v308 = (ULONG_PTR)v120->Ref.RefCountTracker;
                if ( v308 )
                {
                  AnyActiveRefTag = ndisGetAnyActiveRefTag(v120->Ref.RefCountTracker);
                  if ( AnyActiveRefTag != -2 )
                    ndisBugCheckEx(0x1EuLL, 4uLL, v308, AnyActiveRefTag);
                  v310 = ndisRefCountBlockFromRefCountHandle(v308);
                  v311 = v310;
                  if ( v310 )
                  {
                    ndisFreeRefCountAuxiliaryMemory(v310);
                    ExFreePoolWithTag(v311, 0);
                  }
                }
                v120->Ref.RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
              }
              KeReleaseSpinLock(&v120->Ref.SpinLock, v134);
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v312) = 4;
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v312,
                  20,
                  23,
                  (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
                  (char)v120);
              }
              for ( jj = &ndisMiniDriverList; ; jj = &v314->NextDriver )
              {
                v314 = *jj;
                if ( !*jj )
                  goto LABEL_608;
                if ( v314 == v120 )
                  break;
              }
              *jj = v120->NextDriver;
              ObfDereferenceObject(ndisDriverObject);
LABEL_608:
              Buffer = v120->ImageName.Buffer;
              if ( Buffer )
              {
                ExFreePoolWithTag(Buffer, 0);
                v120->ImageName.Buffer = 0LL;
              }
              NdisDriverInfo = v120->NdisDriverInfo;
              if ( NdisDriverInfo )
              {
                ExFreePoolWithTag(NdisDriverInfo, 0);
                v120->NdisDriverInfo = 0LL;
              }
              if ( (v120->Flags & 1) != 0 )
              {
                PendingDeviceList = v120->PendingDeviceList;
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
              KeSetEvent(&v120->MiniportsRemovedEvent, 0, 0);
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v318) = 4;
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v318,
                  20,
                  24,
                  (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
                  (char)v120);
              }
            }
            else
            {
              KeReleaseSpinLock(&v120->Ref.SpinLock, v134);
            }
            v117 = Pa;
            v118 = *(_QWORD *)v352;
LABEL_223:
            v120 = NextDriver;
            if ( !NextDriver )
            {
              v116 = *(_QWORD *)v350;
              goto LABEL_225;
            }
          }
          ndisRefCountReferenceCountOverflow = 1;
LABEL_471:
          KeReleaseSpinLock(&v120->Ref.SpinLock, v123);
          NextDriver = v120->NextDriver;
          goto LABEL_223;
        }
LABEL_225:
        KeReleaseSpinLock(&ndisMiniDriverListLock, v121);
        if ( v116 )
        {
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v116 + 96));
          v136 = *(_QWORD *)(v116 + 2048);
          *(_QWORD *)(v116 + 520) = KeGetCurrentThread();
          if ( !v136 )
          {
LABEL_227:
            v109 = *(_QWORD *)(v116 + 4040);
            goto LABEL_351;
          }
          while ( 1 )
          {
            v210 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v136 + 312));
            if ( !*(_BYTE *)(v136 + 322) )
            {
              v211 = *(_WORD *)(v136 + 320);
              if ( v211 < 0xFFEBu )
              {
                LOBYTE(v209) = 11;
                *(_WORD *)(v136 + 320) = v211 + 1;
                NdisReferenceWithTag(*(_QWORD *)(v136 + 328), v209);
                KeReleaseSpinLock((PKSPIN_LOCK)(v136 + 312), v210);
                v109 = *(_QWORD *)(v136 + 688);
LABEL_351:
                P = (char *)v109;
                *(_QWORD *)(v116 + 520) = 0LL;
                KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v116 + 96));
                v212 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v116 + 96));
                v213 = *(_QWORD *)(v116 + 4904);
                *(_QWORD *)(v116 + 520) = KeGetCurrentThread();
                if ( v213 - 2 > 1 )
                {
                  if ( v213 < 2 )
                    ndisBugCheckEx(0x1EuLL, 3uLL, v213, 0LL);
                  if ( *(_BYTE *)(v213 + 2) <= 2u )
                    ndisBugCheckEx(0x1EuLL, 2uLL, v213, 2uLL);
                  if ( *(_BYTE *)(v213 + 1) )
                  {
                    if ( *(_BYTE *)(v213 + 1) != 1 )
                      goto LABEL_357;
                    v286 = v213 + 136;
                    v287 = *(_DWORD *)(v213 + 192);
                    if ( v287 >> 17 >= 0x3FFE || (unsigned __int16)v287 >> 1 != (v287 >> 17) + 1 )
                    {
                      if ( (unsigned __int16)v287 >> 1 || (v287 & 1) != 0 )
                      {
                        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v213 + 136), 0);
                        goto LABEL_357;
                      }
                      goto LABEL_466;
                    }
                    for ( kk = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v286;
                          *(_QWORD *)v286;
                          kk = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v286 )
                    {
                      *(_QWORD *)v286 = kk->Next;
                      ndisFreeRefCountStacksInBlock(kk);
                      ExFreePoolWithTag(kk, 0);
                    }
                    ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v286);
                    *(_DWORD *)(v286 + 56) &= 0x10001u;
                  }
                  else
                  {
                    v214 = *(_QWORD *)(v213 + 8);
                    if ( !v214 )
                    {
LABEL_356:
                      if ( _bittestandreset((signed __int32 *)(v213 + 16), 2u) )
                        goto LABEL_357;
LABEL_466:
                      ndisReportRefcountImbalance(v213, 2u);
                    }
                    for ( mm = 0; ; ++mm )
                    {
                      if ( mm >= *(_BYTE *)(v213 + 3) )
                        goto LABEL_356;
                      v259 = (_BYTE *)(v214 + 2LL * mm);
                      if ( *v259 == 2 )
                      {
                        v260 = v259[1];
                        if ( v260 )
                          break;
                      }
                    }
                    v259[1] = v260 - 1;
                  }
                }
LABEL_357:
                v31 = (*(_DWORD *)(v116 + 3124))-- == 1;
                if ( v31 )
                {
                  v215 = *(struct _KEVENT **)(v116 + 3136);
                  if ( v215 )
                    KeSetEvent(v215, 0, 0);
                }
                *(_QWORD *)(v116 + 520) = 0LL;
                KeReleaseSpinLock((PKSPIN_LOCK)(v116 + 96), v212);
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v216) = 4;
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v216,
                    20,
                    25,
                    (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
                    v116);
                }
                v217 = v116 + 4432;
                v218 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v116 + 4432));
                v220 = *(_QWORD *)v350;
                v221 = v218;
                v222 = *(_QWORD *)(*(_QWORD *)v350 + 4896LL);
                if ( v222 && v222 - 2 > 1 )
                {
                  if ( v222 == 1 )
                    ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
                  if ( *(_BYTE *)(v222 + 2) <= 0x3Cu )
                    ndisBugCheckEx(0x1EuLL, 2uLL, v222, 0x3CuLL);
                  if ( *(_BYTE *)(v222 + 1) )
                  {
                    if ( *(_BYTE *)(v222 + 1) == 1 )
                    {
                      v289 = v222 + 3848;
                      v290 = *(_DWORD *)(v222 + 3904);
                      if ( v290 >> 17 < 0x3FFE && (unsigned __int16)v290 >> 1 == (v290 >> 17) + 1 )
                      {
                        for ( nn = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v289;
                              *(_QWORD *)v289;
                              nn = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v289 )
                        {
                          *(_QWORD *)v289 = nn->Next;
                          ndisFreeRefCountStacksInBlock(nn);
                          ExFreePoolWithTag(nn, 0);
                        }
                        ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v289);
                        *(_DWORD *)(v289 + 56) &= 0x10001u;
                        v220 = *(_QWORD *)v350;
                      }
                      else
                      {
                        if ( !((unsigned __int16)v290 >> 1) && (v290 & 1) == 0 )
                          goto LABEL_467;
                        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v222 + 3848), 0);
                      }
                    }
                  }
                  else
                  {
                    v223 = *(_QWORD *)(v222 + 8);
                    if ( !v223 )
                    {
LABEL_368:
                      if ( _bittestandreset((signed __int32 *)(v222 + 20), 0x1Cu) )
                        goto LABEL_369;
LABEL_467:
                      ndisReportRefcountImbalance(v222, 0x3Cu);
                    }
                    for ( i1 = 0; ; ++i1 )
                    {
                      if ( i1 >= *(_BYTE *)(v222 + 3) )
                        goto LABEL_368;
                      v219 = (_BYTE *)(v223 + 2LL * i1);
                      if ( *v219 == 60 )
                      {
                        v262 = v219[1];
                        if ( v262 )
                          break;
                      }
                    }
                    v219[1] = v262 - 1;
                  }
                }
LABEL_369:
                v224 = *(_DWORD *)(v217 + 8) - 1;
                *(_DWORD *)(v217 + 8) = v224;
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v219) = 4;
                  WPP_RECORDER_SF_qL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    (int)v219,
                    20,
                    14,
                    (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
                    v220,
                    *(_DWORD *)(v220 + 4440));
                }
                KeReleaseSpinLock((PKSPIN_LOCK)v217, v221);
                if ( !v224 )
                {
                  v280 = *(struct _KEVENT **)(v220 + 1608);
                  if ( v280 )
                    KeSetEvent(v280, 0, 0);
                }
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v225) = 4;
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    (unsigned __int16)v225,
                    20,
                    26,
                    (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
                    v220);
                }
                p_DeviceContext = (struct _NDIS_IF_BLOCK *)v351;
LABEL_409:
                if ( v109 )
                {
                  LOBYTE(v225) = 2;
                  NdisReferenceWithTag(*(_QWORD *)(v109 + 1432), v225);
                  ++*(_DWORD *)(v109 + 1304);
                }
LABEL_411:
                v2 = *(struct _NM_REQUEST_GET_PARAMETER **)v353;
LABEL_412:
                v246 = v348;
                **((_QWORD **)v2 + 2) = p_DeviceContext->NetLuid.Value;
                KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v246);
                if ( p_DeviceContext )
                {
                  v247 = *((_QWORD *)v2 + 1);
                  InterfaceRodEnumObject = -1073741811;
                  if ( v247 )
                  {
                    switch ( v247 )
                    {
                      case 1LL:
                        goto LABEL_657;
                      case 12LL:
                        goto LABEL_414;
                      case 13LL:
LABEL_657:
                        v337 = *((_DWORD *)v2 + 8);
                        if ( v337 == 1 )
                        {
                          InterfaceRodEnumObject = ndisNsiGetInterfaceRodEnumObject((char)p_DeviceContext);
                        }
                        else if ( v337 == 2 )
                        {
                          InterfaceRodEnumObject = ndisNsiGetInterfaceRosEnumObject((char)p_DeviceContext);
                        }
                        break;
                    }
                  }
                  else
                  {
LABEL_414:
                    v248 = *((_DWORD *)v2 + 8);
                    if ( v248 )
                    {
                      if ( v248 == 1 )
                      {
                        InterfaceRodEnumObject = ndisNsiGetInterfaceRodInformation(
                                                   (char)p_DeviceContext,
                                                   v109,
                                                   (char)v2);
                      }
                      else if ( v248 == 2 )
                      {
                        InterfaceRodEnumObject = ndisNsiGetInterfaceRosInformation(p_DeviceContext);
                      }
                    }
                    else
                    {
                      InterfaceRodEnumObject = ndisNsiGetInterfaceRwInformation((char)p_DeviceContext, v109, (char)v2);
                    }
                  }
LABEL_31:
                  v23 = P;
                  v24 = &dword_140126B60;
                  v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
                  if ( !P )
                    goto LABEL_48;
                  if ( P[1394] )
                  {
                    v26 = *((_QWORD *)P + 176) + 312LL;
                    v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v26);
                    v28 = *(_QWORD *)(v26 + 16);
                    v29 = v27;
                    if ( v28 - 2 > 1 )
                    {
                      if ( v28 < 2 )
                        ndisBugCheckEx(0x1EuLL, 3uLL, v28, 0LL);
                      if ( *(_BYTE *)(v28 + 2) <= 0xBu )
                        ndisBugCheckEx(0x1EuLL, 2uLL, v28, 0xBuLL);
                      if ( *(_BYTE *)(v28 + 1) )
                      {
                        if ( *(_BYTE *)(v28 + 1) != 1 )
                          goto LABEL_39;
                        v95 = v28 + 712;
                        v96 = *(_DWORD *)(v28 + 768);
                        if ( v96 >> 17 >= 0x3FFE || (unsigned __int16)v96 >> 1 != (v96 >> 17) + 1 )
                        {
                          if ( (unsigned __int16)v96 >> 1 || (v96 & 1) != 0 )
                          {
                            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v28 + 712), 0);
                            goto LABEL_39;
                          }
                          goto LABEL_89;
                        }
                        for ( i2 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v95;
                              *(_QWORD *)v95;
                              i2 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v95 )
                        {
                          *(_QWORD *)v95 = i2->Next;
                          ndisFreeRefCountStacksInBlock(i2);
                          ExFreePoolWithTag(i2, 0);
                        }
                        ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v95);
                        *(_DWORD *)(v95 + 56) &= 0x10001u;
                        v23 = P;
                      }
                      else
                      {
                        v30 = *(_QWORD *)(v28 + 8);
                        if ( !v30 )
                        {
LABEL_38:
                          if ( _bittestandreset((signed __int32 *)(v28 + 16), 0xBu) )
                            goto LABEL_39;
LABEL_89:
                          ndisReportRefcountImbalance(v28, 0xBu);
                        }
                        for ( i3 = 0; ; ++i3 )
                        {
                          if ( i3 >= *(_BYTE *)(v28 + 3) )
                            goto LABEL_38;
                          v44 = (_BYTE *)(v30 + 2LL * i3);
                          if ( *v44 == 11 )
                          {
                            v45 = v44[1];
                            if ( v45 )
                              break;
                          }
                        }
                        v44[1] = v45 - 1;
                      }
                    }
LABEL_39:
                    v31 = (*(_WORD *)(v26 + 8))-- == 1;
                    if ( v31 && !*(_BYTE *)(v26 + 11) )
                    {
                      v333 = *(_QWORD *)(v26 + 16);
                      if ( v333 )
                      {
                        v334 = ndisGetAnyActiveRefTag(*(struct NDIS_REFCOUNT_HANDLE__ **)(v26 + 16));
                        if ( v334 != -2 )
                          ndisBugCheckEx(0x1EuLL, 4uLL, v333, v334);
                        v335 = ndisRefCountBlockFromRefCountHandle(v333);
                        v336 = v335;
                        if ( v335 )
                        {
                          ndisFreeRefCountAuxiliaryMemory(v335);
                          ExFreePoolWithTag(v336, 0);
                        }
                      }
                      *(_QWORD *)(v26 + 16) = 1LL;
                    }
                    KeReleaseSpinLock((PKSPIN_LOCK)v26, v29);
                  }
                  v32 = *((_QWORD *)v23 + 179);
                  if ( v32 - 2 > 1 )
                  {
                    if ( v32 < 2 )
                      ndisBugCheckEx(0x1EuLL, 3uLL, v32, 0LL);
                    if ( *(_BYTE *)(v32 + 2) <= 2u )
                      ndisBugCheckEx(0x1EuLL, 2uLL, v32, 2uLL);
                    if ( *(_BYTE *)(v32 + 1) )
                    {
                      if ( *(_BYTE *)(v32 + 1) == 1 )
                      {
                        v98 = v32 + 136;
                        v99 = *(_DWORD *)(v32 + 192);
                        if ( v99 >> 17 < 0x3FFE && (unsigned __int16)v99 >> 1 == (v99 >> 17) + 1 )
                        {
                          for ( i4 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v98;
                                *(_QWORD *)v98;
                                i4 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v98 )
                          {
                            *(_QWORD *)v98 = i4->Next;
                            ndisFreeRefCountStacksInBlock(i4);
                            ExFreePoolWithTag(i4, 0);
                          }
                          ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v98);
                          *(_DWORD *)(v98 + 56) &= 0x10001u;
                        }
                        else
                        {
                          if ( !((unsigned __int16)v99 >> 1) && (v99 & 1) == 0 )
                            goto LABEL_90;
                          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v32 + 136), 0);
                        }
                      }
                    }
                    else
                    {
                      v33 = *(_QWORD *)(v32 + 8);
                      if ( !v33 )
                      {
LABEL_46:
                        if ( _bittestandreset((signed __int32 *)(v32 + 16), 2u) )
                          goto LABEL_47;
LABEL_90:
                        ndisReportRefcountImbalance(v32, 2u);
                      }
                      for ( i5 = 0; ; ++i5 )
                      {
                        if ( i5 >= *(_BYTE *)(v32 + 3) )
                          goto LABEL_46;
                        v47 = (_BYTE *)(v33 + 2LL * i5);
                        if ( *v47 == 2 )
                        {
                          v48 = v47[1];
                          if ( v48 )
                            break;
                        }
                      }
                      v47[1] = v48 - 1;
                    }
                  }
LABEL_47:
                  v31 = (*((_DWORD *)v23 + 326))-- == 1;
                  if ( v31 )
                  {
                    KeAcquireSpinLockAtDpcLevel(&qword_140126A68);
                    v53 = (PVOID *)::P;
                    if ( ::P != &::P )
                    {
                      do
                      {
                        v54 = v53;
                        v53 = (PVOID *)*v53;
                        v55 = (char *)v54[3];
                        if ( v55 == v23 || v54[4] == v23 )
                        {
                          --*((_DWORD *)v55 + 324);
                          --*((_DWORD *)v54[4] + 325);
                          v72 = (PVOID *)*v54;
                          if ( *((PVOID **)*v54 + 1) != v54 )
                            goto LABEL_153;
                          v73 = (PVOID **)v54[1];
                          if ( *v73 != v54 )
                            goto LABEL_153;
                          *v73 = v72;
                          v72[1] = v73;
                          ExFreePoolWithTag(v54, 0);
                        }
                      }
                      while ( v53 != &::P );
                    }
                    *((_QWORD *)v23 + 162) = 0LL;
                    KeReleaseSpinLockFromDpcLevel(&qword_140126A68);
                    v56 = (_QWORD *)*((_QWORD *)v23 + 154);
                    if ( (char *)v56[1] == v23 + 1232 )
                    {
                      v57 = (PVOID *)*((_QWORD *)v23 + 155);
                      if ( *v57 == v23 + 1232 )
                      {
                        *v57 = v56;
                        v56[1] = v57;
                        v58 = (_QWORD *)*((_QWORD *)v23 + 156);
                        if ( (char *)v58[1] == v23 + 1248 )
                        {
                          v59 = (PVOID *)*((_QWORD *)v23 + 157);
                          if ( *v59 == v23 + 1248 )
                          {
                            *v59 = v58;
                            v58[1] = v59;
                            v60 = (_QWORD *)*((_QWORD *)v23 + 158);
                            if ( (char *)v60[1] == v23 + 1264 )
                            {
                              v61 = (PVOID *)*((_QWORD *)v23 + 159);
                              if ( *v61 == v23 + 1264 )
                              {
                                *v61 = v60;
                                v60[1] = v61;
                                v62 = *((_QWORD *)v23 + 171);
                                v31 = (*(_DWORD *)(v62 + 76))-- == 1;
                                if ( v31 )
                                {
                                  v338 = *(struct _KEVENT **)(v62 + 608);
                                  if ( v338 )
                                    KeSetEvent(v338, 0, 0);
                                }
                                v63 = *((_DWORD *)v23 + 1);
                                v64 = &dword_140126B60;
                                if ( v63 >= *(_DWORD *)dword_1401275E8 )
                                  v64 = &dword_140126B78;
                                IfIndexRange::FreeBit((IfIndexRange *)v64, v63);
                                --ndisInterfaceCount;
                                v65 = *((_QWORD *)v23 + 179);
                                if ( v65 )
                                {
                                  v66 = ndisGetAnyActiveRefTag(*((struct NDIS_REFCOUNT_HANDLE__ **)v23 + 179));
                                  if ( v66 != -2 )
                                    ndisBugCheckEx(0x1EuLL, 4uLL, v65, v66);
                                  v67 = ndisRefCountBlockFromRefCountHandle(v65);
                                  v68 = v67;
                                  if ( v67 )
                                  {
                                    ndisFreeRefCountAuxiliaryMemory(v67);
                                    ExFreePoolWithTag(v68, 0);
                                  }
                                }
                                v69 = (void *)*((_QWORD *)v23 + 178);
                                *((_QWORD *)v23 + 179) = 0LL;
                                if ( v69 )
                                {
                                  ExFreePoolWithTag(v69, 0);
                                  *((_QWORD *)v23 + 178) = 0LL;
                                }
                                v70 = (void *)*((_QWORD *)v23 + 160);
                                if ( v70 )
                                {
                                  ExFreePoolWithTag(v70, 0);
                                  *((_QWORD *)v23 + 160) = 0LL;
                                  *((_QWORD *)v23 + 161) = 0LL;
                                }
                                v71 = (struct _KEVENT *)*((_QWORD *)v23 + 173);
                                if ( v71 )
                                  KeSetEvent(v71, 0, 0);
                                ExFreePoolWithTag(v23, 0);
                                goto LABEL_48;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else
                  {
LABEL_48:
                    v34 = (char *)v351;
                    if ( !v351 )
                      goto LABEL_56;
                    v35 = *((_QWORD *)v351 + 179);
                    if ( v35 - 2 <= 1 )
                      goto LABEL_55;
                    if ( v35 < 2 )
                      ndisBugCheckEx(0x1EuLL, 3uLL, v35, 0LL);
                    if ( *(_BYTE *)(v35 + 2) <= 1u )
                      ndisBugCheckEx(0x1EuLL, 2uLL, v35, 1uLL);
                    if ( *(_BYTE *)(v35 + 1) )
                    {
                      if ( *(_BYTE *)(v35 + 1) == 1 )
                      {
                        v101 = v35 + 72;
                        v102 = *(_DWORD *)(v35 + 128);
                        if ( v102 >> 17 < 0x3FFE && (unsigned __int16)v102 >> 1 == (v102 >> 17) + 1 )
                        {
                          for ( i6 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v101;
                                *(_QWORD *)v101;
                                i6 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v101 )
                          {
                            *(_QWORD *)v101 = i6->Next;
                            ndisFreeRefCountStacksInBlock(i6);
                            ExFreePoolWithTag(i6, 0);
                          }
                          ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v101);
                          *(_DWORD *)(v101 + 56) &= 0x10001u;
                        }
                        else
                        {
                          if ( !((unsigned __int16)v102 >> 1) && (v102 & 1) == 0 )
                            goto LABEL_91;
                          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v35 + 72), 0);
                        }
                      }
                    }
                    else
                    {
                      v36 = *(_QWORD *)(v35 + 8);
                      if ( !v36 )
                      {
LABEL_54:
                        if ( _bittestandreset((signed __int32 *)(v35 + 16), 1u) )
                          goto LABEL_55;
LABEL_91:
                        ndisReportRefcountImbalance(v35, 1u);
                      }
                      for ( i7 = 0; ; ++i7 )
                      {
                        if ( i7 >= *(_BYTE *)(v35 + 3) )
                          goto LABEL_54;
                        v50 = (_BYTE *)(v36 + 2LL * i7);
                        if ( *v50 == 1 )
                        {
                          v51 = v50[1];
                          if ( v51 )
                            break;
                        }
                      }
                      v50[1] = v51 - 1;
                    }
LABEL_55:
                    v31 = (*((_DWORD *)v34 + 326))-- == 1;
                    if ( !v31 )
                    {
LABEL_56:
                      LOBYTE(v2) = v353[0];
                      goto LABEL_57;
                    }
                    KeAcquireSpinLockAtDpcLevel(&qword_140126A68);
                    v74 = (PVOID *)::P;
                    if ( ::P != &::P )
                    {
                      do
                      {
                        v75 = v74;
                        v74 = (PVOID *)*v74;
                        v76 = (char *)v75[3];
                        if ( v76 == v34 || v75[4] == v34 )
                        {
                          --*((_DWORD *)v76 + 324);
                          --*((_DWORD *)v75[4] + 325);
                          v92 = (PVOID *)*v75;
                          if ( *((PVOID **)*v75 + 1) != v75 )
                            goto LABEL_153;
                          v93 = (PVOID **)v75[1];
                          if ( *v93 != v75 )
                            goto LABEL_153;
                          *v93 = v92;
                          v92[1] = v93;
                          ExFreePoolWithTag(v75, 0);
                        }
                      }
                      while ( v74 != &::P );
                    }
                    *((_QWORD *)v34 + 162) = 0LL;
                    KeReleaseSpinLockFromDpcLevel(&qword_140126A68);
                    v77 = (_QWORD *)*((_QWORD *)v34 + 154);
                    if ( (char *)v77[1] == v34 + 1232 )
                    {
                      v78 = (PVOID *)*((_QWORD *)v34 + 155);
                      if ( *v78 == v34 + 1232 )
                      {
                        *v78 = v77;
                        v77[1] = v78;
                        v79 = (_QWORD *)*((_QWORD *)v34 + 156);
                        if ( (char *)v79[1] == v34 + 1248 )
                        {
                          v80 = (PVOID *)*((_QWORD *)v34 + 157);
                          if ( *v80 == v34 + 1248 )
                          {
                            *v80 = v79;
                            v79[1] = v80;
                            v81 = (_QWORD *)*((_QWORD *)v34 + 158);
                            if ( (char *)v81[1] == v34 + 1264 )
                            {
                              v82 = (PVOID *)*((_QWORD *)v34 + 159);
                              if ( *v82 == v34 + 1264 )
                              {
                                *v82 = v81;
                                v81[1] = v82;
                                v83 = *((_QWORD *)v34 + 171);
                                v31 = (*(_DWORD *)(v83 + 76))-- == 1;
                                if ( v31 )
                                {
                                  v339 = *(struct _KEVENT **)(v83 + 608);
                                  if ( v339 )
                                    KeSetEvent(v339, 0, 0);
                                }
                                v84 = *((_DWORD *)v34 + 1);
                                if ( v84 >= *(_DWORD *)dword_1401275E8 )
                                  v24 = &dword_140126B78;
                                IfIndexRange::FreeBit((IfIndexRange *)v24, v84);
                                --ndisInterfaceCount;
                                v85 = *((_QWORD *)v34 + 179);
                                if ( v85 )
                                {
                                  v86 = ndisGetAnyActiveRefTag(*((struct NDIS_REFCOUNT_HANDLE__ **)v34 + 179));
                                  if ( v86 != -2 )
                                    ndisBugCheckEx(0x1EuLL, 4uLL, v85, v86);
                                  v87 = ndisRefCountBlockFromRefCountHandle(v85);
                                  v88 = v87;
                                  if ( v87 )
                                  {
                                    ndisFreeRefCountAuxiliaryMemory(v87);
                                    ExFreePoolWithTag(v88, 0);
                                  }
                                }
                                v89 = (void *)*((_QWORD *)v34 + 178);
                                *((_QWORD *)v34 + 179) = 0LL;
                                if ( v89 )
                                {
                                  ExFreePoolWithTag(v89, 0);
                                  *((_QWORD *)v34 + 178) = 0LL;
                                }
                                v90 = (void *)*((_QWORD *)v34 + 160);
                                if ( v90 )
                                {
                                  ExFreePoolWithTag(v90, 0);
                                  *((_QWORD *)v34 + 160) = 0LL;
                                  *((_QWORD *)v34 + 161) = 0LL;
                                }
                                v91 = (struct _KEVENT *)*((_QWORD *)v34 + 173);
                                if ( v91 )
                                  KeSetEvent(v91, 0, 0);
                                ExFreePoolWithTag(v34, 0);
                                goto LABEL_56;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
LABEL_153:
                  __fastfail(3u);
                }
LABEL_29:
                InterfaceRodEnumObject = -1073741772;
                if ( *((_DWORD *)v2 + 14) )
                  InterfaceRodEnumObject = -2147483622;
                goto LABEL_31;
              }
              ndisRefCountReferenceCountOverflow = 1;
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(v136 + 312), v210);
            v136 = *(_QWORD *)(v136 + 112);
            if ( !v136 )
              goto LABEL_227;
          }
        }
      }
      p_DeviceContext = (struct _NDIS_IF_BLOCK *)v351;
      LOBYTE(v109) = 0;
      P = 0LL;
      goto LABEL_411;
    }
    LOBYTE(v111) = 3;
    MpRefCountTracker = p_DeviceContext->MpRefCountTracker;
    *(_QWORD *)v350 = p_DeviceContext->Miniport;
    v113 = *(_QWORD *)v350;
    NdisReferenceWithTag(MpRefCountTracker, v111);
    ++p_DeviceContext->MiniportLinkReference;
    KeReleaseSpinLock(&SpinLock, v112);
    if ( !v113 )
      goto LABEL_203;
    v163 = 0LL;
    v164 = 1;
    *(_QWORD *)v349 = 0LL;
    *(_QWORD *)v352 = 0LL;
    Pb = 1;
    if ( *(_QWORD *)(v113 + 3768) )
    {
      v165 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      v166 = ndisMiniDriverList;
      v358 = ndisMiniDriverList;
      v167 = v165;
      if ( ndisMiniDriverList )
      {
        while ( 1 )
        {
          p_Ref = &v166->Ref;
          v169 = KeAcquireSpinLockRaiseToDpc(&v166->Ref.SpinLock);
          v171 = v169;
          if ( v166->Ref.Closing )
            goto LABEL_476;
          v172 = v166->Ref.ReferenceCount;
          if ( v172 >= 0xFFEBu )
          {
            ndisRefCountReferenceCountOverflow = 1;
LABEL_476:
            KeReleaseSpinLock(&v166->Ref.SpinLock, v169);
            v179 = v166->NextDriver;
            goto LABEL_295;
          }
          LOBYTE(v170) = 8;
          v166->Ref.ReferenceCount = v172 + 1;
          NdisReferenceWithTag(v166->Ref.RefCountTracker, v170);
          KeReleaseSpinLock(&v166->Ref.SpinLock, v171);
          KeReleaseSpinLock(&ndisMiniDriverListLock, v167);
          v173 = KeAcquireSpinLockRaiseToDpc(&v166->Ref.SpinLock);
          v174 = v166->MiniportQueue;
          v175 = v173;
          if ( !v174 )
            goto LABEL_286;
          do
          {
            v176 = v174->BindPaths;
            if ( !v176 )
              goto LABEL_284;
            if ( v176->Number < v164 )
              goto LABEL_284;
            v177 = *(_QWORD *)(v113 + 3768);
            if ( *(_WORD *)(v177 + 8) != v176->Paths[0].Length
              || memcmp(*(const void **)(v177 + 16), v176->Paths[0].Buffer, *(unsigned __int16 *)(v177 + 8)) )
            {
              goto LABEL_284;
            }
            KeAcquireSpinLockAtDpcLevel(&v174->Lock);
            v31 = (v174->Flags & 0x80200020) == 0;
            v174->MiniportThread = KeGetCurrentThread();
            if ( v31
              && (v174->PnPFlags & 0x1084110) == 0
              && v174->PnPDeviceState == NdisPnPDeviceStarted
              && v174->CurrentDevicePowerState == PowerDeviceD0 )
            {
              v187 = 1;
              v189 = KeAcquireSpinLockRaiseToDpc(&v174->Ref.SpinLock);
              if ( v174->Ref.Closing )
                goto LABEL_314;
              v190 = v174->RefCountTracker;
              if ( v190 )
              {
                LOBYTE(v188) = 60;
                NdisReferenceWithTag(v190, v188);
              }
              v191 = v174->Ref.ReferenceCount;
              v174->Ref.ReferenceCount = v191 + 1;
              if ( v191 == -1 )
              {
                v174->Ref.ReferenceCount = -1;
LABEL_314:
                v187 = 0;
              }
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v188) = 4;
                WPP_RECORDER_SF_qL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v188,
                  20,
                  12,
                  (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
                  (char)v174,
                  v174->Ref.ReferenceCount);
              }
              KeReleaseSpinLock(&v174->Ref.SpinLock, v189);
              if ( v187 )
              {
                LOBYTE(v192) = 2;
                v193 = v174->NsiRefCountTracker;
                *(_QWORD *)v352 = *(_QWORD *)v349;
                NdisReferenceWithTag(v193, v192);
                v194 = (int *)v174->BindPaths;
                ++v174->NsiOpenReferences;
                *(_QWORD *)v349 = v174;
                Pb = *v194;
              }
            }
            v174->MiniportThread = 0LL;
            KeReleaseSpinLockFromDpcLevel(&v174->Lock);
            v195 = *(_QWORD *)v352;
            if ( *(_QWORD *)v352 )
            {
              v196 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)v352 + 96LL));
              v197 = *(_QWORD *)(v195 + 4904);
              *(_QWORD *)(v195 + 520) = KeGetCurrentThread();
              if ( v197 - 2 > 1 )
              {
                if ( v197 < 2 )
                  ndisBugCheckEx(0x1EuLL, 3uLL, v197, 0LL);
                if ( *(_BYTE *)(v197 + 2) <= 2u )
                  ndisBugCheckEx(0x1EuLL, 2uLL, v197, 2uLL);
                if ( *(_BYTE *)(v197 + 1) )
                {
                  if ( *(_BYTE *)(v197 + 1) == 1 )
                  {
                    v304 = v197 + 136;
                    v305 = *(_DWORD *)(v197 + 192);
                    if ( v305 >> 17 < 0x3FFE && (unsigned __int16)v305 >> 1 == (v305 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v197 + 136));
                      *(_DWORD *)(v304 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( !((unsigned __int16)v305 >> 1) && (v305 & 1) == 0 )
LABEL_512:
                        ndisReportRefcountImbalance(v197, 2u);
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v197 + 136), 0);
                    }
                  }
                }
                else
                {
                  v198 = *(_QWORD *)(v197 + 8);
                  if ( v198 )
                  {
                    for ( i8 = 0; ; ++i8 )
                    {
                      if ( i8 >= *(_BYTE *)(v197 + 3) )
                        goto LABEL_325;
                      v274 = (_BYTE *)(v198 + 2LL * i8);
                      if ( *v274 == 2 )
                      {
                        v275 = v274[1];
                        if ( v275 )
                          break;
                      }
                    }
                    v274[1] = v275 - 1;
                  }
                  else
                  {
LABEL_325:
                    if ( !_bittestandreset((signed __int32 *)(v197 + 16), 2u) )
                      goto LABEL_512;
                  }
                }
              }
              v31 = (*(_DWORD *)(v195 + 3124))-- == 1;
              if ( v31 )
              {
                v199 = *(struct _KEVENT **)(v195 + 3136);
                if ( v199 )
                  KeSetEvent(v199, 0, 0);
              }
              *(_QWORD *)(v195 + 520) = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)(v195 + 96), v196);
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v200) = 4;
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v200,
                  20,
                  25,
                  (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
                  v195);
              }
              v201 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v195 + 4432));
              v203 = *(_QWORD *)(v195 + 4896);
              v204 = v201;
              if ( v203 && v203 - 2 > 1 )
              {
                if ( v203 == 1 )
                  ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
                if ( *(_BYTE *)(v203 + 2) <= 0x3Cu )
                  ndisBugCheckEx(0x1EuLL, 2uLL, v203, 0x3CuLL);
                if ( *(_BYTE *)(v203 + 1) )
                {
                  if ( *(_BYTE *)(v203 + 1) == 1 )
                  {
                    v306 = v203 + 3848;
                    v307 = *(_DWORD *)(v203 + 3904);
                    if ( v307 >> 17 < 0x3FFE && (unsigned __int16)v307 >> 1 == (v307 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v203 + 3848));
                      *(_DWORD *)(v306 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( !((unsigned __int16)v307 >> 1) && (v307 & 1) == 0 )
LABEL_513:
                        ndisReportRefcountImbalance(v203, 0x3Cu);
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v203 + 3848), 0);
                    }
                  }
                }
                else
                {
                  v205 = *(_QWORD *)(v203 + 8);
                  if ( v205 )
                  {
                    for ( i9 = 0; ; ++i9 )
                    {
                      if ( i9 >= *(_BYTE *)(v203 + 3) )
                        goto LABEL_337;
                      v202 = (_BYTE *)(v205 + 2LL * i9);
                      if ( *v202 == 60 )
                      {
                        v279 = v202[1];
                        if ( v279 )
                          break;
                      }
                    }
                    v202[1] = v279 - 1;
                  }
                  else
                  {
LABEL_337:
                    if ( !_bittestandreset((signed __int32 *)(v203 + 20), 0x1Cu) )
                      goto LABEL_513;
                  }
                }
              }
              v206 = *(_DWORD *)(v195 + 4440) - 1;
              *(_DWORD *)(v195 + 4440) = v206;
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v202) = 4;
                WPP_RECORDER_SF_qL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  (int)v202,
                  20,
                  14,
                  (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
                  v195,
                  v206);
              }
              KeReleaseSpinLock((PKSPIN_LOCK)(v195 + 4432), v204);
              if ( !v206 )
              {
                v285 = *(struct _KEVENT **)(v195 + 1608);
                if ( v285 )
                  KeSetEvent(v285, 0, 0);
              }
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v207) = 4;
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v207,
                  20,
                  26,
                  (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
                  v195);
              }
              *(_QWORD *)v352 = 0LL;
            }
LABEL_284:
            v174 = v174->NextMiniport;
            v113 = *(_QWORD *)v350;
            v164 = Pb;
          }
          while ( v174 );
          v166 = v358;
LABEL_286:
          KeReleaseSpinLock(&p_Ref->SpinLock, v175);
          v178 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
          v179 = v166->NextDriver;
          v167 = v178;
          v180 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
          v181 = (ULONG_PTR)p_Ref->RefCountTracker;
          v182 = v180;
          if ( v181 - 2 > 1 )
          {
            if ( v181 < 2 )
              ndisBugCheckEx(0x1EuLL, 3uLL, v181, 0LL);
            if ( *(_BYTE *)(v181 + 2) <= 8u )
              ndisBugCheckEx(0x1EuLL, 2uLL, v181, 8uLL);
            if ( *(_BYTE *)(v181 + 1) )
            {
              if ( *(_BYTE *)(v181 + 1) == 1 )
              {
                v252 = v181 + 520;
                v253 = *(_DWORD *)(v181 + 576);
                if ( v253 >> 17 < 0x3FFE && (unsigned __int16)v253 >> 1 == (v253 >> 17) + 1 )
                {
                  for ( i10 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v252;
                        *(_QWORD *)v252;
                        i10 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v252 )
                  {
                    *(_QWORD *)v252 = i10->Next;
                    ndisFreeRefCountStacksInBlock(i10);
                    ExFreePoolWithTag(i10, 0);
                  }
                  ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v252);
                  *(_DWORD *)(v252 + 56) &= 0x10001u;
                }
                else
                {
                  if ( !((unsigned __int16)v253 >> 1) && (v253 & 1) == 0 )
                    goto LABEL_304;
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v181 + 520), 0);
                }
              }
            }
            else
            {
              v183 = *(_QWORD *)(v181 + 8);
              if ( !v183 )
              {
LABEL_291:
                if ( _bittestandreset((signed __int32 *)(v181 + 16), 8u) )
                  goto LABEL_292;
LABEL_304:
                ndisReportRefcountImbalance(v181, 8u);
              }
              for ( i11 = 0; ; ++i11 )
              {
                if ( i11 >= *(_BYTE *)(v181 + 3) )
                  goto LABEL_291;
                v185 = (_BYTE *)(v183 + 2LL * i11);
                if ( *v185 == 8 )
                {
                  v186 = v185[1];
                  if ( v186 )
                    break;
                }
              }
              v185[1] = v186 - 1;
            }
          }
LABEL_292:
          v31 = p_Ref->ReferenceCount-- == 1;
          if ( v31 )
          {
            if ( !p_Ref->ZeroBased )
            {
              v320 = (ULONG_PTR)p_Ref->RefCountTracker;
              if ( v320 )
              {
                v321 = ndisGetAnyActiveRefTag(p_Ref->RefCountTracker);
                if ( v321 != -2 )
                  ndisBugCheckEx(0x1EuLL, 4uLL, v320, v321);
                v322 = ndisRefCountBlockFromRefCountHandle(v320);
                v323 = v322;
                if ( v322 )
                {
                  ndisFreeRefCountAuxiliaryMemory(v322);
                  ExFreePoolWithTag(v323, 0);
                }
              }
              p_Ref->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
            }
            KeReleaseSpinLock(&p_Ref->SpinLock, v182);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v324) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v324,
                20,
                23,
                (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
                (char)v166);
            }
            for ( i12 = &ndisMiniDriverList; ; i12 = &v326->NextDriver )
            {
              v326 = *i12;
              if ( !*i12 )
                goto LABEL_632;
              if ( v326 == v166 )
                break;
            }
            *i12 = v166->NextDriver;
            ObfDereferenceObject(ndisDriverObject);
LABEL_632:
            v327 = v166->ImageName.Buffer;
            if ( v327 )
            {
              ExFreePoolWithTag(v327, 0);
              v166->ImageName.Buffer = 0LL;
            }
            v328 = v166->NdisDriverInfo;
            if ( v328 )
            {
              ExFreePoolWithTag(v328, 0);
              v166->NdisDriverInfo = 0LL;
            }
            if ( (v166->Flags & 1) != 0 )
            {
              v329 = v166->PendingDeviceList;
              if ( v329 )
              {
                do
                {
                  v330 = v329->Next;
                  ExFreePoolWithTag(v329, 0);
                  v329 = v330;
                }
                while ( v330 );
              }
            }
            KeSetEvent(&v166->MiniportsRemovedEvent, 0, 0);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v331) = 4;
              WPP_RECORDER_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v331,
                20,
                24,
                (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
                (char)v166);
            }
          }
          else
          {
            KeReleaseSpinLock(&p_Ref->SpinLock, v182);
          }
          v113 = *(_QWORD *)v350;
LABEL_295:
          v358 = v179;
          v166 = v179;
          if ( !v179 )
          {
            v163 = *(_QWORD *)v349;
            break;
          }
          v164 = Pb;
        }
      }
      KeReleaseSpinLock(&ndisMiniDriverListLock, v167);
      if ( v163 )
      {
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v163 + 96));
        v208 = *(_QWORD *)(v163 + 2048);
        *(_QWORD *)(v163 + 520) = KeGetCurrentThread();
        if ( !v208 )
        {
LABEL_347:
          v109 = *(_QWORD *)(v163 + 4040);
          goto LABEL_378;
        }
        while ( 1 )
        {
          v226 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v208 + 312));
          v228 = v226;
          if ( !*(_BYTE *)(v208 + 322) )
          {
            v229 = *(_WORD *)(v208 + 320);
            if ( v229 < 0xFFEBu )
            {
              LOBYTE(v227) = 11;
              *(_WORD *)(v208 + 320) = v229 + 1;
              NdisReferenceWithTag(*(_QWORD *)(v208 + 328), v227);
              KeReleaseSpinLock((PKSPIN_LOCK)(v208 + 312), v228);
              v109 = *(_QWORD *)(v208 + 688);
LABEL_378:
              P = (char *)v109;
              *(_QWORD *)(v163 + 520) = 0LL;
              KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v163 + 96));
              v230 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v163 + 96));
              v231 = *(_QWORD *)(v163 + 4904);
              *(_QWORD *)(v163 + 520) = KeGetCurrentThread();
              if ( v231 - 2 > 1 )
              {
                if ( v231 < 2 )
                  ndisBugCheckEx(0x1EuLL, 3uLL, v231, 0LL);
                if ( *(_BYTE *)(v231 + 2) <= 2u )
                  ndisBugCheckEx(0x1EuLL, 2uLL, v231, 2uLL);
                if ( *(_BYTE *)(v231 + 1) )
                {
                  if ( *(_BYTE *)(v231 + 1) != 1 )
                    goto LABEL_384;
                  v292 = v231 + 136;
                  v293 = *(_DWORD *)(v231 + 192);
                  if ( v293 >> 17 >= 0x3FFE || (unsigned __int16)v293 >> 1 != (v293 >> 17) + 1 )
                  {
                    if ( (unsigned __int16)v293 >> 1 || (v293 & 1) != 0 )
                    {
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v231 + 136), 0);
                      goto LABEL_384;
                    }
                    goto LABEL_469;
                  }
                  for ( i13 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v292;
                        *(_QWORD *)v292;
                        i13 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v292 )
                  {
                    *(_QWORD *)v292 = i13->Next;
                    ndisFreeRefCountStacksInBlock(i13);
                    ExFreePoolWithTag(i13, 0);
                  }
                  ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v292);
                  *(_DWORD *)(v292 + 56) &= 0x10001u;
                }
                else
                {
                  v232 = *(_QWORD *)(v231 + 8);
                  if ( !v232 )
                  {
LABEL_383:
                    if ( _bittestandreset((signed __int32 *)(v231 + 16), 2u) )
                      goto LABEL_384;
LABEL_469:
                    ndisReportRefcountImbalance(v231, 2u);
                  }
                  for ( i14 = 0; ; ++i14 )
                  {
                    if ( i14 >= *(_BYTE *)(v231 + 3) )
                      goto LABEL_383;
                    v264 = (_BYTE *)(v232 + 2LL * i14);
                    if ( *v264 == 2 )
                    {
                      v265 = v264[1];
                      if ( v265 )
                        break;
                    }
                  }
                  v264[1] = v265 - 1;
                }
              }
LABEL_384:
              v31 = (*(_DWORD *)(v163 + 3124))-- == 1;
              if ( v31 )
              {
                v233 = *(struct _KEVENT **)(v163 + 3136);
                if ( v233 )
                  KeSetEvent(v233, 0, 0);
              }
              *(_QWORD *)(v163 + 520) = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)(v163 + 96), v230);
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v234) = 4;
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v234,
                  20,
                  25,
                  (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
                  v163);
              }
              v235 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v163 + 4432));
              v237 = *(_QWORD *)(v163 + 4896);
              v238 = v235;
              if ( v237 && v237 - 2 > 1 )
              {
                if ( v237 == 1 )
                  ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
                if ( *(_BYTE *)(v237 + 2) <= 0x3Cu )
                  ndisBugCheckEx(0x1EuLL, 2uLL, v237, 0x3CuLL);
                if ( *(_BYTE *)(v237 + 1) )
                {
                  if ( *(_BYTE *)(v237 + 1) == 1 )
                  {
                    v295 = v237 + 3848;
                    v296 = *(_DWORD *)(v237 + 3904);
                    if ( v296 >> 17 < 0x3FFE && (unsigned __int16)v296 >> 1 == (v296 >> 17) + 1 )
                    {
                      for ( i15 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v295;
                            *(_QWORD *)v295;
                            i15 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v295 )
                      {
                        *(_QWORD *)v295 = i15->Next;
                        ndisFreeRefCountStacksInBlock(i15);
                        ExFreePoolWithTag(i15, 0);
                      }
                      ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v295);
                      *(_DWORD *)(v295 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( !((unsigned __int16)v296 >> 1) && (v296 & 1) == 0 )
                        goto LABEL_473;
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v237 + 3848), 0);
                    }
                  }
                }
                else
                {
                  v239 = *(_QWORD *)(v237 + 8);
                  if ( !v239 )
                  {
LABEL_395:
                    if ( _bittestandreset((signed __int32 *)(v237 + 20), 0x1Cu) )
                      goto LABEL_396;
LABEL_473:
                    ndisReportRefcountImbalance(v237, 0x3Cu);
                  }
                  for ( i16 = 0; ; ++i16 )
                  {
                    if ( i16 >= *(_BYTE *)(v237 + 3) )
                      goto LABEL_395;
                    v236 = (_BYTE *)(v239 + 2LL * i16);
                    if ( *v236 == 60 )
                    {
                      v267 = v236[1];
                      if ( v267 )
                        break;
                    }
                  }
                  v236[1] = v267 - 1;
                }
              }
LABEL_396:
              v240 = *(_DWORD *)(v163 + 4440) - 1;
              *(_DWORD *)(v163 + 4440) = v240;
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v236) = 4;
                WPP_RECORDER_SF_qL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  (int)v236,
                  20,
                  14,
                  (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
                  v163,
                  v240);
              }
              KeReleaseSpinLock((PKSPIN_LOCK)(v163 + 4432), v238);
              if ( !v240 )
              {
                v281 = *(struct _KEVENT **)(v163 + 1608);
                if ( v281 )
                  KeSetEvent(v281, 0, 0);
              }
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v241) = 4;
                WPP_RECORDER_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v241,
                  20,
                  26,
                  (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
                  v163);
              }
LABEL_401:
              v242 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
              p_DeviceContext = (struct _NDIS_IF_BLOCK *)v351;
              v243 = v242;
              v244 = *((_QWORD *)v351 + 180);
              if ( v244 - 2 > 1 )
              {
                if ( v244 < 2 )
                  ndisBugCheckEx(0x1EuLL, 3uLL, v244, 0LL);
                if ( *(_BYTE *)(v244 + 2) <= 3u )
                  ndisBugCheckEx(0x1EuLL, 2uLL, v244, 3uLL);
                if ( *(_BYTE *)(v244 + 1) )
                {
                  if ( *(_BYTE *)(v244 + 1) == 1 )
                  {
                    v283 = v244 + 200;
                    v284 = *(_DWORD *)(v244 + 256);
                    if ( v284 >> 17 < 0x3FFE && (unsigned __int16)v284 >> 1 == (v284 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v244 + 200));
                      *(_DWORD *)(v283 + 56) &= 0x10001u;
                    }
                    else
                    {
                      if ( !((unsigned __int16)v284 >> 1) && (v284 & 1) == 0 )
                        goto LABEL_441;
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v244 + 200), 0);
                    }
                  }
                }
                else
                {
                  v245 = *(_QWORD *)(v244 + 8);
                  if ( !v245 )
                  {
LABEL_406:
                    if ( _bittestandreset((signed __int32 *)(v244 + 16), 3u) )
                      goto LABEL_407;
LABEL_441:
                    ndisReportRefcountImbalance(v244, 3u);
                  }
                  for ( i17 = 0; ; ++i17 )
                  {
                    if ( i17 >= *(_BYTE *)(v244 + 3) )
                      goto LABEL_406;
                    v256 = (_BYTE *)(v245 + 2LL * i17);
                    if ( *v256 == 3 )
                    {
                      v257 = v256[1];
                      if ( v257 )
                        break;
                    }
                  }
                  v256[1] = v257 - 1;
                }
              }
LABEL_407:
              v31 = p_DeviceContext->MiniportLinkReference-- == 1;
              if ( v31 )
              {
                v276 = p_DeviceContext->Miniport;
                if ( v276 )
                {
                  IfBlockPointerRefZeroEvent = v276->IfBlockPointerRefZeroEvent;
                  if ( IfBlockPointerRefZeroEvent )
                    KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
                }
              }
              KeReleaseSpinLock(&SpinLock, v243);
              goto LABEL_409;
            }
            ndisRefCountReferenceCountOverflow = 1;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(v208 + 312), v226);
          v208 = *(_QWORD *)(v208 + 112);
          if ( !v208 )
            goto LABEL_347;
        }
      }
    }
    v109 = 0LL;
    P = 0LL;
    goto LABEL_401;
  }
  v104 = v18 - 1;
  if ( !v104 )
  {
    Value = 0LL;
LABEL_184:
    while ( 1 )
    {
      v105 = (_DEVICE_OBJECT *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
      p_DeviceContext = 0LL;
      v351 = 0LL;
      while ( 1 )
      {
        if ( v105 == (_DEVICE_OBJECT *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
          goto LABEL_189;
        if ( v105->Queue.ListEntry.Flink > Value )
          break;
        v105 = *(_DEVICE_OBJECT **)&v105->Type;
      }
      p_DeviceContext = (struct _NDIS_IF_BLOCK *)&v105[-4].Queue.Wcb.DeviceContext;
      v351 = &v105[-4].Queue.Wcb.DeviceContext;
LABEL_189:
      if ( !p_DeviceContext )
        break;
      v106 = p_DeviceContext->Compartment;
      Value = (_LIST_ENTRY *)p_DeviceContext->NetLuid.Value;
      if ( v12 == *((_DWORD *)v106 + 4) )
        goto LABEL_199;
      if ( *(_DWORD *)v359 == -1 )
      {
        v107 = *(_QWORD *)&v359[8] - *(_QWORD *)((char *)v106 + 1684);
        if ( *(_QWORD *)&v359[8] == *(_QWORD *)((char *)v106 + 1684) )
          v107 = *(_QWORD *)&v359[16] - *(_QWORD *)((char *)v106 + 1692);
        if ( !v107 )
          goto LABEL_199;
      }
      if ( (*((_DWORD *)v106 + 420) & 2) == 0 && v12 == 1 )
        goto LABEL_199;
    }
LABEL_28:
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v19);
    goto LABEL_29;
  }
  if ( v104 == 1 )
    goto LABEL_184;
  InterfaceRodEnumObject = -1073741808;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v17);
  v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
LABEL_57:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v25);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v37) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v37,
      22,
      25,
      (struct _GUID *)&WPP_f142ecdf0a6f33a49e2e175c00018497_Traceguids,
      (char)v2,
      InterfaceRodEnumObject);
  }
  KeLeaveCriticalRegion();
  return InterfaceRodEnumObject;
}
