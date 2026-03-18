/*
 * XREFs of NVMeCompletionDpcRoutine @ 0x140012F10
 * Callers:
 *     ProcessCompletionQueues @ 0x140006790 (ProcessCompletionQueues.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x140008650 (WaitForCommandCompleteWithCustomTimeout.c)
 *     NVMeHwMSIInterrupt @ 0x140008FC0 (NVMeHwMSIInterrupt.c)
 *     NVMeIoPollingDpcRoutine @ 0x1400292D0 (NVMeIoPollingDpcRoutine.c)
 * Callees:
 *     NVMeMapError @ 0x1400097F0 (NVMeMapError.c)
 *     NVMeRequestComplete @ 0x14000AAB0 (NVMeRequestComplete.c)
 *     CheckDpcWatchdogTimerExpireSoon @ 0x14000B9A0 (CheckDpcWatchdogTimerExpireSoon.c)
 *     IsNVMeControllerOnFatalError @ 0x14000D070 (IsNVMeControllerOnFatalError.c)
 *     ProcessPendingIoCommands @ 0x140014BB0 (ProcessPendingIoCommands.c)
 *     NVMeControllerAsyncReset @ 0x140016880 (NVMeControllerAsyncReset.c)
 *     RecordCommandTimingHistory @ 0x140016DB0 (RecordCommandTimingHistory.c)
 *     Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledDeviceUsageNoInline @ 0x1400176D8 (Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledDeviceUsageNoInline.c)
 *     NVMeQueueWorkItem @ 0x14002393C (NVMeQueueWorkItem.c)
 *     __security_check_cookie @ 0x140030FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140031000 (_guard_dispatch_icall.c)
 */

