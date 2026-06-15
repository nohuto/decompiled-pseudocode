/*
 * XREFs of AudioServerStartStopStreamConnection @ 0x180112290
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     WPP_SF_qll @ 0x180112580 (WPP_SF_qll.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioServerStartStopStreamConnection(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  int v4; // esi
  __int64 v6; // rax
  __int64 (__fastcall ***v7)(_QWORD, __int64, __int64); // rcx
  std::_Ref_count_base *v8; // rbx
  unsigned int v9; // edi

  v3 = a3;
  v4 = a2;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qll(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, a3, a1, a2, a3);
  }
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  v7 = *(__int64 (__fastcall ****)(_QWORD, __int64, __int64))a1;
  v8 = *(std::_Ref_count_base **)(a1 + 8);
  LOBYTE(a3) = v3 != 0;
  LOBYTE(a2) = v4 != 0;
  v9 = (**v7)(v7, a2, a3);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return v9;
}
