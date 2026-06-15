/*
 * XREFs of ?GetEffectsList@CCompositeSystemEffect@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x180068710
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$CSimpleArray@PEAUHINSTANCE__@@V?$CSimpleArrayEqualHelper@PEAUHINSTANCE__@@@ATL@@@ATL@@QEAAAEAPEAUHINSTANCE__@@H@Z @ 0x180068990 (--A-$CSimpleArray@PEAUHINSTANCE__@@V-$CSimpleArrayEqualHelper@PEAUHINSTANCE__@@@ATL@@@ATL@@QEAAA.c)
 *     ?Add@?$CSimpleArray@PEAU_GUID@@V?$CSimpleArrayEqualHelper@PEAU_GUID@@@ATL@@@ATL@@QEAAHAEBQEAU_GUID@@@Z @ 0x1800A4224 (-Add@-$CSimpleArray@PEAU_GUID@@V-$CSimpleArrayEqualHelper@PEAU_GUID@@@ATL@@@ATL@@QEAAHAEBQEAU_GU.c)
 *     ?Add@?$CSimpleArray@IV?$CSimpleArrayEqualHelper@I@ATL@@@ATL@@QEAAHAEBI@Z @ 0x1800A42CC (-Add@-$CSimpleArray@IV-$CSimpleArrayEqualHelper@I@ATL@@@ATL@@QEAAHAEBI@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A6DDC (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     memcpy_s_1 @ 0x1800AE1A8 (memcpy_s_1.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositeSystemEffect::GetEffectsList(
        CCompositeSystemEffect *this,
        struct _GUID **a2,
        unsigned int *a3,
        void *a4)
{
  unsigned int v7; // r15d
  unsigned int v8; // ebx
  _QWORD *v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  void *v13; // rsi
  unsigned int *v14; // r14
  __int64 v15; // r12
  struct _GUID *v16; // rdx
  int v17; // eax
  int v18; // r9d
  __int64 v19; // rcx
  unsigned int *v20; // r10
  void *v21; // r8
  int v22; // edi
  rsize_t v23; // rbx
  int v24; // [rsp+30h] [rbp-50h] BYREF
  __int64 v25; // [rsp+38h] [rbp-48h] BYREF
  void *v26; // [rsp+40h] [rbp-40h] BYREF
  __int64 v27; // [rsp+48h] [rbp-38h]
  void *Block; // [rsp+50h] [rbp-30h] BYREF
  __int64 v29; // [rsp+58h] [rbp-28h]
  __int64 v30; // [rsp+60h] [rbp-20h]
  unsigned int *v31; // [rsp+68h] [rbp-18h]
  struct _GUID *v32; // [rsp+70h] [rbp-10h]
  LPVOID pv; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v26 = 0LL;
  v27 = 0LL;
  Block = 0LL;
  v7 = 0;
  v29 = 0LL;
  if ( !a2 || !a3 )
    return 2147500035LL;
  *a2 = 0LL;
  v8 = 0;
  *a3 = 0;
  while ( (signed int)v8 < *((_DWORD *)this + 30) )
  {
    v25 = 0LL;
    v24 = 0;
    v9 = (_QWORD *)ATL::CSimpleArray<HINSTANCE__ *,ATL::CSimpleArrayEqualHelper<HINSTANCE__ *>>::operator[](
                     (char *)this + 112,
                     v8);
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, int *, void *))(*(_QWORD *)*v9 + 24LL))(*v9, &v25, &v24, a4);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4CB,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v10);
      if ( Block )
        free(Block);
      if ( v26 )
        free(v26);
      return v11;
    }
    ATL::CSimpleArray<_GUID *,ATL::CSimpleArrayEqualHelper<_GUID *>>::Add(&v26, &v25);
    ATL::CSimpleArray<unsigned int,ATL::CSimpleArrayEqualHelper<unsigned int>>::Add(&Block, &v24);
    v7 += v24;
    ++v8;
  }
  v13 = v26;
  v14 = (unsigned int *)Block;
  if ( v7 )
  {
    v15 = 16LL * v7;
    v32 = (struct _GUID *)CoTaskMemAlloc(v15);
    v16 = v32;
    if ( !v32 )
    {
      if ( v14 )
        free(v14);
      if ( v13 )
        free(v13);
      return 2147942414LL;
    }
    v17 = 0;
    v18 = 0;
    LODWORD(v25) = 0;
    v24 = 0;
    if ( (int)v27 > 0 )
    {
      v19 = 0LL;
      v31 = v14;
      v30 = 0LL;
      v20 = v14;
      while ( 1 )
      {
        if ( v19 < 0 || v17 >= (int)v27 )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
          __debugbreak();
        }
        v21 = (void *)*((_QWORD *)v13 + v19);
        pv = v21;
        if ( v17 >= (int)v29 )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v16);
          __debugbreak();
        }
        v22 = *v20;
        v23 = 16LL * *v20;
        memcpy_s_1(&v16[v18], v15, v21, v23);
        v15 -= v23;
        v24 += v22;
        CoTaskMemFree(pv);
        v17 = v25 + 1;
        v19 = v30 + 1;
        v16 = v32;
        v20 = v31 + 1;
        LODWORD(v25) = v17;
        ++v30;
        ++v31;
        if ( v17 >= (int)v27 )
          break;
        v18 = v24;
      }
    }
    *a2 = v16;
    *a3 = v7;
  }
  if ( v14 )
    free(v14);
  if ( v13 )
    free(v13);
  return 0LL;
}
