/*
 * XREFs of RtlpUpdateHeapWatermarks @ 0x1800D7250
 * Callers:
 *     RtlpFreeHeap @ 0x18005A020 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x1801159A0 (RtlpAllocateHeap.c)
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
    v1 = *(_DWORD *)(a1 + 656);
    v2 = *(_DWORD *)(a1 + 648) + 1;
    *(_DWORD *)(a1 + 648) = v2;
    if ( v2 > v1 )
    {
      v4 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
      *(_DWORD *)(a1 + 648) = 0;
      if ( v4 > *(_QWORD *)(a1 + 680) )
        *(_QWORD *)(a1 + 680) = v4;
      *(_QWORD *)(a1 + 688) = v4;
    }
    v3 = *(_DWORD *)(a1 + 660) + 1;
    *(_DWORD *)(a1 + 660) = v3;
    if ( v3 >= 0x1000 )
    {
      if ( *(_BYTE *)(a1 + 418) == 2 && *(_DWORD *)(a1 + 664) > 0x10u )
        v5 = 256;
      else
        v5 = 16;
      if ( *(_DWORD *)(a1 + 652) > v5 && v1 < 0x10000 )
        *(_DWORD *)(a1 + 656) = 2 * v1;
      *(_DWORD *)(a1 + 652) = 0;
      *(_DWORD *)(a1 + 660) = 0;
    }
  }
}
