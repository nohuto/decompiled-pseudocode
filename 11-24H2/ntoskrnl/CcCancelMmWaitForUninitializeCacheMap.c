/*
 * XREFs of CcCancelMmWaitForUninitializeCacheMap @ 0x1404F612C
 * Callers:
 *     CcWriteBehindPreProcess @ 0x14027A224 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindPostProcess @ 0x14027A62C (CcWriteBehindPostProcess.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 */

LONG __fastcall CcCancelMmWaitForUninitializeCacheMap(__int64 a1)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 v3; // rdx
  LONG result; // eax
  unsigned __int64 v5; // rdx

  v2 = (unsigned __int64 *)(a1 + 280);
  while ( 1 )
  {
    v5 = *v2;
    if ( !*v2 )
      break;
    if ( (v5 & 1) != 0 )
    {
      v3 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
      *v2 = *(_QWORD *)v3;
      result = KeSetEvent((PRKEVENT)(v3 + 8), 0, 0);
      ++CcDbgNumberOfAbortedTeardowns;
      *(_DWORD *)(a1 + 152) |= 0x8000u;
    }
    else
    {
      v2 = (unsigned __int64 *)*v2;
    }
  }
  *(_DWORD *)(a1 + 152) &= ~0x10000u;
  return result;
}
