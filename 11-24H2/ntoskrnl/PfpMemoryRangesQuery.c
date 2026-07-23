/*
 * XREFs of PfpMemoryRangesQuery @ 0x1404C14D8
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1408F5C60 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140AA6B60 (MmGetPhysicalMemoryRangesEx2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpMemoryRangesQuery(__int64 a1, char a2, _DWORD *a3)
{
  void *v5; // rdi
  _DWORD *v6; // rsi
  unsigned int v7; // ebx
  __int64 PhysicalMemoryRangesEx2; // rax
  __int64 i; // r8
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // r11
  unsigned __int64 j; // r10
  __int64 v14; // rcx

  v5 = 0LL;
  v6 = *(_DWORD **)(a1 + 16);
  if ( a2 )
    ProbeForWrite(*(volatile void **)(a1 + 16), *(unsigned int *)(a1 + 24), 8u);
  if ( *v6 == 2 )
  {
    if ( (v6[1] & 0xFFFFFFFE) != 0 )
    {
      v7 = -1073741811;
    }
    else
    {
      PhysicalMemoryRangesEx2 = MmGetPhysicalMemoryRangesEx2(0LL);
      v5 = (void *)PhysicalMemoryRangesEx2;
      if ( !PhysicalMemoryRangesEx2 )
        goto LABEL_8;
      for ( i = PhysicalMemoryRangesEx2; *(__int64 *)(i + 8) > 0; i += 16LL )
        ;
      v10 = (i - PhysicalMemoryRangesEx2) >> 4;
      if ( v10 <= 0xFFFFFFFF && (v11 = 16 * (v10 + 1), v11 <= 0xFFFFFFFF) )
      {
        if ( *(_DWORD *)(a1 + 24) >= (unsigned int)v11 )
        {
          v12 = *(_QWORD *)(a1 + 16);
          *(_DWORD *)(v12 + 8) = v10;
          for ( j = 0LL; j < v10; ++j )
          {
            v14 = 2 * j;
            *(_QWORD *)(v12 + 8 * v14 + 16) = *(_QWORD *)(PhysicalMemoryRangesEx2 + 16 * j) / 4096LL;
            *(_QWORD *)(v12 + 8 * v14 + 24) = *(_QWORD *)(PhysicalMemoryRangesEx2 + 16 * j + 8) / 4096LL;
          }
          *a3 = v11;
          v7 = 0;
        }
        else
        {
          v7 = -1073741789;
          *a3 = v11;
        }
      }
      else
      {
LABEL_8:
        v7 = -1073741670;
      }
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v7;
}
