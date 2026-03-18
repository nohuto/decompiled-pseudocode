/*
 * XREFs of ??0CWheelEvent@CMouseProcessor@@QEAA@PEBVCMouseEvent@1@W4MouseWheelType@@W4MouseWheelRoutingMode@@@Z @ 0x1C01F4AF8
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C01F5A50 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     Feature_BackportReverseMouseWheelDirection__private_IsEnabledDeviceUsage @ 0x1C00D55FC (Feature_BackportReverseMouseWheelDirection__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall CMouseProcessor::CWheelEvent::CWheelEvent(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  __int16 v7; // ax
  __int64 result; // rax

  v4 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)a1 = &CMouseProcessor::CWheelEvent::`vftable';
  *(_DWORD *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 28) = a3;
  if ( (unsigned int)Feature_BackportReverseMouseWheelDirection__private_IsEnabledDeviceUsage()
    && (v6 = *(_QWORD *)(a1 + 8), (*(_DWORD *)(v6 + 112) & 0x10000) == 0)
    && dword_1C0289B60 )
  {
    v7 = -*(_WORD *)(v6 + 30);
  }
  else
  {
    v7 = *(_WORD *)(*(_QWORD *)(a1 + 8) + 30LL);
  }
  *(_WORD *)(a1 + 32) = v7;
  result = a1;
  *(_DWORD *)(a1 + 16) = 3;
  return result;
}
