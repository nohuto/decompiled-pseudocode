/*
 * XREFs of ??$GetAppPosition@VCTaskWindowFinder@@@?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@QEBAJAEBVCTaskWindowFinder@@_KPEA_K@Z @ 0x1801D6DE4
 * Callers:
 *     ?HandleActivation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x18022B620 (-HandleActivation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::GetAppPosition<CTaskWindowFinder>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  unsigned int v7; // ebx
  unsigned __int64 i; // rdi
  __int64 *v9; // rcx
  __int64 v10; // rax

  v7 = 0;
  *a4 = 0LL;
  for ( i = 0LL; ; ++i )
  {
    if ( i >= *(_QWORD *)(a1 + 16) )
      return (unsigned int)-2147319765;
    if ( *(_BYTE *)(a2 + 16) )
      break;
    v9 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 8 * i);
    v10 = *v9;
    if ( *(_QWORD *)a2 )
    {
      if ( (*(__int64 (**)(void))(v10 + 32))() == *(_QWORD *)a2 )
        break;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v10 + 48))(v9, *(_QWORD *)(a2 + 8)) )
    {
      break;
    }
  }
  *a4 = i;
  return v7;
}
