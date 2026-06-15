/*
 * XREFs of ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18002A100
 * Callers:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001AC20 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180028DF0 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x18002A0C8 (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 * Callees:
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800A4D44 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     _invalid_parameter_noinfo @ 0x1800A8AFE (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::Fork(const void **a1, unsigned int a2)
{
  const void *v2; // r13
  int v5; // ebp
  __int64 (__fastcall ***v6)(_QWORD, _QWORD, __int64); // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r14
  void *v11; // rdi
  size_t v12; // r8
  signed __int32 v13; // eax
  bool v14; // cc
  __int64 result; // rax

  v2 = *a1;
  v5 = *((_DWORD *)*a1 - 4);
  v6 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*a1 - 3)
                                                                                            + 32LL))(*((_QWORD *)*a1 - 3));
  v7 = (**v6)(v6, a2, 2LL);
  v10 = v7;
  if ( !v7 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
  v11 = (void *)(v7 + 24);
  if ( v5 < (int)a2 )
    a2 = v5;
  v12 = 2LL * (int)(a2 + 1);
  if ( v12 )
  {
    if ( v7 != -24 )
    {
      if ( v2 )
      {
        memcpy_0(v11, v2, v12);
        goto LABEL_8;
      }
      memset_0(v11, 0, v12);
    }
    *(_DWORD *)_o__errno(v9, v8, v12) = 22;
    invalid_parameter_noinfo();
  }
LABEL_8:
  *(_DWORD *)(v10 + 8) = v5;
  v13 = _InterlockedExchangeAdd((volatile signed __int32 *)v2 - 2, 0xFFFFFFFF);
  v14 = v13 <= 1;
  result = (unsigned int)(v13 - 1);
  if ( v14 )
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, size_t))(**((_QWORD **)v2 - 3) + 8LL))(
               *((_QWORD *)v2 - 3),
               (__int64)v2 - 24,
               v12);
  *a1 = v11;
  return result;
}
