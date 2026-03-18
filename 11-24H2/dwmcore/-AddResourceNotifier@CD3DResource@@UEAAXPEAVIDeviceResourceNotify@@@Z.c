/*
 * XREFs of ?AddResourceNotifier@CD3DResource@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x1801DAE50
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180041D40 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall CD3DResource::AddResourceNotifier(CD3DResource *this, struct IDeviceResourceNotify *a2)
{
  char *v2; // rsi
  char *v4; // rcx
  unsigned __int64 v6; // rbp
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  SIZE_T size_of; // rax
  char *v12; // rdi
  char *v13; // rcx
  char *v14; // r8
  char *v15; // rdx
  size_t v16; // r8
  _QWORD *v17; // rcx

  v2 = (char *)*((_QWORD *)this + 7);
  v4 = (char *)*((_QWORD *)this + 8);
  if ( v2 == v4 )
  {
    v6 = 0x1FFFFFFFFFFFFFFFLL;
    v7 = (__int64)&v2[-*((_QWORD *)this + 6)] >> 3;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    v8 = v7 + 1;
    v9 = (__int64)&v4[-*((_QWORD *)this + 6)] >> 3;
    v10 = v9 >> 1;
    if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
    {
      v6 = v10 + v9;
      if ( v10 + v9 < v8 )
        v6 = v7 + 1;
    }
    size_of = std::_Get_size_of_n<8>(v6);
    v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v13 = v12;
    *(_QWORD *)&v12[8 * v7] = a2;
    v14 = (char *)*((_QWORD *)this + 7);
    v15 = (char *)*((_QWORD *)this + 6);
    if ( v2 == v14 )
    {
      v16 = v14 - v15;
    }
    else
    {
      memmove_0(v12, v15, v2 - v15);
      v16 = *((_QWORD *)this + 7) - (_QWORD)v2;
      v13 = &v12[8 * v7 + 8];
      v15 = v2;
    }
    memmove_0(v13, v15, v16);
    v17 = (_QWORD *)*((_QWORD *)this + 6);
    if ( v17 )
      std::_Deallocate<16,0>(v17, (*((_QWORD *)this + 8) - (_QWORD)v17) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 6) = v12;
    *((_QWORD *)this + 7) = &v12[8 * v8];
    *((_QWORD *)this + 8) = &v12[8 * v6];
  }
  else
  {
    *(_QWORD *)v2 = a2;
    *((_QWORD *)this + 7) += 8LL;
  }
}
