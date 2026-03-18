/*
 * XREFs of ?DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x18021E288
 * Callers:
 *     ?DepartBufferedOutputPointer@CInteraction@@UEAA_NI@Z @ 0x18022B380 (-DepartBufferedOutputPointer@CInteraction@@UEAA_NI@Z.c)
 *     ?DepartBufferedOutputPointer@CInteractionRoot@@UEAA_NI@Z @ 0x180257710 (-DepartBufferedOutputPointer@CInteractionRoot@@UEAA_NI@Z.c)
 * Callees:
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x18008CC40 (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInteractionProcessor::DepartBufferedOutputPointer(CInteractionProcessor *a1, unsigned int a2)
{
  int v2; // ebx
  __int64 v5; // rbx
  char v6; // di
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v2 = *((_DWORD *)a1 + 197);
  v8 = 0LL;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v8);
  CInteractionProcessor::GetInteractionContext(a1, v2, &v8);
  v5 = v8;
  if ( v8 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 104LL))(v8, a2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return v6;
  }
  else
  {
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v8);
    return 0;
  }
}
