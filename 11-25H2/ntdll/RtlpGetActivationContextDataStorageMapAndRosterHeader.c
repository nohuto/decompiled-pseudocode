/*
 * XREFs of RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800E2350
 * Callers:
 *     RtlGetAssemblyStorageRoot @ 0x1800E2198 (RtlGetAssemblyStorageRoot.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     DbgPrintEx @ 0x18001A6F0 (DbgPrintEx.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x1800E26E4 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpUninitializeAssemblyStorageMap @ 0x1800E27D4 (RtlpUninitializeAssemblyStorageMap.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpGetActivationContextDataStorageMapAndRosterHeader(
        int a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        volatile signed __int64 *a5,
        _QWORD *a6)
{
  __int64 v7; // rbx
  _QWORD *v8; // rdi
  volatile signed __int64 *v9; // r14
  __int64 v10; // rax
  __m128i v11; // xmm0
  size_t v12; // r13
  _WORD *v13; // rsi
  __int64 v15; // rax
  volatile signed __int64 v16; // r8
  int v17; // esi
  size_t v18; // r13
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 Heap; // rax
  __int64 v22; // r13
  __int64 v23; // r9
  __int64 v24; // r9
  _WORD *Atom; // [rsp+40h] [rbp-288h]
  _WORD v26[264]; // [rsp+70h] [rbp-258h] BYREF

  Atom = v26;
  v26[0] = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( (_UNKNOWN *)a3 == &unk_180175458 )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() passed the empty activation context\n",
      "RtlpGetActivationContextDataStorageMapAndRosterHeader");
    return 3221225485LL;
  }
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 || !a2 || !a4 || !a5 )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() bad parameters:\n"
      "SXS:    Flags                : 0x%lx\n"
      "SXS:    Peb                  : %p\n"
      "SXS:    ActivationContextData: %p\n"
      "SXS:    AssemblyStorageMap   : %p\n",
      "RtlpGetActivationContextDataStorageMapAndRosterHeader",
      a1,
      a2,
      a4,
      (const void *)a5);
    return 3221225485LL;
  }
  if ( a3 )
  {
    if ( a3 == -4 )
    {
LABEL_32:
      v8 = a2 + 97;
      v19 = a2[97];
      v9 = a2 + 98;
      if ( v19 )
      {
        v7 = v19 + *(unsigned int *)(v19 + 24);
        goto LABEL_34;
      }
      goto LABEL_41;
    }
    if ( (a1 & 3) == 0 )
    {
      v15 = *(_QWORD *)(a3 + 24);
      v8 = (_QWORD *)(a3 + 24);
      if ( !v15 )
        return 3221225701LL;
      v7 = v15 + *(unsigned int *)(v15 + 24);
      v16 = a3 + 112;
      goto LABEL_25;
    }
  }
  if ( (a1 & 2) != 0 )
    goto LABEL_32;
  if ( a3 && (a1 & 1) == 0 )
    goto LABEL_34;
  v8 = a2 + 95;
  v10 = a2[95];
  v9 = a2 + 96;
  if ( !v10 )
  {
LABEL_41:
    v16 = *v9;
LABEL_25:
    *a5 = v16;
    *a4 = *v8;
    if ( a6 )
      *a6 = v7;
    v17 = 0;
    goto LABEL_28;
  }
  v7 = v10 + *(unsigned int *)(v10 + 24);
  if ( !*v9 )
  {
    v11 = *(__m128i *)(a2[4] + 96LL);
    v12 = (unsigned __int16)_mm_cvtsi128_si32(v11);
    if ( v12 + 14 <= 0x208 )
    {
      v13 = v26;
      Atom = v26;
    }
    else
    {
      if ( v12 + 14 > 0xFFFE )
        return 3221225734LL;
      Atom = (_WORD *)RtlpAllocateAtom();
      v13 = Atom;
      if ( !Atom )
        return 3221225495LL;
    }
    memmove(v13, (const void *)_mm_srli_si128(v11, 8).m128i_i64[0], v12);
    v18 = v12 >> 1;
    *(_QWORD *)&v13[v18] = *(_QWORD *)L".Local";
    *(_DWORD *)&v13[v18 + 4] = *(_DWORD *)L"al";
    v13[v18 + 6] = aLocal[6];
  }
LABEL_34:
  if ( !*v8 || *v9 )
    goto LABEL_41;
  v20 = *(unsigned int *)(v7 + 8);
  if ( (unsigned int)v20 > 0x1FFFFFFD )
  {
    v17 = -1073741675;
  }
  else
  {
    Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, 8 * v20 + 16);
    v22 = Heap;
    if ( Heap )
    {
      v17 = RtlpInitializeAssemblyStorageMap(Heap, *(unsigned int *)(v7 + 8), Heap + 16);
      if ( v17 >= 0 )
      {
        if ( _InterlockedCompareExchange64(v9, v22, 0LL) )
        {
          RtlpUninitializeAssemblyStorageMap(v22);
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v22, v24);
        }
        goto LABEL_41;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v22, v23);
    }
    else
    {
      v17 = -1073741801;
    }
  }
LABEL_28:
  if ( Atom )
  {
    if ( Atom != v26 )
      RtlpSysVolFree((__int64)Atom);
  }
  return (unsigned int)v17;
}
