/*
 * XREFs of ??$FindProperty@UPresentationSurfaceInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentationSurfaceInfo@@@Z @ 0x14009E1A8
 * Callers:
 *     ?Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z @ 0x14009E32C (-Initialize@CContentResource@@IEAAJPEAUPresentationSurfaceInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipPropertySetBase::FindProperty<PresentationSurfaceInfo>(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r11d
  unsigned int v3; // r8d
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 12);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 24);
  *a2 = 0LL;
  if ( v2 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    while ( 1 )
    {
      v6 = 32LL * v3;
      if ( *(_QWORD *)(v6 + v5) == *(_QWORD *)&GUID_d7734341_8032_4610_bc01_e5ef3d219339.Data1 )
      {
        result = *(_QWORD *)(v6 + v5 + 8);
        if ( result == *(_QWORD *)GUID_d7734341_8032_4610_bc01_e5ef3d219339.Data4 && *(_DWORD *)(v6 + v5 + 16) == 16 )
          break;
      }
      result = *(unsigned int *)(v6 + v5 + 16);
      ++v3;
      v4 += result;
      if ( v3 >= v2 )
        return result;
    }
    *a2 = v4;
  }
  return result;
}
