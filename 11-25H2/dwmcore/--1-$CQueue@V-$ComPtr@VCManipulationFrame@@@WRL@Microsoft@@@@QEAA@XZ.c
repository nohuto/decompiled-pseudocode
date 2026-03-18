/*
 * XREFs of ??1?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x180237974
 * Callers:
 *     _dynamic_atexit_destructor_for__CManipulationManager::s_InputQueue__ @ 0x1802E8EE0 (_dynamic_atexit_destructor_for__CManipulationManager--s_InputQueue__.c)
 * Callees:
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x1801AF2D8 (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::~CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>(
        __int64 a1)
{
  _QWORD *v2; // rcx
  bool v3; // di
  __int64 v4; // rax
  _QWORD *v5; // [rsp+30h] [rbp+8h] BYREF

  do
  {
    CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(a1, &v5, 1, 0LL);
    v2 = v5;
    v3 = v5 != 0LL;
    if ( v5 )
    {
      v4 = *v5;
      v5 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(v4 + 8))(v2);
    }
  }
  while ( v3 );
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
}
