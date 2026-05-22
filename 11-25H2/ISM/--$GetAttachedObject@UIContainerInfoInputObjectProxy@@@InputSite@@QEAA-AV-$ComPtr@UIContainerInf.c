/*
 * XREFs of ??$GetAttachedObject@UIContainerInfoInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x1800577E8
 * Callers:
 *     ?GetContainerIdFromInputTarget@@YA_NV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAUCONTAINER_ID@@@Z @ 0x18015B23C (-GetContainerIdFromInputTarget@@YA_NV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAUCONTAINER_ID@@@.c)
 *     ?GetContainerGuidFromInputTarget@@YA_NV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAU_GUID@@@Z @ 0x1801A932C (-GetContainerGuidFromInputTarget@@YA_NV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAU_GUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall InputSite::GetAttachedObject<IContainerInfoInputObjectProxy>(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // r14
  int (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rbp
  __int64 v7; // rcx

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 488);
  v4 = *(_QWORD *)(a1 + 496);
  while ( v3 != v4 )
  {
    v5 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v3 + 8);
    v6 = **v5;
    v7 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( v6(v5, &GUID_8ddffe9c_458e_6d51_c227_1374408f672c, a2) >= 0 )
      break;
    v3 += 16LL;
  }
  return a2;
}
