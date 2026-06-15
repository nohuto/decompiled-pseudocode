/*
 * XREFs of ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180015110
 * Callers:
 *     ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x18001B4B4 (--0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18001E978 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x1800211E6 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1800212A8 (memset_0.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800432D4 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     memcpy_0 @ 0x180048BAC (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

volatile signed __int32 *__fastcall ATL::CSimpleStringT<unsigned short,0>::CloneData(volatile signed __int32 *a1)
{
  __int64 (__fastcall ***v2)(_QWORD, _QWORD, __int64); // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  const void *v6; // rdx
  void *v7; // rcx
  size_t v8; // r8

  v2 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 32LL))(*(_QWORD *)a1);
  if ( *((int *)a1 + 4) >= 0 && v2 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))a1 )
  {
    _InterlockedIncrement(a1 + 4);
    return a1;
  }
  v4 = (**v2)(v2, *((unsigned int *)a1 + 2), 2LL);
  v5 = v4;
  if ( !v4 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
  v6 = (const void *)(a1 + 6);
  *(_DWORD *)(v4 + 8) = *((_DWORD *)a1 + 2);
  v7 = (void *)(v4 + 24);
  v8 = 2LL * (*((_DWORD *)a1 + 2) + 1);
  if ( v8 )
  {
    if ( v4 != -24 )
    {
      if ( a1 != (volatile signed __int32 *)-24LL )
      {
        memcpy_0(v7, v6, v8);
        return (volatile signed __int32 *)v5;
      }
      memset_0(v7, 0, v8);
    }
    *(_DWORD *)_o__errno(v7, v6, v8) = 22;
    invalid_parameter_noinfo();
  }
  return (volatile signed __int32 *)v5;
}
