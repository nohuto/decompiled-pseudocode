/*
 * XREFs of ?AtlComModuleRegisterClassObjects@ATL@@YAJPEAU_ATL_COM_MODULE70@1@KK@Z @ 0x14001E2F8
 * Callers:
 *     ?PreMessageLoop@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x14001E210 (-PreMessageLoop@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::AtlComModuleRegisterClassObjects(IUnknown *a1, __int64 a2, DWORD a3)
{
  struct ATL::_ATL_OBJMAP_ENTRY30 **v3; // rdi
  struct ATL::_ATL_OBJMAP_ENTRY30 **v5; // rax
  HRESULT v6; // ebx
  struct ATL::_ATL_OBJMAP_ENTRY30 *v7; // rsi
  LPUNKNOWN pUnk; // [rsp+40h] [rbp+8h] BYREF

  pUnk = a1;
  v3 = off_1400C3510;
  v5 = (struct ATL::_ATL_OBJMAP_ENTRY30 **)off_1400C3518;
  v6 = 1;
  while ( v3 < v5 && v6 >= 0 )
  {
    v7 = *v3;
    if ( *v3 )
    {
      pUnk = 0LL;
      if ( *((_QWORD *)v7 + 2) )
      {
        v6 = (*((__int64 (__fastcall **)(_QWORD, GUID *, LPUNKNOWN *))v7 + 2))(
               *((_QWORD *)v7 + 3),
               &GUID_00000000_0000_0000_c000_000000000046,
               &pUnk);
        if ( v6 >= 0 )
          v6 = CoRegisterClassObject(*(const IID *const *)v7, pUnk, 4u, a3, (LPDWORD)v7 + 10);
        if ( pUnk )
          ((void (__fastcall *)(LPUNKNOWN))pUnk->lpVtbl->Release)(pUnk);
        v5 = (struct ATL::_ATL_OBJMAP_ENTRY30 **)off_1400C3518;
      }
      else
      {
        v6 = 0;
      }
    }
    ++v3;
  }
  return (unsigned int)v6;
}
