/*
 * XREFs of ?NotifySubmixClient@CAppSubmixClient@@QEAAX_KW4ProcessSubmix_NotificationType@@0@Z @ 0x1800B1CE8
 * Callers:
 *     _lambda_034c87b344bb69cb11fef3b63041d359_::operator()_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient____const__ @ 0x1800AFEE8 (_lambda_034c87b344bb69cb11fef3b63041d359_--operator()_std--unique_ptr_CAppSubmixClient_std--defa.c)
 *     _lambda_7b145c4c6aad9512c6da1a4784ceeafc_::operator()_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient____const__ @ 0x1800B0024 (_lambda_7b145c4c6aad9512c6da1a4784ceeafc_--operator()_std--unique_ptr_CAppSubmixClient_std--defa.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAppSubmixClient::NotifySubmixClient(__int64 *a1, __int64 a2, int a3, __int64 a4)
{
  DWORD CurrentProcessId; // eax
  __int64 v9; // rcx
  unsigned int v10; // eax
  int MediaEvent; // eax
  int v12[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v13; // [rsp+28h] [rbp-60h]
  __int64 v14; // [rsp+30h] [rbp-58h]
  __int64 v15; // [rsp+38h] [rbp-50h]
  int v16; // [rsp+40h] [rbp-48h]
  int v17; // [rsp+44h] [rbp-44h]
  __int64 v18; // [rsp+48h] [rbp-40h]
  __int64 v19; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v14 = 0LL;
  v17 = 0;
  v12[0] = 56;
  v12[1] = 0x40000;
  CurrentProcessId = GetCurrentProcessId();
  v9 = *a1;
  v13 = CurrentProcessId;
  v19 = a1[2];
  v15 = a2;
  v16 = a3;
  v18 = a4;
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9);
  MediaEvent = GenerateMediaEvent(v12, v10);
  if ( MediaEvent < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2FF,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)(unsigned int)MediaEvent,
      v12[0]);
}
