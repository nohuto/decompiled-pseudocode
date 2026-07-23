/*
 * XREFs of HalGetInterruptTargetInformation @ 0x1404B1E00
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
 *     HalpInterruptIsMsiSupported @ 0x1404B1F6C (HalpInterruptIsMsiSupported.c)
 */

__int64 __fastcall HalGetInterruptTargetInformation(int a1, int a2, __int64 a3)
{
  __int64 result; // rax
  bool v7; // zf
  int v8; // edi
  unsigned int i; // ecx
  ULONG_PTR v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rax

  if ( !a1 || a1 == 2 )
  {
    *(_QWORD *)(a3 + 4) = 0LL;
    *(_QWORD *)(a3 + 12) = 0LL;
    *(_DWORD *)(a3 + 24) = 0;
    v7 = HalpInterruptPhysicalModeOnly == 0;
    *(_DWORD *)a3 = a1;
    if ( v7 && HalpInterruptLogicalMode )
    {
      if ( HalpInterruptClusterModeEnabled )
      {
        v8 = 3;
        *(_DWORD *)(a3 + 24) = HalpInterruptMaxClusterSize;
      }
      else
      {
        v8 = 2;
      }
    }
    else
    {
      v8 = 1;
    }
    *(_DWORD *)(a3 + 20) = v8;
    if ( (unsigned __int8)HalpInterruptIsMsiSupported(0LL) )
      *(_DWORD *)(a3 + 8) = 1;
    if ( (HalpFeatureBits & 0x80u) != 0 )
      *(_DWORD *)(a3 + 8) |= 8u;
    if ( a1 == 2 )
    {
      return 0LL;
    }
    else
    {
      result = 3221226021LL;
      for ( i = 0; i < (unsigned int)HalpInterruptProcessorCount; ++i )
      {
        v10 = HalpInterruptProcessorState + ((unsigned __int64)i << 6);
        if ( *(_BYTE *)(v10 + 13) && *(_DWORD *)v10 == a2 )
        {
          v11 = HalpInterruptTargets;
          *(_DWORD *)(a3 + 4) = *(_DWORD *)(v10 + 16);
          v12 = 3LL * *(unsigned int *)(v10 + 20);
          if ( v8 == 1
            || (v13 = qword_140FC2DA8[*(unsigned __int16 *)(v10 + 16)], _bittest64(&v13, *(unsigned __int8 *)(v10 + 18))) )
          {
            *(_DWORD *)(a3 + 12) = 0;
            *(_DWORD *)(a3 + 20) = 1;
          }
          else
          {
            *(_DWORD *)(a3 + 20) = v8;
            if ( v8 == 2 )
            {
              *(_DWORD *)(a3 + 12) = *(_DWORD *)(v11 + 8 * v12 + 8);
            }
            else
            {
              *(_DWORD *)(a3 + 12) = *(_DWORD *)(v11 + 8 * v12 + 12);
              *(_DWORD *)(a3 + 16) = *(_DWORD *)(v11 + 8 * v12 + 8);
            }
          }
          return 0LL;
        }
      }
    }
  }
  else
  {
    HalpInterruptSetProblemEx(0LL, 19, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x1E0u);
    return 3221225485LL;
  }
  return result;
}
