/*
 * XREFs of Amd64InitializeDataFabricStatusOriginal @ 0x140568EDC
 * Callers:
 *     Amd64InitializeUncoreProfilingOriginal @ 0x140569178 (Amd64InitializeUncoreProfilingOriginal.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     Amd64FreeCounter @ 0x140568634 (Amd64FreeCounter.c)
 *     Amd64InitializeUncoreStatusOriginal @ 0x140569324 (Amd64InitializeUncoreStatusOriginal.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall Amd64InitializeDataFabricStatusOriginal()
{
  __int64 v0; // rax
  __int64 v1; // rbp
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax

  LODWORD(v0) = KeGetPcr()->Prcb.Number;
  v1 = (unsigned int)v0;
  v2 = *(_QWORD *)(KiProcessorBlock[v0] + 88);
  _RAX = 2147483678LL;
  __asm { cpuid }
  result = Amd64InitializeUncoreStatusOriginal(1LL, &Amd64DataFabricStatusHead, (unsigned __int8)_RCX);
  v9 = result;
  if ( result )
  {
    v10 = *(unsigned int *)(v2 + 52);
    v11 = (unsigned int)(24 * v10);
    if ( (_DWORD)v11 )
    {
      result = HalpMmAllocCtxAlloc(v10, v11);
      v12 = *(_QWORD *)(v2 + 64);
      v13 = 0LL;
      v14 = result;
      if ( *(_DWORD *)(v2 + 52) )
      {
        while ( 1 )
        {
          LODWORD(v15) = 0;
          v16 = v14 + 24 * v13;
          *(_QWORD *)(v16 + 8) = v9;
          *(_QWORD *)(v12 + 48 * v13 + 16) = v16;
          if ( *(_DWORD *)(v2 + 48) == 1 )
            goto LABEL_12;
          if ( *(_DWORD *)(v2 + 48) == 100 )
            goto LABEL_9;
          if ( *(_DWORD *)(v2 + 48) == 101 )
            break;
LABEL_15:
          __writemsr(*((_DWORD *)&Amd64EventSelectRegisters + (unsigned int)(v15 + v13)), 0LL);
          result = Amd64FreeCounter(v13, *(_DWORD *)(v2 + 48));
          v13 = (unsigned int)(v13 + 1);
          if ( (unsigned int)v13 >= *(_DWORD *)(v2 + 52) )
            return result;
        }
        v15 = *(_QWORD *)(KiProcessorBlock[v1] + 88) + 48LL;
        if ( *(_QWORD *)(KiProcessorBlock[v1] + 88) != -48LL )
          LODWORD(v15) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v1] + 88) + 52LL);
LABEL_9:
        v17 = *(_QWORD *)(KiProcessorBlock[v1] + 88) + 24LL;
        if ( *(_QWORD *)(KiProcessorBlock[v1] + 88) != -24LL )
          LODWORD(v17) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v1] + 88) + 28LL);
        LODWORD(v15) = v17 + v15;
LABEL_12:
        v18 = *(_QWORD *)(KiProcessorBlock[v1] + 88);
        if ( v18 )
          LODWORD(v18) = *(_DWORD *)(v18 + 4);
        LODWORD(v15) = v18 + v15;
        goto LABEL_15;
      }
    }
  }
  return result;
}
