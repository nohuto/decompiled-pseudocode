/*
 * XREFs of ?push_back@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@Z @ 0x1800CC500
 * Callers:
 *     ?GetWindowOcclusionInfo@CWindowNode@@IEBAPEAVCWindowOcclusionInfo@@PEBVCVisualTree@@I@Z @ 0x18010C30C (-GetWindowOcclusionInfo@CWindowNode@@IEBAPEAVCWindowOcclusionInfo@@PEBVCVisualTree@@I@Z.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@Z @ 0x1800C33AC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$unique_ptr@VCCachedRealization@CCachedIma.c)
 *     ??$?4U?$default_delete@VCOcclusionInfo@@@std@@$0A@@?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800CCD7C (--$-4U-$default_delete@VCOcclusionInfo@@@std@@$0A@@-$unique_ptr@VCOcclusionInfo@@U-$default_dele.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCE00 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCF70 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??$destruct_range@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@detail@@YAXPEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@0@Z @ 0x1800CE5E0 (--$destruct_range@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@std@@.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@std@@V?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@0@0V12@@Z @ 0x1801F36F0 (--$uninitialized_move@V-$move_iterator@PEAV-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcc.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::push_back(
        detail::liberal_expansion_policy *a1,
        __int64 *a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rsi
  __int64 v4; // r15
  void *(__fastcall ****v5)(CSurfaceDrawListBrush *__hidden, unsigned int); // r14
  unsigned __int64 v6; // r13
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rsi
  void *(__fastcall ****v11)(CSurfaceDrawListBrush *__hidden, unsigned int); // rdi
  void *(__fastcall ****v12)(CSurfaceDrawListBrush *__hidden, unsigned int); // rbx
  void *(__fastcall ***v13)(CSurfaceDrawListBrush *__hidden, unsigned int); // rcx
  void *(__fastcall *v14)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  __int64 result; // rax
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 *v20; // r9
  __int64 v21; // r11
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rdi
  void *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  void *v27; // rbx
  void *v28; // rcx
  bool v29; // zf
  __int64 v30; // rax
  __int64 v31; // rax
  __int128 v32; // [rsp+20h] [rbp-40h] BYREF
  __int64 v33; // [rsp+30h] [rbp-30h]
  __int128 v34; // [rsp+40h] [rbp-20h] BYREF
  __int64 v35; // [rsp+50h] [rbp-10h]

  v2 = (__int64 *)*((_QWORD *)a1 + 1);
  v3 = a2;
  v4 = *(_QWORD *)a1;
  v5 = 0LL;
  v6 = ((__int64)v2 - *(_QWORD *)a1) >> 3;
  if ( !((__int64)(*((_QWORD *)a1 + 2) - (_QWORD)v2) >> 3) )
  {
    if ( v6 + 1 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
LABEL_4:
      if ( v8 >= 0 )
        goto LABEL_5;
LABEL_22:
      _invalid_parameter_noinfo_noreturn();
    }
    v23 = detail::liberal_expansion_policy::expand(a1, (*((_QWORD *)a1 + 2) - v4) >> 3, v6 + 1);
    v24 = operator new[](saturated_mul(v23, 8uLL));
    v25 = *((_QWORD *)a1 + 1);
    v26 = *(_QWORD *)a1;
    *(_QWORD *)&v32 = v24;
    v27 = v24;
    *((_QWORD *)&v32 + 1) = v6;
    v33 = 0LL;
    v34 = v32;
    v35 = 0LL;
    ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::uninitialized_move<std::move_iterator<std::unique_ptr<COcclusionInfo> *>,stdext::checked_array_iterator<std::unique_ptr<COcclusionInfo> *>>)(
      &v32,
      v26,
      v25,
      &v34);
    detail::destruct_range<std::unique_ptr<COcclusionInfo>>(*(_QWORD *)a1, *((_QWORD *)a1 + 1));
    v28 = *(void **)a1;
    v29 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v27;
    if ( v29 )
      v28 = 0LL;
    operator delete(v28);
    v4 = *(_QWORD *)a1;
    v2 = (__int64 *)(*(_QWORD *)a1 + 8 * v6);
    v30 = *(_QWORD *)a1 + 8 * v23;
    *((_QWORD *)a1 + 1) = v2;
    *((_QWORD *)a1 + 2) = v30;
  }
  v33 = 0LL;
  v16 = 1LL;
  v8 = ((__int64)v2 - v4) >> 3;
  *((_QWORD *)&v32 + 1) = 1LL;
  v17 = v8 - v6;
  v35 = 0LL;
  v5 = (void *(__fastcall ****)(CSurfaceDrawListBrush *__hidden, unsigned int))(v4 + 8 * v8);
  *(_QWORD *)&v32 = v5;
  if ( !v5 )
    goto LABEL_22;
  v35 = 1LL;
  v18 = (((__int64)v2 - v4) >> 3) - v6;
  if ( v17 > 1 )
    v18 = 1LL;
  v33 = 1LL;
  v19 = 8 * v18;
  v20 = &v2[v19 / 0xFFFFFFFFFFFFFFF8uLL];
  if ( v2 != &v2[v19 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v21 = v32;
    v22 = v33;
    do
    {
      --v2;
      if ( !v21 )
        goto LABEL_22;
      if ( !v16 )
        goto LABEL_22;
      v16 = v22 - 1;
      v22 = v16;
      if ( v16 >= *((_QWORD *)&v32 + 1) )
        goto LABEL_22;
      v31 = *v2;
      *v2 = 0LL;
      *(_QWORD *)(v21 + 8 * v16) = v31;
    }
    while ( v2 != v20 );
  }
  if ( v17 <= 1 )
    goto LABEL_9;
  if ( v8 )
  {
    if ( !v4 )
      goto LABEL_22;
    goto LABEL_4;
  }
LABEL_5:
  *((_QWORD *)&v32 + 1) = v8;
  v33 = v8;
  *(_QWORD *)&v32 = v4;
  v9 = v4 + 8 * (v8 - 1);
  v10 = std::_Get_unwrapped_n<stdext::checked_array_iterator<std::unique_ptr<CCachedImageProducer::CCachedRealization> *> &,__int64>(
          &v32,
          -((__int64)(8 * (v8 - 1) - 8 * v6) >> 3))
      - v9;
  while ( v4 + 8 * v6 != v9 )
  {
    v9 -= 8LL;
    std::unique_ptr<COcclusionInfo>::operator=<std::default_delete<COcclusionInfo>,0>(v10 + v9, v9);
  }
  v3 = a2;
LABEL_9:
  v11 = (void *(__fastcall ****)(CSurfaceDrawListBrush *__hidden, unsigned int))(v4 + 8 * (v6 + 1));
  v12 = (void *(__fastcall ****)(CSurfaceDrawListBrush *__hidden, unsigned int))(v4 + 8 * v6);
  if ( v5 < v11 )
    v11 = v5;
  if ( v12 != v11 )
  {
    do
    {
      v13 = *v12;
      if ( *v12 )
      {
        v14 = **v13;
        if ( v14 == CWindowOcclusionInfo::`vector deleting destructor' )
        {
          operator delete(v13, 0x38uLL);
        }
        else if ( v14 == CSurfaceDrawListBrush::`vector deleting destructor' )
        {
          CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v13, 1u);
        }
        else if ( v14 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
        {
          CMultiPrimitiveDrawListBrush::`vector deleting destructor'((CMultiPrimitiveDrawListBrush *)v13, 1u);
        }
        else
        {
          ((void (__fastcall *)(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int), __int64, void *(__fastcall *)(CMultiPrimitiveDrawListBrush *__hidden, unsigned int)))v14)(
            v13,
            1LL,
            CMultiPrimitiveDrawListBrush::`vector deleting destructor');
        }
      }
      ++v12;
    }
    while ( v12 != v11 );
    v3 = a2;
  }
  *((_QWORD *)a1 + 1) += 8LL;
  result = *v3;
  *v3 = 0LL;
  *(_QWORD *)(v4 + 8 * v6) = result;
  return result;
}
