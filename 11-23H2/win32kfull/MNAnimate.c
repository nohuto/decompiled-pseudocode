/*
 * XREFs of MNAnimate @ 0x1C0233B54
 * Callers:
 *     MNGetPopupFromMenu @ 0x1C00E5C20 (MNGetPopupFromMenu.c)
 *     xxxMNCloseHierarchy @ 0x1C0216C60 (xxxMNCloseHierarchy.c)
 *     xxxMNSelectItem @ 0x1C02191F0 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0219F60 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C0231EEC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     FindTimer @ 0x1C003DA48 (FindTimer.c)
 *     GetDPIMetrics @ 0x1C00D8D88 (GetDPIMetrics.c)
 *     NtGdiBitBltInternal @ 0x1C0105030 (NtGdiBitBltInternal.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     StopFade @ 0x1C01BC550 (StopFade.c)
 *     MNDestroyAnimationBitmap @ 0x1C01FEA70 (MNDestroyAnimationBitmap.c)
 */

int __fastcall MNAnimate(__int64 a1, int a2)
{
  int result; // eax
  unsigned int v4; // ebx
  PERESOURCE *v5; // rax
  __int64 v6; // rcx
  PERESOURCE *v7; // rax
  __int64 v8; // rcx
  int v9; // edi
  int v10; // r14d
  __int64 DPIMetrics; // rax
  int v12; // r9d
  int v13; // r10d
  int v14; // edi
  int v15; // ecx
  int v16; // ebx
  __int64 v17; // rcx

  result = gfade[0];
  if ( (gfade[12] & 0x10) != 0 )
  {
    if ( !a2 )
      return StopFade();
    return result;
  }
  if ( !*(_QWORD *)(a1 + 96) )
    return result;
  v4 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *(_DWORD *)(a1 + 104);
  if ( !a2
    || v4 > 0xA5
    || (v5 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(0xFFFFF78000000004uLL),
        ExGetExclusiveWaiterCount(*v5))
    || (v7 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v6),
        (result = ExGetSharedWaiterCount(*v7)) != 0) )
  {
    NtGdiBitBltInternal(
      *(_QWORD *)(a1 + 96),
      0,
      0,
      *(_DWORD *)(a1 + 116),
      *(_DWORD *)(a1 + 120),
      *(HDC *)(a1 + 136),
      0,
      0,
      -2134114272,
      0xFFFFFF,
      0);
LABEL_27:
    MNDestroyAnimationBitmap(a1);
    _ReleaseDC(*(_QWORD *)(a1 + 96));
    v17 = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 96) = 0LL;
    return FindTimer(*(_QWORD *)(v17 + 56), 65531LL, 0, 1, 0LL);
  }
  v9 = *(_DWORD *)(a1 + 108);
  v10 = *(_DWORD *)(a1 + 112);
  if ( (*(_DWORD *)(a1 + 8) & 0x180000) != 0 )
  {
    DPIMetrics = GetDPIMetrics(v8);
    v8 = *(unsigned int *)(a1 + 116);
    result = (int)(*(_DWORD *)(DPIMetrics + 8) * v4 + 4) / 8;
    if ( result > (int)v8 )
      result = *(_DWORD *)(a1 + 116);
    *(_DWORD *)(a1 + 108) = result;
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x600000) != 0 )
  {
    result = (int)(*(_DWORD *)(GetDPIMetrics(v8) + 12) * v4 + 8) / 16;
    if ( result > *(_DWORD *)(a1 + 120) )
      result = *(_DWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 112) = result;
  }
  v12 = *(_DWORD *)(a1 + 108);
  if ( v12 != v9 || *(_DWORD *)(a1 + 112) != v10 )
  {
    v13 = 0;
    v14 = *(_DWORD *)(a1 + 112);
    if ( ((*(_DWORD *)(a1 + 8) >> 19) & 8) == 0 )
      v13 = *(_DWORD *)(a1 + 120) - v14;
    v15 = 0;
    v16 = (*(_DWORD *)(a1 + 8) >> 19) & 2;
    if ( !v16 )
      v15 = *(_DWORD *)(a1 + 116) - v12;
    NtGdiBitBltInternal(
      *(_QWORD *)(a1 + 96),
      v16 != 0 ? *(_DWORD *)(a1 + 116) - v12 : 0,
      ((*(_DWORD *)(a1 + 8) >> 19) & 8) != 0 ? *(_DWORD *)(a1 + 120) - v14 : 0,
      v12,
      v14,
      *(HDC *)(a1 + 136),
      v15,
      v13,
      -2134114272,
      0xFFFFFF,
      0);
    result = *(_DWORD *)(a1 + 108);
    if ( *(_DWORD *)(a1 + 116) == result )
    {
      result = *(_DWORD *)(a1 + 112);
      if ( *(_DWORD *)(a1 + 120) == result )
        goto LABEL_27;
    }
  }
  return result;
}
