/*
 * XREFs of ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x180192540
 * Callers:
 *     ?ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z @ 0x180191544 (-ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z.c)
 *     ?AllocateHandleTableEntry@CInteraction@@CAJPEAV1@PEAI@Z @ 0x180191E20 (-AllocateHandleTableEntry@CInteraction@@CAJPEAV1@PEAI@Z.c)
 *     ?FinalRelease@CInteraction@@UEAAXXZ @ 0x1801924F0 (-FinalRelease@CInteraction@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct CInteraction::HANDLE_ENTRY *__fastcall CInteraction::GetEntry(unsigned int a1)
{
  __int64 v1; // rdx

  v1 = 0LL;
  if ( a1 && a1 < dword_1803F924C && *(_DWORD *)((char *)qword_1803F9258 + (unsigned int)Size * a1) )
    return (struct CInteraction::HANDLE_ENTRY *)((char *)qword_1803F9258 + (unsigned int)Size * a1);
  return (struct CInteraction::HANDLE_ENTRY *)v1;
}
