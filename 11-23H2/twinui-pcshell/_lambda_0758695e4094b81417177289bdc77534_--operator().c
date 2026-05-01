/*
 * XREFs of _lambda_0758695e4094b81417177289bdc77534_::operator() @ 0x1803BF4C4
 * Callers:
 *     CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_0758695e4094b81417177289bdc77534___ @ 0x1803BE1B8 (CImmersiveApp--CImmersiveWindowCollection--ForEach__lambda_0758695e4094b81417177289bdc77534___.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NotifyWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@I_K_JW4DELIVERY_METHOD@1@@Z @ 0x1803A57B8 (-NotifyWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@I_K_JW4DELIVERY_METHOD@1@@Z.c)
 */

char __fastcall lambda_0758695e4094b81417177289bdc77534_::operator()(__int64 a1, __int64 a2)
{
  char v2; // r14
  int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned int v6; // ebp
  HWND v7; // rax

  v2 = 1;
  if ( *(_DWORD *)(a1 + 24) == 1 )
    goto LABEL_5;
  if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 2) < 2 )
  {
    v2 = 0;
LABEL_5:
    v3 = *(_DWORD *)(a1 + 32);
    v4 = *(_QWORD *)(a1 + 16);
    v5 = *(_QWORD *)(a1 + 8);
    v6 = *(_DWORD *)a1;
    v7 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
    CApplicationManagerUtility::NotifyWindow(v7, v6, v5, v4, v3);
    return v2;
  }
  return 0;
}
