/*
 * XREFs of ?_Free@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800AA428
 * Callers:
 *     ??1?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x1800A98A8 (--1-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ.c)
 *     ?InitializeMRTObjects@MRTHelperBase@ShellMRTHelper@@AEAAJXZ @ 0x1800A9978 (-InitializeMRTObjects@MRTHelperBase@ShellMRTHelper@@AEAAJXZ.c)
 *     ?Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x1800A9E2C (-Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free(__int64 a1)
{
  void *v2; // rcx
  HLOCAL result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = LocalFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
