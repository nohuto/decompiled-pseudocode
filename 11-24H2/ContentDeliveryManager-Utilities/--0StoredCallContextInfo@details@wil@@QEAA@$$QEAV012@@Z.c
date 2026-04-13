/*
 * XREFs of ??0StoredCallContextInfo@details@wil@@QEAA@$$QEAV012@@Z @ 0x18007ABC0
 * Callers:
 *     ??0?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x18007A7B4 (--0-$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsPr.c)
 * Callees:
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18004E4F8 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 */

__int64 __fastcall wil::details::StoredCallContextInfo::StoredCallContextInfo(__int64 a1, __int64 a2)
{
  char v4; // al
  __int64 result; // rax

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  v4 = *(_BYTE *)(a2 + 24);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_BYTE *)(a1 + 24) = v4;
  result = a1;
  *(_BYTE *)(a2 + 24) = 0;
  return result;
}
