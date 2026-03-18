/*
 * XREFs of ?CitpInitialize@@YAJPEBG@Z @ 0x1400B6048
 * Callers:
 *     CitProcessCallout @ 0x1400B5AC4 (CitProcessCallout.c)
 * Callees:
 *     ?CitpStart@@YAJXZ @ 0x1400B5F6C (-CitpStart@@YAJXZ.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1400B6354 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1400B653C (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 */

__int64 __fastcall CitpInitialize(PCWSTR SourceString)
{
  __int64 v2; // rbx
  struct _CIT_PARAMETERS *v3; // r10
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(W32GetUserSessionState(SourceString) + 18968);
  *(_QWORD *)(v2 + 8) = 0LL;
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 24) = 0LL;
  *(_DWORD *)(v2 + 4) = 64;
  *(_DWORD *)(v2 + 8) = 60000;
  *(_DWORD *)(v2 + 12) = 1;
  *(_DWORD *)(v2 + 16) = 60000;
  *(_DWORD *)(v2 + 20) = 1000;
  CitpParametersCompute((struct _CIT_PARAMETERS *)(v2 + 4));
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_OWORD *)(v2 + 40) = 0LL;
  *(_OWORD *)(v2 + 56) = 0LL;
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_QWORD *)(v2 + 64) = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  *(_DWORD *)(v2 + 40) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_BYTE *)v2 = 1;
  CitpParametersLoad(v3, SourceString);
  if ( !*(_BYTE *)(v2 + 24) )
    return 0LL;
  result = CitpStart(v4);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
