/*
 * XREFs of LdrpCheckComponentOnDemandEtwEvent @ 0x180111934
 * Callers:
 *     LdrpMapDllNtFileName @ 0x180071640 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     EtwEventWriteNoRegistration @ 0x180066310 (EtwEventWriteNoRegistration.c)
 *     CompatCachepLookupCdb @ 0x180072A0C (CompatCachepLookupCdb.c)
 *     LdrpIsCODServiceEnabled @ 0x180160260 (LdrpIsCODServiceEnabled.c)
 *     NtWaitForSingleObject @ 0x180161D10 (NtWaitForSingleObject.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwCreateEvent @ 0x180162590 (ZwCreateEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

char __fastcall LdrpCheckComponentOnDemandEtwEvent(unsigned __int16 *a1)
{
  _QWORD *pShimData; // rbx
  int v3; // esi
  wchar_t *v4; // rcx
  char v5; // di
  volatile signed __int32 **v6; // rdx
  unsigned __int64 v7; // r8
  int v8; // eax
  HANDLE Handle; // [rsp+30h] [rbp-50h] BYREF
  int UniqueProcess; // [rsp+38h] [rbp-48h] BYREF
  int v12; // [rsp+3Ch] [rbp-44h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-40h] BYREF
  int *p_UniqueProcess; // [rsp+48h] [rbp-38h] BYREF
  int v15; // [rsp+50h] [rbp-30h]
  int v16; // [rsp+54h] [rbp-2Ch]
  int *v17; // [rsp+58h] [rbp-28h]
  int v18; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+64h] [rbp-1Ch]
  __int64 v20; // [rsp+68h] [rbp-18h]
  int v21; // [rsp+70h] [rbp-10h]
  int v22; // [rsp+74h] [rbp-Ch]

  Handle = 0LL;
  Timeout.QuadPart = 0LL;
  v12 = 1;
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
          RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpCODScenarioLock, v6, v7);
          v3 = 1;
          v5 = 1;
          if ( !LdrpCODScenarioTriggered )
          {
            pShimData[559] = Handle;
            v16 = 0;
            v19 = 0;
            v22 = 0;
            p_UniqueProcess = &UniqueProcess;
            v17 = &v12;
            v20 = *((_QWORD *)a1 + 1);
            v8 = *a1 + 2;
            v15 = 4;
            v18 = 4;
            v21 = v8;
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