char __fastcall NVMeCompletionDpcRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned int *v6; // r12
  __int16 v7; // bx
  __int64 v8; // r8
  __int64 v9; // r9
  __int16 v10; // r10
  _DWORD *v11; // rax
  __int64 v12; // r13
  unsigned __int16 v13; // ax
  __int64 v14; // r13
  signed __int32 v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // r8
  unsigned __int16 v19; // ax
  __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int8 v23; // cl
  __int64 v24; // rsi
  __int64 v25; // rsi
  bool v26; // zf
  __int64 v27; // rax
  char v28; // al
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // edx
  __int64 v32; // r8
  unsigned __int8 v33; // al
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r9
  unsigned int v37; // r8d
  unsigned int v38; // ecx
  __int64 v39; // r11
  unsigned __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rax
  signed __int64 v44; // rax
  __int64 v45; // rsi
  signed __int16 v46; // ax
  __int64 v47; // rdx
  int v48; // r9d
  unsigned int v49; // r8d
  unsigned int v50; // ecx
  __int64 v51; // r11
  __int64 v52; // rsi
  const wchar_t *v53; // r15
  unsigned __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rax
  void (__fastcall *v58)(__int64, __int64, unsigned int *); // rax
  unsigned __int64 v59; // r12
  unsigned __int64 v60; // rsi
  unsigned __int64 v61; // r8
  __int64 v62; // rcx
  int v63; // edx
  int *v64; // rax
  signed __int32 v65; // eax
  char v66; // al
  int v67; // edx
  int v68; // r8d
  int v69; // eax
  __int64 v70; // r8
  __int64 v71; // rcx
  __int64 v72; // r9
  unsigned __int64 v73; // rdx
  __int64 v74; // rax
  signed __int32 v76[6]; // [rsp+8h] [rbp-150h] BYREF
  const wchar_t *v77; // [rsp+28h] [rbp-130h]
  const wchar_t *v78; // [rsp+30h] [rbp-128h]
  __int64 v79; // [rsp+38h] [rbp-120h]
  int v80; // [rsp+40h] [rbp-118h]
  __int64 v81; // [rsp+48h] [rbp-110h]
  __int64 v82; // [rsp+50h] [rbp-108h]
  const wchar_t *v83; // [rsp+58h] [rbp-100h]
  __int64 v84; // [rsp+60h] [rbp-F8h]
  const wchar_t *v85; // [rsp+68h] [rbp-F0h]
  __int64 v86; // [rsp+70h] [rbp-E8h]
  const wchar_t *v87; // [rsp+78h] [rbp-E0h]
  __int64 v88; // [rsp+80h] [rbp-D8h]
  const wchar_t *v89; // [rsp+88h] [rbp-D0h]
  unsigned __int64 v90; // [rsp+90h] [rbp-C8h]
  const wchar_t *v91; // [rsp+98h] [rbp-C0h]
  __int64 v92; // [rsp+A0h] [rbp-B8h]
  const wchar_t *v93; // [rsp+A8h] [rbp-B0h]
  __int64 v94; // [rsp+B0h] [rbp-A8h]
  __int64 v95; // [rsp+B8h] [rbp-A0h]
  __int64 v96; // [rsp+C0h] [rbp-98h]
  __int64 v97; // [rsp+C8h] [rbp-90h]
  __int64 v98; // [rsp+D0h] [rbp-88h]
  unsigned __int8 v99; // [rsp+D8h] [rbp-80h]
  char v100; // [rsp+D9h] [rbp-7Fh] BYREF
  char v101; // [rsp+DAh] [rbp-7Eh]
  char v102; // [rsp+DBh] [rbp-7Dh]
  char v103; // [rsp+DCh] [rbp-7Ch]
  unsigned __int16 v104; // [rsp+E0h] [rbp-78h]
  unsigned __int16 v105; // [rsp+E4h] [rbp-74h]
  signed __int32 v106; // [rsp+E8h] [rbp-70h]
  signed __int32 v107; // [rsp+ECh] [rbp-6Ch] BYREF
  signed __int32 i; // [rsp+F0h] [rbp-68h]
  int v109; // [rsp+F4h] [rbp-64h] BYREF
  __int64 v110; // [rsp+F8h] [rbp-60h]
  unsigned __int64 v111; // [rsp+100h] [rbp-58h] BYREF
  unsigned __int64 v112; // [rsp+108h] [rbp-50h] BYREF
  __int64 v113; // [rsp+110h] [rbp-48h] BYREF
  unsigned __int64 v114; // [rsp+118h] [rbp-40h]
  __int64 v115; // [rsp+120h] [rbp-38h] BYREF
  __int64 v116; // [rsp+128h] [rbp-30h]
  __int64 v117; // [rsp+130h] [rbp-28h]
  __int64 v118; // [rsp+140h] [rbp-18h]
  _OWORD v119[2]; // [rsp+148h] [rbp-10h] BYREF
  __int128 *v120; // [rsp+168h] [rbp+10h]
  __int64 v121; // [rsp+170h] [rbp+18h]
  __int128 v122; // [rsp+178h] [rbp+20h]
  __int128 v123; // [rsp+188h] [rbp+30h]
  __int128 v124; // [rsp+198h] [rbp+40h]
  __int128 *v125; // [rsp+1A8h] [rbp+50h]
  __int64 v126; // [rsp+1B0h] [rbp+58h]
  __int128 v127; // [rsp+1B8h] [rbp+60h]
  __int128 v128; // [rsp+1C8h] [rbp+70h]
  __int128 v129; // [rsp+1D8h] [rbp+80h]
  __int128 v130; // [rsp+1E8h] [rbp+90h] BYREF
  __int128 v131; // [rsp+1F8h] [rbp+A0h] BYREF

  v4 = a2;
  LOBYTE(a2) = 1;
  v5 = a3;
  v6 = (unsigned int *)(*(_QWORD *)a3 + 16LL * *(unsigned __int16 *)(a3 + 170));
  v118 = a3;
  v7 = 0;
  v104 = 0;
  v112 = 0LL;
  v111 = 0LL;
  v115 = 0LL;
  v99 = 1;
  v102 = 0;
  v103 = 0;
  if ( a4 )
  {
    a3 = (unsigned __int8)a4;
    a1 = (unsigned __int8)a4;
    LOBYTE(a3) = a4 & 1;
    LOBYTE(a1) = (a4 & 2) != 0;
    v102 = a4 & 1;
    v103 = a1;
  }
  if ( (*(_DWORD *)(v4 + 108) & 2) != 0 )
  {
    StorPortExtendedFunction(47LL, v4, &v111, &v115);
    LOBYTE(a2) = 1;
  }
  if ( (*((_WORD *)v6 + 7) & 1) == *(_WORD *)(v5 + 172) )
    goto LABEL_170;
  while ( 2 )
  {
    if ( !(_BYTE)a2 )
    {
LABEL_170:
      Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledDeviceUsageNoInline(a1, a2, a3);
      *(_WORD *)(v5 + 356) = *(_WORD *)(v5 + 170);
      *(_DWORD *)(v5 + 376) = *v6;
      *(_DWORD *)(v5 + 380) = v6[1];
      *(_DWORD *)(v5 + 384) = v6[2];
      LODWORD(v11) = v6[3];
      *(_DWORD *)(v5 + 388) = (_DWORD)v11;
      *(_WORD *)(v5 + 352) = v7;
      if ( v7 )
      {
        v11 = *(_DWORD **)(v5 + 16);
        *v11 = *(unsigned __int16 *)(v5 + 170);
        _InterlockedOr(v76, 0);
      }
      break;
    }
    v8 = *((unsigned __int16 *)v6 + 5);
    v9 = *((unsigned __int16 *)v6 + 6);
    v10 = *((_WORD *)v6 + 4);
    if ( !*(_WORD *)(v5 + 168) || (LODWORD(v11) = *(_DWORD *)(v4 + 24), ((unsigned __int8)v11 & 1) != 0) )
    {
      if ( (_WORD)v8 )
      {
        LODWORD(v11) = *(_DWORD *)(v4 + 24);
        if ( ((unsigned __int8)v11 & 1) == 0 )
          break;
        v14 = *(_QWORD *)(v4 + 936) - 208LL;
        v105 = *(_WORD *)(v4 + 326);
        v12 = 208 * v8 + v14;
        v13 = *(_WORD *)(v4 + 328);
      }
      else
      {
        v12 = v4 + 336;
        v105 = *(_WORD *)(v4 + 324);
        v13 = v105;
      }
      if ( (unsigned __int16)v9 < v13 )
      {
        v15 = *(_DWORD *)(32 * v9 + *(_QWORD *)(v12 + 32));
        LOBYTE(v11) = v15;
        for ( i = v15; ; i = (int)v11 )
        {
          v107 = 0;
          if ( ((unsigned __int8)v11 & 8) == 0 )
            goto LABEL_172;
          v107 = i;
          _interlockedbittestandreset(&v107, 3u);
          v16 = 32 * v9 + *(_QWORD *)(v12 + 32);
          LODWORD(v11) = _InterlockedCompareExchange((volatile signed __int32 *)v16, v107, v15);
          if ( v15 == (_DWORD)v11 )
            break;
          v15 = (int)v11;
        }
        _mm_lfence();
        v11 = *(_DWORD **)(v12 + 32);
        v17 = *(_QWORD *)&v11[8 * v9 + 4];
        if ( !v17 )
          break;
        *(_WORD *)(v12 + 54) = v10;
        if ( (v15 & 0x40) != 0 )
        {
          v18 = 0LL;
          v110 = 0LL;
        }
        else
        {
          if ( *(_BYTE *)(v17 + 2) == 40 )
            v18 = *(_QWORD *)(v17 + 104);
          else
            v18 = *(_QWORD *)(v17 + 56);
          v110 = v18;
          if ( (v18 & 0xFFF) != 0 )
          {
            v18 = v18 - (v18 & 0xFFF) + 4096;
            v110 = v18;
          }
        }
        if ( (v15 & 1) != 0 )
        {
          *(_DWORD *)(32 * v9 + *(_QWORD *)(v12 + 32)) = 0;
          *(_QWORD *)(32 * v9 + *(_QWORD *)(v12 + 32) + 16) = 0LL;
LABEL_155:
          ++*(_DWORD *)(v12 + 140);
          _InterlockedDecrement16((volatile signed __int16 *)(v12 + 136));
LABEL_156:
          if ( *(_QWORD *)(v12 + 144) )
            ProcessPendingIoCommands(v4, v12, 0LL, 0LL, v77);
          v71 = (unsigned int)v105 - 1;
          if ( *(unsigned __int16 *)(v5 + 170) >= (int)v71 )
          {
            Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledDeviceUsageNoInline(v71, v16, v18);
            v26 = *(_WORD *)(v5 + 172) == 1;
            *(_WORD *)(v5 + 170) = 0;
            *(_WORD *)(v5 + 172) = !v26;
          }
          else if ( (unsigned int)Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledDeviceUsageNoInline(
                                    v71,
                                    v16,
                                    v18) )
          {
            _InterlockedIncrement16((volatile signed __int16 *)(v5 + 170));
          }
          else
          {
            ++*(_WORD *)(v5 + 170);
          }
          v6 = (unsigned int *)(*(_QWORD *)v5 + 16LL * *(unsigned __int16 *)(v5 + 170));
          v26 = *(_BYTE *)(v5 + 248) == 0;
          v7 = ++v104;
          if ( v26 || (unsigned int)v104 < *(_DWORD *)(v4 + 72) )
          {
            if ( CheckDpcWatchdogTimerExpireSoon(v4, v103, a3, v72) )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v4 + 4008));
              LOBYTE(a2) = 0;
              v99 = 0;
            }
            else
            {
              a2 = v99;
            }
          }
          else
          {
            LOBYTE(a2) = 0;
            v99 = 0;
          }
          if ( (*((_WORD *)v6 + 7) & 1) != *(_WORD *)(v5 + 172) )
            continue;
          goto LABEL_170;
        }
        if ( (v15 & 0x40) == 0 && !v18 )
        {
          *(_QWORD *)(32 * v9 + *(_QWORD *)(v12 + 32) + 16) = 0LL;
          goto LABEL_156;
        }
        v19 = *((_WORD *)v6 + 7);
        v114 = 0LL;
        v20 = v17;
        v117 = 0LL;
        v116 = 0LL;
        v106 = 1;
        v101 = 0;
        if ( (v15 & 0x20) != 0 )
        {
          v21 = *(_QWORD *)(v12 + 40);
          v114 = *(_QWORD *)(32 * v9 + *(_QWORD *)(v12 + 32) + 8);
          if ( v21 )
          {
            v22 = *(_QWORD *)(v21 + 16 * v9 + 8);
            v117 = *(_QWORD *)(v21 + 16 * v9);
            v116 = v22;
          }
        }
        v16 = 32 * v9;
        *(_QWORD *)(32 * v9 + *(_QWORD *)(v12 + 32) + 16) = 0LL;
        if ( (v15 & 0x40) != 0 )
        {
          v23 = *(_BYTE *)(v17 + 3);
        }
        else
        {
          if ( *(_BYTE *)(v17 + 2) != 40 )
            goto LABEL_42;
          if ( *(_DWORD *)(v17 + 20) == 10 )
          {
            v16 = v17 + *(unsigned int *)(v17 + 120);
            if ( v16 )
            {
              *(_DWORD *)(v16 + 96) = *v6;
              *(_WORD *)(v16 + 86) = v19;
            }
          }
          if ( *(_BYTE *)(v17 + 2) == 40 )
            v23 = *(_BYTE *)(*(unsigned int *)(v17 + 52) + v17 + 10);
          else
LABEL_42:
            v23 = *(_BYTE *)(v17 + 7);
          *(_WORD *)(v18 + 4218) = v19;
        }
        v24 = v23;
        if ( (v19 & 0xE00) != 0 || (v19 & 0x1FE) != 0 )
        {
          if ( (v15 & 0x40) != 0 )
          {
            v100 = 0;
            if ( (v15 & 0x80u) == 0 )
              v32 = v17;
            else
              v32 = *(_QWORD *)(v17 + 16);
            v33 = NVMeMapError(v4, 0LL, v32, 0, 0, v19, &v100);
            v18 = v33;
            v106 = v33;
            if ( v100 )
            {
              LODWORD(v18) = v33 | 0x10000;
              v106 = v18;
            }
            if ( (*(_DWORD *)(v4 + 4064) & 0x100) != 0 )
              v106 = 56;
          }
          else
          {
            NVMeMapError(v4, v17, 0LL, 0, 0, v19, 0LL);
          }
          if ( *(_DWORD *)(v4 + 224) > (unsigned int)v24 )
          {
            v34 = *(_QWORD *)(v4 + 8 * v24 + 1672);
            if ( v34 )
              ++*(_QWORD *)(v34 + 32);
          }
          v35 = *(_QWORD *)(v4 + 176);
          v109 = 0;
          v109 = *(_DWORD *)(v35 + 28);
          if ( (v109 & 2) != 0 )
          {
            v79 = (__int64)&v109;
            LODWORD(v78) = 4;
            v77 = L"Controller Fatal Status is set";
            StorPortExtendedFunction(98LL, v4, 0LL, 7LL);
            if ( *(_QWORD *)(v4 + 3936) )
            {
              v113 = 0LL;
              if ( !(unsigned int)StorPortExtendedFunction(29LL, v4, &v113, v36) )
              {
                v77 = 0LL;
                StorPortExtendedFunction(30LL, v4, NVMeControllerPanicResetActionWorkItem, v113);
              }
            }
            else
            {
              NVMeControllerAsyncReset(v4, 0LL, 0LL, 0LL);
            }
          }
        }
        else
        {
          if ( (v15 & 0x40) == 0 )
            *(_BYTE *)(v17 + 3) = 1;
          if ( *(_DWORD *)(v4 + 224) > (unsigned int)v23 )
          {
            v25 = v4 + 8LL * v23;
            if ( *(_QWORD *)(v25 + 1672) )
            {
              v26 = (unsigned int)Feature_FixKcsanRacyAccessesInStorNVMe__private_IsEnabledDeviceUsageNoInline(
                                    510LL,
                                    v16,
                                    v18) == 0;
              v27 = *(_QWORD *)(v25 + 1672);
              if ( v26 )
                ++*(_QWORD *)(v27 + 24);
              else
                _InterlockedIncrement64((volatile signed __int64 *)(v27 + 24));
            }
          }
        }
        v28 = *(_BYTE *)(v4 + 21) & 8;
        if ( (v15 & 0x40) == 0 )
        {
          if ( v28 )
          {
            if ( *(_BYTE *)(v17 + 2) == 40 )
              v47 = *(_QWORD *)(v17 + 104);
            else
              v47 = *(_QWORD *)(v17 + 56);
            if ( (v47 & 0xFFF) != 0 )
              v47 = v47 - (v47 & 0xFFF) + 4096;
            v48 = *(_DWORD *)(v47 + 4100);
            if ( v48 == -1 || (v49 = *(_DWORD *)(v4 + 224), v50 = 0, !v49) )
            {
LABEL_110:
              v51 = 0LL;
            }
            else
            {
              while ( 1 )
              {
                v51 = *(_QWORD *)(v4 + 8LL * v50 + 1672);
                if ( v51 )
                {
                  if ( *(_DWORD *)(v51 + 16) == v48 )
                    break;
                }
                if ( ++v50 >= v49 )
                  goto LABEL_110;
              }
            }
            if ( (*(_BYTE *)(v47 + 4225) & 1) != 0 )
            {
              v52 = 272LL;
              v53 = L"Admin Command Completion";
            }
            else
            {
              v52 = 144LL;
              v53 = L"NVM Command Completion";
            }
            v54 = *((unsigned __int16 *)v6 + 7);
            v55 = v6[2];
            v56 = *v6;
            v98 = 0LL;
            v97 = 0LL;
            v96 = 0LL;
            v95 = 0LL;
            v94 = v55;
            v93 = L"DW2";
            v92 = v56;
            v91 = L"DW0";
            v90 = v54;
            v89 = L"Complete Status";
            v57 = *((unsigned __int16 *)v6 + 6);
            v88 = (v54 >> 9) & 7;
            v87 = L"Status.SCT";
            v86 = (unsigned __int8)(v54 >> 1);
            v85 = L"Status.SC";
            v84 = v57;
            v83 = L"CID";
            v82 = v17;
            LODWORD(v81) = 0;
            v80 = 4;
            v79 = v52;
            v78 = v53;
            LODWORD(v77) = 4;
            StorPortExtendedFunction(87LL, v4, v51, 0LL);
            v20 = v17;
          }
          v58 = *(void (__fastcall **)(__int64, __int64, unsigned int *))(v110 + 4192);
          if ( v58 )
            v58(v4, v17, v6);
          else
            *(_BYTE *)(v110 + 4225) |= 8u;
          goto LABEL_118;
        }
        if ( !v28 )
        {
LABEL_83:
          if ( *(_QWORD *)(v17 + 8) )
          {
            v44 = *(_QWORD *)(v12 + 200);
            do
            {
              v16 = v44;
              *(_QWORD *)(*(_QWORD *)(v17 + 8) + 24LL) = v44;
              v44 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 200), *(_QWORD *)(v17 + 8), v44);
            }
            while ( v44 != v16 );
            *(_QWORD *)(v17 + 8) = 0LL;
          }
          if ( (v15 & 0x80u) == 0 )
          {
            if ( *(_WORD *)v17 == 1 || _InterlockedExchangeAdd16((volatile signed __int16 *)v17, 0xFFFFu) == 1 )
            {
              LOBYTE(v46) = 1;
              goto LABEL_97;
            }
          }
          else
          {
            v45 = *(_QWORD *)(v17 + 16);
            if ( v106 != 1 && *(_DWORD *)(v45 + 16) == 1 )
              _InterlockedCompareExchange((volatile signed __int32 *)(v45 + 16), v106, 1);
            StorPortExtendedFunction(1LL, v4, v17, v9);
            v46 = _InterlockedExchangeAdd16((volatile signed __int16 *)v45, 0xFFFFu);
            if ( v46 == 1 )
            {
              v20 = v45;
              goto LABEL_97;
            }
          }
          LOBYTE(v46) = v101;
