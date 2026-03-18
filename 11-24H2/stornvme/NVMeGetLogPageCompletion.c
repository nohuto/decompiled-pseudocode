/*
 * XREFs of NVMeGetLogPageCompletion @ 0x140013EA0
 * Callers:
 *     <none>
 * Callees:
 *     ProcessNvmeHealthInfoLog @ 0x140005380 (ProcessNvmeHealthInfoLog.c)
 *     NVMeIssueAsyncEventCommand @ 0x140007940 (NVMeIssueAsyncEventCommand.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     NVMeReenumerateNameSpaceStart @ 0x14002AEE0 (NVMeReenumerateNameSpaceStart.c)
 *     ProcessMFNDChildControllerEventLog @ 0x14002CBB8 (ProcessMFNDChildControllerEventLog.c)
 *     ProcessNvmeSanitizeStatus @ 0x14002D20C (ProcessNvmeSanitizeStatus.c)
 *     SendNVMeEventNotification @ 0x14002FFC8 (SendNVMeEventNotification.c)
 */

__int64 __fastcall NVMeGetLogPageCompletion(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r9
  unsigned int v6; // r8d
  unsigned int v7; // ecx
  __int64 v8; // r9
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned __int64 v11; // rdi
  char v12; // r9
  __int64 v13; // rsi
  __int64 result; // rax
  char v15; // bp
  char v16; // cl
  __int64 v17; // r8
  __int64 v18; // r10
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int128 v21; // xmm2
  __int64 v22; // rax
  unsigned int v23; // edx
  unsigned int v24; // ecx
  __int64 *v25; // rax
  __int64 v26; // r8
  _DWORD *v27; // r14
  __int64 v28; // r8
  char v29; // r14
  __int16 v30; // cx
  __int64 v31; // rcx
  _QWORD *v32; // rdi
  __int128 v33; // [rsp+90h] [rbp-78h]
  __int128 v34; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v35; // [rsp+B0h] [rbp-58h]

  if ( *(_DWORD *)(a2 + 12) == 251658240 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v3 = *(_QWORD *)(a2 + 104);
    else
      v3 = *(_QWORD *)(a2 + 56);
    if ( (v3 & 0xFFF) != 0 )
      v3 = v3 - (v3 & 0xFFF) + 4096;
    v4 = *(_QWORD *)(v3 + 4200);
  }
  else if ( a2 == a1 + 1016 )
  {
    v4 = a1 + 1008;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 1392);
    if ( v5 && (v6 = *(unsigned __int16 *)(a1 + 1552), v7 = 0, *(_WORD *)(a1 + 1552)) )
    {
      while ( 1 )
      {
        v4 = v5 + ((unsigned __int64)v7 << 7);
        if ( a2 == v4 + 8 )
          break;
        if ( ++v7 >= v6 )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      v8 = *(_QWORD *)(a1 + 1400);
      if ( v8 && (v9 = 0, *(_WORD *)(a1 + 1554)) )
      {
        while ( 1 )
        {
          v4 = v8 + ((unsigned __int64)v9 << 7);
          if ( a2 == v4 + 8 )
            break;
          if ( ++v9 >= *(unsigned __int16 *)(a1 + 1554) )
            goto LABEL_18;
        }
      }
      else
      {
LABEL_18:
        v10 = 0;
        while ( 1 )
        {
          v11 = a1 + ((unsigned __int64)v10 << 7);
          if ( a2 == v11 + 1144 )
            break;
          if ( ++v10 >= 2 )
          {
            v4 = 0LL;
            goto LABEL_23;
          }
        }
        v4 = v11 + 1136;
      }
    }
  }
LABEL_23:
  v12 = *(_BYTE *)(a2 + 2);
  if ( v12 == 40 )
    v13 = *(_QWORD *)(a2 + 104);
  else
    v13 = *(_QWORD *)(a2 + 56);
  result = v13 & 0xFFF;
  if ( (v13 & 0xFFF) != 0 )
    v13 = v13 - result + 4096;
  v15 = 0;
  *(_QWORD *)&v33 = 0LL;
  if ( !v4 )
    goto LABEL_79;
  v16 = *(_BYTE *)(a2 + 3);
  if ( v16 == 14 || (result = *(unsigned int *)(a1 + 24), (result & 0xE) != 0) )
  {
    if ( *(_QWORD *)(v13 + 4160) )
    {
      v31 = *(_QWORD *)(v4 + 96);
      v32 = (_QWORD *)(v31 + 4160);
      if ( v31 != -4160 )
      {
        if ( *v32 )
        {
          result = *(_QWORD *)(v31 + 4168);
          if ( result )
          {
            result = StorPortExtendedFunction(83LL, a1, *v32, *(unsigned int *)(v31 + 4208));
            if ( !(_DWORD)result )
              *v32 = 0LL;
          }
        }
      }
      *(_DWORD *)(v13 + 4208) = 0;
    }
LABEL_79:
    *(_BYTE *)(v13 + 4225) |= 8u;
    return result;
  }
  v17 = *(_QWORD *)(v4 + 96);
  if ( *(_QWORD *)(v13 + 4160) )
  {
    if ( v16 == 1 )
    {
      switch ( *(_BYTE *)(v17 + 4136) )
      {
        case 2:
          v15 = ProcessNvmeHealthInfoLog(a1, a2, *(unsigned __int8 **)(v17 + 4160), 9);
          break;
        case 4:
          v27 = *(_DWORD **)(v17 + 4160);
          if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
            StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
          if ( *v27 )
          {
            NVMeReenumerateNameSpaceStart(a1);
          }
          else
          {
            _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 2u);
            _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 1u);
          }
          break;
        case 8:
          if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
            StorPortExtendedFunction(105LL, a1, 0LL, 1LL);
          break;
        case 0x80:
          v18 = *(_QWORD *)(v17 + 4160);
          if ( v12 == 40 )
            v19 = *(_QWORD *)(a2 + 104);
          else
            v19 = *(_QWORD *)(a2 + 56);
          v20 = (v19 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          if ( (v19 & 0xFFF) == 0 )
            v20 = v19;
          v21 = *(_OWORD *)(v20 + 4096);
          v22 = *(_QWORD *)(v20 + 4096);
          v35 = v21;
          if ( HIDWORD(v22) == -1 || (v23 = *(_DWORD *)(a1 + 224), v24 = 0, !v23) )
          {
LABEL_46:
            v26 = 0LL;
          }
          else
          {
            v25 = (__int64 *)(a1 + 1672);
            while ( 1 )
            {
              v26 = *v25;
              if ( *v25 )
              {
                if ( *(_DWORD *)(v26 + 16) == DWORD1(v35) )
                  break;
              }
              ++v24;
              ++v25;
              if ( v24 >= v23 )
                goto LABEL_46;
            }
          }
          if ( (*(_BYTE *)(a1 + 21) & 2) != 0 && *(_BYTE *)(v18 + 8) )
            StorPortExtendedFunction(86LL, a1, v26, 1LL);
          break;
        case 0x81:
          v15 = ProcessNvmeSanitizeStatus(a1, a2, *(_QWORD *)(v17 + 4160));
          break;
        case 0xBF:
          *((_QWORD *)&v33 + 1) = 4LL;
          v28 = *(_QWORD *)(v17 + 4160);
          v34 = v33;
          SendNVMeEventNotification(a1, &v34, v28, 4096LL);
          break;
        case 0xD0:
          ProcessMFNDChildControllerEventLog(a1, *(_QWORD *)(v17 + 4160));
          break;
        default:
          break;
      }
    }
    else
    {
      v29 = 1;
      if ( *(_BYTE *)(v17 + 4136) == 4
        && (v30 = *(_WORD *)(v13 + 4218), (v30 & 0xE00) == 0x200)
        && (v30 & 0x1FE) == 0x12 )
      {
        **(_DWORD **)(v17 + 4160) = -1;
        NVMeReenumerateNameSpaceStart(a1);
      }
      else
      {
        v29 = 0;
      }
      if ( (*(_BYTE *)(a1 + 21) & 2) != 0 && v29 )
        StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
    }
    NVMeFreeDmaBuffer(
      a1,
      *(unsigned int *)(*(_QWORD *)(v4 + 96) + 4208LL),
      (__int64 *)(*(_QWORD *)(v4 + 96) + 4160LL),
      *(_QWORD *)(*(_QWORD *)(v4 + 96) + 4168LL));
    *(_BYTE *)(v13 + 4225) |= 8u;
    *(_DWORD *)(v13 + 4208) = 0;
  }
  *(_BYTE *)v4 = 0;
  if ( !v15 )
    return NVMeIssueAsyncEventCommand(a1, v4);
  LocalCommandReuse(a1, v4);
  *(_BYTE *)(*(_QWORD *)(v4 + 96) + 4225LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(v4 + 96) + 4225LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(v4 + 96) + 4212LL) = 0;
  *(_DWORD *)(v13 + 4140) = *(_DWORD *)(a1 + 3960);
  *(_QWORD *)(v13 + 4192) = NVMeReConfigAsyncEventCompletion;
  *(_BYTE *)(v13 + 4096) = 9;
  *(_BYTE *)(v13 + 4136) = 11;
  return ProcessCommand(a1, v4 + 8);
}
