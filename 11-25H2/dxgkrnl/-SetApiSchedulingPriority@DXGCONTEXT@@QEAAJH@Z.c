/*
 * XREFs of ?SetApiSchedulingPriority@DXGCONTEXT@@QEAAJH@Z @ 0x14006CBD8
 * Callers:
 *     DxgkSetContextSchedulingPriority @ 0x1403E92A0 (DxgkSetContextSchedulingPriority.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z @ 0x1403B04E8 (-SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SetApiSchedulingPriority(DXGCONTEXT *this, int a2)
{
  bool IsDxgmms2; // al
  __int64 result; // rax

  if ( (unsigned int)(a2 + 7) > 0xE )
    return 3221225485LL;
  IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL));
  DXGCONTEXT::SetSchedulingPriority(this, a2 + *((_DWORD *)this + 104), !IsDxgmms2);
  result = 0LL;
  *((_DWORD *)this + 105) = a2;
  return result;
}
