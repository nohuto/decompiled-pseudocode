/*
 * XREFs of IsEditionPostRawMouseInputMessageSupported @ 0x1400EF5AC
 * Callers:
 *     ApiSetEditionPostRawMouseInputMessage @ 0x1400EC370 (ApiSetEditionPostRawMouseInputMessage.c)
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x14018C154 (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsEditionPostRawMouseInputMessageSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6936LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
