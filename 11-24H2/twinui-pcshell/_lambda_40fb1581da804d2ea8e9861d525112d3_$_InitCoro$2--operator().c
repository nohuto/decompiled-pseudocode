/*
 * XREFs of _lambda_40fb1581da804d2ea8e9861d525112d3_$_InitCoro$2::operator() @ 0x180349AE4
 * Callers:
 *     _lambda_40fb1581da804d2ea8e9861d525112d3_::operator() @ 0x180349DBC (_lambda_40fb1581da804d2ea8e9861d525112d3_--operator().c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _lambda_40fb1581da804d2ea8e9861d525112d3_$_ResumeCoro$1::operator() @ 0x180349C00 (_lambda_40fb1581da804d2ea8e9861d525112d3_$_ResumeCoro$1--operator().c)
 */

__int64 __fastcall lambda_40fb1581da804d2ea8e9861d525112d3___InitCoro_2::operator()(
        _DWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 v6; // rdi
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h]
  __int64 *v10; // [rsp+70h] [rbp+18h]

  v10 = a3;
  v9 = a2;
  *(_QWORD *)(a2 + 113) = a4;
  *(_QWORD *)a2 = lambda_40fb1581da804d2ea8e9861d525112d3___ResumeCoro_1::operator();
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v6 = a2 - 112;
  memset_0((void *)(a2 - 112), 0, 0x68uLL);
  *(_QWORD *)(v6 + 16) = off_1807313B8;
  *(_QWORD *)(v6 + 24) = off_180731360;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v6 + 8) = 1LL;
  *(_QWORD *)(v6 + 32) = 0LL;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_BYTE *)(v6 + 48) = 0;
  *(_QWORD *)v6 = &off_180731400;
  *(_QWORD *)(v6 + 56) = 0LL;
  *(_QWORD *)(v6 + 64) = 0LL;
  __ExceptionPtrCreate((void *)(v6 + 56));
  *(_QWORD *)(v6 + 72) = 0LL;
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 88) = 0LL;
  *(_DWORD *)(v6 + 96) = 0;
  *(_BYTE *)(v6 + 100) = 0;
  *(_QWORD *)v6 = &off_180731400;
  *a3 = v6 + 16;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a3);
  v8 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  *(_BYTE *)(a2 + 112) = 0;
  return lambda_40fb1581da804d2ea8e9861d525112d3___ResumeCoro_1::operator()(a2);
}
