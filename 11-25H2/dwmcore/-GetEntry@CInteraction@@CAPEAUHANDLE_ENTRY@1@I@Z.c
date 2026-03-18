/*
 * XREFs of ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x1801B0860
 * Callers:
 *     ?ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z @ 0x1801AF804 (-ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z.c)
 *     ?AllocateHandleTableEntry@CInteraction@@CAJPEAV1@PEAI@Z @ 0x1801B014C (-AllocateHandleTableEntry@CInteraction@@CAJPEAV1@PEAI@Z.c)
 *     ?FinalRelease@CInteraction@@UEAAXXZ @ 0x1801B0810 (-FinalRelease@CInteraction@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct CInteraction::HANDLE_ENTRY *__fastcall CInteraction::GetEntry(unsigned int a1)
{
  __int64 v1; // rdx

  v1 = 0LL;
  if ( a1 && a1 < dword_18040524C && *(_DWORD *)((char *)qword_180405258 + (unsigned int)Size * a1) )
    return (struct CInteraction::HANDLE_ENTRY *)((char *)qword_180405258 + (unsigned int)Size * a1);
  return (struct CInteraction::HANDLE_ENTRY *)v1;
}
