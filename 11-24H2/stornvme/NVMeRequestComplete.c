/*
 * XREFs of NVMeRequestComplete @ 0x14000AAB0
 * Callers:
 *     WaitForCommandCompleteWithCustomTimeout @ 0x140008650 (WaitForCommandCompleteWithCustomTimeout.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     NVMeHwUnitControl @ 0x14000EC10 (NVMeHwUnitControl.c)
 *     NVMeCompletionDpcRoutine @ 0x140012F10 (NVMeCompletionDpcRoutine.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x14001C11C (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeFirmwareActivateCompletionAfterReset @ 0x140022730 (NVMeFirmwareActivateCompletionAfterReset.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1400236B0 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeWriteBufferFirmwareActivateCompletionAfterReset @ 0x1400253E0 (NVMeWriteBufferFirmwareActivateCompletionAfterReset.c)
 *     NVMeSanitizeRecoverWorkItem @ 0x14002C100 (NVMeSanitizeRecoverWorkItem.c)
 *     ProcessMultipleCommands @ 0x14002CDD4 (ProcessMultipleCommands.c)
 *     ProcessNvmeSanitizeStatus @ 0x14002D20C (ProcessNvmeSanitizeStatus.c)
 * Callees:
 *     IsInternalSrb @ 0x140008F20 (IsInternalSrb.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     NVMeFreePool @ 0x14001DC5C (NVMeFreePool.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall NVMeRequestComplete(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // rbx
  __int64 v11; // r8
  unsigned int v12; // ecx
  __int64 v13; // r8
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned __int64 v16; // rbx
  __int64 v17; // rax

  if ( IsInternalSrb(a1, a2) )
  {
    if ( *(_DWORD *)(v6 + 12) == 251658240 )
    {
      if ( *(_BYTE *)(v6 + 2) == 40 )
        v8 = *(_QWORD *)(v6 + 104);
      else
        v8 = *(_QWORD *)(v6 + 56);
      result = v8 & 0xFFF;
      if ( (v8 & 0xFFF) != 0 )
        v8 = v8 - result + 4096;
      v10 = *(_QWORD *)(v8 + 4200);
    }
    else
    {
      result = a1 + 1016;
      if ( a2 == a1 + 1016 )
      {
        v10 = a1 + 1008;
      }
      else
      {
        v11 = *(_QWORD *)(a1 + 1392);
        if ( v11 && (v12 = 0, *(_WORD *)(a1 + 1552)) )
        {
          while ( 1 )
          {
            v10 = v11 + ((unsigned __int64)v12 << 7);
            result = v10 + 8;
            if ( a2 == v10 + 8 )
              break;
            if ( ++v12 >= *(unsigned __int16 *)(a1 + 1552) )
              goto LABEL_15;
          }
        }
        else
        {
LABEL_15:
          v13 = *(_QWORD *)(a1 + 1400);
          if ( v13 && (v14 = 0, *(_WORD *)(a1 + 1554)) )
          {
            while ( 1 )
            {
              v10 = v13 + ((unsigned __int64)v14 << 7);
              result = v10 + 8;
              if ( a2 == v10 + 8 )
                break;
              if ( ++v14 >= *(unsigned __int16 *)(a1 + 1554) )
                goto LABEL_19;
            }
          }
          else
          {
LABEL_19:
            v15 = 0;
            while ( 1 )
            {
              v16 = a1 + ((unsigned __int64)v15 << 7);
              result = v16 + 1144;
              if ( a2 == v16 + 1144 )
                break;
              if ( ++v15 >= 2 )
                return result;
            }
            v10 = v16 + 1136;
          }
        }
      }
    }
    if ( v10 )
    {
      *(_BYTE *)v10 = 0;
      if ( *(_DWORD *)(a2 + 12) == 251658240 )
      {
        if ( (*(_BYTE *)(v10 + 1) & 1) != 0 )
        {
          memset(*(void **)(v10 + 96), 0, 0x1088uLL);
          result = *(_QWORD *)(v10 + 96);
          *(_BYTE *)(v10 + 11) = 0;
          *(_QWORD *)(v10 + 64) = result;
          *(_QWORD *)(result + 4200) = v10;
          *(_BYTE *)v10 = 0;
          if ( a1 != -4320 && v10 != -112 )
            return StorPortExtendedFunction(38LL, a1, a1 + 4320, v10 + 112);
        }
        else if ( (*(_BYTE *)(v10 + 1) & 2) != 0 )
        {
          return StorPortExtendedFunction(50LL, a1, 0LL, 0LL);
        }
        else
        {
          NVMeFreeDmaBuffer(a1, 0x2000LL, a2 + 56, *(_QWORD *)(v10 + 104));
          return NVMeFreePool(a1, v10);
        }
      }
    }
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 4064) & 0x10000) != 0 )
    {
      if ( *(_BYTE *)(v6 + 2) == 40 )
        v17 = *(_QWORD *)(v6 + 104);
      else
        v17 = *(_QWORD *)(v6 + 56);
      if ( (v17 & 0xFFF) != 0 )
        v17 = v17 - (v17 & 0xFFF) + 4096;
      if ( *(_DWORD *)(v17 + 4220) )
        StorPortExtendedFunction(127LL, a1, a2, v7);
    }
    if ( a3 )
      return StorPortNotification(4104LL, a1, a2);
    else
      return StorPortNotification(0LL, a1, a2);
  }
  return result;
}
