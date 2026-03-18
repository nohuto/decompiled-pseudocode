/*
 * XREFs of ?UpdateEdgyInput@CInputManager@@QEAAJAEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180262470
 * Callers:
 *     ?_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x180295C28 (-_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureRenderThreadCanSendInputThreadMessages@CInputManager@@IEAAJXZ @ 0x1802623BC (-EnsureRenderThreadCanSendInputThreadMessages@CInputManager@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInputManager::UpdateEdgyInput(
        CInputManager *this,
        const struct EdgyCompositionConfigurationUpdateEx *a2)
{
  int CanSendInputThreadMessages; // eax
  unsigned int v5; // ebx
  int v6; // eax

  CanSendInputThreadMessages = CInputManager::EnsureRenderThreadCanSendInputThreadMessages(this);
  v5 = CanSendInputThreadMessages;
  if ( CanSendInputThreadMessages < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CanSendInputThreadMessages, 0xD1u, 0LL);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const struct EdgyCompositionConfigurationUpdateEx *, int))(**((_QWORD **)this + 4) + 176LL))(
           *((_QWORD *)this + 4),
           *((_QWORD *)this + 7),
           4LL,
           a2,
           152);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xD7u, 0LL);
  }
  return v5;
}
