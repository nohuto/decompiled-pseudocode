/*
 * XREFs of ?s_EndpointProc@CManipulationManager@@KAJAEBUMessageCallThreadInfo@1@PEBUMsgCallTypeDefinition@@PEAXPEBXH@Z @ 0x18020340C
 * Callers:
 *     ?s_ManipulationThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z @ 0x1802033A0 (-s_ManipulationThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DWMCoreCallbacks_CoreUICallReceive_R2zrAyFwjWqsppRzeRelrl6I2ZE@MessageCall@CoreUI@Microsoft@@YAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEAXPEBXH@Z @ 0x18025CC9C (-DWMCoreCallbacks_CoreUICallReceive_R2zrAyFwjWqsppRzeRelrl6I2ZE@MessageCall@CoreUI@Microsoft@@YA.c)
 */

__int64 __fastcall CManipulationManager::s_EndpointProc(
        Microsoft::CoreUI::MessageCall **a1,
        const struct MsgCallTypeDefinition *a2,
        const struct MsgCallTypeDefinition *a3,
        void *a4,
        void *a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  void *v8; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+28h] [rbp-10h]

  LODWORD(v8) = (_DWORD)a5;
  v5 = Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_CoreUICallReceive_R2zrAyFwjWqsppRzeRelrl6I2ZE(
         a1[2],
         a2,
         a3,
         a4,
         v8,
         v9);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x1C9u, 0LL);
  return v6;
}
