/*
 * XREFs of ?KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14032C760
 * Callers:
 *     KiForwardTick @ 0x1402AC02C (KiForwardTick.c)
 *     KiGetDeepIdleProcessors @ 0x14032C3E8 (KiGetDeepIdleProcessors.c)
 *     KeFlushQueuedDpcs @ 0x14032C480 (KeFlushQueuedDpcs.c)
 *     KeComplementAffinityEx2 @ 0x14032C740 (KeComplementAffinityEx2.c)
 *     KeComplementAffinityEx @ 0x1405B5750 (KeComplementAffinityEx.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405DFACC (PpmParkComputeUnparkMaskEx.c)
 * Callees:
 *     <none>
 */

void __fastcall KiComplementAffinityEx(struct _KAFFINITY_EX *a1, unsigned __int16 a2, struct _KAFFINITY_EX *a3)
{
  unsigned __int16 Count; // r9
  unsigned int v5; // ebx
  unsigned int v6; // r10d
  $B38C3B1372D6E954799962D5DD404846 *v7; // rax
  __int64 v8; // rdx
  signed __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax

  Count = a3->Count;
  v5 = a2;
  if ( a3->Count > a2 )
    Count = a2;
  v6 = 0;
  if ( Count )
  {
    v6 = Count;
    v7 = &a1->8;
    v8 = Count;
    v9 = (char *)a3 - (char *)a1;
    do
    {
      v10 = *(unsigned __int64 *)((char *)v7->Bitmap + v9);
      v7 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v7 + 8);
      v7[-1].StaticBitmap[31] = ~v10;
      --v8;
    }
    while ( v8 );
  }
  a1->Reserved = 0;
  a1->Count = v5;
  a1->Size = v5;
  if ( v6 < v5 )
  {
    do
    {
      v11 = v6++;
      a1->Bitmap[v11] = -1LL;
    }
    while ( v6 < a1->Size );
  }
}
