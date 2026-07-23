/*
 * XREFs of Amd64InitializeCacheStatusEnhanced @ 0x140568914
 * Callers:
 *     Amd64InitializeUncoreProfilingEnhanced @ 0x140569068 (Amd64InitializeUncoreProfilingEnhanced.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     HalpInterruptGetIdentifiers @ 0x1404B5B80 (HalpInterruptGetIdentifiers.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     Amd64FreeCounter @ 0x140568634 (Amd64FreeCounter.c)
 *     Amd64InitializeUncoreStatusEnhanced @ 0x140569288 (Amd64InitializeUncoreStatusEnhanced.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall Amd64InitializeCacheStatusEnhanced(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v12; // r8
  int v13; // r8d
  char v24; // bl
  unsigned int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r12
  unsigned int v29; // ebx
  unsigned int v30; // r14d
  void *v31; // rax
  void *v32; // r15
  __int64 v33; // r14
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  _DWORD v38[6]; // [rsp+30h] [rbp-20h] BYREF

  LODWORD(a4) = KeGetPcr()->Prcb.Number;
  v38[0] = 0;
  v4 = (unsigned int)a4;
  result = KiProcessorBlock[a4];
  v6 = *(_QWORD *)(result + 88);
  if ( !*(_DWORD *)(v6 + 76) )
    return result;
  if ( KeGetCurrentPrcb()->CpuType == 22 )
  {
    _RAX = 2147483678LL;
    __asm { cpuid }
    v12 = (unsigned __int8)_RCX;
  }
  else
  {
    v13 = 0;
    do
    {
      _RAX = 2147483677LL;
      ++v13;
      __asm { cpuid }
    }
    while ( (_RAX & 0xF) != 0 );
    _RAX = 2147483677LL;
    __asm { cpuid }
    v24 = 0;
    _BitScanReverse((unsigned int *)&_RCX, 2 * (((unsigned int)_RAX >> 14) & 0xFFF) + 1);
    v25 = (unsigned __int8)(1 << _RCX);
    while ( 1 )
    {
      v25 >>= 1;
      if ( !v25 )
        break;
      ++v24;
    }
    result = HalpInterruptGetIdentifiers(a4, v38, 0LL);
    if ( (int)result < 0 )
    {
      v29 = 0;
      if ( (_DWORD)result != -1073741801 )
        return result;
LABEL_27:
      KeBugCheckEx(0x5Cu, 0x9003uLL, v29, (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\pc\\amd64.c", 0x828uLL);
    }
    v12 = (unsigned int)(v38[0] >> v24);
  }
  v26 = Amd64InitializeUncoreStatusEnhanced(2LL, &Amd64CacheStatusHead, v12);
  v27 = *(unsigned int *)(v6 + 76);
  v28 = v26;
  v29 = 24 * v27;
  v30 = 24 * v27;
  v31 = (void *)HalpMmAllocCtxAlloc(v27, (unsigned int)(24 * v27));
  v32 = v31;
  if ( !v31 )
    goto LABEL_27;
  result = (__int64)memset_0(v31, 0, v30);
  v33 = *(_QWORD *)(v6 + 88);
  v34 = 0LL;
  if ( *(_DWORD *)(v6 + 76) )
  {
    while ( 1 )
    {
      v35 = (__int64)v32 + 24 * v34;
      *(_QWORD *)(v35 + 8) = v28;
      *(_QWORD *)(v33 + 48 * v34 + 16) = v35;
      LODWORD(v35) = 0;
      if ( *(_DWORD *)(v6 + 72) == 1 )
        goto LABEL_21;
      if ( *(_DWORD *)(v6 + 72) == 100 )
        goto LABEL_18;
      if ( *(_DWORD *)(v6 + 72) == 101 )
        break;
LABEL_24:
      __writemsr(*((_DWORD *)&Amd64EventSelectRegisters + (unsigned int)(v35 + v34)), 0LL);
      result = Amd64FreeCounter(v34, *(_DWORD *)(v6 + 72));
      v34 = (unsigned int)(v34 + 1);
      if ( (unsigned int)v34 >= *(_DWORD *)(v6 + 76) )
        return result;
    }
    v35 = *(_QWORD *)(KiProcessorBlock[v4] + 88) + 48LL;
    if ( *(_QWORD *)(KiProcessorBlock[v4] + 88) != -48LL )
      LODWORD(v35) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v4] + 88) + 52LL);
LABEL_18:
    v36 = *(_QWORD *)(KiProcessorBlock[v4] + 88) + 24LL;
    if ( *(_QWORD *)(KiProcessorBlock[v4] + 88) != -24LL )
      LODWORD(v36) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v4] + 88) + 28LL);
    LODWORD(v35) = v36 + v35;
LABEL_21:
    v37 = *(_QWORD *)(KiProcessorBlock[v4] + 88);
    if ( v37 )
      LODWORD(v37) = *(_DWORD *)(v37 + 4);
    LODWORD(v35) = v37 + v35;
    goto LABEL_24;
  }
  return result;
}
