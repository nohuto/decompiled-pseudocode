/*
 * XREFs of ?PushStateToPrincipalOnPropertiesRefresh@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z @ 0x180164D20
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall BamoImpl::BamoMPCConstantManagerClientProxyImpl::PushStateToPrincipalOnPropertiesRefresh(
        BamoImpl::BamoMPCConstantManagerClientProxyImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a3)
{
  int v6; // eax
  int v7; // eax
  int v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+40h] [rbp-18h] BYREF
  __int64 v10; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = *((unsigned int *)a3 + 9);
  v10 = *((unsigned int *)a3 + 10);
  LOWORD(v8) = 17;
  v6 = CoreUICallSend(a2, &v9, 2LL);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2552,
      (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v6,
      v8);
  (*(void (__fastcall **)(BamoImpl::BamoMPCConstantManagerClientProxyImpl *))(*(_QWORD *)this + 80LL))(this);
  v9 = *((unsigned int *)a3 + 9);
  v10 = *((unsigned int *)a3 + 10);
  LOWORD(v8) = 16;
  v7 = CoreUICallSend(a2, &v9, 2LL);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x255A,
      (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v7,
      v8);
}
