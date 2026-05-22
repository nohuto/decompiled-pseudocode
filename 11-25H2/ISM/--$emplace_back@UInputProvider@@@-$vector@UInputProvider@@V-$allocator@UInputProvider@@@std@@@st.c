/*
 * XREFs of ??$emplace_back@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAA?A_T$$QEAUInputProvider@@@Z @ 0x180097988
 * Callers:
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x1800383A0 (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 * Callees:
 *     ??$_Emplace_reallocate@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@AEAAPEAUInputProvider@@QEAU2@$$QEAU2@@Z @ 0x1800CBF3C (--$_Emplace_reallocate@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@s.c)
 */

__int64 __fastcall std::vector<InputProvider>::emplace_back<InputProvider>(__int64 a1, _OWORD *a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // r8
  _QWORD *v5; // rdx
  __int64 v6; // rdx

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 == *(_QWORD *)(a1 + 16) )
    return std::vector<InputProvider>::_Emplace_reallocate<InputProvider>(a1, v3, a2);
  v4 = (_QWORD *)(v3 + 16);
  *(_OWORD *)v3 = *a2;
  *(_QWORD *)(v3 + 16) = 0LL;
  v5 = a2 + 1;
  if ( v4 != (_QWORD *)(a2 + 1) )
  {
    *v4 = *v5;
    *v5 = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v6 + 24;
  return v6;
}
