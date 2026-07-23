/*
 * XREFs of RtlXRestore @ 0x1403FFDDC
 * Callers:
 *     RtlXRestoreS @ 0x1403FF3D8 (RtlXRestoreS.c)
 *     KxContextToKframes @ 0x1403FF870 (KxContextToKframes.c)
 *     KiRestoreProcessorState @ 0x1405C7AAC (KiRestoreProcessorState.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlXRestore(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  int v3; // r8d

  if ( *(__int64 *)(a1 + 520) >= 0 && (a2 & 6) == 4 )
  {
    v3 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 24) = _mm_getcsr();
    result = a2;
    _xrstor((void *)a1, a2);
    *(_DWORD *)(a1 + 24) = v3;
  }
  else
  {
    result = a2;
    _xrstor((void *)a1, a2);
  }
  return result;
}
