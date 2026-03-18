/*
 * XREFs of ?DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ @ 0x1801BD400
 * Callers:
 *     ?UpdateRenderFailureCount@CComposition@@SAXJ@Z @ 0x1801DF634 (-UpdateRenderFailureCount@CComposition@@SAXJ@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x180154DCC (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?Initialize@CKMAdapterHandle@@QEAAJPEAUIDXGIAdapter@@@Z @ 0x1801BD8F0 (-Initialize@CKMAdapterHandle@@QEAAJPEAUIDXGIAdapter@@@Z.c)
 *     ??1CKMAdapterHandle@@QEAA@XZ @ 0x180226C1C (--1CKMAdapterHandle@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDisplayManager::DriverUpdateInProgress(CDisplayManager *this)
{
  struct IDXGIFactory5 *v1; // rbx
  unsigned int i; // esi
  struct IDXGIFactory5Vtbl *lpVtbl; // rax
  unsigned int v4; // edi
  __int64 v5; // rdx
  int v6; // eax
  int v7; // edi
  __int64 *v9; // [rsp+20h] [rbp-28h] BYREF
  int *v10; // [rsp+28h] [rbp-20h] BYREF
  int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+34h] [rbp-14h]
  CDisplayManager *v13; // [rsp+70h] [rbp+28h] BYREF
  int v14; // [rsp+78h] [rbp+30h] BYREF
  struct IDXGIAdapter *v15; // [rsp+80h] [rbp+38h] BYREF
  struct IDXGIFactory5 *v16; // [rsp+88h] [rbp+40h] BYREF

  v13 = this;
  v16 = 0LL;
  CDisplayManager::InternalGetDXGIFactory(this, &v16);
  v1 = v16;
  if ( v16 )
  {
    v15 = 0LL;
    for ( i = 0; ; ++i )
    {
      lpVtbl = v1->lpVtbl;
      v10 = 0LL;
      v9 = (__int64 *)&v15;
      LOBYTE(v11) = 1;
      v4 = ((unsigned int (__fastcall *)(struct IDXGIFactory5 *, _QWORD, int **))lpVtbl->EnumAdapters1)(v1, i, &v10) >> 31;
      if ( (_BYTE)v11 )
      {
        v5 = *v9;
        *v9 = (__int64)v10;
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      if ( (_BYTE)v4 )
        break;
      LODWORD(v13) = 0;
      v6 = CKMAdapterHandle::Initialize((CKMAdapterHandle *)&v13, v15);
      v7 = (int)v13;
      if ( v6 >= 0 )
      {
        v14 = 0;
        v12 = 0;
        v10 = &v14;
        v9 = (__int64 *)((unsigned int)v13 | 0xB00000000LL);
        v11 = 4;
        D3DKMTQueryAdapterInfo(&v9);
        if ( v14 )
        {
          CKMAdapterHandle::~CKMAdapterHandle((CKMAdapterHandle *)&v13);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
          return 1;
        }
      }
      if ( v7 )
      {
        LODWORD(v13) = v7;
        D3DKMTCloseAdapter(&v13);
      }
    }
    if ( v15 )
      ((void (__fastcall *)(struct IDXGIAdapter *))v15->lpVtbl->Release)(v15);
    ((void (__fastcall *)(struct IDXGIFactory5 *))v1->lpVtbl->Release)(v1);
  }
  return 0;
}
