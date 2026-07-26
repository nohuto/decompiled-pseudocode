/*
 * XREFs of WppClassicProviderCallback @ 0x1400CC970
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z @ 0x1400CC034 (-ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z.c)
 */

void __fastcall WppClassicProviderCallback(const struct _GUID *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  char v5; // di
  __int64 v6; // rdx

  if ( (unsigned __int8)a2 <= 1u )
  {
    v4 = a4;
    v5 = a2;
    if ( (_BYTE)a2 )
    {
      *(_DWORD *)(a4 + 44) = *(_DWORD *)(a3 + 4);
      *(_BYTE *)(a4 + 41) = *(_BYTE *)(a3 + 2);
      v6 = *(_QWORD *)a3;
      *(_QWORD *)(a4 + 24) = *(_QWORD *)a3;
      LOBYTE(a4) = *(_BYTE *)(a3 + 2);
      imp_WppRecorderReplay(WPP_GLOBAL_Control, v6, *(unsigned int *)(a3 + 4), a4);
    }
    else
    {
      *(_BYTE *)(a4 + 41) = 0;
      *(_DWORD *)(a4 + 44) = 0;
      *(_QWORD *)(a4 + 24) = 0LL;
    }
    LOBYTE(a3) = v5;
    ndisEnableWppTracingCallback(a1, a2, a3, *(_DWORD *)(v4 + 44), *(_BYTE *)(v4 + 41));
  }
}
