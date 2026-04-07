/*
 * XREFs of ?Remove@?$DynArray@PEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@$0A@@@QEAAHAEBQEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@@Z @ 0x180055070
 * Callers:
 *     ?WindowDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18001D074 (-WindowDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_ClearBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAUHWND__@@@Z @ 0x18001D158 (-_ClearBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAUHWND__@@@Z.c)
 *     ?WindowCanHaveIconicBitmapChanged@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x18005502C (-WindowCanHaveIconicBitmapChanged@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *,0>::Remove(
        __int64 *a1,
        __int64 *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax
  __int64 v4; // r10
  __int64 v5; // rdx

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0LL;
  v4 = *a1;
  if ( v2 )
  {
    v5 = *a2;
    do
    {
      if ( v5 == *(_QWORD *)(v4 + 8 * v3) )
        break;
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < v2 );
  }
  if ( (unsigned int)v3 >= v2 )
    return 0LL;
  for ( ; (unsigned int)v3 < v2 - 1; v2 = *((_DWORD *)a1 + 6) )
  {
    *(_QWORD *)(v4 + 8LL * (unsigned int)v3) = *(_QWORD *)(v4 + 8LL * (unsigned int)(v3 + 1));
    LODWORD(v3) = v3 + 1;
  }
  *((_DWORD *)a1 + 6) = v2 - 1;
  return 1LL;
}
