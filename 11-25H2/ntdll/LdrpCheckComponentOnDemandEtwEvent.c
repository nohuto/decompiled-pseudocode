/*
 * XREFs of LdrpCheckComponentOnDemandEtwEvent @ 0x180114A34
 * Callers:
 *     LdrpMapDllNtFileName @ 0x180072240 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     CompatCachepLookupCdb @ 0x1800712A4 (CompatCachepLookupCdb.c)
 *     EtwEventWriteNoRegistration @ 0x1800D1F90 (EtwEventWriteNoRegistration.c)
 *     LdrpIsCODServiceEnabled @ 0x1801617B0 (LdrpIsCODServiceEnabled.c)
 *     NtWaitForSingleObject @ 0x1801632A0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwCreateEvent @ 0x180163B20 (ZwCreateEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

char __fastcall LdrpCheckComponentOnDemandEtwEvent(unsigned __int16 *a1)
{
  _QWORD *pShimData; // rbx
  int v3; // esi
  wchar_t *v4; // rcx
  char v5; // di
  int v6; // eax
  HANDLE Handle; // [rsp+30h] [rbp-50h] BYREF
  int UniqueProcess; // [rsp+38h] [rbp-48h] BYREF
  int v10; // [rsp+3Ch] [rbp-44h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-40h] BYREF
  int *p_UniqueProcess; // [rsp+48h] [rbp-38h] BYREF
  int v13; // [rsp+50h] [rbp-30h]
  int v14; // [rsp+54h] [rbp-2Ch]
  int *v15; // [rsp+58h] [rbp-28h]
  int v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+64h] [rbp-1Ch]
  __int64 v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+70h] [rbp-10h]
  int v20; // [rsp+74h] [rbp-Ch]

  Handle = 0LL;
  Timeout.QuadPart = 0LL;
  v10 = 1;
  pShimData = 0LL;
  v3 = 0;
  v4 = (wchar_t *)*((_QWORD *)a1 + 1);
  v5 = 0;
  UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
  if ( (unsigned int)CompatCachepLookupCdb(v4, 256) )
  {
    pShimData = NtCurrentPeb()->pShimData;
    if ( pShimData )
    {
      if ( (unsigned __int8)LdrpIsCODServiceEnabled() )
      {
        if ( (int)ZwCreateEvent(&Handle, 2031619LL, 0LL, 0LL, 0) >= 0 )
        {
          RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpCODScenarioLock);
          v3 = 1;
          v5 = 1;
          if ( !LdrpCODScenarioTriggered )
          {
            pShimData[559] = Handle;
            v14 = 0;
            v17 = 0;
            v20 = 0;
            p_UniqueProcess = &UniqueProcess;
            v15 = &v10;
            v18 = *((_QWORD *)a1 + 1);
            v6 = *a1 + 2;
            v13 = 4;
            v16 = 4;
            v19 = v6;
            LdrpCODScenarioTriggered = 1;
            if ( !(unsigned int)EtwEventWriteNoRegistration(
                                  (__int64)&UserLoaderGuid,
                                  &ComponentOnDemand,
                                  3,
                                  (__int64)&p_UniqueProcess) )
            {
              Timeout.QuadPart = -100000000LL;
              NtWaitForSingleObject(Handle, 0, &Timeout);
            }
          }
        }
      }
    }
  }
  if ( Handle )
  {
    NtClose(Handle);
    pShimData[559] = 0LL;
  }
  if ( v3 )
    RtlReleaseSRWLockExclusive(&LdrpCODScenarioLock);
  return v5;
}
