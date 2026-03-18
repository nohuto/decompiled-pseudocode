/*
 * XREFs of ?HasBufferedOutput@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x1801F0474
 * Callers:
 *     ?HasBufferedOutput@CInteraction@@UEAA_NIW4InputType@@@Z @ 0x180237160 (-HasBufferedOutput@CInteraction@@UEAA_NIW4InputType@@@Z.c)
 *     ?HasBufferedOutput@CInteractionRoot@@UEAA_NIW4InputType@@@Z @ 0x180262880 (-HasBufferedOutput@CInteractionRoot@@UEAA_NIW4InputType@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D64C (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x1801F1EE0 (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInteractionProcessor::HasBufferedOutput(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  char v5; // di
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v7);
  CInteractionProcessor::GetInteractionContext(a1);
  v4 = v7;
  if ( v7 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 96LL))(v7, a2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    return v5;
  }
  else
  {
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v7);
    return 0;
  }
}
