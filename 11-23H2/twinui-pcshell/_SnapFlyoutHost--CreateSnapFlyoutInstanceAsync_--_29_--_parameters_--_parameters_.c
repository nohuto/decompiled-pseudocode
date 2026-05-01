/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync_::_29_::_parameters_::_parameters_ @ 0x180225690
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_InitCoro$2 @ 0x180225D0C (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_InitCoro$2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync_::_29_::_parameters_::_parameters_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 *a8,
        int a9)
{
  __int64 v9; // rdx
  __int64 result; // rax

  *(_DWORD *)(a1 + 20) = a5;
  *(_DWORD *)(a1 + 24) = a6;
  *(_QWORD *)(a1 + 32) = a7;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 16) = a4;
  v9 = *a8;
  *a8 = 0LL;
  *(_DWORD *)(a1 + 48) = a9;
  result = a1;
  *(_QWORD *)(a1 + 40) = v9;
  return result;
}
