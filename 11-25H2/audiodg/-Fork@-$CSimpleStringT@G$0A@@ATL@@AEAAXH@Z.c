/*
 * XREFs of ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x14002A55C
 * Callers:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x14002A4EC (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x14002A638 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     _invalid_parameter_noinfo @ 0x14005A0DE (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     memcpy_0 @ 0x14005B571 (memcpy_0.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x14006BB1C (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CSimpleStringT<unsigned short,0>::Fork(const void **a1, unsigned int a2)
{
  char *v2; // rbp
  int v5; // esi
  __int64 (__fastcall ***v6)(_QWORD, _QWORD, __int64); // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r14
  void *v11; // rbx
  size_t v12; // r8

  v2 = (char *)*a1;
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
        goto LABEL_9;
      }
      memset_0(v11, 0, v12);
    }
    *(_DWORD *)_o__errno(v9, v8) = 22;
    invalid_parameter_noinfo();
  }
LABEL_9:
  *(_DWORD *)(v10 + 8) = v5;
  ATL::CStringData::Release((ATL::CStringData *)(v2 - 24));
  *a1 = v11;
}
