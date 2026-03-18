/*
 * XREFs of VidSchResetGPUTimeout @ 0x1400A4E98
 * Callers:
 *     VidSchRestartAdapter @ 0x1400A5B70 (VidSchRestartAdapter.c)
 *     VidSchiCheckHwProgress @ 0x1400AD870 (VidSchiCheckHwProgress.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchResetGPUTimeout(__int64 a1)
{
  unsigned int i; // r9d
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  for ( i = 0; i < *(_DWORD *)(a1 + 80); *(_DWORD *)(*(_QWORD *)v5 + 496LL) = 0 )
  {
    v3 = *(_QWORD *)(a1 + 688);
    if ( i < *(_DWORD *)(a1 + 760) )
      v3 += 8LL * i;
    *(_DWORD *)(*(_QWORD *)v3 + 440LL) = 0;
    v4 = *(_QWORD *)(a1 + 688) + 8LL * i;
    if ( i >= *(_DWORD *)(a1 + 760) )
      v4 = *(_QWORD *)(a1 + 688);
    *(_DWORD *)(*(_QWORD *)v4 + 444LL) = 0;
    v5 = *(_QWORD *)(a1 + 688) + 8LL * i;
    if ( i >= *(_DWORD *)(a1 + 760) )
      v5 = *(_QWORD *)(a1 + 688);
    ++i;
  }
}
