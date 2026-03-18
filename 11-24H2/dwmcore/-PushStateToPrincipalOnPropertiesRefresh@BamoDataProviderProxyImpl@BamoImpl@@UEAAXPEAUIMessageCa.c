/*
 * XREFs of ?PushStateToPrincipalOnPropertiesRefresh@BamoDataProviderProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z @ 0x18027D300
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802412D4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall BamoImpl::BamoDataProviderProxyImpl::PushStateToPrincipalOnPropertiesRefresh(
        BamoImpl::BamoDataProviderProxyImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a3)
{
  int v6; // eax
  int v7; // eax
  int v8; // [rsp+20h] [rbp-38h]
  int v9; // [rsp+20h] [rbp-38h]
  int v10; // [rsp+30h] [rbp-28h]
  int v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+38h] [rbp-20h]
  __int64 v14; // [rsp+40h] [rbp-18h] BYREF
  __int64 v15; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v10 = *((_DWORD *)this + 6);
  v14 = *((unsigned int *)a3 + 9);
  v15 = *((unsigned int *)a3 + 10);
  v6 = CoreUICallSend(a2, &v14, 2LL, 7LL, 14, &unk_180383D65, v10, v12, v14);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2AA2,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v6,
      v8);
  (*(void (__fastcall **)(BamoImpl::BamoDataProviderProxyImpl *))(*(_QWORD *)this + 80LL))(this);
  v11 = *((_DWORD *)this + 6);
  v14 = *((unsigned int *)a3 + 9);
  v15 = *((unsigned int *)a3 + 10);
  v7 = CoreUICallSend(a2, &v14, 2LL, 7LL, 13, &unk_180383D65, v11, v13, v14);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2AAA,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v7,
      v9);
}
