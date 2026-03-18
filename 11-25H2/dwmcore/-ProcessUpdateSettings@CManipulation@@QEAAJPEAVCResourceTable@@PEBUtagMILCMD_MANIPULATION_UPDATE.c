/*
 * XREFs of ?ProcessUpdateSettings@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_UPDATESETTINGS@@@Z @ 0x180210C90
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?_UpdateChainingEnabled@CManipulation@@AEAA_NW4ScrollAxis@@W4InteractionChainingMode@Interactions@Composition@UI@Windows@@@Z @ 0x180210D58 (-_UpdateChainingEnabled@CManipulation@@AEAA_NW4ScrollAxis@@W4InteractionChainingMode@Interaction.c)
 *     ?_UpdateInertiaEnabled@CManipulation@@AEAA_NW4ScrollAxis@@_N@Z @ 0x180210D7C (-_UpdateInertiaEnabled@CManipulation@@AEAA_NW4ScrollAxis@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulation::ProcessUpdateSettings(
        CManipulation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MANIPULATION_UPDATESETTINGS *a3)
{
  int v3; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int8 updated; // al
  __int64 v14; // rcx
  unsigned __int8 v15; // r11

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 116) != v3 )
    *((_DWORD *)this + 116) = v3;
  CManipulation::_UpdateChainingEnabled(this, 0LL, *((unsigned int *)a3 + 4));
  CManipulation::_UpdateChainingEnabled(v5, 1LL, *((unsigned int *)a3 + 5));
  CManipulation::_UpdateChainingEnabled(v6, 2LL, *((unsigned int *)a3 + 6));
  LOBYTE(v7) = *((_BYTE *)a3 + 12) != 0;
  CManipulation::_UpdateInertiaEnabled(v8, 0LL, v7);
  LOBYTE(v9) = *((_BYTE *)a3 + 13) != 0;
  CManipulation::_UpdateInertiaEnabled(v10, 1LL, v9);
  LOBYTE(v11) = *((_BYTE *)a3 + 14) != 0;
  updated = CManipulation::_UpdateInertiaEnabled(v12, 2LL, v11);
  if ( v15 | updated )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v14 + 80LL))(v14, 10LL, v14);
  return 0LL;
}