LABEL_97:
          if ( !(_BYTE)v46 )
          {
LABEL_154:
            v5 = v118;
            goto LABEL_155;
          }
LABEL_118:
          v59 = v114;
          if ( v114 )
          {
            v60 = 0LL;
            StorPortExtendedFunction(47LL, v4, &v111, &v112);
            if ( (*(_BYTE *)(v4 + 21) & 0x10) != 0 )
            {
              if ( v112 >= v59 && v111 )
                v60 = 10000 * (1000 * ((v112 - v59) % v111) % v111) / v111
                    + 10000 * (1000 * ((v112 - v59) / v111) + 1000 * ((v112 - v59) % v111) / v111);
              if ( (v15 & 0x40) != 0 )
              {
                v61 = v20;
                v62 = 8194LL;
              }
              else
              {
                v61 = v60;
                v62 = 4102LL;
              }
              StorPortNotification(v62, v4, v61);
            }
            if ( (*(_DWORD *)(v4 + 108) & 2) != 0 )
            {
              if ( (v15 & 0x40) != 0 )
              {
                v126 = 0LL;
                v130 = 0LL;
                v128 = 0LL;
                LOWORD(v130) = 1;
                BYTE10(v130) = *(_BYTE *)(v20 + 3);
                v127 = 0LL;
                v125 = &v130;
                v129 = 0LL;
                DWORD1(v130) = 4;
                StorPortNotification(8193LL, v4, v20);
                v63 = v127;
              }
              else
              {
                v64 = (int *)(v17 + 60);
                if ( *(_BYTE *)(v17 + 2) != 40 )
                  v64 = (int *)(v17 + 16);
                v63 = *v64;
              }
              RecordCommandTimingHistory(v4, v63, v59, v117, v116, v115, v112, v111);
            }
          }
          if ( (v15 & 0x40) == 0 )
          {
            if ( (*(_BYTE *)(v110 + 4225) & 8) != 0 )
              NVMeRequestComplete(v4, v17, v102);
            goto LABEL_154;
          }
          v65 = v106;
          if ( v106 == 1 && (v65 = *(_DWORD *)(v20 + 16), v65 == 1) )
          {
            if ( *(_DWORD *)(v20 + 4) )
            {
              *(_WORD *)v20 = 1;
              *(_BYTE *)(v20 + 2) = 0;
              ProcessPendingIoCommands(v4, v12, v20, 0LL, v77);
              goto LABEL_154;
            }
          }
          else if ( (v65 & 0x10000) != 0 && *(_BYTE *)(v20 + 2) < 4u )
          {
            v66 = *(_BYTE *)(v20 + 3);
            v121 = 0LL;
            v122 = 0LL;
            v131 = 0LL;
            BYTE10(v131) = v66;
            v123 = 0LL;
            v120 = &v131;
            v124 = 0LL;
            LOWORD(v131) = 1;
            memset(v119, 0, sizeof(v119));
            DWORD1(v131) = 4;
            StorPortNotification(8193LL, v4, v20);
            ++*(_BYTE *)(v20 + 2);
            v67 = v122;
            *(_DWORD *)(v20 + 4) = v122;
            *(_WORD *)v20 = 1;
            *(_DWORD *)(v20 + 16) = 1;
            v68 = *(_DWORD *)(v4 + 120);
            if ( v68 && v121 )
            {
              v69 = *(_DWORD *)(*(_QWORD *)(v4 + 8LL * *(unsigned __int8 *)(v20 + 3) + 1672) + 52LL);
              *(_DWORD *)(v20 + 4) = v67 - (-v69 & (v69 + v68 - 1));
            }
            v77 = (const wchar_t *)v119;
            StorPortExtendedFunction(93LL, v4, 1LL, v12 + 64);
            *(_DWORD *)(v20 + 16) = *(_DWORD *)(v4 + 4284);
            if ( *(_QWORD *)(v12 + 160) )
              *(_QWORD *)(*(_QWORD *)(v12 + 168) + 8LL) = v20;
            else
              *(_QWORD *)(v12 + 160) = v20;
            *(_QWORD *)(v12 + 168) = v20;
            StorPortNotification(4100LL, v4, v119);
            if ( *(_QWORD *)(v4 + 4272)
              && !*(_DWORD *)(v4 + 4280)
              && !_InterlockedExchange((volatile __int32 *)(v4 + 4280), 1) )
            {
              v70 = *(_QWORD *)(v4 + 4272);
              v79 = 250000LL;
              v78 = (const wchar_t *)1000000;
              v77 = 0LL;
              StorPortExtendedFunction(33LL, v4, v70, IoTimeoutCallback);
            }
            goto LABEL_154;
          }
          StorPortNotification(0x2000LL, v4, v20);
          goto LABEL_154;
        }
        v29 = *(unsigned __int8 *)(v17 + 3);
        if ( (unsigned int)v29 < *(_DWORD *)(v4 + 224) && (_mm_lfence(), (v30 = *(_QWORD *)(v4 + 8 * v29 + 1672)) != 0) )
        {
          v31 = *(_DWORD *)(v30 + 16);
          if ( v31 == -1 )
            goto LABEL_81;
        }
        else
        {
          v31 = 0;
        }
        v37 = *(_DWORD *)(v4 + 224);
        v38 = 0;
        if ( v37 )
        {
          do
          {
            v39 = *(_QWORD *)(v4 + 8LL * v38 + 1672);
            if ( v39 )
            {
              if ( *(_DWORD *)(v39 + 16) == v31 )
                goto LABEL_82;
            }
          }
          while ( ++v38 < v37 );
        }
