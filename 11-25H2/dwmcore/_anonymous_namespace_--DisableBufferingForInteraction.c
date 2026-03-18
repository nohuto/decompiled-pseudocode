/*
 * XREFs of _anonymous_namespace_::DisableBufferingForInteraction @ 0x180231C90
 * Callers:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x180132960 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 * Callees:
 *     _anonymous_namespace_::AllSupportedWithSingleTarget @ 0x180232CE8 (_anonymous_namespace_--AllSupportedWithSingleTarget.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall anonymous_namespace_::DisableBufferingForInteraction(__int64 a1, __int64 a2, unsigned int a3)
{
  char v6; // bl

  v6 = 0;
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1)
    && ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 144LL))(a2)
     || (unsigned __int8)anonymous_namespace_::AllSupportedWithSingleTarget(a1, a3)) )
  {
    return 1;
  }
  return v6;
}
