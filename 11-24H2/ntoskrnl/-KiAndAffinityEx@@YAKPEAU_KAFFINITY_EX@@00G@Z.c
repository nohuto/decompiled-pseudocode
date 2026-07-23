/*
 * XREFs of ?KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14032C800
 * Callers:
 *     KiComputeCpuSetAffinity @ 0x1402A9B00 (KiComputeCpuSetAffinity.c)
 *     KeFlushQueuedDpcs @ 0x14032C480 (KeFlushQueuedDpcs.c)
 *     KeAndAffinityEx @ 0x1404F7ED0 (KeAndAffinityEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAndAffinityEx(
        struct _KAFFINITY_EX *a1,
        struct _KAFFINITY_EX *a2,
        struct _KAFFINITY_EX *a3,
        unsigned __int16 a4)
{
  unsigned __int16 Count; // r8
  unsigned int v7; // edi
  unsigned __int16 v8; // cx
  __int64 v9; // rdx
  __int64 v11; // r8
  bool v12; // zf

  a3->Size = a4;
  Count = a1->Count;
  v7 = 0;
  if ( a1->Count >= a2->Count )
    Count = a2->Count;
  a3->Count = Count;
  if ( Count > a4 )
  {
    a3->Count = a4;
    Count = a4;
  }
  v8 = 0;
  if ( Count )
  {
    do
    {
      v11 = v8;
      v12 = (a2->Bitmap[v11] & a1->Bitmap[v11]) == 0;
      a3->Bitmap[v11] = a2->Bitmap[v11] & a1->Bitmap[v11];
      if ( !v12 )
        v7 = 1;
      ++v8;
    }
    while ( v8 < a3->Count );
  }
  for ( a3->Reserved = 0; v8 < a3->Size; a3->Bitmap[v9] = 0LL )
    v9 = v8++;
  return v7;
}
