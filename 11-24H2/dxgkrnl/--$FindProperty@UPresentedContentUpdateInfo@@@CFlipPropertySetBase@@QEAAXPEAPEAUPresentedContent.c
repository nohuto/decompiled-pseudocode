/*
 * XREFs of ??$FindProperty@UPresentedContentUpdateInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedContentUpdateInfo@@@Z @ 0x14004C204
 * Callers:
 *     ?PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14001A264 (-PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpd.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipPropertySetBase::FindProperty<PresentedContentUpdateInfo>(__int64 a1, _QWORD *a2)
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
    v9 = *(_QWORD *)(v8 + v7) - *(_QWORD *)&GUID_002058ee_e3d4_4092_afe3_bd372f300335.Data1;
    if ( !v9 )
      v9 = *(_QWORD *)(v8 + v7 + 8) - *(_QWORD *)GUID_002058ee_e3d4_4092_afe3_bd372f300335.Data4;
    if ( !v9 && *(_DWORD *)(v8 + v7 + 16) == 72 )
    {
      *a2 = v3;
      return;
    }
    v3 += *(unsigned int *)(v8 + v7 + 16);
    ++v4;
  }
}
