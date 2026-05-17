/*
 * XREFs of RtlpUpdateHeapWatermarks @ 0x1800DB6E0
 * Callers:
 *     RtlpAllocateHeap @ 0x180026310 (RtlpAllocateHeap.c)
 *     RtlpFreeHeap @ 0x1800560F0 (RtlpFreeHeap.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpUpdateHeapWatermarks(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned __int64 v4; // r8
  unsigned int v5; // eax

  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
  {
    v1 = *(_DWORD *)(a1 + 648);
    v2 = *(_DWORD *)(a1 + 640) + 1;
    *(_DWORD *)(a1 + 640) = v2;
    if ( v2 > v1 )
    {
      v4 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
      *(_DWORD *)(a1 + 640) = 0;
      if ( v4 > *(_QWORD *)(a1 + 672) )
        *(_QWORD *)(a1 + 672) = v4;
      *(_QWORD *)(a1 + 680) = v4;
    }
    v3 = *(_DWORD *)(a1 + 652) + 1;
    *(_DWORD *)(a1 + 652) = v3;
    if ( v3 >= 0x1000 )
    {
      if ( *(_BYTE *)(a1 + 418) == 2 && *(_DWORD *)(a1 + 656) > 0x10u )
        v5 = 256;
      else
        v5 = 16;
      if ( *(_DWORD *)(a1 + 644) > v5 && v1 < 0x10000 )
        *(_DWORD *)(a1 + 648) = 2 * v1;
      *(_DWORD *)(a1 + 644) = 0;
      *(_DWORD *)(a1 + 652) = 0;
    }
  }
}
