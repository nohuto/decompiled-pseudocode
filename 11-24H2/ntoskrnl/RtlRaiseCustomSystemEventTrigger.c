/*
 * XREFs of RtlRaiseCustomSystemEventTrigger @ 0x1405EFEF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x1406A9210 (ZwQueryWnfStateData.c)
 *     ZwQueryWnfStateNameInformation @ 0x1406A9230 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     RtlpCtAllocateMemory @ 0x140787068 (RtlpCtAllocateMemory.c)
 *     RtlpCtContextFree @ 0x14078708C (RtlpCtContextFree.c)
 *     RtlpCtContextInit @ 0x1407870E8 (RtlpCtContextInit.c)
 *     RtlpCtFreeMemory @ 0x1407871FC (RtlpCtFreeMemory.c)
 *     RtlpCtQueueWorkItem @ 0x140787218 (RtlpCtQueueWorkItem.c)
 *     RtlGUIDFromString @ 0x1408CA240 (RtlGUIDFromString.c)
 */

__int64 __fastcall RtlRaiseCustomSystemEventTrigger(__int64 a1)
{
  NTSTATUS updated; // ebx
  __int64 Memory; // rdi
  int v4; // [rsp+40h] [rbp-9h] BYREF
  int v5; // [rsp+44h] [rbp-5h] BYREF
  unsigned int v6; // [rsp+48h] [rbp-1h] BYREF
  PVOID P; // [rsp+50h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp+Fh] BYREF
  __int128 v9; // [rsp+68h] [rbp+1Fh]
  __int64 v10; // [rsp+78h] [rbp+2Fh] BYREF
  GUID Guid; // [rsp+80h] [rbp+37h] BYREF

  v5 = 0;
  v6 = 0;
  P = 0LL;
  v10 = WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED;
  v9 = 0LL;
  DestinationString = 0LL;
  Guid = 0LL;
  if ( a1 )
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 8));
    updated = RtlGUIDFromString(&DestinationString, &Guid);
    if ( updated < 0 )
      return (unsigned int)updated;
    if ( _InterlockedExchange(&RtlpCtPublishInProgress, 1) )
      return (unsigned int)-1073741823;
    v4 = 4096;
    Memory = RtlpCtAllocateMemory(4096LL);
    if ( Memory )
    {
      updated = ZwQueryWnfStateData(&v10, 0LL, 0LL, &v6, Memory, &v4);
      if ( updated >= 0 )
      {
        updated = ZwQueryWnfStateNameInformation(&v10, 2LL, 0LL, &v5, 4);
        if ( updated >= 0 )
        {
          if ( v5 )
          {
            updated = ZwQueryWnfStateNameInformation(&v10, 1LL, 0LL, &v5, 4);
            if ( updated >= 0 )
            {
              if ( v5 )
              {
                v4 = 4096;
                if ( Memory == -8 )
                {
                  updated = -1073741811;
                }
                else
                {
                  *(_OWORD *)(Memory + 8) = v9;
                  *(GUID *)(Memory + 24) = Guid;
                  *(_DWORD *)(Memory + 40) = 16;
                  v4 = 36;
                  *(_DWORD *)Memory = 0;
                  *(_DWORD *)(Memory + 4) = -1;
                  *(_DWORD *)Memory = 4 * (v4 & 0xFFF | 0x100000);
                  updated = RtlpCtContextInit(&P, v6);
                  if ( updated >= 0 )
                  {
                    updated = ZwUpdateWnfStateData(&v10, Memory, (unsigned int)(v4 + 8));
                    if ( updated >= 0 )
                    {
                      RtlpCtQueueWorkItem(*(_QWORD *)P);
                      goto LABEL_23;
                    }
                  }
                  if ( P )
                    RtlpCtContextFree(P);
                }
              }
              else
              {
                updated = -1073741653;
              }
            }
          }
          else
          {
            updated = -1073741823;
          }
        }
      }
    }
    else
    {
      updated = -1073741670;
    }
    _InterlockedExchange(&RtlpCtPublishInProgress, 0);
    if ( !Memory )
      return (unsigned int)updated;
LABEL_23:
    RtlpCtFreeMemory(Memory);
    return (unsigned int)updated;
  }
  return (unsigned int)-1073741811;
}
