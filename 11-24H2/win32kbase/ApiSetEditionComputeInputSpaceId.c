/*
 * XREFs of ApiSetEditionComputeInputSpaceId @ 0x1400C5188
 * Callers:
 *     ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKKPEAHPEAU_InputHitTestResult@@@Z @ 0x1400C3C98 (-TouchHitTest@CTouchProcessor@@CA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionComputeInputSpaceId(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  int (*v4)(void); // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(_QWORD); // rax

  v2 = a1;
  v3 = 0LL;
  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6064LL);
  if ( v4 )
  {
    if ( v4() >= 0 )
    {
      v7 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 48) + 6072LL);
      if ( v7 )
        return v7(v2);
    }
  }
  return v3;
}
