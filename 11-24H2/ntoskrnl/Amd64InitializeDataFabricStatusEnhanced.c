/*
 * XREFs of Amd64InitializeDataFabricStatusEnhanced @ 0x140568D4C
 * Callers:
 *     Amd64InitializeUncoreProfilingEnhanced @ 0x140569068 (Amd64InitializeUncoreProfilingEnhanced.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     Amd64FreeCounter @ 0x140568634 (Amd64FreeCounter.c)
 *     Amd64InitializeUncoreStatusEnhanced @ 0x140569288 (Amd64InitializeUncoreStatusEnhanced.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 Amd64InitializeDataFabricStatusEnhanced()
{
  int v0; // rsp^4
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r15
  unsigned int v13; // ebx
  void *v14; // rax
  void *v15; // r14
  __int64 v16; // rbp
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax

  HIDWORD(v1) = v0;
  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  v2 = (unsigned int)v1;
  result = KiProcessorBlock[v1];
  v4 = *(_QWORD *)(result + 88);
  if ( *(_DWORD *)(v4 + 52) )
  {
    _RAX = 2147483678LL;
    __asm { cpuid }
    v10 = Amd64InitializeUncoreStatusEnhanced(1LL, &Amd64DataFabricStatusHead, (unsigned __int8)_RCX);
    v11 = *(unsigned int *)(v4 + 52);
    v12 = v10;
    v13 = 24 * v11;
    v14 = (void *)HalpMmAllocCtxAlloc(v11, (unsigned int)(24 * v11));
    v15 = v14;
    if ( !v14 )
      KeBugCheckEx(0x5Cu, 0x9003uLL, v13, (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\pc\\amd64.c", 0x704uLL);
    result = (__int64)memset_0(v14, 0, v13);
    v16 = *(_QWORD *)(v4 + 64);
    v17 = 0LL;
    if ( *(_DWORD *)(v4 + 52) )
    {
      while ( 1 )
      {
        v18 = (__int64)v15 + 24 * v17;
        *(_QWORD *)(v18 + 8) = v12;
        *(_QWORD *)(v16 + 48 * v17 + 16) = v18;
        LODWORD(v18) = 0;
        if ( *(_DWORD *)(v4 + 48) == 1 )
          goto LABEL_13;
        if ( *(_DWORD *)(v4 + 48) == 100 )
          goto LABEL_10;
        if ( *(_DWORD *)(v4 + 48) == 101 )
          break;
LABEL_16:
        __writemsr(*((_DWORD *)&Amd64EventSelectRegisters + (unsigned int)(v18 + v17)), 0LL);
        result = Amd64FreeCounter(v17, *(_DWORD *)(v4 + 48));
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= *(_DWORD *)(v4 + 52) )
          return result;
      }
      v18 = *(_QWORD *)(KiProcessorBlock[v2] + 88) + 48LL;
      if ( *(_QWORD *)(KiProcessorBlock[v2] + 88) != -48LL )
        LODWORD(v18) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v2] + 88) + 52LL);
LABEL_10:
      v19 = *(_QWORD *)(KiProcessorBlock[v2] + 88) + 24LL;
      if ( *(_QWORD *)(KiProcessorBlock[v2] + 88) != -24LL )
        LODWORD(v19) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v2] + 88) + 28LL);
      LODWORD(v18) = v19 + v18;
LABEL_13:
      v20 = *(_QWORD *)(KiProcessorBlock[v2] + 88);
      if ( v20 )
        LODWORD(v20) = *(_DWORD *)(v20 + 4);
      LODWORD(v18) = v20 + v18;
      goto LABEL_16;
    }
  }
  return result;
}
