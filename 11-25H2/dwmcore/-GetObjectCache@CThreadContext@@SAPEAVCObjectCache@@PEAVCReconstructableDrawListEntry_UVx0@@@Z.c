/*
 * XREFs of ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCReconstructableDrawListEntry_UVx0@@@Z @ 0x180045960
 * Callers:
 *     ??_GCReconstructableDrawListEntry_UVx0@@UEAAPEAXI@Z @ 0x180043A60 (--_GCReconstructableDrawListEntry_UVx0@@UEAAPEAXI@Z.c)
 *     ?Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z @ 0x180046710 (-Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180127840 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

struct CObjectCache *__fastcall CThreadContext::GetObjectCache(struct CReconstructableDrawListEntry_UVx0 *a1)
{
  int Current; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  Current = CThreadContext::GetCurrent(&v4);
  if ( Current < 0 )
    ModuleFailFastForHRESULT(Current, retaddr);
  return (struct CThreadContext *)((char *)v4 + 192);
}
