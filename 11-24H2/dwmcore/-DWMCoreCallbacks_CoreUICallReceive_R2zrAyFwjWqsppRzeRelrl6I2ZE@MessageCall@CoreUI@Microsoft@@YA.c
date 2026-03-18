/*
 * XREFs of ?DWMCoreCallbacks_CoreUICallReceive_R2zrAyFwjWqsppRzeRelrl6I2ZE@MessageCall@CoreUI@Microsoft@@YAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEAXPEBXH@Z @ 0x18025CC9C
 * Callers:
 *     ?s_RenderThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z @ 0x1801FDF70 (-s_RenderThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z.c)
 *     ?s_EndpointProc@CManipulationManager@@KAJAEBUMessageCallThreadInfo@1@PEBUMsgCallTypeDefinition@@PEAXPEBXH@Z @ 0x18020340C (-s_EndpointProc@CManipulationManager@@KAJAEBUMessageCallThreadInfo@1@PEBUMsgCallTypeDefinition@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_CoreUICallReceive_R2zrAyFwjWqsppRzeRelrl6I2ZE(
        Microsoft::CoreUI::MessageCall *this,
        struct IMessageCallReceiveHost *a2,
        const struct MsgCallTypeDefinition *a3,
        void *a4)
{
  return CoreUICallReceive(
           this,
           &IManipulation_Receive<CManipulationManager>::Type,
           &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_R2zrAyFwjWqsppRzeRelrl6I2ZE,
           216LL);
}
