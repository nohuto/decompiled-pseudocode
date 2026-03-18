/*
 * XREFs of HmgInsertObjectInternal @ 0x14001E500
 * Callers:
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x14001CA10 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x14001DD50 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x14001DFD0 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     GreCreateRectRgnIndirect @ 0x14002D480 (GreCreateRectRgnIndirect.c)
 *     NtGdiCreateRectRgn @ 0x140039620 (NtGdiCreateRectRgn.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x140068670 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     GreCreateRectRgn @ 0x1400EF5F0 (GreCreateRectRgn.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x140148120 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x14001E494 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x140032B8C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     ?AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z @ 0x14007A410 (-AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z.c)
 *     ?Initialize@EntryDataLookupTable@GdiHandleEntryTable@@QEAA_NI@Z @ 0x14007A480 (-Initialize@EntryDataLookupTable@GdiHandleEntryTable@@QEAA_NI@Z.c)
 *     ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x14007B390 (-_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     HmgDecProcessHandleCount @ 0x140084620 (HmgDecProcessHandleCount.c)
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1400D9130 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 *     UMPDGetThreadClientPID @ 0x140135174 (UMPDGetThreadClientPID.c)
 *     IsUMPDGetThreadClientPIDSupported @ 0x140147F24 (IsUMPDGetThreadClientPIDSupported.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 *     PREALLOCMEM2 @ 0x1401C2448 (PREALLOCMEM2.c)
 *     HmgIncProcessHandleCountExFast @ 0x1401C4F84 (HmgIncProcessHandleCountExFast.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

struct HOBJ__ *__fastcall HmgInsertObjectInternal(
        NSInstrumentation::CReferenceTracker::CReferenceCountedType *a1,
        int a2,
        unsigned __int8 a3)
{
  __int64 v3; // rbx
  int v4; // r12d
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v6; // rsi
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // r15
  __int64 v11; // rdi
  HSEMAPHORE v12; // r14
  __int64 v13; // r13
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  __int64 v17; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v19; // rdi
  unsigned __int16 v20; // di
  __int64 v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r13
  __int64 v27; // rcx
  char v28; // r10
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // r8
  unsigned int v32; // r9d
  __int64 v33; // r11
  __int64 v34; // rax
  int v35; // r8d
  unsigned __int64 i; // rcx
  int v37; // eax
  char v38; // cl
  GdiHandleEntryTable *v39; // r9
  __int64 v40; // rcx
  char v41; // r9
  unsigned int v42; // eax
  __int64 SessionState; // rax
  __int64 v44; // r10
  __int64 v45; // rcx
  unsigned int v46; // r11d
  __int64 v47; // r10
  __int64 v48; // rax
  __int64 v49; // rdx
  struct HOBJ__ *v50; // r13
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v51; // rsi
  __int64 v52; // rcx
  int v53; // eax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v54; // rsi
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v55; // rax
  char v56; // di
  char v57; // si
  struct _KTHREAD *v58; // r15
  __int64 v59; // rsi
  __int64 *v60; // rax
  int v62; // eax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v63; // rsi
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v64; // rax
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v65; // rdi
  __int64 v66; // r14
  __int64 v67; // rax
  char v68; // al
  int v69; // ecx
  int v70; // r8d
  void *v71; // rax
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v72; // rdi
  __int64 v73; // r14
  void *v74; // rax
  __int64 v75; // rax
  int v76; // edi
  __int64 v77; // rax
  GdiHandleEntryTable::EntryDataLookupTable *v78; // rcx
  unsigned int v79; // eax
  struct GdiHandleEntryTable *v80; // rax
  __int64 v81; // rax
  unsigned int v82; // r13d
  __int64 v83; // r13
  __int64 v84; // rax
  int v85; // ecx
  __int64 j; // rax
  unsigned int v87; // ecx
  struct GdiHandleEntryTable *v88; // rax
  GdiHandleEntryTable *v89; // rcx
  int v90; // edx
  GdiHandleEntryTable::EntryDataLookupTable *v91; // rcx
  bool v92; // al
  bool v93; // al
  void *v94; // r9
  _OWORD *v95; // rax
  signed __int32 v96[8]; // [rsp+0h] [rbp-C9h] BYREF
  GdiHandleEntryTable *CurrentThread; // [rsp+40h] [rbp-89h]
  __int64 v98; // [rsp+48h] [rbp-81h]
  __int64 v99; // [rsp+50h] [rbp-79h]
  __int64 v100; // [rsp+58h] [rbp-71h]
  int v101; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v102; // [rsp+64h] [rbp-65h] BYREF
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v103; // [rsp+68h] [rbp-61h] BYREF
  __int64 v104; // [rsp+78h] [rbp-51h]
  HSEMAPHORE v105; // [rsp+80h] [rbp-49h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-29h] BYREF
  void *v108; // [rsp+B0h] [rbp-19h]
  int v109; // [rsp+B8h] [rbp-11h]
  int v110; // [rsp+BCh] [rbp-Dh]
  int *v111; // [rsp+C0h] [rbp-9h]
  __int64 v112; // [rsp+C8h] [rbp-1h]
  NSInstrumentation::CReferenceTracker::CReferenceCountedType **v113; // [rsp+D0h] [rbp+7h]
  __int64 v114; // [rsp+D8h] [rbp+Fh]

  v3 = 0LL;
  v4 = a3;
  v101 = a2;
  v103 = a1;
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged();
  v6 = 0LL;
  if ( !CurrentThreadNonPaged )
    goto LABEL_5;
  v7 = *CurrentThreadNonPaged == 0LL;
  v8 = *CurrentThreadNonPaged + 8LL;
  if ( !v7 )
    v6 = v8;
  if ( v6 && *(_QWORD *)(v6 + 64) && (int)IsUMPDGetThreadClientPIDSupported() >= 0 )
    LODWORD(v10) = UMPDGetThreadClientPID(v6);
  else
LABEL_5:
    v10 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v11 = v6;
  v104 = *(_QWORD *)(W32GetSessionState(v9) + 88);
  v12 = (HSEMAPHORE)(*(_QWORD *)v104 + 1512LL);
  v105 = v12;
  GreAcquireSemaphoreInternal(v12);
  v13 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    CurrentProcess = PsGetCurrentProcess();
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
      goto LABEL_14;
    v11 = v6;
  }
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
  v6 = v11;
  if ( ThreadWin32Thread )
    v13 = *ThreadWin32Thread;
  v19 = 0LL;
  if ( v13 )
    v19 = v13 + 8;
  if ( v19 )
  {
    v17 = *(_QWORD *)v19;
    if ( (*(_QWORD *)v19 & 0xFFFFFFFFFFF00000uLL) != 0 && (*(_QWORD *)v19 & 0x100000LL) == 0 )
    {
      v35 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v37 = i;
        if ( !_bittest64(&v17, i) )
          v37 = v35;
        v35 = v37;
      }
      if ( v37 > 20 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    v38 = *(_BYTE *)(v19 + 28);
    *(_BYTE *)(v19 + 28) = v38 + 1;
    if ( !v38 )
      *(_QWORD *)v19 |= 0x100000uLL;
  }
LABEL_14:
  v20 = v101;
  v21 = v104;
  if ( (v101 & 8) == 0 && !(unsigned int)HmgIncProcessHandleCountExFast(v104, (unsigned int)v10, 0LL) )
  {
LABEL_71:
    v50 = 0LL;
    goto LABEL_85;
  }
  if ( v6 )
  {
    v22 = *(_QWORD *)(v6 + 336);
    if ( v22 )
    {
      if ( *(_BYTE *)(v22 + 80) )
      {
        v17 = *(_QWORD *)(v22 + 32);
        if ( *(_QWORD *)(v22 + 24) != v17 )
        {
LABEL_48:
          v24 = *(_QWORD *)(v21 + 5672);
          v100 = v24;
          while ( 1 )
          {
            while ( 1 )
            {
              if ( *(_DWORD *)(v24 + 4) >= *(_DWORD *)(v24 + 8) )
                goto LABEL_63;
              v17 = *(_QWORD *)(v24 + 16);
              v98 = v17;
              if ( *(_BYTE *)v17 )
                goto LABEL_63;
              v39 = *(GdiHandleEntryTable **)(v17 + 8);
              v102 = 0;
              CurrentThread = v39;
              if ( *((_DWORD *)v39 + 4) >= *((_DWORD *)v39 + 2) )
                goto LABEL_162;
              v17 = *((unsigned int *)v39 + 3);
              LODWORD(v99) = v17;
              if ( (_DWORD)v17 == -1 )
              {
                v78 = (GdiHandleEntryTable::EntryDataLookupTable *)*((_QWORD *)v39 + 3);
                LODWORD(v99) = *((_DWORD *)v39 + 5);
                if ( !GdiHandleEntryTable::EntryDataLookupTable::Initialize(v78, v99) )
                {
                  v17 = v98;
LABEL_162:
                  if ( *(_DWORD *)(*(_QWORD *)(v17 + 8) + 16LL) == *(_DWORD *)(*(_QWORD *)(v17 + 8) + 8LL) )
                  {
                    for ( j = 1LL; ; j = (unsigned int)(v99 + 1) )
                    {
                      v87 = *(unsigned __int16 *)(v17 + 2);
                      LODWORD(v99) = j;
                      if ( (unsigned int)j >= v87 )
                        break;
                      CurrentThread = *(GdiHandleEntryTable **)(v17 + 8 * j + 8);
                      if ( GdiHandleEntryTable::AcquireEntryIndex(CurrentThread, &v102) )
                      {
                        v40 = v98;
                        v90 = v99;
LABEL_168:
                        v24 = v100;
                        v17 = v102 + *(_DWORD *)(v40 + 2056) + ((v90 + 0xFFFF) << 16);
                        LODWORD(v99) = v17;
                        goto LABEL_55;
                      }
                      if ( *((_DWORD *)CurrentThread + 4) != *((_DWORD *)CurrentThread + 2) )
                        goto LABEL_63;
                      v17 = v98;
                    }
                    if ( (_WORD)v87 != 256 )
                    {
                      v88 = GdiHandleEntryTable::_Create(0x10000u, 1);
                      v17 = v98;
                      *(_QWORD *)(v98 + 8LL * *(unsigned __int16 *)(v98 + 2) + 8) = v88;
                      v89 = *(GdiHandleEntryTable **)(v17 + 8LL * *(unsigned __int16 *)(v17 + 2) + 8);
                      if ( !v89 )
                        goto LABEL_63;
                      GdiHandleEntryTable::AcquireEntryIndex(v89, &v102);
                      v40 = v98;
                      v90 = *(unsigned __int16 *)(v98 + 2);
                      *(_WORD *)(v98 + 2) = v90 + 1;
                      goto LABEL_168;
                    }
                    *(_BYTE *)v17 = 1;
                  }
                  goto LABEL_63;
                }
                _InterlockedOr(v96, 0);
                v39 = CurrentThread;
                v17 = (unsigned int)v99;
                v24 = v100;
                ++*((_DWORD *)CurrentThread + 5);
              }
              else
              {
                v40 = *(unsigned int *)(*(_QWORD *)v39 + 24 * v17);
                *((_DWORD *)v39 + 3) = v40;
              }
              ++*((_DWORD *)v39 + 4);
              v102 = v17;
LABEL_55:
              v41 = 0;
              v42 = *(_DWORD *)(v24 + 4) + 1;
              LODWORD(CurrentThread) = v42;
              *(_DWORD *)(v24 + 4) = v42;
              if ( v42 > *(_DWORD *)v24 )
              {
                *(_DWORD *)v24 = v42;
                SessionState = W32GetSessionState(v40);
                v17 = (unsigned int)v99;
                v41 = 1;
                v24 = v100;
                *(_DWORD *)(*(_QWORD *)(SessionState + 88) + 1788LL) = (_DWORD)CurrentThread;
              }
              v44 = *(_QWORD *)(v24 + 16);
              v45 = (unsigned __int16)v17;
              LODWORD(CurrentThread) = (unsigned __int16)v17;
              v46 = *(_DWORD *)(v44 + 2056);
              if ( (unsigned __int16)v17 >= v46 + ((*(unsigned __int16 *)(v44 + 2) + 0xFFFF) << 16) )
              {
                v48 = 0LL;
              }
              else
              {
                if ( (unsigned __int16)v17 >= v46 )
                {
                  v47 = *(_QWORD *)(v44 + 8LL * ((((unsigned __int16)v17 - v46) >> 16) + 1) + 8);
                  v45 = -65536 * (((unsigned __int16)v17 - v46) >> 16) - v46 + (unsigned int)CurrentThread;
                }
                else
                {
                  v47 = *(_QWORD *)(v44 + 8);
                }
                v48 = 0LL;
                if ( (unsigned int)v45 < *(_DWORD *)(v47 + 20) )
                  v48 = *(_QWORD *)v47 + 24 * v45;
              }
              if ( (unsigned int)v17 < 0x10000 )
              {
                if ( v41 || *(_DWORD *)v24 > 0x10000u )
                  *(_BYTE *)(v48 + 13) = 0;
                else
                  LODWORD(v17) = ((unsigned __int8)++*(_BYTE *)(v48 + 13) << 16) + v17;
LABEL_131:
                LODWORD(v26) = v17;
                *(_DWORD *)(*(_QWORD *)(v22 + 40) + 4LL * (*(_QWORD *)(v22 + 24))++) = v17;
                goto LABEL_77;
              }
              if ( *(unsigned __int8 *)(v48 + 13) != WORD1(v17) )
                goto LABEL_131;
              if ( !*(_QWORD *)(v24 + 24) )
                break;
LABEL_136:
              *(_DWORD *)(*(_QWORD *)(v24 + 24) + 4LL * (unsigned __int16)v17) = v17;
            }
            v74 = Win32AllocPoolImpl(0x100uLL, 0x40000uLL, 0x636D6847u);
            v24 = v100;
            *(_QWORD *)(v100 + 24) = v74;
            if ( v74 )
            {
              memset(v74, 0, 0x40000uLL);
              v17 = (unsigned int)v99;
              v24 = v100;
              goto LABEL_136;
            }
          }
        }
        v94 = *(void **)(v22 + 40);
        v98 = 2 * v17;
        if ( v94 == (void *)(v22 + 48) )
        {
          v95 = (_OWORD *)PALLOCMEM((unsigned int)(8 * v17), 1852994631LL);
          if ( v95 )
          {
            *v95 = *(_OWORD *)(v22 + 48);
            v95[1] = *(_OWORD *)(v22 + 64);
LABEL_203:
            *(_QWORD *)(v22 + 40) = v95;
            *(_QWORD *)(v22 + 32) = v98;
            goto LABEL_48;
          }
        }
        else
        {
          v95 = (_OWORD *)PREALLOCMEM2(v94);
          if ( v95 )
            goto LABEL_203;
        }
        goto LABEL_63;
      }
    }
  }
  v23 = *(_QWORD *)(v104 + 5672);
LABEL_19:
  v24 = 0xFFFFFFFFLL;
  while ( 1 )
  {
    if ( *(_DWORD *)(v23 + 4) >= *(_DWORD *)(v23 + 8) )
      goto LABEL_63;
    v25 = *(_QWORD *)(v23 + 16);
    v98 = v25;
    if ( *(_BYTE *)v25 )
      goto LABEL_63;
    v17 = *(_QWORD *)(v25 + 8);
    v100 = v17;
    if ( *(_DWORD *)(v17 + 16) >= *(_DWORD *)(v17 + 8) )
      goto LABEL_147;
    v26 = *(unsigned int *)(v17 + 12);
    if ( (_DWORD)v26 == -1 )
    {
      LODWORD(v26) = *(_DWORD *)(v17 + 20);
      if ( GdiHandleEntryTable::EntryDataLookupTable::Initialize(
             *(GdiHandleEntryTable::EntryDataLookupTable **)(v17 + 24),
             v26) )
      {
        _InterlockedOr(v96, 0);
        v17 = v100;
        ++*(_DWORD *)(v100 + 20);
        goto LABEL_25;
      }
      v25 = v98;
      v24 = 0xFFFFFFFFLL;
LABEL_147:
      if ( *(_DWORD *)(*(_QWORD *)(v25 + 8) + 16LL) != *(_DWORD *)(*(_QWORD *)(v25 + 8) + 8LL) )
        goto LABEL_63;
      v17 = 1LL;
      while ( 1 )
      {
        v79 = *(unsigned __int16 *)(v25 + 2);
        LODWORD(v99) = v17;
        if ( (unsigned int)v17 >= v79 )
          break;
        v83 = *(_QWORD *)(v25 + 8LL * (unsigned int)v17 + 8);
        if ( *(_DWORD *)(v83 + 16) < *(_DWORD *)(v83 + 8) )
        {
          v84 = *(unsigned int *)(v83 + 12);
          LODWORD(v100) = v84;
          if ( (_DWORD)v84 != -1 )
          {
            v85 = *(_DWORD *)(*(_QWORD *)v83 + 24 * v84);
            ++*(_DWORD *)(v83 + 16);
            *(_DWORD *)(v83 + 12) = v85;
            v27 = (unsigned int)v100;
            goto LABEL_157;
          }
          v91 = *(GdiHandleEntryTable::EntryDataLookupTable **)(v83 + 24);
          LODWORD(v100) = *(_DWORD *)(v83 + 20);
          v92 = GdiHandleEntryTable::EntryDataLookupTable::Initialize(v91, v100);
          v25 = v98;
          v17 = (unsigned int)v99;
          if ( v92 )
          {
            _InterlockedOr(v96, 0);
            ++*(_DWORD *)(v83 + 20);
            ++*(_DWORD *)(v83 + 16);
            v27 = (unsigned int)v100;
            goto LABEL_157;
          }
        }
        if ( *(_DWORD *)(v83 + 16) != *(_DWORD *)(v83 + 8) )
          goto LABEL_63;
        v17 = (unsigned int)(v17 + 1);
        v24 = 0xFFFFFFFFLL;
      }
      if ( (_WORD)v79 == 256 )
      {
        *(_BYTE *)v25 = 1;
        goto LABEL_63;
      }
      v80 = GdiHandleEntryTable::_Create(0x10000u, 1);
      v25 = v98;
      *(_QWORD *)(v98 + 8LL * *(unsigned __int16 *)(v98 + 2) + 8) = v80;
      v17 = *(_QWORD *)(v25 + 8LL * *(unsigned __int16 *)(v25 + 2) + 8);
      v99 = v17;
      if ( !v17 )
      {
LABEL_63:
        if ( (v20 & 8) == 0 )
          HmgDecProcessHandleCount((unsigned int)v10, v17, v24);
        v49 = v104;
        if ( !*(_BYTE *)(v104 + 5664)
          && *(_DWORD *)(*(_QWORD *)(v104 + 5672) + 4LL) >= *(_DWORD *)(*(_QWORD *)(v104 + 5672) + 8LL) )
        {
          *(_BYTE *)(v104 + 5664) = 1;
          if ( (unsigned int)dword_14029AF48 > 5
            && (qword_14029AF58 & 0x400000000000LL) != 0
            && (qword_14029AF60 & 0x400000000000LL) == qword_14029AF60 )
          {
            v101 = *(_DWORD *)(v49 + 1752);
            EventDescriptor.Keyword = 0x400000000000LL;
            v113 = &v103;
            v103 = (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)0x1000000;
            v111 = &v101;
            *(_DWORD *)&EventDescriptor.Level = 5;
            UserData.Ptr = (ULONGLONG)off_14029AF50;
            v114 = 8LL;
            v112 = 4LL;
            *(_DWORD *)&EventDescriptor.Id = 184549376;
            UserData.Size = *(unsigned __int16 *)off_14029AF50;
            v108 = &unk_14027651C;
            UserData.Reserved = 2;
            v109 = 67;
            v110 = 1;
            LODWORD(CurrentThread) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
            EtwWriteTransfer(qword_14029AF68, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
          }
        }
        goto LABEL_71;
      }
      if ( *(_DWORD *)(v17 + 16) < *(_DWORD *)(v17 + 8) )
      {
        v81 = *(unsigned int *)(v17 + 12);
        LODWORD(v100) = v81;
        if ( (_DWORD)v81 != -1 )
        {
          v82 = v100;
          *(_DWORD *)(v17 + 12) = *(_DWORD *)(*(_QWORD *)v17 + 24 * v81);
LABEL_155:
          ++*(_DWORD *)(v17 + 16);
          v27 = v82;
LABEL_156:
          LODWORD(v17) = *(unsigned __int16 *)(v25 + 2);
          *(_WORD *)(v25 + 2) = v17 + 1;
LABEL_157:
          LODWORD(v26) = v27 + *(_DWORD *)(v25 + 2056) + (((_DWORD)v17 + 0xFFFF) << 16);
          goto LABEL_26;
        }
        v82 = *(_DWORD *)(v17 + 20);
        v93 = GdiHandleEntryTable::EntryDataLookupTable::Initialize(
                *(GdiHandleEntryTable::EntryDataLookupTable **)(v17 + 24),
                v82);
        v25 = v98;
        if ( v93 )
        {
          _InterlockedOr(v96, 0);
          v17 = v99;
          ++*(_DWORD *)(v99 + 20);
          goto LABEL_155;
        }
      }
      v27 = 0LL;
      goto LABEL_156;
    }
    v27 = *(unsigned int *)(*(_QWORD *)v17 + 24 * v26);
    *(_DWORD *)(v17 + 12) = v27;
LABEL_25:
    ++*(_DWORD *)(v17 + 16);
LABEL_26:
    v28 = 0;
    v29 = *(_DWORD *)(v23 + 4) + 1;
    LODWORD(CurrentThread) = v29;
    *(_DWORD *)(v23 + 4) = v29;
    if ( v29 > *(_DWORD *)v23 )
    {
      *(_DWORD *)v23 = v29;
      v30 = W32GetSessionState(v27);
      v28 = 1;
      *(_DWORD *)(*(_QWORD *)(v30 + 88) + 1788LL) = (_DWORD)CurrentThread;
    }
    v31 = *(_QWORD *)(v23 + 16);
    v17 = (unsigned __int16)v26;
    v32 = *(_DWORD *)(v31 + 2056);
    if ( (unsigned __int16)v26 >= v32 + ((*(unsigned __int16 *)(v31 + 2) + 0xFFFF) << 16) )
    {
      v34 = 0LL;
    }
    else
    {
      if ( (unsigned __int16)v26 >= v32 )
      {
        v33 = *(_QWORD *)(v31 + 8LL * ((((unsigned __int16)v26 - v32) >> 16) + 1) + 8);
        v17 = -65536 * (((unsigned __int16)v26 - v32) >> 16) - v32 + (unsigned __int16)v26;
      }
      else
      {
        v33 = *(_QWORD *)(v31 + 8);
      }
      v34 = 0LL;
      if ( (unsigned int)v17 < *(_DWORD *)(v33 + 20) )
        v34 = *(_QWORD *)v33 + 24 * v17;
    }
    if ( (unsigned int)v26 < 0x10000 )
      break;
    if ( *(unsigned __int8 *)(v34 + 13) != WORD1(v26) )
      goto LABEL_77;
    if ( *(_QWORD *)(v23 + 24) )
      goto LABEL_114;
    v71 = Win32AllocPoolImpl(0x100uLL, 0x40000uLL, 0x636D6847u);
    *(_QWORD *)(v23 + 24) = v71;
    v24 = 0xFFFFFFFFLL;
    if ( v71 )
    {
      memset(v71, 0, 0x40000uLL);
LABEL_114:
      *(_DWORD *)(*(_QWORD *)(v23 + 24) + 4LL * (unsigned __int16)v26) = v26;
      goto LABEL_19;
    }
  }
  if ( v28 || *(_DWORD *)v23 > 0x10000u )
    *(_BYTE *)(v34 + 13) = 0;
  else
    LODWORD(v26) = ((unsigned __int8)++*(_BYTE *)(v34 + 13) << 16) + v26;
LABEL_77:
  v51 = v103;
  v50 = ENTRYOBJ::hSetup(v103, v4, v20, v26);
  if ( (_BYTE)v4 == 5 )
  {
    v53 = *((_DWORD *)v51 + 2);
    v54 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v51 + 85);
    LODWORD(CurrentThread) = v53;
    v55 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(*(_QWORD *)(W32GetSessionState(v52) + 88)
                                                                          + 5704LL);
    v103 = v55;
    if ( v54 && v55 && (_DWORD)CurrentThread )
    {
      v72 = v103;
      v73 = (unsigned int)CurrentThread;
      do
      {
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v72, v54, 1);
        --v73;
      }
      while ( v73 );
      goto LABEL_121;
    }
  }
  else if ( (_BYTE)v4 == 16 )
  {
    v62 = *((_DWORD *)v51 + 2);
    v63 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v51 + 17);
    LODWORD(CurrentThread) = v62;
    v64 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(*(_QWORD *)(W32GetSessionState(v52) + 88)
                                                                          + 5736LL);
    v103 = v64;
    if ( v63 )
    {
      if ( v64 && (_DWORD)CurrentThread )
      {
        v65 = v103;
        v66 = (unsigned int)CurrentThread;
        do
        {
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v65, v63, 1);
          --v66;
        }
        while ( v66 );
LABEL_121:
        LOBYTE(v20) = v101;
        v12 = v105;
      }
    }
  }
  v7 = (v20 & 8) == 0;
  v56 = 0;
  if ( v7 )
    v56 = v10;
  switch ( v4 )
  {
    case 4:
      v57 = 4;
      break;
    case 5:
      v57 = 5;
      break;
    case 1:
      v57 = 1;
      break;
    default:
      switch ( v4 )
      {
        case 0:
          v57 = 0;
          break;
        case 2:
          v57 = 2;
          break;
        case 3:
          v57 = 3;
          break;
        case 6:
          v57 = 6;
          break;
        case 7:
          v57 = 7;
          break;
        case 8:
          v57 = 8;
          break;
        case 9:
          v57 = 9;
          break;
        case 10:
          v57 = 10;
          break;
        case 11:
          v57 = 11;
          break;
        case 12:
          v57 = 12;
          break;
        case 13:
          v57 = 13;
          break;
        case 14:
          v57 = 14;
          break;
        case 15:
          v57 = 15;
          break;
        case 16:
          v57 = 16;
          break;
        case 17:
          v57 = 17;
          break;
        case 18:
          v57 = 18;
          break;
        case 19:
          v57 = 19;
          break;
        case 20:
          v57 = 20;
          break;
        case 21:
          v57 = 21;
          break;
        case 22:
          v57 = 22;
          break;
        case 23:
          v57 = 23;
          break;
        case 24:
          v57 = 24;
          break;
        case 25:
          v57 = 25;
          break;
        case 26:
          v57 = 26;
          break;
        case 27:
          v57 = 27;
          break;
        case 28:
          v57 = 28;
          break;
        case 29:
          v57 = 29;
          break;
        case 30:
          v57 = 30;
          break;
        default:
          v57 = -1;
          break;
      }
      break;
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
  {
    v67 = PsGetCurrentProcess();
    v68 = PsGetProcessSessionIdEx(v67);
    McTemplateK0pqqq_EtwWriteTransfer(v69, (unsigned int)&GdiCreateHandle, v70, (_DWORD)v50, v57, v68, v56);
  }
LABEL_85:
  if ( v12 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Hmgr", v12);
    v58 = KeGetCurrentThread();
    v59 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v75 = PsGetCurrentProcess(),
          v76 = PsGetProcessSessionIdEx(v75),
          v77 = PsGetCurrentThreadProcess(),
          v76 == (unsigned int)PsGetProcessSessionIdEx(v77)) )
    {
      v60 = (__int64 *)PsGetThreadWin32Thread(v58);
      if ( v60 )
        v59 = *v60;
      if ( v59 )
        v3 = v59 + 8;
      if ( v3 )
      {
        v7 = (*(_BYTE *)(v3 + 28))-- == 1;
        if ( v7 )
          *(_QWORD *)v3 &= ~0x100000uLL;
      }
    }
    GreReleaseSemaphoreSharedInternal(v12);
  }
  return v50;
}
