/*
 * XREFs of MiDecrementZeroEngineThread @ 0x1403C7E68
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020A480 (MiBackgroundZeroLocalPages.c)
 *     MiBackgroundZeroNodePages @ 0x1403C6F60 (MiBackgroundZeroNodePages.c)
 *     MiSelectBestZeroingProcessor @ 0x1403C7C00 (MiSelectBestZeroingProcessor.c)
 *     MiReduceZeroingThreads @ 0x1403C7FBC (MiReduceZeroingThreads.c)
 *     MiRemoveThreadFromEngineLists @ 0x1403C81EC (MiRemoveThreadFromEngineLists.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDecrementZeroEngineThread(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r8
  __int64 v4; // r8
  __int64 v5; // rdx
  _DWORD *v6; // rcx

  result = *(unsigned int *)(a1 + 384);
  if ( (result & 2) == 0 )
  {
    result = *(_DWORD *)(a1 + 384) | 2u;
    *(_DWORD *)(a1 + 384) = result;
    v2 = *(_QWORD *)(a1 + 336);
    if ( (*(_DWORD *)(v2 + 12))-- == 1 )
    {
      v4 = *(_QWORD *)(v2 + 176);
      result = 0LL;
      v5 = 0LL;
      v6 = (_DWORD *)(v4 + 148);
      do
      {
        if ( *v6 )
          break;
        result = (unsigned int)(result + 1);
        ++v5;
        v6 += 76;
      }
      while ( v5 < 3 );
      if ( (_DWORD)result == 3 )
      {
        result = *(_QWORD *)(v4 + 48);
        *(_BYTE *)(57216LL * *(unsigned int *)(v4 + 56) + *(_QWORD *)(result + 16) + 15296) = 0;
      }
    }
  }
  return result;
}
