/*
 * XREFs of RtlRaiseCustomSystemEventTrigger @ 0x180148D00
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     TpPostWork @ 0x18003EF70 (TpPostWork.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     RtlGUIDFromString @ 0x1800DBEF0 (RtlGUIDFromString.c)
 *     RtlpCtContextFree @ 0x180148F48 (RtlpCtContextFree.c)
 *     RtlpCtContextInit @ 0x180148F94 (RtlpCtContextInit.c)
 *     ZwQueryWnfStateData @ 0x180166010 (ZwQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x180166030 (NtQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x180166E30 (ZwUpdateWnfStateData.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlRaiseCustomSystemEventTrigger(__int64 a1)
{
  int updated; // ebx
  __int64 Atom; // rdi
  int v4; // [rsp+40h] [rbp-9h] BYREF
  int v5; // [rsp+44h] [rbp-5h] BYREF
  unsigned int v6; // [rsp+48h] [rbp-1h] BYREF
  __int64 *v7; // [rsp+50h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp+Fh] BYREF
  __int128 v9; // [rsp+68h] [rbp+1Fh]
  __int64 v10; // [rsp+78h] [rbp+2Fh] BYREF
  __int128 v11; // [rsp+80h] [rbp+37h] BYREF

  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  v10 = WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED;
  v9 = 0LL;
  DestinationString = 0LL;
  v11 = 0LL;
  if ( a1 )
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 8));
    updated = RtlGUIDFromString(&DestinationString.Length, (__int64)&v11);
    if ( updated < 0 )
      return (unsigned int)updated;
    if ( _InterlockedExchange(&RtlpCtPublishInProgress, 1) )
      return (unsigned int)-1073741823;
    v4 = 4096;
    Atom = RtlpAllocateAtom();
    if ( Atom )
    {
      updated = ZwQueryWnfStateData(&v10, 0LL, 0LL, &v6, Atom, &v4);
      if ( updated >= 0 )
      {
        updated = NtQueryWnfStateNameInformation(&v10, 2LL, 0LL, &v5, 4);
        if ( updated >= 0 )
        {
          if ( v5 )
          {
            updated = NtQueryWnfStateNameInformation(&v10, 1LL, 0LL, &v5, 4);
            if ( updated >= 0 )
            {
              if ( v5 )
              {
                v4 = 4096;
                if ( Atom == -8 )
                {
                  updated = -1073741811;
                }
                else
                {
                  *(_OWORD *)(Atom + 8) = v9;
                  *(_OWORD *)(Atom + 24) = v11;
                  *(_DWORD *)(Atom + 40) = 16;
                  v4 = 36;
                  *(_DWORD *)Atom = 0;
                  *(_DWORD *)(Atom + 4) = -1;
                  *(_DWORD *)Atom = 4 * (v4 & 0xFFF | 0x100000);
                  updated = RtlpCtContextInit(&v7, v6);
                  if ( updated >= 0 )
                  {
                    updated = ZwUpdateWnfStateData(&v10, Atom, (unsigned int)(v4 + 8), 0LL, 0LL, v6, 1);
                    if ( updated >= 0 )
                    {
                      TpPostWork(*v7);
                      goto LABEL_23;
                    }
                  }
                  if ( v7 )
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
