/*
 * XREFs of _lambda_00a99e92ff34f3b9a38e1d2a681d0525_::operator() @ 0x18039708C
 * Callers:
 *     ?_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18000BA68 (-_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800482C4 (--4-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicatio.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall lambda_00a99e92ff34f3b9a38e1d2a681d0525_::operator()(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  int (__fastcall *v5)(__int64, _QWORD, _QWORD, int *); // rbx
  unsigned int v6; // eax
  int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 280LL))(a2) & 4) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( !v4
      || (v5 = *(int (__fastcall **)(__int64, _QWORD, _QWORD, int *))(*(_QWORD *)v4 + 48LL),
          v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 384LL))(a2),
          v5(v4, v6, 0LL, &v8) < 0)
      || v8 != 1 )
    {
      Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::operator=(*(__int64 **)a1, a2);
    }
  }
  return **(_QWORD **)a1 == 0LL;
}
