/*
 * XREFs of ?DeliverToInputService@NonBamoInputDeliveryServer@@UEAAJPEBUKeyboardEvent@@@Z @ 0x18015CFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x1800392B0 (-IsEdition@@YA_N_K@Z.c)
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18006D738 (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::DeliverToInputService(
        NonBamoInputDeliveryServer *this,
        const struct KeyboardEvent *a2)
{
  const char *v4; // r9
  unsigned int v5; // ebx
  struct ForegroundManager *ForegroundManager; // rax
  __int64 v7; // rax
  int v8; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 48LL))(*((_QWORD *)this + 4));
  if ( *(_DWORD *)a2 && (unsigned int)(*(_DWORD *)a2 - 1) >= 2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xF6,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      v4);
  v5 = 0;
  if ( !IsEdition(8778LL) )
  {
    ForegroundManager = ISMStatics::GetForegroundManager();
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)ForegroundManager + 67) + 8LL) + 48LL))(*((_QWORD *)ForegroundManager + 67) + 8LL);
    if ( v7 )
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v7 + 8) + 88LL))(v7 + 8);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, const struct KeyboardEvent *, _QWORD))(**((_QWORD **)this + 35) + 24LL))(
         *((_QWORD *)this + 35),
         a2,
         v5);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xEF,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)v8,
      v10);
  return 0LL;
}
