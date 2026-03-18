/*
 * XREFs of HalpInterruptDpReplaceBegin @ 0x140561B9C
 * Callers:
 *     HalpDpReplaceBegin @ 0x1407029B0 (HalpDpReplaceBegin.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140352BB0 (KeGetProcessorIndexFromNumber.c)
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
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
  _DWORD *v8; // r9
  unsigned int v9; // ebx
  __int64 v12; // r8
  unsigned int i; // edx
  ULONG_PTR v14; // rcx
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 j; // rsi
  unsigned int k; // edi
  int v20; // r15d
  bool v21; // zf
  ULONG_PTR v22; // rcx
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v24; // r13
  __int64 v25; // rdi
  unsigned int v26; // esi
  __int64 v27; // r15
  int v28; // eax
  __int64 v29; // r9
  int v30; // eax
  unsigned int v31; // esi
  __int64 v32; // rax
  unsigned int v33; // edi
  __int64 v34; // r15
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  __int64 v38; // r9
  int v39; // r13d
  int v40; // eax
  __int64 v41; // r9
  int v42; // r15d
  unsigned __int64 m; // rax
  int v44; // eax
  unsigned int v46; // [rsp+20h] [rbp-50h]
  __int64 v47; // [rsp+30h] [rbp-40h]
  __int128 v48; // [rsp+38h] [rbp-38h] BYREF
  int v49; // [rsp+48h] [rbp-28h]
  __int128 v50; // [rsp+50h] [rbp-20h] BYREF
  int v51; // [rsp+60h] [rbp-10h]
  int v54; // [rsp+C8h] [rbp+58h]

  v54 = 0;
  v8 = a7;
  v9 = 0;
  v49 = 0;
  v51 = 0;
  v48 = 0LL;
  *a7 = 0;
  v12 = 0LL;
  v50 = 0LL;
LABEL_2:
  if ( (unsigned int)v12 < a4 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= (unsigned int)HalpInterruptProcessorCount )
      {
        v12 = (unsigned int)(v12 + 1);
        goto LABEL_2;
      }
      v14 = HalpInterruptProcessorState + ((unsigned __int64)i << 6);
      if ( *(_BYTE *)(v14 + 13) )
      {
        if ( *(_DWORD *)v14 == *(_DWORD *)(a2 + 4 * v12) )
          break;
      }
    }
    v46 = 151;
    v15 = 24;
LABEL_10:
    v16 = 0LL;
LABEL_11:
    HalpInterruptSetProblemEx(v16, v15, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c", v46);
    return (unsigned int)-1073741811;
  }
  v17 = a1;
  for ( j = 0LL; (unsigned int)j < a4; j = (unsigned int)(j + 1) )
  {
    for ( k = 0; ; ++k )
    {
      v20 = HalpInterruptProcessorCount;
      v21 = k == (_DWORD)HalpInterruptProcessorCount;
      if ( k >= (unsigned int)HalpInterruptProcessorCount )
        break;
      v22 = HalpInterruptProcessorState + ((unsigned __int64)k << 6);
      if ( *(_BYTE *)(v22 + 12) && *(_BYTE *)(v22 + 13) && *(_DWORD *)v22 == *(_DWORD *)(v17 + 4 * j) )
      {
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(v22 + 16));
        v17 = a1;
        v21 = k == v20;
        *(_DWORD *)(a3 + 4 * j) = ProcessorIndexFromNumber;
        break;
      }
    }
    if ( v21 )
    {
      v46 = 187;
      v15 = 21;
      goto LABEL_10;
    }
  }
  v24 = *(_QWORD *)(HalpInterruptController + 16);
  v47 = v24;
  if ( a4 && *(_QWORD *)(HalpInterruptController + 144) && !HalpInterruptPhysicalModeOnly && !a5 )
  {
    v25 = a2;
    v26 = 0;
    v27 = v17 - a2;
    while ( v26 < a4 )
    {
      LOBYTE(v8) = 1;
      v28 = guard_dispatch_icall_no_overrides(v24, v27 + v25, &v50, v8);
      v9 = v28;
      if ( v28 < 0 )
      {
        HalpInterruptSetProblemEx(
          HalpInterruptController,
          9,
          v28,
          (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
          0xECu);
        return v9;
      }
      LOBYTE(v29) = 1;
      v30 = guard_dispatch_icall_no_overrides(v24, v25, &v48, v29);
      v9 = v30;
      if ( v30 < 0 )
      {
        HalpInterruptSetProblemEx(
          HalpInterruptController,
          9,
          v30,
          (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
          0xF9u);
        return v9;
      }
      if ( DWORD2(v50) != DWORD2(v48) )
      {
        v31 = 0;
LABEL_35:
        if ( v31 >= a4 )
          break;
        v32 = a1;
        v33 = 0;
        do
        {
          v34 = v33;
          LOBYTE(v8) = 1;
          v35 = guard_dispatch_icall_no_overrides(v24, v32, &v50, v8);
          v9 = v35;
          if ( v35 < 0 )
          {
            HalpInterruptSetProblemEx(
              HalpInterruptController,
              9,
              v35,
              (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
              0x129u);
            return v9;
          }
          v36 = v54;
          if ( !v33 )
            v36 = DWORD2(v50);
          v32 = a1 + 4;
          ++v31;
          v54 = v36;
          ++v33;
          a1 += 4LL;
        }
        while ( v31 < a4 && DWORD2(v50) == v36 );
        LOBYTE(v8) = 1;
        v37 = guard_dispatch_icall_no_overrides(v24, a2, &v48, v8);
        v9 = v37;
        if ( v37 < 0 )
        {
          HalpInterruptSetProblemEx(
            HalpInterruptController,
            9,
            v37,
            (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
            0x151u);
          return v9;
        }
        v39 = DWORD2(v48);
        LOBYTE(v38) = 1;
        v40 = guard_dispatch_icall_no_overrides(v47, a2 + 4 * v34, &v48, v38);
        v9 = v40;
        if ( v40 < 0 )
        {
          HalpInterruptSetProblemEx(
            HalpInterruptController,
            9,
            v40,
            (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
            0x162u);
          return v9;
        }
        v42 = DWORD2(v48);
        if ( v39 == DWORD2(v48) )
        {
          for ( m = HalpInterruptClusterData; m < HalpInterruptClusterDataEnd; m += 24LL )
          {
            if ( *(_DWORD *)m == v39 )
            {
              if ( (unsigned int)__popcnt(*(_QWORD *)(m + 8)) )
              {
                v46 = 397;
                v15 = 26;
                goto LABEL_59;
              }
              break;
            }
          }
          if ( v33 )
          {
            v46 = 412;
            v15 = 25;
            goto LABEL_10;
          }
          v24 = v47;
          if ( v31 >= a4 )
            break;
          LOBYTE(v41) = 1;
          v44 = guard_dispatch_icall_no_overrides(v47, a2, &v48, v41);
          v9 = v44;
          if ( v44 < 0 )
          {
            HalpInterruptSetProblemEx(
              HalpInterruptController,
              9,
              v44,
              (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
              0x1ACu);
            return v9;
          }
          if ( v42 != DWORD2(v48) )
            goto LABEL_35;
          v46 = 449;
          v15 = 27;
        }
        else
        {
          v46 = 372;
          v15 = 25;
        }
        goto LABEL_59;
      }
      v25 += 4LL;
      ++v26;
    }
  }
  if ( a6 && a4 )
  {
    if ( a5 || !HalpInterruptPhysicalModeOnly )
    {
      *a7 = *(_DWORD *)(HalpInterruptController + 312);
      return v9;
    }
    v46 = 476;
    v15 = 28;
LABEL_59:
    v16 = HalpInterruptController;
    goto LABEL_11;
  }
  return v9;
}
