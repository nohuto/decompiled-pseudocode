/*
 * XREFs of HalpCheckNumaConfiguration @ 0x140555138
 * Callers:
 *     HalStartDynamicProcessor @ 0x14053EFE0 (HalStartDynamicProcessor.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpCheckNumaConfiguration(int a1, unsigned __int16 a2)
{
  char v2; // r8
  unsigned int v5; // ecx
  __int64 v6; // rbx
  unsigned int v7; // edx
  int v8; // r10d

  v2 = 0;
  if ( !HalpNumaConfig )
    return 1;
  v5 = 0;
  v6 = a2;
  v7 = 0;
  while ( v5 < *(_DWORD *)(HalpNumaConfig + 60) )
  {
    v8 = *(_DWORD *)(*(_QWORD *)HalpNumaConfig + 4LL * v5);
    if ( v8 == a1 )
      return 1;
    if ( *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 16) + 4LL * v5) == *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 24)
                                                                               + 4 * v6)
      && v8 != -1 )
    {
      ++v7;
    }
    ++v5;
  }
  if ( v7 >= *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 40) + 4 * v6) )
    return v2;
  return 1;
}
