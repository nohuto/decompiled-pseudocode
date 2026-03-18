/*
 * XREFs of ?IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z @ 0x18008BE4C
 * Callers:
 *     ?IsBufferingOutput@CInteraction@@UEAA_NW4InputType@@@Z @ 0x180224250 (-IsBufferingOutput@CInteraction@@UEAA_NW4InputType@@@Z.c)
 *     ?IsBufferingOutput@CInteractionRoot@@UEAA_NW4InputType@@@Z @ 0x180257740 (-IsBufferingOutput@CInteractionRoot@@UEAA_NW4InputType@@@Z.c)
 * Callees:
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x18008CC40 (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInteractionProcessor::IsBufferingOutput(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rbx
  char v5; // di
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  if ( !a2 )
    v2 = *(_DWORD *)(a1 + 788);
  v7 = 0LL;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v7);
  CInteractionProcessor::GetInteractionContext(a1, v2, &v7);
  v4 = v7;
  if ( v7 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 88LL))(v7);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    return v5;
  }
  else
  {
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v7);
    return 0;
  }
}
