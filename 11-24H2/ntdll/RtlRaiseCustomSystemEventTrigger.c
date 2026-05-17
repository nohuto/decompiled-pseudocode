/*
 * XREFs of RtlRaiseCustomSystemEventTrigger @ 0x180147750
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x18000D2C0 (RtlpAllocateAtom.c)
 *     TpPostWork @ 0x1800D6E00 (TpPostWork.c)
 *     RtlInitUnicodeString @ 0x1800DA0A0 (RtlInitUnicodeString.c)
 *     RtlGUIDFromString @ 0x1800DC980 (RtlGUIDFromString.c)
 *     RtlpCtContextFree @ 0x180147998 (RtlpCtContextFree.c)
 *     RtlpCtContextInit @ 0x1801479E4 (RtlpCtContextInit.c)
 *     ZwQueryWnfStateData @ 0x180164A80 (ZwQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x180164AA0 (NtQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x1801658A0 (ZwUpdateWnfStateData.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlRaiseCustomSystemEventTrigger(__int64 a1)
{
  int updated; // ebx
  __int64 Atom; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  char *v5; // r9
  int v7; // [rsp+40h] [rbp-9h] BYREF
  int v8; // [rsp+44h] [rbp-5h] BYREF
  unsigned int v9; // [rsp+48h] [rbp-1h] BYREF
  unsigned __int64 *v10; // [rsp+50h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp+Fh] BYREF
  __int128 v12; // [rsp+68h] [rbp+1Fh]
  __int64 v13; // [rsp+78h] [rbp+2Fh] BYREF
  __int128 v14; // [rsp+80h] [rbp+37h] BYREF

  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  v13 = WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED;
  v12 = 0LL;
  DestinationString = 0LL;
  v14 = 0LL;
  if ( a1 )
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 8));
    updated = RtlGUIDFromString(&DestinationString.Length, (__int64)&v14);
    if ( updated < 0 )
      return (unsigned int)updated;
    if ( _InterlockedExchange(&RtlpCtPublishInProgress, 1) )
      return (unsigned int)-1073741823;
    v7 = 4096;
    Atom = RtlpAllocateAtom(4096LL);
    if ( Atom )
    {
      updated = ZwQueryWnfStateData(&v13, 0LL, 0LL, &v9, Atom, &v7);
      if ( updated >= 0 )
      {
        updated = NtQueryWnfStateNameInformation(&v13, 2LL, 0LL, &v8, 4);
        if ( updated >= 0 )
        {
          if ( v8 )
          {
            updated = NtQueryWnfStateNameInformation(&v13, 1LL, 0LL, &v8, 4);
            if ( updated >= 0 )
            {
              if ( v8 )
              {
                v7 = 4096;
                if ( Atom == -8 )
                {
                  updated = -1073741811;
                }
                else
                {
                  *(_OWORD *)(Atom + 8) = v12;
                  *(_OWORD *)(Atom + 24) = v14;
                  *(_DWORD *)(Atom + 40) = 16;
                  v7 = 36;
                  *(_DWORD *)Atom = 0;
                  *(_DWORD *)(Atom + 4) = -1;
                  *(_DWORD *)Atom = 4 * (v7 & 0xFFF | 0x100000);
                  updated = RtlpCtContextInit(&v10, v9);
                  if ( updated >= 0 )
                  {
                    updated = ZwUpdateWnfStateData(&v13, Atom, (unsigned int)(v7 + 8), 0LL, 0LL, v9, 1);
                    if ( updated >= 0 )
                    {
                      TpPostWork(*v10, v3, v4, v5);
                      goto LABEL_23;
                    }
                  }
                  if ( v10 )
                    RtlpCtContextFree();
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
    if ( !Atom )
      return (unsigned int)updated;
LABEL_23:
    RtlpSysVolFree(Atom);
    return (unsigned int)updated;
  }
  return (unsigned int)-1073741811;
}
