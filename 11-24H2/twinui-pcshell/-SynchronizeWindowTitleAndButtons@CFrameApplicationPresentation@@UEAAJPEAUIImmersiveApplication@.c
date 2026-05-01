/*
 * XREFs of ?SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1801F5F40
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_e7bc64b627cbb54866febc88068197a7___ @ 0x180309310 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_e7bc64b627cbb54866febc88068197a7___.c)
 *     _lambda_b8a139c36294ee7a0b7be3bff03bc510_::_lambda_b8a139c36294ee7a0b7be3bff03bc510_ @ 0x180309644 (_lambda_b8a139c36294ee7a0b7be3bff03bc510_--_lambda_b8a139c36294ee7a0b7be3bff03bc510_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::SynchronizeWindowTitleAndButtons(
        CFrameApplicationPresentation *this,
        struct IImmersiveApplication *a2)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  struct IImmersiveApplication *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = lambda_b8a139c36294ee7a0b7be3bff03bc510_::_lambda_b8a139c36294ee7a0b7be3bff03bc510_(v7, this, &v8);
  v5 = CFrameApplicationPresentation::_AddTaskToQueue__lambda_e7bc64b627cbb54866febc88068197a7___(this, v4);
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a2 + 16LL))(a2);
  return v5;
}
