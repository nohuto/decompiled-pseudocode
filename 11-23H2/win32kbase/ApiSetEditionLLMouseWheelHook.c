/*
 * XREFs of ApiSetEditionLLMouseWheelHook @ 0x1C0206C84
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01FA2E8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionLLMouseWheelHook(__int64 a1, unsigned int a2, __int64 *a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v9; // xmm0_8
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+38h] [rbp-10h]

  v4 = 0;
  if ( qword_1C0296378 )
  {
    if ( (int)qword_1C0296378() >= 0 )
    {
      v9 = *a3;
      if ( qword_1C0296380 )
      {
        v12 = *((_DWORD *)a3 + 2);
        v11 = v9;
        return (unsigned int)qword_1C0296380(a1, a2, &v11, a4);
      }
    }
  }
  return v4;
}
