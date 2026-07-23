/*
 * XREFs of Amd64InitializeCacheStatusOriginal @ 0x140568B50
 * Callers:
 *     Amd64InitializeUncoreProfilingOriginal @ 0x140569178 (Amd64InitializeUncoreProfilingOriginal.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     HalpInterruptGetIdentifiers @ 0x1404B5B80 (HalpInterruptGetIdentifiers.c)
 *     Amd64FreeCounter @ 0x140568634 (Amd64FreeCounter.c)
 *     Amd64InitializeUncoreStatusOriginal @ 0x140569324 (Amd64InitializeUncoreStatusOriginal.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall Amd64InitializeCacheStatusOriginal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v11; // r8
  int v12; // r8d
  char v23; // bl
  unsigned int v24; // edx
  __int64 result; // rax
  __int64 v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r13
  __int64 v30; // rsi
  __int64 v31; // r12
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int v36[6]; // [rsp+20h] [rbp-20h] BYREF

  LODWORD(a4) = KeGetPcr()->Prcb.Number;
  v36[0] = 0;
  v4 = (unsigned int)a4;
  v5 = *(_QWORD *)(KiProcessorBlock[a4] + 88);
  if ( KeGetCurrentPrcb()->CpuType == 22 )
  {
    _RAX = 2147483678LL;
    __asm { cpuid }
    v11 = (unsigned __int8)_RCX;
  }
  else
  {
    v12 = 0;
    do
    {
      _RAX = 2147483677LL;
      ++v12;
      __asm { cpuid }
    }
    while ( (_RAX & 0xF) != 0 );
    _RAX = 2147483677LL;
    __asm { cpuid }
    v23 = 0;
    _BitScanReverse((unsigned int *)&_RCX, 2 * (((unsigned int)_RAX >> 14) & 0xFFF) + 1);
    v24 = (unsigned __int8)(1 << _RCX);
    while ( 1 )
    {
      v24 >>= 1;
      if ( !v24 )
        break;
      ++v23;
    }
    result = HalpInterruptGetIdentifiers(a4, v36, 0LL);
    if ( (int)result < 0 )
      return result;
    v11 = v36[0] >> v23;
  }
  result = Amd64InitializeUncoreStatusOriginal(2LL, &Amd64CacheStatusHead, v11);
  v26 = result;
  if ( result )
  {
    v27 = *(unsigned int *)(v5 + 76);
    v28 = (unsigned int)(24 * v27);
    if ( (_DWORD)v28 )
    {
      result = HalpMmAllocCtxAlloc(v27, v28);
      v29 = *(_QWORD *)(v5 + 88);
      v30 = 0LL;
      v31 = result;
      if ( *(_DWORD *)(v5 + 76) )
      {
        while ( 1 )
        {
          LODWORD(v32) = 0;
          v33 = v31 + 24 * v30;
          *(_QWORD *)(v33 + 8) = v26;
          *(_QWORD *)(v29 + 48 * v30 + 16) = v33;
          if ( *(_DWORD *)(v5 + 72) == 1 )
            goto LABEL_21;
          if ( *(_DWORD *)(v5 + 72) == 100 )
            goto LABEL_18;
          if ( *(_DWORD *)(v5 + 72) == 101 )
            break;
LABEL_24:
          __writemsr(*((_DWORD *)&Amd64EventSelectRegisters + (unsigned int)(v32 + v30)), 0LL);
          result = Amd64FreeCounter(v30, *(_DWORD *)(v5 + 72));
          v30 = (unsigned int)(v30 + 1);
          if ( (unsigned int)v30 >= *(_DWORD *)(v5 + 76) )
            return result;
        }
        v32 = *(_QWORD *)(KiProcessorBlock[v4] + 88) + 48LL;
        if ( *(_QWORD *)(KiProcessorBlock[v4] + 88) != -48LL )
          LODWORD(v32) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v4] + 88) + 52LL);
LABEL_18:
        v34 = *(_QWORD *)(KiProcessorBlock[v4] + 88) + 24LL;
        if ( *(_QWORD *)(KiProcessorBlock[v4] + 88) != -24LL )
          LODWORD(v34) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v4] + 88) + 28LL);
        LODWORD(v32) = v34 + v32;
LABEL_21:
        v35 = *(_QWORD *)(KiProcessorBlock[v4] + 88);
        if ( v35 )
          LODWORD(v35) = *(_DWORD *)(v35 + 4);
        LODWORD(v32) = v35 + v32;
        goto LABEL_24;
      }
    }
  }
  return result;
}
