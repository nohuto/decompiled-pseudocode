/*
 * XREFs of ??$FindProperty@UFlipContentBufferFormatInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentBufferFormatInfo@@@Z @ 0x140042AC0
 * Callers:
 *     ?PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x14009D4BC (-PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPrese.c)
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x14009DA2C (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipPropertySetBase::FindProperty<FlipContentBufferFormatInfo>(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r9
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 12);
  while ( v4 < v5 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = 32LL * v4;
    v9 = *(_QWORD *)(v8 + v7) - *(_QWORD *)&GUID_2d65776f_bd54_4cd7_9bd2_2232e4fcd974.Data1;
    if ( !v9 )
      v9 = *(_QWORD *)(v8 + v7 + 8) - *(_QWORD *)GUID_2d65776f_bd54_4cd7_9bd2_2232e4fcd974.Data4;
    if ( !v9 && *(_DWORD *)(v8 + v7 + 16) == 8 )
    {
      *a2 = v3;
      return;
    }
    v3 += *(unsigned int *)(v8 + v7 + 16);
    ++v4;
  }
}
