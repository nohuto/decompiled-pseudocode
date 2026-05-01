/*
 * XREFs of ?SetFallbackForeground@CFallbackWindow@@UEAAJW4FALLBACK_FOREGROUND_USAGE@@@Z @ 0x1802F04A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qLd @ 0x1802F0568 (WPP_SF_qLd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFallbackWindow::SetFallbackForeground(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 v5; // rbp
  int v6; // edx
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8

  v2 = 0;
  if ( *(_DWORD *)(a1 + 44) != a2 )
  {
    v5 = 0LL;
    v6 = a2 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
      {
        v2 = -2147024809;
LABEL_9:
        *(_DWORD *)(a1 + 44) = a2;
        return v2;
      }
      v5 = *(_QWORD *)(a1 - 32);
    }
    v7 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[16].Ptr
                                                           + 56LL))(
           CApplicationManagerUtility::g_pIAMGlobals[16].Ptr,
           v5,
           0LL);
    v2 = v7;
    if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_qLd(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), v8, v9, v5, a2, v7);
    }
    goto LABEL_9;
  }
  return v2;
}