LABEL_81:
        v39 = 0LL;
LABEL_82:
        v40 = *((unsigned __int16 *)v6 + 7);
        v41 = v6[2];
        v42 = *v6;
        v98 = 0LL;
        v97 = 0LL;
        v96 = 0LL;
        v95 = 0LL;
        v94 = v41;
        v93 = L"DW2";
        v92 = v42;
        v91 = L"DW0";
        v90 = v40;
        v89 = L"Complete Status";
        v43 = *((unsigned __int16 *)v6 + 6);
        v88 = (v40 >> 9) & 7;
        v87 = L"Status.SCT";
        v86 = (unsigned __int8)(v40 >> 1);
        v85 = L"Status.SC";
        v84 = v43;
        v83 = L"CID";
        v82 = 0LL;
        LODWORD(v81) = 0;
        v80 = 4;
        v79 = 144LL;
        v78 = L"NVM Command Completion";
        LODWORD(v77) = 4;
        StorPortExtendedFunction(87LL, v4, v39, 0LL);
        goto LABEL_83;
      }
      if ( (*(_BYTE *)(v4 + 21) & 2) != 0 )
      {
        v73 = *((unsigned __int16 *)v6 + 7);
        v98 = 0LL;
        v97 = 0LL;
        v96 = 0LL;
        v95 = 0LL;
        v94 = 0LL;
        v93 = 0LL;
        v74 = *(unsigned __int16 *)(v5 + 168);
        v92 = (v73 >> 9) & 7;
        v91 = L"Status.SCT";
        v90 = (unsigned __int8)(v73 >> 1);
        v89 = L"Status.SC";
        v88 = v74;
        v87 = L"CQId";
        v86 = v8;
        v85 = L"SQId";
        v84 = v9;
        v83 = L"CID";
        v82 = 0LL;
        LODWORD(v81) = 0;
        v80 = 2;
        v79 = 1LL;
        v78 = L"NVMe Invalid Command Id";
        LODWORD(v77) = 6;
        StorPortExtendedFunction(87LL, v4, 0LL, 1LL);
      }
      LOBYTE(v11) = IsNVMeControllerOnFatalError(v4);
      if ( (_BYTE)v11 )
      {
        if ( *(_QWORD *)(v4 + 3936) )
          LOBYTE(v11) = NVMeQueueWorkItem(v4, NVMeControllerPanicResetActionWorkItem, 0LL);
        else
          LOBYTE(v11) = NVMeControllerAsyncReset(v4, 0LL, 0LL, 0LL);
      }
    }
    break;
  }
LABEL_172:
  if ( (*(_BYTE *)(v4 + 21) & 0x20) != 0 )
  {
    LODWORD(v11) = *(_DWORD *)(v4 + 16) - 1;
    if ( (unsigned int)v11 <= 1 )
    {
      v11 = *(_DWORD **)(v4 + 176);
      v11[4] = 1 << *(_WORD *)(v5 + 176);
      _InterlockedOr(v76, 0);
      *(_BYTE *)(v4 + 21) &= ~0x20u;
    }
  }
  return (char)v11;
}
