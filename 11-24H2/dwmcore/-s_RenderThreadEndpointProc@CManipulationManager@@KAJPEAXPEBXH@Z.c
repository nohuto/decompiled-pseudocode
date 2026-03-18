/*
 * XREFs of ?s_RenderThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z @ 0x1801FDF70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DWMCoreCallbacks_CoreUICallReceive_R2zrAyFwjWqsppRzeRelrl6I2ZE@MessageCall@CoreUI@Microsoft@@YAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEAXPEBXH@Z @ 0x18025CC9C (-DWMCoreCallbacks_CoreUICallReceive_R2zrAyFwjWqsppRzeRelrl6I2ZE@MessageCall@CoreUI@Microsoft@@YA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationManager::s_RenderThreadEndpointProc(
        Microsoft::CoreUI::MessageCall **a1,
        struct IMessageCallReceiveHost *a2,
        void *a3)
{
  int v3; // edi
  int v6; // eax
  unsigned int v7; // edi
  void *v9; // [rsp+20h] [rbp-18h]
  int v10; // [rsp+28h] [rbp-10h]

  v3 = (int)a3;
  if ( a1 )
    (*((void (__fastcall **)(Microsoft::CoreUI::MessageCall **))*a1 + 1))(a1);
  LODWORD(v9) = v3;
  v6 = Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_CoreUICallReceive_R2zrAyFwjWqsppRzeRelrl6I2ZE(
         a1[9],
         a2,
         (const struct MsgCallTypeDefinition *)a1,
         a2,
         v9,
         v10);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x1C9u, 0LL);
  (*((void (__fastcall **)(Microsoft::CoreUI::MessageCall **))*a1 + 2))(a1);
  return v7;
}
