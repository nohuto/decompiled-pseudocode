/*
 * XREFs of ?UpdateExpressions@CComposition@@QEAAXXZ @ 0x180013CF0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18007AD60 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180013DC0 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComposition::UpdateExpressions(CComposition *this, __int64 a2, __int64 a3)
{
  CExpressionManager *v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 *v6; // rax
  __int64 v7; // r8
  _BYTE v8[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_PROCESS_EXPRESSIONS_Start,
      a3,
      1LL,
      v8);
  v4 = (CExpressionManager *)*((_QWORD *)this + 103);
  v5 = *((_QWORD *)this + 111);
  v6 = (unsigned __int64 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 39) + 24LL))(*((_QWORD *)this + 39));
  CExpressionManager::UpdateExpressions(v4, *v6, v5);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_PROCESS_EXPRESSIONS_Stop,
      v7,
      1LL,
      v8);
}
