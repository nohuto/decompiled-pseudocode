/*
 * XREFs of ?ReleaseLock@BaseBamoConnection@Bamo@Microsoft@@MEAAXXZ @ 0x180218E00
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::Bamo::BaseBamoConnection::ReleaseLock(Microsoft::Bamo::BaseBamoConnection *this)
{
  __int64 v1; // rax
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 56LL))(this);
  if ( *(_BYTE *)(v1 + 216) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x9CD,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      v2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(v1 + 144));
}
