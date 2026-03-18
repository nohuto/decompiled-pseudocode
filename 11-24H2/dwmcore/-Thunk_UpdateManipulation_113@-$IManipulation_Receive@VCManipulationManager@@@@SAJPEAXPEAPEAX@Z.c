/*
 * XREFs of ?Thunk_UpdateManipulation_113@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x180256FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Update@CManipulation@@QEAAJPEAUManipulationData@@@Z @ 0x180201AFC (-Update@CManipulation@@QEAAJPEAUManipulationData@@@Z.c)
 *     ?Attach@?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z @ 0x1802043E4 (-Attach@-$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IManipulation_Receive<CManipulationManager>::Thunk_UpdateManipulation_113(
        CManipulation *a1,
        __int64 a2)
{
  struct ManipulationData *v2; // rbx
  __int64 *v3; // rdx
  struct ManipulationData *v4; // rdx
  CManipulation *v5; // rbx
  __int64 v6; // r8
  int v7; // r9d
  unsigned int v8; // edi
  CManipulation *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  v2 = *(struct ManipulationData **)(a2 + 8);
  v3 = *(__int64 **)a2;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<CManipulation>::Attach((__int64 *)&v10, *v3);
  v4 = v2;
  v5 = v10;
  v8 = CManipulation::Update(v10, v4, v6, v7);
  if ( v5 )
    (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)v5 + 16LL))(v5);
  return v8;
}
