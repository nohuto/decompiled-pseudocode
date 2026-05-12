/*
 * XREFs of WaitForNVMeCommandCompleteWithCustomTimeout @ 0x1400BFF70
 * Callers:
 *     WaitForNVMeCommandComplete @ 0x1400BFF04 (WaitForNVMeCommandComplete.c)
 * Callees:
 *     StorDelayExecution @ 0x14002AE80 (StorDelayExecution.c)
 *     StorCheckDpcWatchdogTimerExpire @ 0x14008EE70 (StorCheckDpcWatchdogTimerExpire.c)
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     IsNvmeControllerGone @ 0x1400BE914 (IsNvmeControllerGone.c)
 *     IsNvmeExtendedCommandCompleted @ 0x1400BE974 (IsNvmeExtendedCommandCompleted.c)
 *     IsRequestPendingCompletion @ 0x1400BE9A0 (IsRequestPendingCompletion.c)
 *     StorPushRequestToDeviceQueue @ 0x1401277F0 (StorPushRequestToDeviceQueue.c)
 *     ProcessNVMeCompletionQueues @ 0x14012D930 (ProcessNVMeCompletionQueues.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WaitForNVMeCommandCompleteWithCustomTimeout(__int64 SystemArgument2, __int64 a2, char a3)
{
  __int16 v3; // di
  unsigned int v6; // r14d
  __int64 v8; // rcx
  int v9; // r9d
  signed int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // r13
  __int64 v14; // rcx
  int v15; // ecx
  ULONG v16; // ebx
  int v17; // r10d
  int v18; // ecx
  bool v19; // dl
  bool v20; // al
  unsigned int *v21; // r8
  __int64 v22; // r14
  __int64 v23; // rax
  int v24; // ebx
  unsigned int v25; // ebx
  ULONG v26; // r14d
  __int16 v27; // r12
  unsigned int v28; // r10d
  char v29; // r13
  int v30; // ecx
  char v31; // cl
  int v32; // ecx
  unsigned int v33; // edx
  unsigned int v34; // edx
  int v35; // ecx
  unsigned int v36; // edx
  bool v37; // zf
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  __int64 v41; // r8
  __int64 v42; // rdx
  unsigned int v43; // r8d
  __int64 v44; // rcx
  unsigned int v45; // edx
  __int64 v46; // r14
  bool v47; // zf
  int v48; // ecx
  unsigned int v49; // edx
  bool v50; // zf
  __int64 v51; // rax
  _QWORD *v52; // rcx
  __int128 v53; // xmm1
  void (__fastcall *v54)(__int64, _QWORD, _QWORD); // rax
  __int64 v55; // rax
  __int64 v56; // r9
  __int64 v57; // rax
  wchar_t *v58; // rdx
  signed __int32 v59[8]; // [rsp+0h] [rbp-C9h] BYREF
  bool v60; // [rsp+A0h] [rbp-29h]
  char v61; // [rsp+A1h] [rbp-28h]
  ULONG v62; // [rsp+A8h] [rbp-21h]
  int v63; // [rsp+ACh] [rbp-1Dh] BYREF
  __int64 v64; // [rsp+B0h] [rbp-19h]
  ULONG MicroSeconds; // [rsp+B8h] [rbp-11h]
  unsigned int v66; // [rsp+BCh] [rbp-Dh]
  __int64 v67; // [rsp+C0h] [rbp-9h]
  __int128 v68; // [rsp+C8h] [rbp-1h]
  __int128 v69; // [rsp+D8h] [rbp+Fh]
  char v70; // [rsp+130h] [rbp+67h]

  HIBYTE(v3) = 0;
  v63 = 0;
  v6 = 0;
  v60 = 0;
  v70 = 0;
  v61 = 0;
  if ( !*(_QWORD *)(SystemArgument2 + 1288) )
    return 3221225473LL;
  if ( IsNvmeControllerGone(SystemArgument2) )
  {
    v10 = -1073741436;
LABEL_178:
    v29 = 0;
    goto LABEL_179;
  }
  v11 = *(unsigned __int16 *)(a2 + 4252);
  if ( (_WORD)v11 )
  {
    if ( (unsigned __int16)v11 > *(_WORD *)(v8 + 22) )
    {
      v10 = -1073741595;
      goto LABEL_178;
    }
    v13 = *(_QWORD *)(SystemArgument2 + 864) - 128LL;
    v67 = 192 * v11 + *(_QWORD *)(SystemArgument2 + 728) - 192LL;
    v14 = *(unsigned __int16 *)(v67 + 138);
    v64 = v14;
    v12 = (v14 << 7) + v13;
  }
  else
  {
    v12 = *(_QWORD *)(v8 + 856);
    v67 = *(_QWORD *)(v8 + 712);
    LOWORD(v64) = 0;
  }
  v15 = 10000000;
  if ( v9 )
    v15 = v9;
  v16 = 50;
  MicroSeconds = 50;
  v66 = 10 * ((v15 + 9) / 0xAu);
  v62 = 1000;
  if ( v66 / 0xA <= 0x3E8 )
  {
    v62 = v66 / 0xA;
    if ( v66 / 0xA <= 0x32 )
    {
      v16 = v66 / 0xA;
      MicroSeconds = v66 / 0xA;
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(v12 + 56), 1u);
  while ( **(_DWORD **)(SystemArgument2 + 1288) != 1
       || *(_DWORD *)(*(_QWORD *)(SystemArgument2 + 1288) + 4LL)
       || (*(_DWORD *)(SystemArgument2 + 1072) & 0x10) == 0 )
  {
    StorDelayExecution(v16);
    if ( a3 && IsRequestPendingCompletion(SystemArgument2, v64, &v63) )
      ProcessNVMeCompletionQueues((PVOID)SystemArgument2);
    if ( IsNvmeExtendedCommandCompleted(*(_QWORD *)(a2 + 4240)) )
    {
      v32 = *(_DWORD *)(a2 + 4256) & 0x80;
      v10 = v32 != 0 ? 0xC000042B : 0;
      v19 = v32 != 0;
      v20 = v32 == 0;
      v6 = v32 != 0 ? 2 : 0;
LABEL_56:
      v60 = v19;
LABEL_57:
      _InterlockedDecrement((volatile signed __int32 *)(v12 + 56));
LABEL_58:
      v31 = v61;
      if ( v20 )
      {
        v33 = *(unsigned __int16 *)(a2 + 4260);
        if ( ((v33 >> 9) & 7) != 0 )
        {
          if ( ((*(unsigned __int16 *)(a2 + 4260) >> 9) & 7) != 1 )
          {
            if ( ((*(unsigned __int16 *)(a2 + 4260) >> 9) & 7) == 2 )
            {
              v34 = v33 >> 1;
              if ( (unsigned __int8)v34 != 128
                && (unsigned __int8)v34 != 129
                && (unsigned __int8)v34 != 130
                && (unsigned __int8)v34 != 131
                && (unsigned __int8)v34 != 132 )
              {
                v35 = (unsigned __int8)v34 - 133;
                if ( (unsigned __int8)v34 != 133 )
                {
LABEL_149:
                  if ( v35 == 1 )
                  {
LABEL_150:
                    v10 = -1073741790;
                    goto LABEL_84;
                  }
                }
              }
            }
LABEL_158:
            v10 = -1073741435;
LABEL_84:
            if ( v10 < 0 )
            {
              v29 = v70;
              goto LABEL_191;
            }
            v27 = v64;
            v41 = v67;
LABEL_86:
            if ( (*(_BYTE *)(SystemArgument2 + 1360) & 8) != 0 )
            {
              v37 = *(_DWORD *)SystemArgument2 == 1314276178;
              LOWORD(v68) = *(_WORD *)(v41 + 136);
              *((_QWORD *)&v68 + 1) = *(_QWORD *)(a2 + 4184);
              DWORD1(v68) = *(_DWORD *)(a2 + 4096);
              WORD4(v69) = *(_WORD *)(a2 + 4260);
              *(_DWORD *)((char *)&v69 + 10) = 0;
              HIWORD(v69) = 0;
              WORD1(v68) = v27;
              *(_QWORD *)&v69 = 0LL;
              if ( v37 )
              {
                v42 = *(_QWORD *)(*(_QWORD *)(SystemArgument2 + 1368) + 8LL * KeGetCurrentProcessorNumberEx(0LL));
                v43 = *(_DWORD *)(v42 + 12);
                v44 = v42 + 64;
                _InterlockedOr(v59, 0);
                if ( v43 )
                {
                  if ( v42 != -64 )
                  {
                    v45 = _InterlockedIncrement((volatile signed __int32 *)v42) % v43;
                    v46 = v44 + ((unsigned __int64)v45 << 6);
                    if ( (*(_DWORD *)(SystemArgument2 + 1336) & 1) != 0 )
                      *(_DWORD *)(v46 + 4) = _InterlockedIncrement((volatile signed __int32 *)(SystemArgument2 + 1408));
                    else
                      *(_DWORD *)(v46 + 4) = v45;
                    *(_WORD *)v46 = 1;
                    v52 = (_QWORD *)(v46 + 8);
                    LOBYTE(v3) = v27 != 0;
                    *(_WORD *)(v46 + 2) = v3;
                    if ( (*(_DWORD *)(SystemArgument2 + 1336) & 2) != 0 )
                      KeQuerySystemTimePrecise(v52);
                    else
                      *v52 = MEMORY[0xFFFFF78000000014];
                    v53 = v69;
                    *(_OWORD *)(v46 + 16) = v68;
                    *(_OWORD *)(v46 + 32) = v53;
                  }
                }
              }
            }
            return (unsigned int)v10;
          }
          v36 = v33 >> 1;
          if ( (unsigned __int8)v36 > 0x80u )
          {
            if ( (unsigned __int8)v36 == 129 )
              goto LABEL_83;
            v40 = (unsigned __int8)v36 - 130;
            if ( (unsigned __int8)v36 == 130 )
              goto LABEL_150;
          }
          else
          {
            if ( (unsigned __int8)v36 == 128 )
              goto LABEL_83;
            if ( (unsigned __int8)v36 <= 0x11u )
            {
              if ( (unsigned __int8)v36 != 17 )
              {
                if ( (unsigned __int8)v36 <= 9u )
                {
                  if ( (unsigned __int8)v36 != 9
                    && (_BYTE)v36
                    && (unsigned __int8)v36 != 1
                    && (unsigned __int8)v36 != 2
                    && (unsigned __int8)v36 != 3 )
                  {
                    v38 = (unsigned __int8)v36 - 5;
                    v37 = (unsigned __int8)v36 == 5;
                    goto LABEL_80;
                  }
                  goto LABEL_83;
                }
                if ( (unsigned __int8)v36 == 10 )
                  goto LABEL_83;
                if ( (unsigned __int8)v36 != 11 )
                {
                  if ( (unsigned __int8)v36 == 12
                    || (unsigned __int8)v36 == 13
                    || (unsigned __int8)v36 == 14
                    || (unsigned __int8)v36 == 15 )
                  {
                    goto LABEL_83;
                  }
                  if ( (unsigned __int8)v36 != 16 )
                    goto LABEL_158;
                }
              }
              v10 = -2147483210;
              goto LABEL_84;
            }
            if ( (unsigned __int8)v36 <= 0x1Au )
            {
              if ( (unsigned __int8)v36 != 26 && (unsigned __int8)v36 != 18 && (unsigned __int8)v36 != 19 )
              {
                if ( (unsigned __int8)v36 == 20 )
                {
                  v10 = -1073741800;
                  goto LABEL_84;
                }
                if ( (unsigned __int8)v36 == 21 )
                  goto LABEL_158;
                if ( (unsigned __int8)v36 != 22 )
                {
                  v48 = (unsigned __int8)v36 - 24;
                  v47 = (unsigned __int8)v36 == 24;
                  goto LABEL_108;
                }
              }
              goto LABEL_110;
            }
            switch ( (unsigned __int8)v36 )
            {
              case 0x1Bu:
                v10 = -1073741637;
                goto LABEL_84;
              case 0x1Cu:
                goto LABEL_83;
              case 0x1Eu:
                goto LABEL_150;
            }
            v38 = (unsigned __int8)v36 - 31;
            v37 = (unsigned __int8)v36 == 31;
LABEL_80:
            if ( v37 || (v39 = v38 - 1) == 0 || (v40 = v39 - 1) == 0 )
            {
LABEL_83:
              v10 = -1073741808;
              goto LABEL_84;
            }
          }
LABEL_138:
          v50 = v40 == 1;
LABEL_157:
          if ( !v50 )
            goto LABEL_158;
          goto LABEL_83;
        }
        v49 = v33 >> 1;
        if ( (unsigned __int8)v49 > 0x80u )
        {
          if ( (unsigned __int8)v49 == 129 )
            goto LABEL_83;
          v40 = (unsigned __int8)v49 - 130;
          if ( (unsigned __int8)v49 == 130 )
          {
            v10 = -1073741661;
            goto LABEL_84;
          }
          goto LABEL_138;
        }
        if ( (unsigned __int8)v49 == 128 )
          goto LABEL_83;
        if ( (unsigned __int8)v49 > 0xEu )
        {
          if ( (unsigned __int8)v49 <= 0x16u )
          {
            if ( (unsigned __int8)v49 == 22
              || (unsigned __int8)v49 == 15
              || (unsigned __int8)v49 == 16
              || (unsigned __int8)v49 == 17
              || (unsigned __int8)v49 == 18
              || (unsigned __int8)v49 == 19 )
            {
              goto LABEL_83;
            }
            v35 = (unsigned __int8)v49 - 20;
            if ( (unsigned __int8)v49 != 20 )
              goto LABEL_149;
            goto LABEL_110;
          }
          if ( (unsigned __int8)v49 == 24 )
            goto LABEL_83;
          if ( (unsigned __int8)v49 == 25 || (unsigned __int8)v49 == 26 )
          {
            v10 = -1073741643;
            goto LABEL_84;
          }
          if ( (unsigned __int8)v49 != 27 )
          {
            if ( (unsigned __int8)v49 == 28 )
              goto LABEL_158;
            v50 = (unsigned __int8)v49 == 30;
            goto LABEL_157;
          }
        }
        else
        {
          if ( (unsigned __int8)v49 == 14 )
            goto LABEL_83;
          if ( (unsigned __int8)v49 > 7u )
          {
            if ( (unsigned __int8)v49 != 8 && (unsigned __int8)v49 != 9 && (unsigned __int8)v49 != 10 )
            {
              if ( (unsigned __int8)v49 == 11 )
                goto LABEL_83;
              v40 = (unsigned __int8)v49 - 12;
              if ( (unsigned __int8)v49 == 12 )
              {
                v10 = -1073740758;
                goto LABEL_84;
              }
              goto LABEL_138;
            }
          }
          else if ( (unsigned __int8)v49 != 7 )
          {
            if ( !(_BYTE)v49 )
            {
              v10 = 0;
              goto LABEL_84;
            }
            if ( (unsigned __int8)v49 == 1 || (unsigned __int8)v49 == 2 )
              goto LABEL_83;
            if ( (unsigned __int8)v49 == 3 || (unsigned __int8)v49 == 4 )
              goto LABEL_158;
            v48 = (unsigned __int8)v49 - 5;
            v47 = (unsigned __int8)v49 == 5;
LABEL_108:
            if ( !v47 && v48 != 1 )
              goto LABEL_158;
LABEL_110:
            v10 = -1073741436;
            goto LABEL_84;
          }
        }
        v10 = -1073741248;
        goto LABEL_84;
      }
      v27 = v64;
      v41 = v67;
      v60 = v19;
      if ( v10 >= 0 )
        goto LABEL_86;
      v29 = v70;
      if ( v19 || (v60 = 0, v70) )
      {
        v28 = 1;
        goto LABEL_169;
      }
LABEL_166:
      if ( v31 )
        goto LABEL_182;
LABEL_179:
      v54 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(a2 + 4192);
      if ( v54 )
        v54(SystemArgument2, *(_QWORD *)(a2 + 4200), 0LL);
      else
        _interlockedbittestandreset((volatile signed __int32 *)(**(_QWORD **)(a2 + 4240) + 4256LL), 3u);
      goto LABEL_182;
    }
    if ( v6 > v66 )
    {
      v19 = 1;
      v10 = -1073741643;
      LOBYTE(v6) = 3;
      v20 = 0;
      goto LABEL_56;
    }
    v6 += v16;
    v16 = v62;
    MicroSeconds = v62;
    if ( StorCheckDpcWatchdogTimerExpire(0xAu, 5u) )
    {
      v70 = 1;
      v10 = -1073741595;
      LOBYTE(v6) = 4;
      v20 = 0;
      v19 = 0;
      goto LABEL_57;
    }
  }
  if ( IsNvmeExtendedCommandCompleted(*(_QWORD *)(a2 + 4240)) )
  {
    v18 = *(_DWORD *)(a2 + 4256) & 0x80;
    v10 = v18 != 0 ? 0xC000042B : 0;
    v19 = v18 != 0;
    v20 = v18 == 0;
    LOBYTE(v6) = v18 != 0;
    goto LABEL_56;
  }
  if ( ((*(_DWORD *)(a2 + 4256) & 0x40) != 0 || (*(_DWORD *)(a2 + 4256) & 0x2000) != 0)
    && (*(_DWORD *)(**(_QWORD **)(a2 + 4240) + 4256LL) & 0x4000) != 0 )
  {
    v21 = *(unsigned int **)(a2 + 4240);
    v61 = v17;
    v22 = v21[16];
    if ( *(_QWORD *)v21 )
    {
      v23 = *(_QWORD *)(*(_QWORD *)v21 + 4184LL);
      if ( v23 )
        *(_BYTE *)(*(_QWORD *)(v23 + 184) + 3LL) |= v17;
    }
    v24 = v17 & *(_DWORD *)(*(_QWORD *)v21 + 4256LL);
    StorPushRequestToDeviceQueue(*(_QWORD *)(SystemArgument2 + 1024), (unsigned int)v22);
    _InterlockedOr(v59, 0);
    if ( !_InterlockedCompareExchange(
            *(volatile signed __int32 **)(*(_QWORD *)(SystemArgument2 + 1024) + 8 * v22 + 64),
            1,
            0) )
      _InterlockedAdd((volatile signed __int32 *)(SystemArgument2 + 956), 1u);
    if ( !(_BYTE)v24 )
      _InterlockedAdd((volatile signed __int32 *)(SystemArgument2 + 960), 1u);
  }
  v25 = 0;
  _InterlockedDecrement((volatile signed __int32 *)(v12 + 56));
  v26 = MicroSeconds;
  while ( 1 )
  {
    while ( 1 )
    {
      StorDelayExecution(v26);
      if ( !**(_DWORD **)(SystemArgument2 + 1288) )
        break;
      if ( StorCheckDpcWatchdogTimerExpire(0x14u, 0xAu) )
      {
        LOBYTE(v6) = 5;
LABEL_41:
        v27 = v64;
        v28 = 1;
        v29 = 1;
        v10 = -1073741595;
        goto LABEL_169;
      }
    }
    _InterlockedOr(v59, 0);
    if ( (*(_QWORD *)(SystemArgument2 + 968) & 1) == 0 )
    {
      v31 = v61;
      v10 = -1073741436;
      LOBYTE(v6) = 0;
      v29 = 0;
      goto LABEL_166;
    }
    if ( a3 && IsRequestPendingCompletion(SystemArgument2, v64, &v63) )
      ProcessNVMeCompletionQueues((PVOID)SystemArgument2);
    if ( IsNvmeExtendedCommandCompleted(*(_QWORD *)(a2 + 4240)) )
    {
      v30 = *(_DWORD *)(a2 + 4256) & 0x80;
      v10 = v30 != 0 ? 0xC000042B : 0;
      v19 = v30 != 0;
      v60 = v30 != 0;
      v20 = v30 == 0;
      v6 = v30 != 0 ? 6 : 0;
      goto LABEL_58;
    }
    if ( v25 > v66 )
      break;
    v25 += v26;
    v26 = v62;
    if ( StorCheckDpcWatchdogTimerExpire(0xAu, 5u) )
    {
      LOBYTE(v6) = 8;
      goto LABEL_41;
    }
  }
  v27 = v64;
  v10 = -1073741643;
  v60 = v28;
  LOBYTE(v6) = 7;
  v29 = 0;
LABEL_169:
  v51 = *(_QWORD *)(SystemArgument2 + 1288);
  if ( v27 )
    _InterlockedAdd((volatile signed __int32 *)(v51 + 56), v28);
  else
    _InterlockedAdd((volatile signed __int32 *)(v51 + 52), v28);
LABEL_182:
  if ( (*(_DWORD *)(a2 + 4256) & 0x800) == 0
    && **(_BYTE **)(*(_QWORD *)(SystemArgument2 + 128) + 160LL) == 1
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 4268), 1, 0) )
  {
    v55 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SystemArgument2 + 128) + 160LL) + 24LL);
    if ( v55 )
      ++*(_QWORD *)(v55 + 56);
    v56 = *(_QWORD *)(SystemArgument2 + 128);
    v57 = *(_QWORD *)(v56 + 160);
    if ( *(_BYTE *)v57 == 1
      && _InterlockedExchangeAdd(
           *(volatile signed __int32 **)(*(_QWORD *)(v57 + 16) + 8LL * *(unsigned int *)(*(_QWORD *)(a2 + 4240) + 64LL)),
           0xFFFFFFFF) == 1 )
    {
      PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(v56 + 160) + 8LL), 0LL, 2LL);
    }
  }
LABEL_191:
  if ( v60 || v29 )
  {
    v58 = L"Timeout";
  }
  else
  {
    LOWORD(v6) = *(_WORD *)(a2 + 4260);
    v58 = L"Command status";
  }
  StorEtwNvmeControllerEvent(
    SystemArgument2,
    1,
    3,
    (__int64)L"NVMe command failed (polling)",
    L"CDW0",
    *(_DWORD *)(a2 + 4096),
    L"NSID",
    *(_DWORD *)(a2 + 4100),
    L"CDW10|CDW11",
    *(_QWORD *)(a2 + 4136),
    L"CDW12|CDW13",
    *(_QWORD *)(a2 + 4144),
    L"CDW14|CDW15",
    *(_QWORD *)(a2 + 4152),
    v58,
    v6,
    L"Controller state",
    *(_QWORD *)(SystemArgument2 + 968),
    L"NTStatus",
    v10);
  return (unsigned int)v10;
}
