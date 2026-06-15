/*
 * XREFs of ??$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@3@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@0@@Z @ 0x14008D724
 * Callers:
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14008E55C (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUt.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x14008EBB8 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400089AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x140038380 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x14003D080 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140058D14 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$_Temporary_owner@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAA@XZ @ 0x14008DA84 (--1-$_Temporary_owner@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAA@X.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall util::MakeAtomicObj<ClockingSection,util::ReaderLockPolicy,util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::Storage>(
        __int64 *a1,
        __int64 a2)
{
  char *v4; // rdi
  std::_Ref_count_base *v5; // rcx
  __int64 v6; // rdx
  __m128i v7; // xmm2
  __int64 v8; // rax
  unsigned __int64 v9; // xmm1_8
  std::_Ref_count_base *v10; // rbx
  std::_Ref_count_base *v11; // rcx
  __m128i v13; // [rsp+30h] [rbp-20h] BYREF
  __m128i v14; // [rsp+40h] [rbp-10h]
  _DWORD *v15; // [rsp+70h] [rbp+20h]
  char *v16; // [rsp+78h] [rbp+28h] BYREF
  char *v17; // [rsp+80h] [rbp+30h]

  *a1 = 0LL;
  a1[1] = 0LL;
  if ( a2 )
  {
    v4 = (char *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
    v16 = v4;
    if ( v4 )
    {
      *(_QWORD *)v4 = &util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::`vftable';
      v17 = v4 + 8;
      ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(v4 + 8));
      *((_DWORD *)v4 + 12) = 0;
      *((_DWORD *)v4 + 13) = 0;
      *((_QWORD *)v4 + 7) = a2;
      *((_QWORD *)v4 + 8) = 0LL;
      *((_QWORD *)v4 + 9) = 0LL;
      *(_QWORD *)v4 = &util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::`vftable';
    }
    else
    {
      v4 = 0LL;
    }
    v16 = v4;
    v15 = operator new(0x18uLL);
    *(_OWORD *)v15 = 0LL;
    v15[2] = 1;
    v15[3] = 1;
    *(_QWORD *)v15 = &std::_Ref_count<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::`vftable';
    *((_QWORD *)v15 + 2) = v4;
    v16 = 0LL;
    std::_Temporary_owner<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::~_Temporary_owner<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>(&v16);
    *a1 = (__int64)v4;
    v5 = (std::_Ref_count_base *)a1[1];
    a1[1] = (__int64)v15;
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
    v6 = *a1;
    if ( *a1 )
    {
      v7 = 0LL;
      v13 = 0LL;
      v8 = a1[1];
      if ( v8 )
      {
        v13.m128i_i64[0] = v6;
        v13.m128i_i64[1] = v8;
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 12));
        v7 = _mm_load_si128(&v13);
      }
      v14 = 0LL;
      v9 = _mm_srli_si128(v7, 8).m128i_u64[0];
      v10 = (std::_Ref_count_base *)v9;
      if ( v9 )
      {
        v14 = v7;
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 12));
        v10 = (std::_Ref_count_base *)v13.m128i_i64[1];
      }
      *(_QWORD *)(v6 + 64) = v14.m128i_i64[0];
      v11 = *(std::_Ref_count_base **)(v6 + 72);
      *(_QWORD *)(v6 + 72) = v14.m128i_i64[1];
      if ( v11 )
        std::_Ref_count_base::_Decwref(v11);
      if ( v10 )
        std::_Ref_count_base::_Decwref(v10);
    }
  }
  return a1;
}
