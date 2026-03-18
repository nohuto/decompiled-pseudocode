/*
 * XREFs of ?_FindListener@Edgy@@YAPEAUtagEDGY_LISTENER@@AEAUtagEDGY_DATA@@PEAXW4tagEDGY_LOCATION@@@Z @ 0x1402A449C
 * Callers:
 *     EdgyUnregisterListener @ 0x140219360 (EdgyUnregisterListener.c)
 *     ?_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z @ 0x1402A42F0 (-_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Edgy::_FindListener(__int64 a1, __int64 a2, int a3)
{
  unsigned int i; // r9d
  __int64 result; // rax

  for ( i = 0; i < *(_DWORD *)a1; ++i )
  {
    result = *(_QWORD *)(a1 + 8) + 32LL * i;
    if ( *(_QWORD *)result == a2 && *(_DWORD *)(result + 16) == a3 )
      return result;
  }
  return 0LL;
}
