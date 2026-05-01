/*
 * XREFs of SnapFlyoutHost::InternalShutdownAsync$_InitCoro$2 @ 0x180227558
 * Callers:
 *     ?InternalShutdownAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180227998 (-InternalShutdownAsync@SnapFlyoutHost@@AEAA-AUfire_and_forget@winrt@@AEBV-$unique_any_t@V-$uniqu.c)
 * Callees:
 *     SnapFlyoutHost::InternalShutdownAsync$_ResumeCoro$1 @ 0x180227620 (SnapFlyoutHost--InternalShutdownAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapFlyoutHost::InternalShutdownAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5)
{
  *(_QWORD *)(a2 + 114) = a5;
  *(_QWORD *)(a2 + 122) = a4;
  *(_QWORD *)a2 = SnapFlyoutHost::InternalShutdownAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 113) = 0;
  return SnapFlyoutHost::InternalShutdownAsync__ResumeCoro_1(a2);
}
