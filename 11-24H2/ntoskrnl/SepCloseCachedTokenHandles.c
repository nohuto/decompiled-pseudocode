/*
 * XREFs of SepCloseCachedTokenHandles @ 0x1404977F8
 * Callers:
 *     SepSetTokenCachedHandles @ 0x1408F2494 (SepSetTokenCachedHandles.c)
 *     SepDereferenceCachedHandlesEntryInternal @ 0x140A08D24 (SepDereferenceCachedHandlesEntryInternal.c)
 * Callees:
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 */

__int64 __fastcall SepCloseCachedTokenHandles(unsigned int a1, HANDLE *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  NTSTATUS v5; // eax

  v2 = 0;
  if ( a1 )
  {
    v4 = a1;
    do
    {
      v5 = ZwClose(*a2++);
      if ( v5 < 0 )
        v2 = v5;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
