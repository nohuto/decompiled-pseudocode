/*
 * XREFs of MiUnlinkZeroThreadFromActiveDomain @ 0x1403C7D5C
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020A480 (MiBackgroundZeroLocalPages.c)
 *     MiAddZeroingThreads @ 0x1403C73C8 (MiAddZeroingThreads.c)
 *     MiSelectBestZeroingProcessor @ 0x1403C7C00 (MiSelectBestZeroingProcessor.c)
 *     MiRemoveThreadFromEngineLists @ 0x1403C81EC (MiRemoveThreadFromEngineLists.c)
 * Callees:
 *     MiUpdateDomainAvailableAffinity @ 0x1403C7DE8 (MiUpdateDomainAvailableAffinity.c)
 */

__int64 __fastcall MiUnlinkZeroThreadFromActiveDomain(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rcx
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r8

  result = *(unsigned int *)(a1 + 344);
  if ( (_DWORD)result != -1 )
  {
    v3 = (_QWORD *)(a1 + 432);
    if ( *v3 )
    {
      v4 = *(_QWORD *)(a1 + 336);
      v5 = *(_QWORD *)(v4 + 136) + 48 * result;
      --*(_DWORD *)(v5 + 32);
      v6 = *v3;
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (result = v3[1], *(_QWORD **)result != v3) )
        __fastfail(3u);
      *(_QWORD *)result = v6;
      *(_QWORD *)(v6 + 8) = result;
      *v3 = 0LL;
      if ( *(_DWORD *)v4 )
        result = MiUpdateDomainAvailableAffinity(a1, v5, 0LL);
      *(_QWORD *)(a1 + 352) = 0LL;
      *(_DWORD *)(a1 + 344) = -1;
    }
  }
  return result;
}
