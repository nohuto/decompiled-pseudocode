/*
 * XREFs of KiSetCacheInformationAmd @ 0x140B5B8F4
 * Callers:
 *     KiSetCacheInformation @ 0x140B5B7B0 (KiSetCacheInformation.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     KeGetProcessorNode @ 0x1405B7F5C (KeGetProcessorNode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KiGetL2L3AssociativityAmd @ 0x140B5A100 (KiGetL2L3AssociativityAmd.c)
 *     KiSetStandardizedCacheInformation @ 0x140B5C570 (KiSetStandardizedCacheInformation.c)
 */

char KiSetCacheInformationAmd()
{
  struct _KPRCB *CurrentPrcb; // rsi
  char result; // al
  _CACHE_DESCRIPTOR *Cache; // r15
  unsigned int v8; // r14d
  int v10; // r13d
  unsigned int v15; // r12d
  unsigned int v16; // edi
  unsigned int v17; // r12d
  __int64 v18; // rbx
  __int64 v19; // r13
  __int64 ProcessorNode; // rax
  __int64 v21; // rdx
  unsigned int v32; // edi
  char v33; // [rsp+20h] [rbp-30h]
  unsigned __int16 v34; // [rsp+22h] [rbp-2Eh]
  unsigned int v35; // [rsp+24h] [rbp-2Ch]
  _CACHE_DESCRIPTOR *v36; // [rsp+30h] [rbp-20h]

  CurrentPrcb = KeGetCurrentPrcb();
  _RAX = 2147483649LL;
  __asm { cpuid }
  CurrentPrcb->CacheCount = 0;
  if ( (_RCX & 0x400000) != 0 )
    return KiSetStandardizedCacheInformation(CurrentPrcb, 2147483677LL);
  Cache = CurrentPrcb->Cache;
  v8 = 0;
  v36 = CurrentPrcb->Cache;
  v35 = 0;
  do
  {
    if ( v8 < 2 )
    {
      _RAX = 2147483653LL;
      v33 = 1;
      __asm { cpuid }
      v32 = _RDX;
      if ( !v8 )
        v32 = _RCX;
      v34 = (unsigned __int8)v32;
      v17 = HIBYTE(v32) << 10;
      v16 = HIWORD(v32);
      KeAddGroupAffinityEx(&CurrentPrcb->CacheProcessorSet[v8].Count, CurrentPrcb->Group, CurrentPrcb->GroupSetMember);
      v10 = 2 - (v8 != 0);
    }
    else if ( v8 == 2 )
    {
      v33 = 2;
      _RAX = 2147483654LL;
      v10 = 0;
      __asm { cpuid }
      v17 = WORD1(_RCX) << 10;
      v34 = (unsigned __int8)_RCX;
      LOBYTE(v16) = KiGetL2L3AssociativityAmd(BYTE1(_RCX) >> 4);
      KeAddGroupAffinityEx(&CurrentPrcb->CacheProcessorSet[2].Count, CurrentPrcb->Group, CurrentPrcb->GroupSetMember);
    }
    else
    {
      v33 = 3;
      _RAX = 2147483654LL;
      v10 = 0;
      __asm { cpuid }
      v15 = _RDX;
      v34 = (unsigned __int8)_RDX;
      result = KiGetL2L3AssociativityAmd(BYTE1(_RDX) >> 4);
      LOBYTE(v16) = result;
      v17 = v15 >> 18 << 19;
      if ( !v17 )
        return result;
      KeAddGroupAffinityEx(&CurrentPrcb->CacheProcessorSet[3].Count, CurrentPrcb->Group, CurrentPrcb->GroupSetMember);
      if ( CurrentPrcb->CpuType <= 21 )
      {
        v18 = 0LL;
        if ( (_DWORD)KeNumberProcessors_0 )
        {
          do
          {
            v19 = KiProcessorBlock[v18];
            if ( (unsigned int)KeCheckProcessorAffinityEx(&CurrentPrcb->PackageProcessorSet.Count, v18) )
            {
              KeGetProcessorNode((__int64)CurrentPrcb);
              ProcessorNode = KeGetProcessorNode(v19);
              if ( v21 == ProcessorNode )
              {
                KeAddGroupAffinityEx(
                  &CurrentPrcb->CacheProcessorSet[3].Count,
                  *(unsigned __int8 *)(v19 + 208),
                  *(_QWORD *)(v19 + 200));
                KeAddGroupAffinityEx((unsigned __int16 *)(v19 + 45592), CurrentPrcb->Group, CurrentPrcb->GroupSetMember);
              }
            }
            v18 = (unsigned int)(v18 + 1);
          }
          while ( (unsigned int)v18 < (unsigned int)KeNumberProcessors_0 );
          v8 = v35;
          Cache = v36;
          v10 = 0;
        }
      }
    }
    Cache->Level = v33;
    Cache->LineSize = v34;
    Cache->Type = v10;
    Cache->Associativity = v16;
    Cache->Size = v17;
    ++Cache;
    ++CurrentPrcb->CacheCount;
    v36 = Cache;
    result = 1;
    v35 = ++v8;
  }
  while ( v8 < 4 );
  return result;
}
