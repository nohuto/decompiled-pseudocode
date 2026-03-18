/*
 * XREFs of ?s_ManipulationThreadEndpointProc@CManipulationManager@@KAJPEAXPEBXH@Z @ 0x18020F2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?s_EndpointProc@CManipulationManager@@KAJAEBUMessageCallThreadInfo@1@PEBUMsgCallTypeDefinition@@PEAXPEBXH@Z @ 0x18020F34C (-s_EndpointProc@CManipulationManager@@KAJAEBUMessageCallThreadInfo@1@PEBUMsgCallTypeDefinition@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationManager::s_ManipulationThreadEndpointProc(
        char *a1,
        const struct MsgCallTypeDefinition *a2,
        int a3)
{
  unsigned int v6; // edi
  void *v8; // [rsp+20h] [rbp-18h]

  if ( a1 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
  LODWORD(v8) = a3;
  v6 = CManipulationManager::s_EndpointProc(
         (const struct CManipulationManager::MessageCallThreadInfo *)(a1 + 32),
         a2,
         a1,
         a2,
         v8);
  if ( a1 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 16LL))(a1);
  return v6;
}
