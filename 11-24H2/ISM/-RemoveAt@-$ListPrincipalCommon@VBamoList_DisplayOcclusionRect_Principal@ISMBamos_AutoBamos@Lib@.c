/*
 * XREFs of ?RemoveAt@?$ListPrincipalCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@UDisplayOcclusionRect@@@Bamo@Microsoft@@QEAAJI@Z @ 0x18013FD30
 * Callers:
 *     ?OnOcclusionRectRemoved@SystemContextManager@@QEAAXAEBUDockInputIdentity@@@Z @ 0x18013E0FC (-OnOcclusionRectRemoved@SystemContextManager@@QEAAXAEBUDockInputIdentity@@@Z.c)
 * Callees:
 *     ?IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ @ 0x1800252B8 (-IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1800252DC (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x180025454 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::ListPrincipalCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Principal,ISMBamos_AutoBamos::BamoConnection,DisplayOcclusionRect>::RemoveAt(
        _QWORD *a1,
        unsigned int a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rdi
  struct Microsoft::Bamo::BaseBamoConnection *v5; // rdi
  __int64 v6; // rdx
  int v7; // eax
  Microsoft::BamoImpl::BamoImplObject *v9[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = a2;
  v4 = *(_QWORD *)(a1[4] + 32LL);
  if ( *(int *)(v4 + 8) <= 0 )
    v5 = 0LL;
  else
    v5 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v4 + 16);
  Microsoft::Bamo::Lock::Lock(v9, v5);
  v6 = a1[7];
  if ( v2 >= 0x2E8BA2E8BA2E8BA3LL * ((a1[8] - v6) >> 4) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA7,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      (const char *)v2);
  memmove_0((void *)(v6 + 176 * v2), (const void *)(v6 + 176 * v2 + 176), a1[8] - (v6 + 176 * v2 + 176));
  a1[8] -= 176LL;
  if ( !Microsoft::Bamo::BaseBamoConnection::IsDisconnected(v5) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(a1[1] + 32LL))(a1 + 1, (unsigned int)v2);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB1,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v7,
        (int)v9[0]);
  }
  Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v9);
  return 0LL;
}
