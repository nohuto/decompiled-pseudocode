/*
 * XREFs of HalpInterruptDpReplaceBegin @ 0x14055F29C
 * Callers:
 *     HalpDpReplaceBegin @ 0x1406F6BC0 (HalpDpReplaceBegin.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x1403B30F0 (KeGetProcessorIndexFromNumber.c)
 *     HalpInterruptSetProblemEx @ 0x1404443B8 (HalpInterruptSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptDpReplaceBegin(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        char a6,
        _DWORD *a7)
{
  unsigned int v8; // ebx
  __int64 v11; // r8
  unsigned int i; // edx
  ULONG_PTR v13; // rcx
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 j; // rsi
  unsigned int k; // edi
  int v19; // r15d
  bool v20; // zf
  ULONG_PTR v21; // rcx
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v23; // r13
  __int64 v24; // rdi
  unsigned int m; // esi
  int v26; // eax
  int v27; // eax
  unsigned int v29; // [rsp+20h] [rbp-50h]

  v8 = 0;
  *a7 = 0;
  v11 = 0LL;
LABEL_2:
  if ( (unsigned int)v11 < a4 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= (unsigned int)HalpInterruptProcessorCount )
      {
        v11 = (unsigned int)(v11 + 1);
        goto LABEL_2;
      }
      v13 = HalpInterruptProcessorState + ((unsigned __int64)i << 6);
      if ( *(_BYTE *)(v13 + 13) )
      {
        if ( *(_DWORD *)v13 == *(_DWORD *)(a2 + 4 * v11) )
          break;
      }
    }
    v29 = 151;
    v14 = 24;
LABEL_10:
    v15 = 0LL;
LABEL_11:
    HalpInterruptSetProblemEx(v15, v14, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c", v29);
    return (unsigned int)-1073741811;
  }
  v16 = a1;
  for ( j = 0LL; (unsigned int)j < a4; j = (unsigned int)(j + 1) )
  {
    for ( k = 0; ; ++k )
    {
      v19 = HalpInterruptProcessorCount;
      v20 = k == (_DWORD)HalpInterruptProcessorCount;
      if ( k >= (unsigned int)HalpInterruptProcessorCount )
        break;
      v21 = HalpInterruptProcessorState + ((unsigned __int64)k << 6);
      if ( *(_BYTE *)(v21 + 12) && *(_BYTE *)(v21 + 13) && *(_DWORD *)v21 == *(_DWORD *)(v16 + 4 * j) )
      {
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(v21 + 16));
        v16 = a1;
        v20 = k == v19;
        *(_DWORD *)(a3 + 4 * j) = ProcessorIndexFromNumber;
        break;
      }
    }
    if ( v20 )
    {
      v29 = 187;
      v14 = 21;
      goto LABEL_10;
    }
  }
  v23 = *(_QWORD *)(HalpInterruptController + 16);
  if ( a4 && *(_QWORD *)(HalpInterruptController + 144) && !HalpInterruptPhysicalModeOnly && !a5 )
  {
    v24 = a2;
    for ( m = 0; m < a4; ++m )
    {
      v26 = guard_dispatch_icall_no_overrides(v23);
      v8 = v26;
      if ( v26 < 0 )
      {
        HalpInterruptSetProblemEx(
          HalpInterruptController,
          9,
          v26,
          (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
          0xECu);
        return v8;
      }
      v27 = guard_dispatch_icall_no_overrides(v23);
      v8 = v27;
      if ( v27 < 0 )
      {
        HalpInterruptSetProblemEx(
          HalpInterruptController,
          9,
          v27,
          (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
          0xF9u);
        return v8;
      }
      v24 += 4LL;
    }
  }
  if ( a6 && a4 )
  {
    if ( a5 || !HalpInterruptPhysicalModeOnly )
    {
      *a7 = *(_DWORD *)(HalpInterruptController + 312);
      return v8;
    }
    v29 = 476;
    v14 = 28;
    v15 = HalpInterruptController;
    goto LABEL_11;
  }
  return v8;
}
