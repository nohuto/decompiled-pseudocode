/*
 * XREFs of DxgkStopAdapters @ 0x1401D2618
 * Callers:
 *     DpiKsrRecoveryShutdown @ 0x14024A170 (DpiKsrRecoveryShutdown.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiKsrSetBootGraphicsInformation @ 0x14024A4EC (DpiKsrSetBootGraphicsInformation.c)
 *     DpiKsrStopAdapter @ 0x14024A5C0 (DpiKsrStopAdapter.c)
 */

__int64 DxgkStopAdapters()
{
  __int64 result; // rax
  _QWORD *v1; // rdi
  _QWORD *i; // rbx
  __int64 v3; // rcx

  result = (__int64)DXGGLOBAL::GetGlobal();
  v1 = (_QWORD *)(result + 768);
  for ( i = *(_QWORD **)(result + 768); i != v1 && i; i = (_QWORD *)*i )
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
            result = (unsigned int)(dword_14015E150 - 1);
            if ( (unsigned int)result <= 1 )
              result = DpiKsrSetBootGraphicsInformation();
          }
        }
      }
    }
  }
  return result;
}
