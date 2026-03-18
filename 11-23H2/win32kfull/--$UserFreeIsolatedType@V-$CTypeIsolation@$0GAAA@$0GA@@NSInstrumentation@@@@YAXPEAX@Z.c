/*
 * XREFs of ??$UserFreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C01FDE1C
 * Callers:
 *     ??$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x1C013C144 (--$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstr.c)
 *     MNAllocPopup @ 0x1C01FE968 (MNAllocPopup.c)
 *     MNFlushDestroyedPopups @ 0x1C01FEAD0 (MNFlushDestroyedPopups.c)
 *     xxxMNEndMenuState @ 0x1C01FF140 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C01FF7EC (xxxMNStartMenuState.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C01FE4E4 (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

unsigned __int8 **__fastcall UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(__int64 a1)
{
  unsigned __int8 **result; // rax
  unsigned __int8 *v3; // rcx

  result = gpUserTypeIsolation;
  v3 = gpUserTypeIsolation[4];
  if ( v3 )
    return (unsigned __int8 **)NSInstrumentation::CTypeIsolation<24576,96>::Free(v3, a1);
  return result;
}
