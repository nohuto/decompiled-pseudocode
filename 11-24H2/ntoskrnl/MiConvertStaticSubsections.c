/*
 * XREFs of MiConvertStaticSubsections @ 0x140432C84
 * Callers:
 *     MiInsertUnusedSegment @ 0x140432A98 (MiInsertUnusedSegment.c)
 * Callees:
 *     MiRemoveViewsFromSection @ 0x140259B70 (MiRemoveViewsFromSection.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiConvertStaticSubsections(__int64 a1)
{
  __int64 v1; // rdi
  __int64 *v2; // rbx
  int v3; // eax
  int v5; // ecx
  char v6; // r8
  unsigned __int64 v7; // rdx

  v1 = 0LL;
  v2 = (__int64 *)(a1 + 128);
  do
  {
    v3 = *((_DWORD *)v2 + 8);
    if ( (v3 & 0x80000) == 0 )
    {
      if ( (v3 & 0x10000) != 0 )
      {
        v5 = *((_DWORD *)v2 + 12);
        if ( (v5 & 0x3FFFFFFF) != 0 )
        {
          v6 = 24;
          *((_DWORD *)v2 + 12) = v5 | 0x3FFFFFFF;
          *(_BYTE *)(*v2 + 62) |= 2u;
        }
        else
        {
          v6 = 4;
        }
        *((_DWORD *)v2 + 8) = v3 & 0xFFFEFFFF;
        v7 = *((unsigned int *)v2 + 11);
        v2[10] = 1LL;
        v1 += MiRemoveViewsFromSection(v2, v7, v6);
      }
      else if ( v2[1] && !v2[10] )
      {
        KeBugCheckEx(0x1Au, 0x42003uLL, (ULONG_PTR)v2, 0LL, 0LL);
      }
    }
    v2 = (__int64 *)v2[2];
  }
  while ( v2 );
  return v1;
}
