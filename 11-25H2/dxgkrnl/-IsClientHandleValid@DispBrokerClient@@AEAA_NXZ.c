/*
 * XREFs of ?IsClientHandleValid@DispBrokerClient@@AEAA_NXZ @ 0x1403E4098
 * Callers:
 *     _lambda_ab20bd11cb5e847b50387722fd71407e_::operator() @ 0x1401BB248 (_lambda_ab20bd11cb5e847b50387722fd71407e_--operator().c)
 *     ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1403E4028 (-ReferencePort@DispBrokerClient@@AEAA-AVDispBrokerClientReference@@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

char __fastcall DispBrokerClient::IsClientHandleValid(DispBrokerClient *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rbx
  unsigned int *v5; // rax
  __int128 v7; // [rsp+50h] [rbp-18h] BYREF
  int v8; // [rsp+70h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 6);
  if ( !v2 )
    return 0;
  v8 = 0;
  v7 = 0LL;
  v3 = ZwAlpcQueryInformation(*(_QWORD *)(v2 + 8), 0LL, &v7, 16LL, &v8);
  if ( v3 < 0 || v8 != 16 )
  {
    v4 = v3;
    WdLogSingleEntry2(2LL, **(unsigned int **)this, v3);
    v5 = *(unsigned int **)this;
    WdLogGlobalForLineNumber = 148;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to validate the ALCP port of display broker in session 0x%I64x (Status = 0x%I64x)",
      *v5,
      v4,
      0LL,
      0LL,
      0LL);
    return 0;
  }
  return 1;
}
