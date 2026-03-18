/*
 * XREFs of ?IsBufferingOutput@CInteractionProcessor@@QEAA_NW4InputType@@@Z @ 0x1801F1954
 * Callers:
 *     ?IsBufferingOutput@CInteraction@@UEAA_NW4InputType@@@Z @ 0x18022FBA0 (-IsBufferingOutput@CInteraction@@UEAA_NW4InputType@@@Z.c)
 *     ?IsBufferingOutput@CInteractionRoot@@UEAA_NW4InputType@@@Z @ 0x180262890 (-IsBufferingOutput@CInteractionRoot@@UEAA_NW4InputType@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D64C (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x1801F1EE0 (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInteractionProcessor::IsBufferingOutput(__int64 a1)
{
  __int64 v2; // rbx
  char v3; // di
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v5);
  CInteractionProcessor::GetInteractionContext(a1);
  v2 = v5;
  if ( v5 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 88LL))(v5);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    return v3;
  }
  else
  {
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v5);
    return 0;
  }
}
