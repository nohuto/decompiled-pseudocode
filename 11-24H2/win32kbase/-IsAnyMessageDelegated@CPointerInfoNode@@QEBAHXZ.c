/*
 * XREFs of ?IsAnyMessageDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1400C3BDC
 * Callers:
 *     ?ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x140205358 (-ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 * Callees:
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C3C74 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CPointerInfoNode::IsAnyMessageDelegated(CPointerInfoNode *this)
{
  int *v1; // rcx
  __int64 v2; // r8
  int v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // eax

  if ( !(unsigned int)CPointerInfoNode::IsValid(this) )
    return 0LL;
  v3 = *v1;
  v4 = 1;
  if ( ((v3 & 0x100000) == 0 || (v3 & 0x200000) != 0 || (v3 & 0x400000) != 0)
    && ((v3 & 0x800000) == 0 || (v3 & 0x1000000) == 0 || (v3 & 0x2000000) != 0 || (v3 & 0x4000000) != 0)
    && ((v3 & 0x8000000) == 0 || (v3 & 0x10000000) == 0 || (v3 & 0x20000000) != 0 || (v3 & 0x40000000) != 0) )
  {
    if ( v3 >= 0 || (v5 = *(_DWORD *)(v2 + 4), (v5 & 1) == 0) || (v5 & 2) != 0 || (v5 & 4) != 0 )
    {
      v6 = *(_DWORD *)(v2 + 4);
      if ( (v6 & 8) == 0 || (v6 & 0x10) == 0 || (v6 & 0x20) != 0 || (v6 & 0x40) != 0 )
        return 0;
    }
  }
  return v4;
}
