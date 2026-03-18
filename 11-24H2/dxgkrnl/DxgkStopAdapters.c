/*
 * XREFs of DxgkStopAdapters @ 0x1401D78C8
 * Callers:
 *     DpiKsrRecoveryShutdown @ 0x140250FA0 (DpiKsrRecoveryShutdown.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiKsrSetBootGraphicsInformation @ 0x14025131C (DpiKsrSetBootGraphicsInformation.c)
 *     DpiKsrStopAdapter @ 0x1402513F0 (DpiKsrStopAdapter.c)
 */

__int64 DxgkStopAdapters()
{
  __int64 result; // rax
  _QWORD *v1; // rdi
  _QWORD *i; // rbx
  __int64 v3; // rcx

  result = (__int64)DXGGLOBAL::GetGlobal();
  v1 = (_QWORD *)(result + 800);
  for ( i = *(_QWORD **)(result + 800); i != v1 && i; i = (_QWORD *)*i )
  {
    v3 = i[27];
    if ( v3 )
    {
      result = *(_QWORD *)(v3 + 64);
      if ( result )
      {
        if ( *(_DWORD *)(result + 16) == 1953656900 && *(_DWORD *)(result + 20) == 2 && !*(_BYTE *)(result + 5144) )
        {
          result = DpiKsrStopAdapter(v3, 0LL);
          if ( (_DWORD)result != -1073741637 )
          {
            result = (unsigned int)(dword_140161110 - 1);
            if ( (unsigned int)result <= 1 )
              result = DpiKsrSetBootGraphicsInformation();
          }
        }
      }
    }
  }
  return result;
}
