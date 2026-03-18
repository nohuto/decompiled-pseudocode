/*
 * XREFs of MiConvertStaticSubsections @ 0x140370358
 * Callers:
 *     MiInsertUnusedSegment @ 0x14037016C (MiInsertUnusedSegment.c)
 * Callees:
 *     MiRemoveViewsFromSection @ 0x1403717B0 (MiRemoveViewsFromSection.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiConvertStaticSubsections(__int64 a1)
{
  __int64 v1; // rdi
  ULONG_PTR v2; // rbx
  int v3; // eax
  int v5; // ecx

  v1 = 0LL;
  v2 = a1 + 128;
  do
  {
    v3 = *(_DWORD *)(v2 + 32);
    if ( (v3 & 0x80000) == 0 )
    {
      if ( (v3 & 0x10000) != 0 )
      {
        v5 = *(_DWORD *)(v2 + 48);
        if ( (v5 & 0x3FFFFFFF) != 0 )
        {
          *(_DWORD *)(v2 + 48) = v5 | 0x3FFFFFFF;
          *(_BYTE *)(*(_QWORD *)v2 + 62LL) |= 2u;
        }
        *(_DWORD *)(v2 + 32) = v3 & 0xFFFEFFFF;
        *(_QWORD *)(v2 + 80) = 1LL;
        v1 += MiRemoveViewsFromSection(v2);
      }
      else if ( *(_QWORD *)(v2 + 8) && !*(_QWORD *)(v2 + 80) )
      {
        KeBugCheckEx(0x1Au, 0x42003uLL, v2, 0LL, 0LL);
      }
    }
    v2 = *(_QWORD *)(v2 + 16);
  }
  while ( v2 );
  return v1;
}
