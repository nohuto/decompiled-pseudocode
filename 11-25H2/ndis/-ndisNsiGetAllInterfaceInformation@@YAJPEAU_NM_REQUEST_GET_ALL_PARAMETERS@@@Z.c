/*
 * XREFs of ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140007EC0
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

__int64 __fastcall ndisNsiGetAllInterfaceInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1, __int16 a2)
{
  __int64 v2; // r13
  struct _NM_REQUEST_GET_ALL_PARAMETERS *v3; // r12
  __int64 CurrentProcess; // rax
  struct _KTHREAD *CurrentThread; // rsi
  _LIST_ENTRY **v6; // rbx
  _LIST_ENTRY *v7; // rbx
  int *ThreadProperty; // rax
  PACCESS_TOKEN v9; // rax
  void *v10; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v12; // edi
  int v13; // r14d
  unsigned int v14; // edi
  KIRQL v15; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v16; // rcx
  KIRQL v17; // r8
  struct _NDIS_IF_COMPARTMENT_BLOCK *i; // rax
  KIRQL v19; // al
  int v20; // ecx
  _DEVICE_OBJECT *v21; // rax
  _LIST_ENTRY **p_Blink; // rdx
  void **p_DeviceContext; // rdi
  char *v24; // rcx
  int v25; // ebx
  KIRQL v26; // r15
  int *v27; // r12
  __int64 v28; // rbx
  KIRQL v29; // al
  ULONG_PTR v30; // r8
  KIRQL v31; // r14
  __int64 v32; // r9
  bool v33; // zf
  ULONG_PTR v34; // r8
  __int64 v35; // r9
  ULONG_PTR v36; // r8
  __int64 v37; // r9
  unsigned int v38; // ebx
  int v39; // edx
  struct _KTHREAD *v40; // r14
  PACCESS_TOKEN v41; // rax
  void *v42; // rsi
  unsigned int ThreadSessionId; // eax
  NTSTATUS v44; // edi
  unsigned __int8 i8; // cl
  _BYTE *v46; // rdx
  char v47; // al
  unsigned __int8 i10; // cl
  _BYTE *v49; // rdx
  char v50; // al
  unsigned __int8 i12; // cl
  _BYTE *v52; // rdx
  char v53; // al
  char *v54; // rcx
  char *v55; // r8
  KIRQL v56; // al
  __int64 v57; // rdx
  KIRQL v58; // bl
  _QWORD *v59; // rsi
  void *v60; // rcx
  _QWORD *v61; // rax
  struct _NDIS_M_DRIVER_BLOCK *v62; // r14
  unsigned int v63; // esi
  KIRQL v64; // al
  struct _NDIS_M_DRIVER_BLOCK *v65; // r13
  KIRQL v66; // r12
  __int64 v67; // rdx
  KIRQL v68; // di
  unsigned __int16 v69; // ax
  NDIS_REFCOUNT_HANDLE__ *v70; // rcx
  KIRQL v71; // al
  _NDIS_MINIPORT_BLOCK *v72; // rbx
  KIRQL v73; // r15
  _NDIS_BIND_PATHS *v74; // rdx
  __int64 v75; // rcx
  KIRQL v76; // al
  struct _NDIS_M_DRIVER_BLOCK *v77; // r14
  KIRQL v78; // al
  ULONG_PTR v79; // r8
  KIRQL v80; // r15
  __int64 v81; // r9
  int (__fastcall *LiveDumpCallback)(NDIS_MEMORYDUMP_HANDLE__ *, int (__fastcall *)(NDIS_MEMORYDUMP_HANDLE__ *, const _GUID *, void *, unsigned int), unsigned int, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, void *); // rdi
  int v83; // ecx
  _DEVICE_OBJECT *Blink; // rax
  NTSTATUS InformationToken; // edi
  PVOID *v86; // rbx
  PVOID *v87; // rcx
  _DWORD *v88; // rdx
  __int64 v89; // rdx
  _QWORD *v90; // rcx
  __int64 v91; // rdx
  _QWORD *v92; // rcx
  __int64 v93; // rdx
  _QWORD *v94; // rcx
  __int64 v95; // rax
  unsigned int v96; // edx
  int *v97; // rcx
  ULONG_PTR v98; // rbx
  unsigned int v99; // eax
  struct _NDIS_REFCOUNT_BLOCK *v100; // rax
  struct _NDIS_REFCOUNT_BLOCK *v101; // rbx
  void *v102; // rcx
  void *v103; // rcx
  struct _KEVENT *v104; // rcx
  PVOID *v105; // rdx
  PVOID **v106; // rax
  PVOID *v107; // rbx
  PVOID *v108; // rcx
  void **v109; // rdx
  void ***v110; // rdx
  char **v111; // rcx
  void ***v112; // rdx
  char **v113; // rcx
  void ***v114; // rdx
  char **v115; // rcx
  void *v116; // rax
  unsigned int v117; // edx
  ULONG_PTR v118; // rbx
  unsigned int v119; // eax
  struct _NDIS_REFCOUNT_BLOCK *v120; // rax
  struct _NDIS_REFCOUNT_BLOCK *v121; // rbx
  void *v122; // rcx
  void *v123; // rcx
  struct _KEVENT *v124; // rcx
  PVOID *v125; // rdx
  PVOID **v126; // rax
  KIRQL v127; // r8
  ULONG_PTR v128; // rdi
  unsigned int v129; // r9d
  struct _NDIS_REFCOUNT_STACK_BLOCK *i7; // rsi
  ULONG_PTR v131; // rbx
  unsigned int v132; // r9d
  struct _NDIS_REFCOUNT_STACK_BLOCK *i9; // rdi
  ULONG_PTR v134; // rbx
  unsigned int v135; // r9d
  struct _NDIS_REFCOUNT_STACK_BLOCK *i11; // rdi
  unsigned __int8 i3; // cl
  _BYTE *v138; // rdx
  char v139; // al
  char v140; // si
  __int64 v141; // rdx
  KIRQL v142; // r14
  NDIS_REFCOUNT_HANDLE__ *v143; // rcx
  unsigned int v144; // ecx
  __int64 v145; // rdx
  NDIS_REFCOUNT_HANDLE__ *v146; // rcx
  int *v147; // rax
  __int64 v148; // r12
  KIRQL v149; // si
  ULONG_PTR v150; // r8
  __int64 v151; // r9
  struct _KEVENT *v152; // rcx
  __int16 v153; // dx
  KIRQL v154; // al
  _BYTE *v155; // rdx
  ULONG_PTR v156; // r8
  KIRQL v157; // r14
  __int64 v158; // r9
  int v159; // edi
  __int16 v160; // dx
  __int64 v161; // r12
  unsigned int v162; // r14d
  KIRQL v163; // al
  struct _NDIS_M_DRIVER_BLOCK *v164; // rdi
  KIRQL v165; // r15
  _REFERENCE_EX *p_Ref; // r13
  __int64 v167; // rdx
  KIRQL v168; // bl
  unsigned __int16 ReferenceCount; // ax
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  KIRQL v171; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  KIRQL v173; // r12
  _NDIS_BIND_PATHS *BindPaths; // rdx
  __int64 v175; // rcx
  KIRQL v176; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rsi
  KIRQL v178; // al
  ULONG_PTR v179; // r8
  KIRQL v180; // r14
  __int64 v181; // r9
  unsigned __int8 k; // cl
  _BYTE *v183; // rdx
  char v184; // al
  char v185; // si
  __int64 v186; // rdx
  KIRQL v187; // r14
  NDIS_REFCOUNT_HANDLE__ *v188; // rcx
  unsigned int v189; // ecx
  __int64 v190; // rdx
  NDIS_REFCOUNT_HANDLE__ *NsiRefCountTracker; // rcx
  int *v192; // rax
  __int64 v193; // r15
  KIRQL v194; // r14
  ULONG_PTR v195; // r8
  __int64 v196; // r9
  struct _KEVENT *v197; // rcx
  __int16 v198; // dx
  KIRQL v199; // al
  _BYTE *v200; // rdx
  ULONG_PTR v201; // r8
  KIRQL v202; // r14
  __int64 v203; // r9
  int v204; // edi
  __int16 v205; // dx
  __int64 v206; // rdi
  __int64 v207; // rdx
  KIRQL v208; // si
  unsigned __int16 v209; // ax
  __int64 v210; // rcx
  KIRQL v211; // di
  ULONG_PTR RestartHandler; // r8
  __int64 v213; // r9
  struct _KEVENT *CmNotifyCloseAfCompleteHandler; // rcx
  __int16 v215; // dx
  KIRQL v216; // al
  _BYTE *v217; // rdx
  ULONG_PTR PauseHandler; // r8
  KIRQL v219; // si
  __int64 v220; // r9
  int v221; // ebx
  __int64 v222; // rdx
  __int64 v223; // rdx
  KIRQL v224; // si
  unsigned __int16 v225; // ax
  __int64 v226; // rcx
  KIRQL v227; // di
  ULONG_PTR v228; // r8
  __int64 v229; // r9
  struct _KEVENT *v230; // rcx
  __int16 v231; // dx
  KIRQL v232; // al
  _BYTE *v233; // rdx
  ULONG_PTR v234; // r8
  KIRQL v235; // si
  __int64 v236; // r9
  int v237; // ebx
  __int16 v238; // dx
  KIRQL v239; // al
  ULONG_PTR v240; // r8
  KIRQL v241; // bl
  __int64 v242; // rdx
  __int64 v243; // rax
  ULONG_PTR v244; // rbx
  unsigned int v245; // r9d
  struct _NDIS_REFCOUNT_STACK_BLOCK *i2; // rdi
  ULONG_PTR v247; // rbx
  unsigned int v248; // edx
  struct _NDIS_REFCOUNT_STACK_BLOCK *j; // rdi
  unsigned __int8 jj; // cl
  _BYTE *v251; // r9
  char v252; // al
  unsigned __int8 i5; // cl
  _BYTE *v254; // rdx
  char v255; // al
  unsigned __int8 i6; // cl
  char v257; // al
  unsigned __int8 n; // cl
  _BYTE *v259; // rdx
  char v260; // al
  unsigned __int8 ii; // cl
  char v262; // al
  unsigned __int8 nn; // cl
  _BYTE *v264; // rdx
  char v265; // al
  unsigned __int8 i1; // cl
  char v267; // al
  unsigned __int8 kk; // cl
  _BYTE *v269; // rdx
  char v270; // al
  void *v271; // rax
  struct _KEVENT *v272; // rcx
  unsigned __int8 mm; // cl
  char v274; // al
  struct _KEVENT *Flink; // rcx
  struct _KEVENT *v276; // rcx
  struct _KEVENT *v277; // rcx
  ULONG_PTR v278; // rdi
  unsigned int v279; // r9d
  struct _KEVENT *v280; // rcx
  ULONG_PTR v281; // rbx
  unsigned int v282; // r9d
  ULONG_PTR v283; // rbx
  unsigned int v284; // r9d
  ULONG_PTR v285; // rbx
  unsigned int v286; // edx
  ULONG_PTR v287; // rbx
  unsigned int v288; // edx
  ULONG_PTR v289; // rdi
  unsigned int v290; // r9d
  ULONG_PTR v291; // rdi
  unsigned int v292; // r9d
  ULONG_PTR v293; // rdi
  unsigned int v294; // r9d
  ULONG_PTR v295; // rdi
  unsigned int v296; // r9d
  ULONG_PTR v297; // rbx
  unsigned int v298; // eax
  struct _NDIS_REFCOUNT_BLOCK *v299; // rax
  struct _NDIS_REFCOUNT_BLOCK *v300; // rbx
  __int16 v301; // dx
  struct _NDIS_M_DRIVER_BLOCK **i4; // rcx
  struct _NDIS_M_DRIVER_BLOCK *v303; // rax
  wchar_t *v304; // rcx
  _NDIS_WRAPPER_HANDLE *v305; // rcx
  _NDIS_PENDING_IM_INSTANCE *v306; // rcx
  __int16 v307; // dx
  _NDIS_PENDING_IM_INSTANCE *v308; // rbx
  ULONG_PTR v309; // rbx
  unsigned int AnyActiveRefTag; // eax
  struct _NDIS_REFCOUNT_BLOCK *v311; // rax
  struct _NDIS_REFCOUNT_BLOCK *v312; // rbx
  __int16 v313; // dx
  struct _NDIS_M_DRIVER_BLOCK **m; // rcx
  struct _NDIS_M_DRIVER_BLOCK *v315; // rax
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  __int16 v319; // dx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  ULONG_PTR v321; // rdi
  unsigned int v322; // eax
  struct _NDIS_REFCOUNT_BLOCK *v323; // rax
  struct _NDIS_REFCOUNT_BLOCK *v324; // rdi
  struct _KEVENT *v325; // rcx
  struct _KEVENT *v326; // rcx
  KIRQL v328; // [rsp+40h] [rbp-89h]
  int v329; // [rsp+44h] [rbp-85h]
  int v330; // [rsp+44h] [rbp-85h]
  BOOLEAN EffectiveOnly; // [rsp+48h] [rbp-81h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+49h] [rbp-80h] BYREF
  BOOLEAN v333; // [rsp+4Ah] [rbp-7Fh] BYREF
  BOOLEAN v334[5]; // [rsp+4Bh] [rbp-7Eh] BYREF
  void **v335; // [rsp+50h] [rbp-79h]
  char v336[4]; // [rsp+58h] [rbp-71h]
  struct _NDIS_M_DRIVER_BLOCK *v337; // [rsp+60h] [rbp-69h]
  char v338[8]; // [rsp+68h] [rbp-61h]
  char v339[8]; // [rsp+70h] [rbp-59h]
  _QWORD *v340; // [rsp+78h] [rbp-51h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+80h] [rbp-49h] BYREF
  _SECURITY_IMPERSONATION_LEVEL v342; // [rsp+84h] [rbp-45h] BYREF
  char v343[8]; // [rsp+88h] [rbp-41h]
  char v344[16]; // [rsp+90h] [rbp-39h] BYREF
  __int128 v345; // [rsp+A0h] [rbp-29h]
  __int128 v346; // [rsp+B0h] [rbp-19h]
  __int128 v347; // [rsp+C0h] [rbp-9h]
  PVOID TokenInformation; // [rsp+D0h] [rbp+7h] BYREF
  PVOID v349[4]; // [rsp+D8h] [rbp+Fh] BYREF

  *(_QWORD *)v339 = a1;
  v2 = 0LL;
  *(_DWORD *)v336 = 0;
  v3 = a1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      22,
      26,
      (struct _GUID *)&WPP_f142ecdf0a6f33a49e2e175c00018497_Traceguids,
      (char)a1);
  }
  *(_OWORD *)v344 = 0LL;
  v345 = 0LL;
  v346 = 0LL;
  v347 = 0LL;
  CurrentProcess = PsGetCurrentProcess();
  v334[1] = ndisIsMacAddressHidden(CurrentProcess);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v3 + 6) != 8 )
  {
    v38 = -1073741808;
    v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    goto LABEL_66;
  }
  CurrentThread = KeGetCurrentThread();
  v6 = (_LIST_ENTRY **)*((_QWORD *)v3 + 2);
  memset(&v349[1], 0, 24);
  v7 = *v6;
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( !ThreadProperty )
  {
    LODWORD(v349[1]) = 0;
    goto LABEL_6;
  }
  v13 = *ThreadProperty;
  LODWORD(v349[1]) = ThreadProperty[1];
  HIDWORD(v349[1]) = v13;
  ObfDereferenceObject(ThreadProperty);
  v14 = v13;
  if ( !v13 )
  {
LABEL_6:
    CopyOnOpen = 0;
    EffectiveOnly = 0;
    ImpersonationLevel = SecurityAnonymous;
    TokenInformation = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    }
    else
    {
      v9 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v10 = v9;
      if ( v9 )
      {
        v44 = SeQueryInformationToken(v9, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v10);
        if ( v44 >= 0 )
        {
          v12 = (unsigned int)TokenInformation;
LABEL_10:
          if ( v12 == -1 )
          {
            v40 = KeGetCurrentThread();
            v334[0] = 0;
            v333 = 0;
            v342 = SecurityAnonymous;
            v349[0] = 0LL;
            if ( KeGetCurrentIrql() >= 2u )
            {
              ThreadSessionId = PsGetCurrentProcessSessionId();
            }
            else
            {
              v41 = PsReferenceImpersonationToken(v40, v334, &v333, &v342);
              v42 = v41;
              if ( v41 )
              {
                InformationToken = SeQueryInformationToken(v41, TokenSessionId, v349);
                PsDereferenceImpersonationToken(v42);
                if ( InformationToken >= 0 )
                {
                  v12 = (unsigned int)v349[0];
                  goto LABEL_11;
                }
              }
              ThreadSessionId = PsGetThreadSessionId(v40);
            }
            v12 = ThreadSessionId;
          }
LABEL_11:
          if ( v12 < dword_140126990 )
          {
            v13 = 0;
            v127 = KeAcquireSpinLockRaiseToDpc(&qword_1401269E0);
            if ( v12 < dword_140126990 )
              v13 = *((_DWORD *)qword_140126A30 + 6 * v12);
            KeReleaseSpinLock(&qword_1401269E0, v127);
            if ( !v13 )
              v13 = 1;
          }
          else
          {
            v13 = 1;
          }
          HIDWORD(v349[1]) = v13;
          v14 = v13;
          goto LABEL_14;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    v12 = CurrentProcessSessionId;
    goto LABEL_10;
  }
LABEL_14:
  v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v16 = 0LL;
  v17 = v15;
  for ( i = qword_140126AF0;
        i != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_140126AF0;
        i = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)i )
  {
    if ( *((_DWORD *)i + 4) == v14 )
    {
      v16 = i;
      break;
    }
    if ( *((_DWORD *)i + 4) > v14 )
      break;
  }
  *(_OWORD *)&v349[2] = *(_OWORD *)((char *)v16 + 1684);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v17);
  v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v20 = *((_DWORD *)v3 + 8);
  v328 = v19;
  if ( v20 )
  {
    v83 = v20 - 1;
    if ( v83 )
    {
      if ( v83 != 1 )
      {
        v38 = -1073741811;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v19);
        v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
        goto LABEL_66;
      }
    }
    else
    {
      v7 = 0LL;
    }
    p_Blink = &WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
    while ( 1 )
    {
      Blink = (_DEVICE_OBJECT *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
      p_DeviceContext = 0LL;
      v335 = 0LL;
      while ( Blink != (_DEVICE_OBJECT *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
      {
        if ( Blink->Queue.ListEntry.Flink > v7 )
        {
          p_DeviceContext = &Blink[-4].Queue.Wcb.DeviceContext;
          v335 = &Blink[-4].Queue.Wcb.DeviceContext;
          break;
        }
        Blink = *(_DEVICE_OBJECT **)&Blink->Type;
      }
      if ( !p_DeviceContext )
        goto LABEL_35;
      v54 = (char *)p_DeviceContext[172];
      v7 = (_LIST_ENTRY *)p_DeviceContext[164];
      if ( v13 == *((_DWORD *)v54 + 4) )
        goto LABEL_108;
      if ( LODWORD(v349[1]) == -1 )
      {
        v55 = (char *)v349[2] - *(_QWORD *)(v54 + 1684);
        if ( v349[2] == *(PVOID *)(v54 + 1684) )
          v55 = (char *)v349[3] - *(_QWORD *)(v54 + 1692);
        if ( !v55 )
          goto LABEL_108;
      }
      if ( (*((_DWORD *)v54 + 420) & 2) == 0 && v13 == 1 )
        goto LABEL_108;
    }
  }
  v21 = (_DEVICE_OBJECT *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
  p_Blink = &WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
  p_DeviceContext = 0LL;
  v335 = 0LL;
  while ( v21 != (_DEVICE_OBJECT *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
  {
    if ( v21->Queue.ListEntry.Flink == v7 )
    {
      p_DeviceContext = &v21[-4].Queue.Wcb.DeviceContext;
      v335 = &v21[-4].Queue.Wcb.DeviceContext;
      break;
    }
    if ( v21->Queue.ListEntry.Flink > v7 )
      break;
    v21 = *(_DEVICE_OBJECT **)&v21->Type;
  }
  if ( !p_DeviceContext )
  {
LABEL_35:
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v328);
LABEL_36:
    v25 = -1073741772;
    if ( *((_DWORD *)v3 + 8) )
      v25 = -2147483622;
    *(_DWORD *)v336 = v25;
    goto LABEL_39;
  }
  v24 = (char *)p_DeviceContext[172];
  if ( v13 != *((_DWORD *)v24 + 4) )
  {
    p_Blink = (_LIST_ENTRY **)((char *)v349[2] - *(_QWORD *)(v24 + 1684));
    if ( v349[2] == *(PVOID *)(v24 + 1684) )
      p_Blink = (_LIST_ENTRY **)((char *)v349[3] - *(_QWORD *)(v24 + 1692));
    if ( p_Blink && ((*((_DWORD *)v24 + 420) & 2) != 0 || v13 != 1) )
    {
      p_DeviceContext = 0LL;
      v335 = 0LL;
      goto LABEL_35;
    }
  }
LABEL_108:
  LOBYTE(p_Blink) = 3;
  NdisReferenceWithTag(p_DeviceContext[179], p_Blink);
  ++*((_DWORD *)p_DeviceContext + 326);
  if ( !*((_BYTE *)p_DeviceContext + 1393) || *((_QWORD *)v3 + 1) >= 2uLL )
    goto LABEL_411;
  v56 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v58 = v56;
  if ( !*((_BYTE *)p_DeviceContext + 1395) )
  {
    KeReleaseSpinLock(&SpinLock, v56);
    goto LABEL_112;
  }
  LOBYTE(v57) = 3;
  v60 = p_DeviceContext[180];
  v340 = p_DeviceContext[176];
  v59 = v340;
  NdisReferenceWithTag(v60, v57);
  ++*((_DWORD *)p_DeviceContext + 349);
  KeReleaseSpinLock(&SpinLock, v58);
  if ( v59 )
  {
    v161 = 0LL;
    *(_QWORD *)v343 = 0LL;
    v162 = 1;
    v330 = 1;
    *(_QWORD *)v338 = 0LL;
    if ( !v59[471] )
      goto LABEL_435;
    v163 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v164 = ndisMiniDriverList;
    v337 = ndisMiniDriverList;
    v165 = v163;
    if ( !ndisMiniDriverList )
      goto LABEL_343;
LABEL_275:
    p_Ref = &v164->Ref;
    v168 = KeAcquireSpinLockRaiseToDpc(&v164->Ref.SpinLock);
    if ( v164->Ref.Closing )
      goto LABEL_475;
    ReferenceCount = v164->Ref.ReferenceCount;
    if ( ReferenceCount >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
LABEL_475:
      KeReleaseSpinLock(&v164->Ref.SpinLock, v168);
      NextDriver = v164->NextDriver;
      goto LABEL_293;
    }
    RefCountTracker = v164->Ref.RefCountTracker;
    LOBYTE(v167) = 8;
    v164->Ref.ReferenceCount = ReferenceCount + 1;
    NdisReferenceWithTag(RefCountTracker, v167);
    KeReleaseSpinLock(&v164->Ref.SpinLock, v168);
    KeReleaseSpinLock(&ndisMiniDriverListLock, v165);
    v171 = KeAcquireSpinLockRaiseToDpc(&v164->Ref.SpinLock);
    MiniportQueue = v164->MiniportQueue;
    v173 = v171;
    if ( !MiniportQueue )
      goto LABEL_284;
    while ( 1 )
    {
      BindPaths = MiniportQueue->BindPaths;
      if ( BindPaths )
      {
        if ( BindPaths->Number >= v162 )
        {
          v175 = v59[471];
          if ( *(_WORD *)(v175 + 8) == BindPaths->Paths[0].Length
            && !memcmp(*(const void **)(v175 + 16), BindPaths->Paths[0].Buffer, *(unsigned __int16 *)(v175 + 8)) )
          {
            break;
          }
        }
      }
LABEL_282:
      MiniportQueue = MiniportQueue->NextMiniport;
      v59 = v340;
      v162 = v330;
      if ( !MiniportQueue )
      {
        v164 = v337;
LABEL_284:
        KeReleaseSpinLock(&p_Ref->SpinLock, v173);
        v176 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        NextDriver = v164->NextDriver;
        v165 = v176;
        v178 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
        v179 = (ULONG_PTR)p_Ref->RefCountTracker;
        v180 = v178;
        if ( v179 - 2 > 1 )
        {
          if ( v179 < 2 )
            ndisBugCheckEx(0x1EuLL, 3uLL, v179, 0LL);
          if ( *(_BYTE *)(v179 + 2) <= 8u )
            ndisBugCheckEx(0x1EuLL, 2uLL, v179, 8uLL);
          if ( *(_BYTE *)(v179 + 1) )
          {
            if ( *(_BYTE *)(v179 + 1) == 1 )
            {
              v247 = v179 + 520;
              v248 = *(_DWORD *)(v179 + 576);
              if ( v248 >> 17 < 0x3FFE && (unsigned __int16)v248 >> 1 == (v248 >> 17) + 1 )
              {
                for ( j = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v247;
                      *(_QWORD *)v247;
                      j = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v247 )
                {
                  *(_QWORD *)v247 = j->Next;
                  ndisFreeRefCountStacksInBlock(j);
                  ExFreePoolWithTag(j, 0);
                }
                ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v247);
                *(_DWORD *)(v247 + 56) &= 0x10001u;
                v164 = v337;
              }
              else
              {
                if ( !((unsigned __int16)v248 >> 1) && (v248 & 1) == 0 )
                  goto LABEL_302;
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v179 + 520), 0);
              }
            }
          }
          else
          {
            v181 = *(_QWORD *)(v179 + 8);
            if ( !v181 )
            {
LABEL_289:
              if ( _bittestandreset((signed __int32 *)(v179 + 16), 8u) )
                goto LABEL_290;
LABEL_302:
              ndisReportRefcountImbalance(v179, 8u);
            }
            for ( k = 0; ; ++k )
            {
              if ( k >= *(_BYTE *)(v179 + 3) )
                goto LABEL_289;
              v183 = (_BYTE *)(v181 + 2LL * k);
              if ( *v183 == 8 )
              {
                v184 = v183[1];
                if ( v184 )
                  break;
              }
            }
            v183[1] = v184 - 1;
          }
        }
LABEL_290:
        v33 = p_Ref->ReferenceCount-- == 1;
        if ( v33 )
        {
          if ( !p_Ref->ZeroBased )
          {
            v309 = (ULONG_PTR)p_Ref->RefCountTracker;
            if ( v309 )
            {
              AnyActiveRefTag = ndisGetAnyActiveRefTag(p_Ref->RefCountTracker);
              if ( AnyActiveRefTag != -2 )
                ndisBugCheckEx(0x1EuLL, 4uLL, v309, AnyActiveRefTag);
              v311 = ndisRefCountBlockFromRefCountHandle(v309);
              v312 = v311;
              if ( v311 )
              {
                ndisFreeRefCountAuxiliaryMemory(v311);
                ExFreePoolWithTag(v312, 0);
              }
            }
            p_Ref->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
          }
          KeReleaseSpinLock(&p_Ref->SpinLock, v180);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v313) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v313,
              20,
              23,
              (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
              (char)v164);
          }
          for ( m = &ndisMiniDriverList; ; m = &v315->NextDriver )
          {
            v315 = *m;
            if ( !*m )
              goto LABEL_637;
            if ( v315 == v164 )
              break;
          }
          *m = v164->NextDriver;
          ObfDereferenceObject(ndisDriverObject);
LABEL_637:
          Buffer = v164->ImageName.Buffer;
          if ( Buffer )
          {
            ExFreePoolWithTag(Buffer, 0);
            v164->ImageName.Buffer = 0LL;
          }
          NdisDriverInfo = v164->NdisDriverInfo;
          if ( NdisDriverInfo )
          {
            ExFreePoolWithTag(NdisDriverInfo, 0);
            v164->NdisDriverInfo = 0LL;
          }
          if ( (v164->Flags & 1) != 0 )
          {
            PendingDeviceList = v164->PendingDeviceList;
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
          KeSetEvent(&v164->MiniportsRemovedEvent, 0, 0);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v319) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v319,
              20,
              24,
              (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
              (char)v164);
          }
        }
        else
        {
          KeReleaseSpinLock(&p_Ref->SpinLock, v180);
        }
        v162 = v330;
LABEL_293:
        v337 = NextDriver;
        v164 = NextDriver;
        if ( NextDriver )
        {
          v59 = v340;
          goto LABEL_275;
        }
        v161 = *(_QWORD *)v338;
LABEL_343:
        KeReleaseSpinLock(&ndisMiniDriverListLock, v165);
        if ( v161 )
        {
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v161 + 96));
          v206 = *(_QWORD *)(v161 + 2048);
          *(_QWORD *)(v161 + 520) = KeGetCurrentThread();
          if ( !v206 )
          {
LABEL_345:
            v2 = *(_QWORD *)(v161 + 4040);
            goto LABEL_376;
          }
          while ( 1 )
          {
            v224 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v206 + 312));
            if ( !*(_BYTE *)(v206 + 322) )
            {
              v225 = *(_WORD *)(v206 + 320);
              if ( v225 < 0xFFEBu )
              {
                v226 = *(_QWORD *)(v206 + 328);
                LOBYTE(v223) = 11;
                *(_WORD *)(v206 + 320) = v225 + 1;
                NdisReferenceWithTag(v226, v223);
                KeReleaseSpinLock((PKSPIN_LOCK)(v206 + 312), v224);
                v2 = *(_QWORD *)(v206 + 688);
LABEL_376:
                *(_QWORD *)(v161 + 520) = 0LL;
                KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v161 + 96));
                v227 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v161 + 96));
                v228 = *(_QWORD *)(v161 + 4904);
                *(_QWORD *)(v161 + 520) = KeGetCurrentThread();
                if ( v228 - 2 > 1 )
                {
                  if ( v228 < 2 )
                    ndisBugCheckEx(0x1EuLL, 3uLL, v228, 0LL);
                  if ( *(_BYTE *)(v228 + 2) <= 2u )
                    ndisBugCheckEx(0x1EuLL, 2uLL, v228, 2uLL);
                  if ( *(_BYTE *)(v228 + 1) )
                  {
                    if ( *(_BYTE *)(v228 + 1) != 1 )
                      goto LABEL_382;
                    v285 = v228 + 136;
                    v286 = *(_DWORD *)(v228 + 192);
                    if ( v286 >> 17 < 0x3FFE && (unsigned __int16)v286 >> 1 == (v286 >> 17) + 1 )
                    {
                      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v228 + 136));
                      *(_DWORD *)(v285 + 56) &= 0x10001u;
                      goto LABEL_382;
                    }
                    if ( (unsigned __int16)v286 >> 1 || (v286 & 1) != 0 )
                    {
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v228 + 136), 0);
                      goto LABEL_382;
                    }
                    goto LABEL_468;
                  }
                  v229 = *(_QWORD *)(v228 + 8);
                  if ( !v229 )
                  {
LABEL_381:
                    if ( _bittestandreset((signed __int32 *)(v228 + 16), 2u) )
                      goto LABEL_382;
LABEL_468:
                    ndisReportRefcountImbalance(v228, 2u);
                  }
                  for ( n = 0; ; ++n )
                  {
                    if ( n >= *(_BYTE *)(v228 + 3) )
                      goto LABEL_381;
                    v259 = (_BYTE *)(v229 + 2LL * n);
                    if ( *v259 == 2 )
                    {
                      v260 = v259[1];
                      if ( v260 )
                        break;
                    }
                  }
                  v259[1] = v260 - 1;
                }
LABEL_382:
                v33 = (*(_DWORD *)(v161 + 3124))-- == 1;
                if ( v33 )
                {
                  v230 = *(struct _KEVENT **)(v161 + 3136);
                  if ( v230 )
                    KeSetEvent(v230, 0, 0);
                }
                *(_QWORD *)(v161 + 520) = 0LL;
                KeReleaseSpinLock((PKSPIN_LOCK)(v161 + 96), v227);
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v231) = 4;
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v231,
                    20,
                    25,
                    (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
                    v161);
                }
                v232 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v161 + 4432));
                v234 = *(_QWORD *)(v161 + 4896);
                v235 = v232;
                if ( v234 && v234 - 2 > 1 )
                {
                  if ( v234 == 1 )
                    ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
                  if ( *(_BYTE *)(v234 + 2) <= 0x3Cu )
                    ndisBugCheckEx(0x1EuLL, 2uLL, v234, 0x3CuLL);
                  if ( *(_BYTE *)(v234 + 1) )
                  {
                    if ( *(_BYTE *)(v234 + 1) == 1 )
                    {
                      v287 = v234 + 3848;
                      v288 = *(_DWORD *)(v234 + 3904);
                      if ( v288 >> 17 < 0x3FFE && (unsigned __int16)v288 >> 1 == (v288 >> 17) + 1 )
                      {
                        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v234 + 3848));
                        *(_DWORD *)(v287 + 56) &= 0x10001u;
                      }
                      else
                      {
                        if ( !((unsigned __int16)v288 >> 1) && (v288 & 1) == 0 )
                          goto LABEL_472;
                        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v234 + 3848), 0);
                      }
                    }
                  }
                  else
                  {
                    v236 = *(_QWORD *)(v234 + 8);
                    if ( !v236 )
                    {
LABEL_393:
                      if ( _bittestandreset((signed __int32 *)(v234 + 20), 0x1Cu) )
                        goto LABEL_394;
LABEL_472:
                      ndisReportRefcountImbalance(v234, 0x3Cu);
                    }
                    for ( ii = 0; ; ++ii )
                    {
                      if ( ii >= *(_BYTE *)(v234 + 3) )
                        goto LABEL_393;
                      v233 = (_BYTE *)(v236 + 2LL * ii);
                      if ( *v233 == 60 )
                      {
                        v262 = v233[1];
                        if ( v262 )
                          break;
                      }
                    }
                    v233[1] = v262 - 1;
                  }
                }
LABEL_394:
                v237 = *(_DWORD *)(v161 + 4440) - 1;
                *(_DWORD *)(v161 + 4440) = v237;
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v233) = 4;
                  WPP_RECORDER_SF_qL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    (int)v233,
                    20,
                    14,
                    (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
                    v161,
                    v237);
                }
                KeReleaseSpinLock((PKSPIN_LOCK)(v161 + 4432), v235);
                if ( !v237 )
                {
                  v276 = *(struct _KEVENT **)(v161 + 1608);
                  if ( v276 )
                    KeSetEvent(v276, 0, 0);
                }
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v238) = 4;
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v238,
                    20,
                    26,
                    (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
                    v161);
                }
                p_DeviceContext = v335;
LABEL_400:
                v239 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
                v240 = (ULONG_PTR)p_DeviceContext[180];
                v241 = v239;
                if ( v240 - 2 > 1 )
                {
                  if ( v240 < 2 )
                    ndisBugCheckEx(0x1EuLL, 3uLL, v240, 0LL);
                  if ( *(_BYTE *)(v240 + 2) <= 3u )
                    ndisBugCheckEx(0x1EuLL, 2uLL, v240, 3uLL);
                  if ( *(_BYTE *)(v240 + 1) )
                  {
                    if ( *(_BYTE *)(v240 + 1) == 1 )
                    {
                      v278 = v240 + 200;
                      v279 = *(_DWORD *)(v240 + 256);
                      if ( v279 >> 17 < 0x3FFE && (unsigned __int16)v279 >> 1 == (v279 >> 17) + 1 )
                      {
                        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v240 + 200));
                        *(_DWORD *)(v278 + 56) &= 0x10001u;
                        p_DeviceContext = v335;
                      }
                      else
                      {
                        if ( !((unsigned __int16)v279 >> 1) && (v279 & 1) == 0 )
                          goto LABEL_440;
                        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v240 + 200), 0);
                        p_DeviceContext = v335;
                      }
                    }
                  }
                  else
                  {
                    v242 = *(_QWORD *)(v240 + 8);
                    if ( !v242 )
                    {
LABEL_405:
                      if ( _bittestandreset((signed __int32 *)(v240 + 16), 3u) )
                        goto LABEL_406;
LABEL_440:
                      ndisReportRefcountImbalance(v240, 3u);
                    }
                    for ( jj = 0; ; ++jj )
                    {
                      if ( jj >= *(_BYTE *)(v240 + 3) )
                        goto LABEL_405;
                      v251 = (_BYTE *)(v242 + 2LL * jj);
                      if ( *v251 == 3 )
                      {
                        v252 = v251[1];
                        if ( v252 )
                          break;
                      }
                    }
                    v251[1] = v252 - 1;
                  }
                }
LABEL_406:
                v33 = (*((_DWORD *)p_DeviceContext + 349))-- == 1;
                if ( v33 )
                {
                  v271 = p_DeviceContext[176];
                  if ( v271 )
                  {
                    v272 = (struct _KEVENT *)*((_QWORD *)v271 + 506);
                    if ( v272 )
                      KeSetEvent(v272, 0, 0);
                  }
                }
                KeReleaseSpinLock(&SpinLock, v241);
                goto LABEL_408;
              }
              ndisRefCountReferenceCountOverflow = 1;
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(v206 + 312), v224);
            v206 = *(_QWORD *)(v206 + 112);
            if ( !v206 )
              goto LABEL_345;
          }
        }
        p_DeviceContext = v335;
LABEL_435:
        v2 = 0LL;
        goto LABEL_400;
      }
    }
    KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
    v33 = (MiniportQueue->Flags & 0x80200020) == 0;
    MiniportQueue->MiniportThread = KeGetCurrentThread();
    if ( !v33
      || (MiniportQueue->PnPFlags & 0x1084110) != 0
      || MiniportQueue->PnPDeviceState != NdisPnPDeviceStarted
      || MiniportQueue->CurrentDevicePowerState != PowerDeviceD0 )
    {
LABEL_317:
      MiniportQueue->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
      v193 = *(_QWORD *)v343;
      if ( *(_QWORD *)v343 )
      {
        v194 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)v343 + 96LL));
        v195 = *(_QWORD *)(v193 + 4904);
        *(_QWORD *)(v193 + 520) = KeGetCurrentThread();
        if ( v195 - 2 > 1 )
        {
          if ( v195 < 2 )
            ndisBugCheckEx(0x1EuLL, 3uLL, v195, 0LL);
          if ( *(_BYTE *)(v195 + 2) <= 2u )
            ndisBugCheckEx(0x1EuLL, 2uLL, v195, 2uLL);
          if ( *(_BYTE *)(v195 + 1) )
          {
            if ( *(_BYTE *)(v195 + 1) == 1 )
            {
              v293 = v195 + 136;
              v294 = *(_DWORD *)(v195 + 192);
              if ( v294 >> 17 < 0x3FFE && (unsigned __int16)v294 >> 1 == (v294 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v195 + 136));
                *(_DWORD *)(v293 + 56) &= 0x10001u;
              }
              else
              {
                if ( !((unsigned __int16)v294 >> 1) && (v294 & 1) == 0 )
LABEL_511:
                  ndisReportRefcountImbalance(v195, 2u);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v195 + 136), 0);
              }
            }
          }
          else
          {
            v196 = *(_QWORD *)(v195 + 8);
            if ( v196 )
            {
              for ( kk = 0; ; ++kk )
              {
                if ( kk >= *(_BYTE *)(v195 + 3) )
                  goto LABEL_323;
                v269 = (_BYTE *)(v196 + 2LL * kk);
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
LABEL_323:
              if ( !_bittestandreset((signed __int32 *)(v195 + 16), 2u) )
                goto LABEL_511;
            }
          }
        }
        v33 = (*(_DWORD *)(v193 + 3124))-- == 1;
        if ( v33 )
        {
          v197 = *(struct _KEVENT **)(v193 + 3136);
          if ( v197 )
            KeSetEvent(v197, 0, 0);
        }
        *(_QWORD *)(v193 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v193 + 96), v194);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v198) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v198,
            20,
            25,
            (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
            v193);
        }
        v199 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v193 + 4432));
        v201 = *(_QWORD *)(v193 + 4896);
        v202 = v199;
        if ( v201 && v201 - 2 > 1 )
        {
          if ( v201 == 1 )
            ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
          if ( *(_BYTE *)(v201 + 2) <= 0x3Cu )
            ndisBugCheckEx(0x1EuLL, 2uLL, v201, 0x3CuLL);
          if ( *(_BYTE *)(v201 + 1) )
          {
            if ( *(_BYTE *)(v201 + 1) == 1 )
            {
              v295 = v201 + 3848;
              v296 = *(_DWORD *)(v201 + 3904);
              if ( v296 >> 17 < 0x3FFE && (unsigned __int16)v296 >> 1 == (v296 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v201 + 3848));
                *(_DWORD *)(v295 + 56) &= 0x10001u;
              }
              else
              {
                if ( !((unsigned __int16)v296 >> 1) && (v296 & 1) == 0 )
LABEL_512:
                  ndisReportRefcountImbalance(v201, 0x3Cu);
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v201 + 3848), 0);
              }
            }
          }
          else
          {
            v203 = *(_QWORD *)(v201 + 8);
            if ( v203 )
            {
              for ( mm = 0; ; ++mm )
              {
                if ( mm >= *(_BYTE *)(v201 + 3) )
                  goto LABEL_335;
                v200 = (_BYTE *)(v203 + 2LL * mm);
                if ( *v200 == 60 )
                {
                  v274 = v200[1];
                  if ( v274 )
                    break;
                }
              }
              v200[1] = v274 - 1;
            }
            else
            {
LABEL_335:
              if ( !_bittestandreset((signed __int32 *)(v201 + 20), 0x1Cu) )
                goto LABEL_512;
            }
          }
        }
        v204 = *(_DWORD *)(v193 + 4440) - 1;
        *(_DWORD *)(v193 + 4440) = v204;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v200) = 4;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v200,
            20,
            14,
            (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
            v193,
            v204);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v193 + 4432), v202);
        if ( !v204 )
        {
          v280 = *(struct _KEVENT **)(v193 + 1608);
          if ( v280 )
            KeSetEvent(v280, 0, 0);
        }
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v205) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v205,
            20,
            26,
            (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
            v193);
        }
        *(_QWORD *)v343 = 0LL;
      }
      goto LABEL_282;
    }
    v185 = 1;
    v187 = KeAcquireSpinLockRaiseToDpc(&MiniportQueue->Ref.SpinLock);
    if ( !MiniportQueue->Ref.Closing )
    {
      v188 = MiniportQueue->RefCountTracker;
      if ( v188 )
      {
        LOBYTE(v186) = 60;
        NdisReferenceWithTag(v188, v186);
      }
      v189 = MiniportQueue->Ref.ReferenceCount;
      MiniportQueue->Ref.ReferenceCount = v189 + 1;
      if ( v189 != -1 )
        goto LABEL_313;
      MiniportQueue->Ref.ReferenceCount = -1;
    }
    v185 = 0;
LABEL_313:
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v186) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v186,
        20,
        12,
        (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
        (char)MiniportQueue,
        MiniportQueue->Ref.ReferenceCount);
    }
    KeReleaseSpinLock(&MiniportQueue->Ref.SpinLock, v187);
    if ( v185 )
    {
      LOBYTE(v190) = 2;
      NsiRefCountTracker = MiniportQueue->NsiRefCountTracker;
      *(_QWORD *)v343 = *(_QWORD *)v338;
      NdisReferenceWithTag(NsiRefCountTracker, v190);
      v192 = (int *)MiniportQueue->BindPaths;
      ++MiniportQueue->NsiOpenReferences;
      *(_QWORD *)v338 = MiniportQueue;
      v330 = *v192;
    }
    goto LABEL_317;
  }
LABEL_112:
  if ( !*((_BYTE *)p_DeviceContext + 1394) )
    goto LABEL_410;
  v61 = p_DeviceContext[176];
  v62 = 0LL;
  v337 = 0LL;
  v63 = 1;
  *(_QWORD *)v338 = 0LL;
  v329 = 1;
  v340 = (_QWORD *)v61[4];
  if ( !v340[471] )
    goto LABEL_521;
  v64 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v65 = ndisMiniDriverList;
  v66 = v64;
  if ( !ndisMiniDriverList )
    goto LABEL_134;
  do
  {
    v68 = KeAcquireSpinLockRaiseToDpc(&v65->Ref.SpinLock);
    if ( v65->Ref.Closing )
      goto LABEL_470;
    v69 = v65->Ref.ReferenceCount;
    if ( v69 >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
LABEL_470:
      KeReleaseSpinLock(&v65->Ref.SpinLock, v68);
      v77 = v65->NextDriver;
      goto LABEL_132;
    }
    v70 = v65->Ref.RefCountTracker;
    LOBYTE(v67) = 8;
    v65->Ref.ReferenceCount = v69 + 1;
    NdisReferenceWithTag(v70, v67);
    KeReleaseSpinLock(&v65->Ref.SpinLock, v68);
    KeReleaseSpinLock(&ndisMiniDriverListLock, v66);
    v71 = KeAcquireSpinLockRaiseToDpc(&v65->Ref.SpinLock);
    v72 = v65->MiniportQueue;
    v73 = v71;
    if ( v72 )
    {
      while ( 1 )
      {
        v74 = v72->BindPaths;
        if ( !v74 )
          goto LABEL_122;
        if ( v74->Number < v63 )
          goto LABEL_122;
        v75 = v340[471];
        if ( *(_WORD *)(v75 + 8) != v74->Paths[0].Length
          || memcmp(*(const void **)(v75 + 16), v74->Paths[0].Buffer, *(unsigned __int16 *)(v75 + 8)) )
        {
          goto LABEL_122;
        }
        KeAcquireSpinLockAtDpcLevel(&v72->Lock);
        v33 = (v72->Flags & 0x80200020) == 0;
        v72->MiniportThread = KeGetCurrentThread();
        if ( v33
          && (v72->PnPFlags & 0x1084110) == 0
          && v72->PnPDeviceState == NdisPnPDeviceStarted
          && v72->CurrentDevicePowerState == PowerDeviceD0 )
        {
          break;
        }
LABEL_248:
        v72->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&v72->Lock);
        v148 = *(_QWORD *)v338;
        if ( *(_QWORD *)v338 )
        {
          v149 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)v338 + 96LL));
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
                v289 = v150 + 136;
                v290 = *(_DWORD *)(v150 + 192);
                if ( v290 >> 17 < 0x3FFE && (unsigned __int16)v290 >> 1 == (v290 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v150 + 136));
                  *(_DWORD *)(v289 + 56) &= 0x10001u;
                }
                else
                {
                  if ( !((unsigned __int16)v290 >> 1) && (v290 & 1) == 0 )
LABEL_508:
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
                for ( nn = 0; ; ++nn )
                {
                  if ( nn >= *(_BYTE *)(v150 + 3) )
                    goto LABEL_254;
                  v264 = (_BYTE *)(v151 + 2LL * nn);
                  if ( *v264 == 2 )
                  {
                    v265 = v264[1];
                    if ( v265 )
                      break;
                  }
                }
                v264[1] = v265 - 1;
              }
              else
              {
LABEL_254:
                if ( !_bittestandreset((signed __int32 *)(v150 + 16), 2u) )
                  goto LABEL_508;
              }
            }
          }
          v33 = (*(_DWORD *)(v148 + 3124))-- == 1;
          if ( v33 )
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
          v154 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v148 + 4432));
          v156 = *(_QWORD *)(v148 + 4896);
          v157 = v154;
          if ( v156 && v156 - 2 > 1 )
          {
            if ( v156 == 1 )
              ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
            if ( *(_BYTE *)(v156 + 2) <= 0x3Cu )
              ndisBugCheckEx(0x1EuLL, 2uLL, v156, 0x3CuLL);
            if ( *(_BYTE *)(v156 + 1) )
            {
              if ( *(_BYTE *)(v156 + 1) == 1 )
              {
                v291 = v156 + 3848;
                v292 = *(_DWORD *)(v156 + 3904);
                if ( v292 >> 17 < 0x3FFE && (unsigned __int16)v292 >> 1 == (v292 >> 17) + 1 )
                {
                  ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v156 + 3848));
                  *(_DWORD *)(v291 + 56) &= 0x10001u;
                }
                else
                {
                  if ( !((unsigned __int16)v292 >> 1) && (v292 & 1) == 0 )
LABEL_509:
                    ndisReportRefcountImbalance(v156, 0x3Cu);
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v156 + 3848), 0);
                }
              }
            }
            else
            {
              v158 = *(_QWORD *)(v156 + 8);
              if ( v158 )
              {
                for ( i1 = 0; ; ++i1 )
                {
                  if ( i1 >= *(_BYTE *)(v156 + 3) )
                    goto LABEL_266;
                  v155 = (_BYTE *)(v158 + 2LL * i1);
                  if ( *v155 == 60 )
                  {
                    v267 = v155[1];
                    if ( v267 )
                      break;
                  }
                }
                v155[1] = v267 - 1;
              }
              else
              {
LABEL_266:
                if ( !_bittestandreset((signed __int32 *)(v156 + 20), 0x1Cu) )
                  goto LABEL_509;
              }
            }
          }
          v159 = *(_DWORD *)(v148 + 4440) - 1;
          *(_DWORD *)(v148 + 4440) = v159;
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v155) = 4;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v155,
              20,
              14,
              (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
              v148,
              v159);
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(v148 + 4432), v157);
          if ( !v159 )
          {
            v277 = *(struct _KEVENT **)(v148 + 1608);
            if ( v277 )
              KeSetEvent(v277, 0, 0);
          }
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v160) = 4;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v160,
              20,
              26,
              (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
              v148);
          }
          *(_QWORD *)v338 = 0LL;
        }
LABEL_122:
        v72 = v72->NextMiniport;
        v63 = v329;
        if ( !v72 )
          goto LABEL_123;
      }
      v140 = 1;
      v142 = KeAcquireSpinLockRaiseToDpc(&v72->Ref.SpinLock);
      if ( !v72->Ref.Closing )
      {
        v143 = v72->RefCountTracker;
        if ( v143 )
        {
          LOBYTE(v141) = 60;
          NdisReferenceWithTag(v143, v141);
        }
        v144 = v72->Ref.ReferenceCount;
        v72->Ref.ReferenceCount = v144 + 1;
        if ( v144 != -1 )
          goto LABEL_244;
        v72->Ref.ReferenceCount = -1;
      }
      v140 = 0;
LABEL_244:
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v141) = 4;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v141,
          20,
          12,
          (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
          (char)v72,
          v72->Ref.ReferenceCount);
      }
      KeReleaseSpinLock(&v72->Ref.SpinLock, v142);
      if ( v140 )
      {
        LOBYTE(v145) = 2;
        v146 = v72->NsiRefCountTracker;
        *(_QWORD *)v338 = v337;
        NdisReferenceWithTag(v146, v145);
        v147 = (int *)v72->BindPaths;
        ++v72->NsiOpenReferences;
        v337 = (struct _NDIS_M_DRIVER_BLOCK *)v72;
        v329 = *v147;
      }
      goto LABEL_248;
    }
LABEL_123:
    KeReleaseSpinLock(&v65->Ref.SpinLock, v73);
    v76 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v77 = v65->NextDriver;
    v66 = v76;
    v78 = KeAcquireSpinLockRaiseToDpc(&v65->Ref.SpinLock);
    v79 = (ULONG_PTR)v65->Ref.RefCountTracker;
    v80 = v78;
    if ( v79 - 2 > 1 )
    {
      if ( v79 < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v79, 0LL);
      if ( *(_BYTE *)(v79 + 2) <= 8u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v79, 8uLL);
      if ( *(_BYTE *)(v79 + 1) )
      {
        if ( *(_BYTE *)(v79 + 1) == 1 )
        {
          v244 = v79 + 520;
          v245 = *(_DWORD *)(v79 + 576);
          if ( v245 >> 17 < 0x3FFE && (unsigned __int16)v245 >> 1 == (v245 >> 17) + 1 )
          {
            for ( i2 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v244;
                  *(_QWORD *)v244;
                  i2 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v244 )
            {
              *(_QWORD *)v244 = i2->Next;
              ndisFreeRefCountStacksInBlock(i2);
              ExFreePoolWithTag(i2, 0);
            }
            ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v244);
            *(_DWORD *)(v244 + 56) &= 0x10001u;
          }
          else
          {
            if ( !((unsigned __int16)v245 >> 1) && (v245 & 1) == 0 )
LABEL_233:
              ndisReportRefcountImbalance(v79, 8u);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v79 + 520), 0);
          }
        }
      }
      else
      {
        v81 = *(_QWORD *)(v79 + 8);
        if ( v81 )
        {
          for ( i3 = 0; ; ++i3 )
          {
            if ( i3 >= *(_BYTE *)(v79 + 3) )
              goto LABEL_128;
            v138 = (_BYTE *)(v81 + 2LL * i3);
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
LABEL_128:
          if ( !_bittestandreset((signed __int32 *)(v79 + 16), 8u) )
            goto LABEL_233;
        }
      }
    }
    v33 = v65->Ref.ReferenceCount-- == 1;
    if ( v33 )
    {
      if ( !v65->Ref.ZeroBased )
      {
        v297 = (ULONG_PTR)v65->Ref.RefCountTracker;
        if ( v297 )
        {
          v298 = ndisGetAnyActiveRefTag(v65->Ref.RefCountTracker);
          if ( v298 != -2 )
            ndisBugCheckEx(0x1EuLL, 4uLL, v297, v298);
          v299 = ndisRefCountBlockFromRefCountHandle(v297);
          v300 = v299;
          if ( v299 )
          {
            ndisFreeRefCountAuxiliaryMemory(v299);
            ExFreePoolWithTag(v300, 0);
          }
        }
        v65->Ref.RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
      }
      KeReleaseSpinLock(&v65->Ref.SpinLock, v80);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v301) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v301,
          20,
          23,
          (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
          (char)v65);
      }
      for ( i4 = &ndisMiniDriverList; ; i4 = &v303->NextDriver )
      {
        v303 = *i4;
        if ( !*i4 )
          break;
        if ( v303 == v65 )
        {
          *i4 = v65->NextDriver;
          ObfDereferenceObject(ndisDriverObject);
          break;
        }
      }
      v304 = v65->ImageName.Buffer;
      if ( v304 )
      {
        ExFreePoolWithTag(v304, 0);
        v65->ImageName.Buffer = 0LL;
      }
      v305 = v65->NdisDriverInfo;
      if ( v305 )
      {
        ExFreePoolWithTag(v305, 0);
        v65->NdisDriverInfo = 0LL;
      }
      if ( (v65->Flags & 1) != 0 )
      {
        v306 = v65->PendingDeviceList;
        if ( v306 )
        {
          do
          {
            v308 = v306->Next;
            ExFreePoolWithTag(v306, 0);
            v306 = v308;
          }
          while ( v308 );
        }
      }
      KeSetEvent(&v65->MiniportsRemovedEvent, 0, 0);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v307) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v307,
          20,
          24,
          (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
          (char)v65);
      }
    }
    else
    {
      KeReleaseSpinLock(&v65->Ref.SpinLock, v80);
    }
    v63 = v329;
LABEL_132:
    v65 = v77;
  }
  while ( v77 );
  v62 = v337;
  p_DeviceContext = v335;
LABEL_134:
  KeReleaseSpinLock(&ndisMiniDriverListLock, v66);
  if ( !v62 )
  {
LABEL_521:
    v2 = 0LL;
    goto LABEL_410;
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&v62->PendingDeviceList);
  LiveDumpCallback = v62[1].LiveDumpCallback;
  v62->CoActivateVcHandler = (int (__fastcall *)(void *, _CO_CALL_PARAMETERS *))KeGetCurrentThread();
  if ( !LiveDumpCallback )
  {
LABEL_136:
    v2 = *(_QWORD *)&v62[3].ServiceName.Length;
    goto LABEL_349;
  }
  while ( 2 )
  {
    v208 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)LiveDumpCallback + 39);
    if ( *((_BYTE *)LiveDumpCallback + 322) )
    {
LABEL_587:
      KeReleaseSpinLock((PKSPIN_LOCK)LiveDumpCallback + 39, v208);
      LiveDumpCallback = (int (__fastcall *)(NDIS_MEMORYDUMP_HANDLE__ *, int (__fastcall *)(NDIS_MEMORYDUMP_HANDLE__ *, const _GUID *, void *, unsigned int), unsigned int, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, void *))*((_QWORD *)LiveDumpCallback + 14);
      if ( !LiveDumpCallback )
        goto LABEL_136;
      continue;
    }
    break;
  }
  v209 = *((_WORD *)LiveDumpCallback + 160);
  if ( v209 >= 0xFFEBu )
  {
    ndisRefCountReferenceCountOverflow = 1;
    goto LABEL_587;
  }
  v210 = *((_QWORD *)LiveDumpCallback + 41);
  LOBYTE(v207) = 11;
  *((_WORD *)LiveDumpCallback + 160) = v209 + 1;
  NdisReferenceWithTag(v210, v207);
  KeReleaseSpinLock((PKSPIN_LOCK)LiveDumpCallback + 39, v208);
  v2 = *((_QWORD *)LiveDumpCallback + 86);
LABEL_349:
  v62->CoActivateVcHandler = 0LL;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&v62->PendingDeviceList);
  v211 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v62->PendingDeviceList);
  RestartHandler = (ULONG_PTR)v62[4].MiniportDriverCharacteristics.RestartHandler;
  v62->CoActivateVcHandler = (int (__fastcall *)(void *, _CO_CALL_PARAMETERS *))KeGetCurrentThread();
  if ( RestartHandler - 2 > 1 )
  {
    if ( RestartHandler < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, RestartHandler, 0LL);
    if ( *(_BYTE *)(RestartHandler + 2) <= 2u )
      ndisBugCheckEx(0x1EuLL, 2uLL, RestartHandler, 2uLL);
    if ( *(_BYTE *)(RestartHandler + 1) )
    {
      if ( *(_BYTE *)(RestartHandler + 1) != 1 )
        goto LABEL_355;
      v281 = RestartHandler + 136;
      v282 = *(_DWORD *)(RestartHandler + 192);
      if ( v282 >> 17 < 0x3FFE && (unsigned __int16)v282 >> 1 == (v282 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(RestartHandler + 136));
        *(_DWORD *)(v281 + 56) &= 0x10001u;
        goto LABEL_355;
      }
      if ( (unsigned __int16)v282 >> 1 || (v282 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RestartHandler + 136), 0);
        goto LABEL_355;
      }
      goto LABEL_465;
    }
    v213 = *(_QWORD *)(RestartHandler + 8);
    if ( !v213 )
    {
LABEL_354:
      if ( _bittestandreset((signed __int32 *)(RestartHandler + 16), 2u) )
        goto LABEL_355;
LABEL_465:
      ndisReportRefcountImbalance(RestartHandler, 2u);
    }
    for ( i5 = 0; ; ++i5 )
    {
      if ( i5 >= *(_BYTE *)(RestartHandler + 3) )
        goto LABEL_354;
      v254 = (_BYTE *)(v213 + 2LL * i5);
      if ( *v254 == 2 )
      {
        v255 = v254[1];
        if ( v255 )
          break;
      }
    }
    v254[1] = v255 - 1;
  }
LABEL_355:
  v33 = HIDWORD(v62[2].CallMgrChars.CmOidRequestHandler)-- == 1;
  if ( v33 )
  {
    CmNotifyCloseAfCompleteHandler = (struct _KEVENT *)v62[2].CallMgrChars.CmNotifyCloseAfCompleteHandler;
    if ( CmNotifyCloseAfCompleteHandler )
      KeSetEvent(CmNotifyCloseAfCompleteHandler, 0, 0);
  }
  v62->CoActivateVcHandler = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&v62->PendingDeviceList, v211);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v215) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v215,
      20,
      25,
      (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
      (char)v62);
  }
  v216 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v62[3].ImageName.Buffer);
  PauseHandler = (ULONG_PTR)v62[4].MiniportDriverCharacteristics.PauseHandler;
  v219 = v216;
  if ( PauseHandler && PauseHandler - 2 > 1 )
  {
    if ( PauseHandler == 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( *(_BYTE *)(PauseHandler + 2) <= 0x3Cu )
      ndisBugCheckEx(0x1EuLL, 2uLL, PauseHandler, 0x3CuLL);
    if ( *(_BYTE *)(PauseHandler + 1) )
    {
      if ( *(_BYTE *)(PauseHandler + 1) == 1 )
      {
        v283 = PauseHandler + 3848;
        v284 = *(_DWORD *)(PauseHandler + 3904);
        if ( v284 >> 17 < 0x3FFE && (unsigned __int16)v284 >> 1 == (v284 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(PauseHandler + 3848));
          *(_DWORD *)(v283 + 56) &= 0x10001u;
        }
        else
        {
          if ( !((unsigned __int16)v284 >> 1) && (v284 & 1) == 0 )
            goto LABEL_466;
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(PauseHandler + 3848), 0);
        }
      }
    }
    else
    {
      v220 = *(_QWORD *)(PauseHandler + 8);
      if ( !v220 )
      {
LABEL_366:
        if ( _bittestandreset((signed __int32 *)(PauseHandler + 20), 0x1Cu) )
          goto LABEL_367;
LABEL_466:
        ndisReportRefcountImbalance(PauseHandler, 0x3Cu);
      }
      for ( i6 = 0; ; ++i6 )
      {
        if ( i6 >= *(_BYTE *)(PauseHandler + 3) )
          goto LABEL_366;
        v217 = (_BYTE *)(v220 + 2LL * i6);
        if ( *v217 == 60 )
        {
          v257 = v217[1];
          if ( v257 )
            break;
        }
      }
      v217[1] = v257 - 1;
    }
  }
LABEL_367:
  v221 = LODWORD(v62[3].HookDriverHandle) - 1;
  LODWORD(v62[3].HookDriverHandle) = v221;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v217) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v217,
      20,
      14,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)v62,
      v221);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&v62[3].ImageName.Buffer, v219);
  if ( !v221 )
  {
    Flink = (struct _KEVENT *)v62[1].IMStartRemoveMutex.Header.WaitListHead.Flink;
    if ( Flink )
      KeSetEvent(Flink, 0, 0);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v222) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (unsigned __int16)v222,
      20,
      26,
      (struct _GUID *)&WPP_524f971b55653c5011f9984343ca9332_Traceguids,
      (char)v62);
  }
  p_DeviceContext = v335;
LABEL_408:
  if ( v2 )
  {
    LOBYTE(v222) = 4;
    NdisReferenceWithTag(*(_QWORD *)(v2 + 1432), v222);
    ++*(_DWORD *)(v2 + 1304);
  }
LABEL_410:
  v3 = *(struct _NM_REQUEST_GET_ALL_PARAMETERS **)v339;
LABEL_411:
  **((_QWORD **)v3 + 2) = p_DeviceContext[164];
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v328);
  if ( !p_DeviceContext )
    goto LABEL_36;
  v243 = *((_QWORD *)v3 + 1);
  switch ( v243 )
  {
    case 0LL:
      goto LABEL_413;
    case 1LL:
LABEL_437:
      LODWORD(v346) = 1;
      *((_QWORD *)&v346 + 1) = *((_QWORD *)v3 + 7);
      LODWORD(v347) = *((_DWORD *)v3 + 16);
      ndisNsiGetInterfaceRodEnumObject((char)p_DeviceContext);
      *((_DWORD *)v3 + 16) = v347;
      *((_QWORD *)&v346 + 1) = *((_QWORD *)v3 + 9);
      LODWORD(v347) = *((_DWORD *)v3 + 20);
      LODWORD(v346) = 2;
      ndisNsiGetInterfaceRosEnumObject((char)p_DeviceContext);
      *((_DWORD *)v3 + 20) = v347;
      break;
    case 12LL:
LABEL_413:
      *((_QWORD *)&v346 + 1) = *((_QWORD *)v3 + 5);
      LODWORD(v347) = *((_DWORD *)v3 + 12);
      ndisNsiGetInterfaceRwInformation((char)p_DeviceContext, v2, (char)v344);
      *((_DWORD *)v3 + 12) = v347;
      LODWORD(v346) = 1;
      *((_QWORD *)&v346 + 1) = *((_QWORD *)v3 + 7);
      LODWORD(v347) = *((_DWORD *)v3 + 16);
      ndisNsiGetInterfaceRodInformation((char)p_DeviceContext, v2, (char)v344);
      *((_DWORD *)v3 + 16) = v347;
      *((_QWORD *)&v346 + 1) = *((_QWORD *)v3 + 9);
      LODWORD(v347) = *((_DWORD *)v3 + 20);
      LODWORD(v346) = 2;
      ndisNsiGetInterfaceRosInformation((struct _NDIS_IF_BLOCK *)p_DeviceContext);
      *((_DWORD *)v3 + 20) = v347;
      break;
    case 13LL:
      goto LABEL_437;
    default:
      *(_DWORD *)v336 = -1073741811;
      break;
  }
LABEL_39:
  v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v27 = &dword_140126B60;
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 1394) )
    {
      v28 = *(_QWORD *)(v2 + 1408) + 312LL;
      v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v28);
      v30 = *(_QWORD *)(v28 + 16);
      v31 = v29;
      if ( v30 - 2 > 1 )
      {
        if ( v30 < 2 )
          ndisBugCheckEx(0x1EuLL, 3uLL, v30, 0LL);
        if ( *(_BYTE *)(v30 + 2) <= 0xBu )
          ndisBugCheckEx(0x1EuLL, 2uLL, v30, 0xBuLL);
        if ( *(_BYTE *)(v30 + 1) )
        {
          if ( *(_BYTE *)(v30 + 1) != 1 )
            goto LABEL_47;
          v128 = v30 + 712;
          v129 = *(_DWORD *)(v30 + 768);
          if ( v129 >> 17 >= 0x3FFE || (unsigned __int16)v129 >> 1 != (v129 >> 17) + 1 )
          {
            if ( (unsigned __int16)v129 >> 1 || (v129 & 1) != 0 )
            {
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v30 + 712), 0);
              goto LABEL_47;
            }
            goto LABEL_99;
          }
          for ( i7 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v128;
                *(_QWORD *)v128;
                i7 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v128 )
          {
            *(_QWORD *)v128 = i7->Next;
            ndisFreeRefCountStacksInBlock(i7);
            ExFreePoolWithTag(i7, 0);
          }
          ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v128);
          *(_DWORD *)(v128 + 56) &= 0x10001u;
        }
        else
        {
          v32 = *(_QWORD *)(v30 + 8);
          if ( !v32 )
          {
LABEL_46:
            if ( _bittestandreset((signed __int32 *)(v30 + 16), 0xBu) )
              goto LABEL_47;
LABEL_99:
            ndisReportRefcountImbalance(v30, 0xBu);
          }
          for ( i8 = 0; ; ++i8 )
          {
            if ( i8 >= *(_BYTE *)(v30 + 3) )
              goto LABEL_46;
            v46 = (_BYTE *)(v32 + 2LL * i8);
            if ( *v46 == 11 )
            {
              v47 = v46[1];
              if ( v47 )
                break;
            }
          }
          v46[1] = v47 - 1;
        }
      }
LABEL_47:
      v33 = (*(_WORD *)(v28 + 8))-- == 1;
      if ( v33 && !*(_BYTE *)(v28 + 11) )
      {
        v321 = *(_QWORD *)(v28 + 16);
        if ( v321 )
        {
          v322 = ndisGetAnyActiveRefTag(*(struct NDIS_REFCOUNT_HANDLE__ **)(v28 + 16));
          if ( v322 != -2 )
            ndisBugCheckEx(0x1EuLL, 4uLL, v321, v322);
          v323 = ndisRefCountBlockFromRefCountHandle(v321);
          v324 = v323;
          if ( v323 )
          {
            ndisFreeRefCountAuxiliaryMemory(v323);
            ExFreePoolWithTag(v324, 0);
          }
        }
        *(_QWORD *)(v28 + 16) = 1LL;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v28, v31);
    }
    v34 = *(_QWORD *)(v2 + 1432);
    if ( v34 - 2 > 1 )
    {
      if ( v34 < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v34, 0LL);
      if ( *(_BYTE *)(v34 + 2) <= 4u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v34, 4uLL);
      if ( *(_BYTE *)(v34 + 1) )
      {
        if ( *(_BYTE *)(v34 + 1) == 1 )
        {
          v131 = v34 + 264;
          v132 = *(_DWORD *)(v34 + 320);
          if ( v132 >> 17 < 0x3FFE && (unsigned __int16)v132 >> 1 == (v132 >> 17) + 1 )
          {
            for ( i9 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v131;
                  *(_QWORD *)v131;
                  i9 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v131 )
            {
              *(_QWORD *)v131 = i9->Next;
              ndisFreeRefCountStacksInBlock(i9);
              ExFreePoolWithTag(i9, 0);
            }
            ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v131);
            *(_DWORD *)(v131 + 56) &= 0x10001u;
          }
          else
          {
            if ( !((unsigned __int16)v132 >> 1) && (v132 & 1) == 0 )
              goto LABEL_98;
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v34 + 264), 0);
          }
        }
      }
      else
      {
        v35 = *(_QWORD *)(v34 + 8);
        if ( !v35 )
        {
LABEL_54:
          if ( _bittestandreset((signed __int32 *)(v34 + 16), 4u) )
            goto LABEL_55;
LABEL_98:
          ndisReportRefcountImbalance(v34, 4u);
        }
        for ( i10 = 0; ; ++i10 )
        {
          if ( i10 >= *(_BYTE *)(v34 + 3) )
            goto LABEL_54;
          v49 = (_BYTE *)(v35 + 2LL * i10);
          if ( *v49 == 4 )
          {
            v50 = v49[1];
            if ( v50 )
              break;
          }
        }
        v49[1] = v50 - 1;
      }
    }
LABEL_55:
    v33 = (*(_DWORD *)(v2 + 1304))-- == 1;
    if ( !v33 )
    {
LABEL_56:
      p_DeviceContext = v335;
      goto LABEL_57;
    }
    KeAcquireSpinLockAtDpcLevel(&qword_140126A68);
    v86 = (PVOID *)P;
    if ( P != &P )
    {
      do
      {
        v87 = v86;
        v86 = (PVOID *)*v86;
        v88 = v87[3];
        if ( v88 == (_DWORD *)v2 || v87[4] == (PVOID)v2 )
        {
          --v88[324];
          --*((_DWORD *)v87[4] + 325);
          v105 = (PVOID *)*v87;
          if ( *((PVOID **)*v87 + 1) != v87 )
            goto LABEL_205;
          v106 = (PVOID **)v87[1];
          if ( *v106 != v87 )
            goto LABEL_205;
          *v106 = v105;
          v105[1] = v106;
          ExFreePoolWithTag(v87, 0);
        }
      }
      while ( v86 != &P );
    }
    *(_QWORD *)(v2 + 1296) = 0LL;
    KeReleaseSpinLockFromDpcLevel(&qword_140126A68);
    v89 = *(_QWORD *)(v2 + 1232);
    if ( *(_QWORD *)(v89 + 8) == v2 + 1232 )
    {
      v90 = *(_QWORD **)(v2 + 1240);
      if ( *v90 == v2 + 1232 )
      {
        *v90 = v89;
        *(_QWORD *)(v89 + 8) = v90;
        v91 = *(_QWORD *)(v2 + 1248);
        if ( *(_QWORD *)(v91 + 8) == v2 + 1248 )
        {
          v92 = *(_QWORD **)(v2 + 1256);
          if ( *v92 == v2 + 1248 )
          {
            *v92 = v91;
            *(_QWORD *)(v91 + 8) = v92;
            v93 = *(_QWORD *)(v2 + 1264);
            if ( *(_QWORD *)(v93 + 8) == v2 + 1264 )
            {
              v94 = *(_QWORD **)(v2 + 1272);
              if ( *v94 == v2 + 1264 )
              {
                *v94 = v93;
                *(_QWORD *)(v93 + 8) = v94;
                v95 = *(_QWORD *)(v2 + 1368);
                v33 = (*(_DWORD *)(v95 + 76))-- == 1;
                if ( v33 )
                {
                  v325 = *(struct _KEVENT **)(v95 + 608);
                  if ( v325 )
                    KeSetEvent(v325, 0, 0);
                }
                v96 = *(_DWORD *)(v2 + 4);
                v97 = &dword_140126B60;
                if ( v96 >= *(_DWORD *)dword_1401275E8 )
                  v97 = &dword_140126B78;
                IfIndexRange::FreeBit((IfIndexRange *)v97, v96);
                --ndisInterfaceCount;
                v98 = *(_QWORD *)(v2 + 1432);
                if ( v98 )
                {
                  v99 = ndisGetAnyActiveRefTag(*(struct NDIS_REFCOUNT_HANDLE__ **)(v2 + 1432));
                  if ( v99 != -2 )
                    ndisBugCheckEx(0x1EuLL, 4uLL, v98, v99);
                  v100 = ndisRefCountBlockFromRefCountHandle(v98);
                  v101 = v100;
                  if ( v100 )
                  {
                    ndisFreeRefCountAuxiliaryMemory(v100);
                    ExFreePoolWithTag(v101, 0);
                  }
                }
                v102 = *(void **)(v2 + 1424);
                *(_QWORD *)(v2 + 1432) = 0LL;
                if ( v102 )
                {
                  ExFreePoolWithTag(v102, 0);
                  *(_QWORD *)(v2 + 1424) = 0LL;
                }
                v103 = *(void **)(v2 + 1280);
                if ( v103 )
                {
                  ExFreePoolWithTag(v103, 0);
                  *(_QWORD *)(v2 + 1280) = 0LL;
                  *(_QWORD *)(v2 + 1288) = 0LL;
                }
                v104 = *(struct _KEVENT **)(v2 + 1384);
                if ( v104 )
                  KeSetEvent(v104, 0, 0);
                ExFreePoolWithTag((PVOID)v2, 0);
                goto LABEL_56;
              }
            }
          }
        }
      }
    }
LABEL_205:
    __fastfail(3u);
  }
LABEL_57:
  if ( p_DeviceContext )
  {
    v36 = (ULONG_PTR)p_DeviceContext[179];
    if ( v36 - 2 <= 1 )
      goto LABEL_64;
    if ( v36 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v36, 0LL);
    if ( *(_BYTE *)(v36 + 2) <= 3u )
      ndisBugCheckEx(0x1EuLL, 2uLL, v36, 3uLL);
    if ( *(_BYTE *)(v36 + 1) )
    {
      if ( *(_BYTE *)(v36 + 1) != 1 )
        goto LABEL_64;
      v134 = v36 + 200;
      v135 = *(_DWORD *)(v36 + 256);
      if ( v135 >> 17 < 0x3FFE && (unsigned __int16)v135 >> 1 == (v135 >> 17) + 1 )
      {
        for ( i11 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v134;
              *(_QWORD *)v134;
              i11 = *(struct _NDIS_REFCOUNT_STACK_BLOCK **)v134 )
        {
          *(_QWORD *)v134 = i11->Next;
          ndisFreeRefCountStacksInBlock(i11);
          ExFreePoolWithTag(i11, 0);
        }
        ndisFreeRefCountStacksInBlock((struct _NDIS_REFCOUNT_STACK_BLOCK *)v134);
        *(_DWORD *)(v134 + 56) &= 0x10001u;
        p_DeviceContext = v335;
        goto LABEL_64;
      }
      if ( (unsigned __int16)v135 >> 1 || (v135 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v36 + 200), 0);
        goto LABEL_64;
      }
    }
    else
    {
      v37 = *(_QWORD *)(v36 + 8);
      if ( v37 )
      {
        for ( i12 = 0; ; ++i12 )
        {
          if ( i12 >= *(_BYTE *)(v36 + 3) )
            goto LABEL_63;
          v52 = (_BYTE *)(v37 + 2LL * i12);
          if ( *v52 == 3 )
          {
            v53 = v52[1];
            if ( v53 )
              break;
          }
        }
        v52[1] = v53 - 1;
        goto LABEL_64;
      }
LABEL_63:
      if ( _bittestandreset((signed __int32 *)(v36 + 16), 3u) )
      {
LABEL_64:
        v33 = (*((_DWORD *)p_DeviceContext + 326))-- == 1;
        if ( v33 )
        {
          KeAcquireSpinLockAtDpcLevel(&qword_140126A68);
          v107 = (PVOID *)P;
          if ( P != &P )
          {
            do
            {
              v108 = v107;
              v107 = (PVOID *)*v107;
              v109 = (void **)v108[3];
              if ( v109 == p_DeviceContext || v108[4] == p_DeviceContext )
              {
                --*((_DWORD *)v109 + 324);
                --*((_DWORD *)v108[4] + 325);
                v125 = (PVOID *)*v108;
                if ( *((PVOID **)*v108 + 1) != v108 )
                  goto LABEL_205;
                v126 = (PVOID **)v108[1];
                if ( *v126 != v108 )
                  goto LABEL_205;
                *v126 = v125;
                v125[1] = v126;
                ExFreePoolWithTag(v108, 0);
              }
            }
            while ( v107 != &P );
          }
          p_DeviceContext[162] = 0LL;
          KeReleaseSpinLockFromDpcLevel(&qword_140126A68);
          v110 = (void ***)p_DeviceContext[154];
          if ( v110[1] != p_DeviceContext + 154 )
            goto LABEL_205;
          v111 = (char **)p_DeviceContext[155];
          if ( *v111 != (char *)(p_DeviceContext + 154) )
            goto LABEL_205;
          *v111 = (char *)v110;
          v110[1] = (void **)v111;
          v112 = (void ***)p_DeviceContext[156];
          if ( v112[1] != p_DeviceContext + 156 )
            goto LABEL_205;
          v113 = (char **)p_DeviceContext[157];
          if ( *v113 != (char *)(p_DeviceContext + 156) )
            goto LABEL_205;
          *v113 = (char *)v112;
          v112[1] = (void **)v113;
          v114 = (void ***)p_DeviceContext[158];
          if ( v114[1] != p_DeviceContext + 158 )
            goto LABEL_205;
          v115 = (char **)p_DeviceContext[159];
          if ( *v115 != (char *)(p_DeviceContext + 158) )
            goto LABEL_205;
          *v115 = (char *)v114;
          v114[1] = (void **)v115;
          v116 = p_DeviceContext[171];
          v33 = (*((_DWORD *)v116 + 19))-- == 1;
          if ( v33 )
          {
            v326 = (struct _KEVENT *)*((_QWORD *)v116 + 76);
            if ( v326 )
              KeSetEvent(v326, 0, 0);
          }
          v117 = *((_DWORD *)p_DeviceContext + 1);
          if ( v117 >= *(_DWORD *)dword_1401275E8 )
            v27 = &dword_140126B78;
          IfIndexRange::FreeBit((IfIndexRange *)v27, v117);
          --ndisInterfaceCount;
          v118 = (ULONG_PTR)p_DeviceContext[179];
          if ( v118 )
          {
            v119 = ndisGetAnyActiveRefTag((struct NDIS_REFCOUNT_HANDLE__ *)p_DeviceContext[179]);
            if ( v119 != -2 )
              ndisBugCheckEx(0x1EuLL, 4uLL, v118, v119);
            v120 = ndisRefCountBlockFromRefCountHandle(v118);
            v121 = v120;
            if ( v120 )
            {
              ndisFreeRefCountAuxiliaryMemory(v120);
              ExFreePoolWithTag(v121, 0);
            }
          }
          v122 = p_DeviceContext[178];
          p_DeviceContext[179] = 0LL;
          if ( v122 )
          {
            ExFreePoolWithTag(v122, 0);
            p_DeviceContext[178] = 0LL;
          }
          v123 = p_DeviceContext[160];
          if ( v123 )
          {
            ExFreePoolWithTag(v123, 0);
            p_DeviceContext[160] = 0LL;
            p_DeviceContext[161] = 0LL;
          }
          v124 = (struct _KEVENT *)p_DeviceContext[173];
          if ( v124 )
            KeSetEvent(v124, 0, 0);
          ExFreePoolWithTag(p_DeviceContext, 0);
        }
        goto LABEL_65;
      }
    }
    ndisReportRefcountImbalance(v36, 3u);
  }
LABEL_65:
  v38 = *(_DWORD *)v336;
  LOBYTE(v3) = v339[0];
LABEL_66:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v26);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v39) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v39,
      22,
      27,
      (struct _GUID *)&WPP_f142ecdf0a6f33a49e2e175c00018497_Traceguids,
      (char)v3,
      v38);
  }
  KeLeaveCriticalRegion();
  return v38;
}
