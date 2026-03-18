/*
 * XREFs of ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1800F9974
 * Callers:
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1800FA2C0 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCDesktopTree@@PEAVCInteraction@.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801CAFB8 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?Add@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInteraction@@@Z @ 0x1800F9A4C (-Add@-$CArray@PEAVCInteraction@@V-$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInteract.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800F9B2C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ @ 0x18013A64C (-IsDefaultInteractionStateLocked@CInteraction@@AEAA_NXZ.c)
 */

void __fastcall CInteraction::UpdateDefaultInteractionForCurrentMC(CInteraction *this)
{
  bool IsDefaultInteractionStateLocked; // al
  __int64 v3; // rcx
  char v4; // r9
  char v5; // r8
  _BYTE *v6; // rbx
  char v7; // r8
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // ecx
  CInteraction *v11; // [rsp+40h] [rbp-18h] BYREF
  CInteraction *v12; // [rsp+70h] [rbp+18h] BYREF
  int v13; // [rsp+78h] [rbp+20h] BYREF

  IsDefaultInteractionStateLocked = CInteraction::IsDefaultInteractionStateLocked(this);
  v5 = 0;
  if ( !IsDefaultInteractionStateLocked )
  {
    v6 = (_BYTE *)(v3 + 200);
    if ( !v4 )
      v5 = *v6 >> 4;
    v7 = (*v6 ^ (32 * v5)) & 0x20;
    v12 = this;
    *v6 ^= v7;
    CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::Add(v3, &v12);
    if ( (unsigned int)dword_180404D18 > 4 && (byte_180404D28 & 2) != 0 && (qword_180404D30 & 2) == qword_180404D30 )
    {
      v10 = (unsigned __int8)*v6;
      v11 = this;
      LODWORD(v12) = (v10 >> 4) & 1;
      v13 = (v10 >> 5) & 1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v13,
        (unsigned int)&unk_1803D7CA7,
        v8,
        v9,
        (__int64)&v11,
        (__int64)&v13,
        (__int64)&v12);
    }
  }
}
