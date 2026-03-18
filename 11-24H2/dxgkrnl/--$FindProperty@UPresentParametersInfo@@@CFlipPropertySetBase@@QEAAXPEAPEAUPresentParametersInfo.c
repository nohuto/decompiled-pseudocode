/*
 * XREFs of ??$FindProperty@UPresentParametersInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentParametersInfo@@@Z @ 0x140048024
 * Callers:
 *     ?PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14001A264 (-PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpd.c)
 *     ?ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PEAVCFlipContentToken@@@Z @ 0x140047F38 (-ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PE.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipPropertySetBase::FindProperty<PresentParametersInfo>(__int64 a1, _QWORD *a2)
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
    v9 = *(_QWORD *)(v8 + v7) - *(_QWORD *)&GUID_9fc1b1de_f2fa_4c86_9eb0_b1039224a5ae.Data1;
    if ( !v9 )
      v9 = *(_QWORD *)(v8 + v7 + 8) - *(_QWORD *)GUID_9fc1b1de_f2fa_4c86_9eb0_b1039224a5ae.Data4;
    if ( !v9 && *(_DWORD *)(v8 + v7 + 16) == 16 )
    {
      *a2 = v3;
      return;
    }
    v3 += *(unsigned int *)(v8 + v7 + 16);
    ++v4;
  }
}
