/*
 * XREFs of EtwEventWriteEndScenario @ 0x1800CF420
 * Callers:
 *     <none>
 * Callees:
 *     ProviderHandleLookup @ 0x18001D260 (ProviderHandleLookup.c)
 *     EtwpEventWriteFull @ 0x18003B0D0 (EtwpEventWriteFull.c)
 *     EtwEventEnabled @ 0x1800CF760 (EtwEventEnabled.c)
 *     NtTraceControl @ 0x180165740 (NtTraceControl.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwEventWriteEndScenario(__int64 a1, __int128 *a2, int a3, __int64 a4)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  __int128 v11; // xmm0
  _GUID ActivityId; // xmm1
  int v13; // [rsp+50h] [rbp-68h] BYREF
  _OWORD v14[3]; // [rsp+58h] [rbp-60h] BYREF

  DWORD1(v14[0]) = 0;
  v13 = 0;
  if ( !a2 )
    return 87LL;
  if ( !(unsigned __int8)EtwEventEnabled() )
    return 6LL;
  memset(v14, 0, sizeof(v14));
  v10 = ProviderHandleLookup(v9, a1);
  if ( !v10 || WORD2(a1) != *(_WORD *)(v10 + 84) )
    return 6LL;
  v11 = *a2;
  LODWORD(v14[0]) = *(_DWORD *)(v10 + 88);
  *(_OWORD *)((char *)v14 + 8) = v11;
  ActivityId = NtCurrentTeb()->ActivityId;
  DWORD2(v14[2]) = 11;
  *(_GUID *)((char *)&v14[1] + 8) = ActivityId;
  NtTraceControl(13LL, v14, 48LL, 0LL, 0, &v13);
  return EtwpEventWriteFull(a1, a2, 0LL, 0, 0, 0LL, 0LL, a3, a4);
}
