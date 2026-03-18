/*
 * XREFs of ?SetWorldTransform@CTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z @ 0x180231560
 * Callers:
 *     ?SetWorldTransform@CDesktopTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z @ 0x180231240 (-SetWorldTransform@CDesktopTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?reset@?$unique_ptr@VCMILMatrix@@U?$default_delete@VCMILMatrix@@@std@@@std@@QEAAXPEAVCMILMatrix@@@Z @ 0x1800F5DC4 (-reset@-$unique_ptr@VCMILMatrix@@U-$default_delete@VCMILMatrix@@@std@@@std@@QEAAXPEAVCMILMatrix@.c)
 *     ??9CMILMatrix@@QEBA_NAEBV0@@Z @ 0x18014BC20 (--9CMILMatrix@@QEBA_NAEBV0@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ @ 0x180257014 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ.c)
 */

bool __fastcall CTreeData::SetWorldTransform(
        CTreeData *this,
        const struct CMILMatrix *a2,
        char a3,
        struct CMILMatrix *a4)
{
  float *v8; // rbp
  bool v9; // al
  const char *v10; // r9
  _OWORD *v11; // rcx
  int v12; // eax
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  _OWORD *v16; // rax
  __int64 v17; // rdx
  bool result; // al
  char v19; // r12
  __int64 v20; // r15
  __int64 v21; // rcx
  _OWORD *v22; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = (float *)((char *)this + 280);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Comp_Racy>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Comp_Racy>::GetImpl'::`2'::impl) )
  {
    v9 = CMILMatrix::operator!=(v8, (float *)a2);
    *((_BYTE *)this + 15) = v9;
    if ( v9 )
    {
      *(_OWORD *)v8 = *(_OWORD *)a2;
      *((_OWORD *)v8 + 1) = *((_OWORD *)a2 + 1);
      *((_OWORD *)v8 + 2) = *((_OWORD *)a2 + 2);
      *((_OWORD *)v8 + 3) = *((_OWORD *)a2 + 3);
      v8[16] = *((float *)a2 + 16);
    }
    v11 = (_OWORD *)*((_QWORD *)this + 33);
    *((_BYTE *)this + 11) = a3;
    if ( a4 )
    {
      if ( v11 )
      {
        v12 = *((_DWORD *)a4 + 16);
        v13 = *((_OWORD *)a4 + 1);
        v14 = *((_OWORD *)a4 + 2);
        v15 = *((_OWORD *)a4 + 3);
        *v11 = *(_OWORD *)a4;
        v11[1] = v13;
        v11[2] = v14;
        v11[3] = v15;
        *((_DWORD *)v11 + 16) = v12;
      }
      else
      {
        v16 = operator new(0x44uLL);
        if ( v16 )
        {
          *v16 = *(_OWORD *)a4;
          v16[1] = *((_OWORD *)a4 + 1);
          v16[2] = *((_OWORD *)a4 + 2);
          v16[3] = *((_OWORD *)a4 + 3);
          *((_DWORD *)v16 + 16) = *((_DWORD *)a4 + 16);
          std::unique_ptr<CMILMatrix>::reset((void **)this + 33, v16);
        }
        else
        {
          std::unique_ptr<CMILMatrix>::reset((void **)this + 33, 0LL);
        }
      }
    }
    else
    {
      *((_QWORD *)this + 33) = 0LL;
      if ( v11 )
        operator delete(v11, 0x44uLL);
    }
    v17 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 24LL) + 888LL);
    if ( *((_QWORD *)this + 28) == v17 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xC8,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\treedata.cpp",
        v10);
    result = *((_BYTE *)this + 15);
    *((_QWORD *)this + 28) = v17;
  }
  else
  {
    v19 = 0;
    v20 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 24LL) + 888LL);
    if ( CMILMatrix::operator!=(v8, (float *)a2) )
    {
      v19 = 1;
      *(_OWORD *)v8 = *(_OWORD *)a2;
      *((_OWORD *)v8 + 1) = *((_OWORD *)a2 + 1);
      *((_OWORD *)v8 + 2) = *((_OWORD *)a2 + 2);
      *((_OWORD *)v8 + 3) = *((_OWORD *)a2 + 3);
      v8[16] = *((float *)a2 + 16);
    }
    *((_BYTE *)this + 11) = a3;
    if ( a4 )
    {
      v21 = *((_QWORD *)this + 32);
      if ( v21 )
      {
        *(_OWORD *)v21 = *(_OWORD *)a4;
        *(_OWORD *)(v21 + 16) = *((_OWORD *)a4 + 1);
        *(_OWORD *)(v21 + 32) = *((_OWORD *)a4 + 2);
        *(_OWORD *)(v21 + 48) = *((_OWORD *)a4 + 3);
        *(_DWORD *)(v21 + 64) = *((_DWORD *)a4 + 16);
      }
      else
      {
        v22 = operator new(0x44uLL);
        if ( v22 )
        {
          *v22 = *(_OWORD *)a4;
          v22[1] = *((_OWORD *)a4 + 1);
          v22[2] = *((_OWORD *)a4 + 2);
          v22[3] = *((_OWORD *)a4 + 3);
          *((_DWORD *)v22 + 16) = *((_DWORD *)a4 + 16);
        }
        *((_QWORD *)this + 32) = v22;
      }
    }
    if ( v19 || !*((_QWORD *)this + 28) )
      *((_QWORD *)this + 28) = v20;
    return *((_QWORD *)this + 28) == v20;
  }
  return result;
}
