/*
 * XREFs of MiDecrementZeroEngineThread @ 0x140413AA8
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x140332260 (MiBackgroundZeroLocalPages.c)
 *     MiBackgroundZeroNodePages @ 0x140412BA0 (MiBackgroundZeroNodePages.c)
 *     MiSelectBestZeroingProcessor @ 0x140413840 (MiSelectBestZeroingProcessor.c)
 *     MiReduceZeroingThreads @ 0x140413BFC (MiReduceZeroingThreads.c)
 *     MiRemoveThreadFromEngineLists @ 0x140413E2C (MiRemoveThreadFromEngineLists.c)
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
