/*
 * XREFs of ?GetPointerTarget@CGestureTargetingManager@@SAJPEAVCManipulationFrame@@AEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x18024DAE4
 * Callers:
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x18017F170 (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D64C (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F114C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ @ 0x18017F774 (-InternalRelease@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18017F7EC (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x1801E4320 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ?IsDrop@TargetingInfo@@QEBA_NXZ @ 0x180211A44 (-IsDrop@TargetingInfo@@QEBA_NXZ.c)
 *     _anonymous_namespace_::AllSupportedWithSingleTarget @ 0x180232CE8 (_anonymous_namespace_--AllSupportedWithSingleTarget.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GestureTargetingPTPFrameSplitFix@@@details@wil@@QEAA_NXZ @ 0x18024DF20 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GestureTargetingPTPFrameSplitFix@.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGestureTargetingManager::GetPointerTarget(
        struct CManipulationFrame *a1,
        const struct tagPOINTER_INFO *a2,
        const struct IManipulationContext *a3,
        struct TargetingInfo *a4)
{
  unsigned int v7; // r12d
  int v8; // r13d
  _DWORD *v9; // rax
  int v10; // ecx
  CResource **v11; // rax
  CResource *v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // edx
  unsigned int v17; // eax
  unsigned int i; // ebx
  __int64 v19; // rdx
  CResource *v20; // r15
  __int64 (__fastcall *v21)(const struct IManipulationContext *, __int64, _QWORD); // rdi
  __int64 v22; // rax
  int v23; // ebx
  CResource *v24; // rdi
  int (__fastcall *v25)(CResource *, _QWORD, __int64 *); // rbx
  bool v26; // al
  __int64 v27; // rcx
  struct TargetingInfo *v28; // rcx
  __int64 v30; // [rsp+20h] [rbp-79h] BYREF
  CResource *v31; // [rsp+28h] [rbp-71h] BYREF
  int v32; // [rsp+30h] [rbp-69h] BYREF
  CResource *v33; // [rsp+38h] [rbp-61h] BYREF
  __int64 v34; // [rsp+40h] [rbp-59h] BYREF
  CResource *v35; // [rsp+48h] [rbp-51h] BYREF
  CResource *v36; // [rsp+50h] [rbp-49h] BYREF
  struct TargetingInfo *v37; // [rsp+58h] [rbp-41h]
  int v38; // [rsp+60h] [rbp-39h] BYREF
  char v39; // [rsp+64h] [rbp-35h]
  char v40; // [rsp+98h] [rbp-1h]

  v37 = a4;
  v32 = 1;
  v30 = 0LL;
  v31 = 0LL;
  v33 = 0LL;
  Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v33);
  v7 = ConvertToInputType(*(_DWORD *)a2, *((_DWORD *)a2 + 3));
  v8 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, _QWORD, int *))(*(_QWORD *)a3 + 64LL))(
         a3,
         *((unsigned int *)a2 + 1),
         &v32);
  if ( v8 >= 0 )
  {
    if ( (*((_DWORD *)a2 + 3) & 0x40000) != 0
      && v32
      && v33
      && (*(unsigned int (__fastcall **)(CResource *))(*(_QWORD *)v33 + 144LL))(v33) )
    {
      LODWORD(v30) = v32;
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v31, &v33);
    }
    else
    {
      v9 = (_DWORD *)(*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64 *))(*(_QWORD *)a3 + 80LL))(
                       a3,
                       &v34);
      v10 = *v9;
      v11 = (CResource **)(v9 + 2);
      LODWORD(v30) = v10;
      v12 = 0LL;
      if ( &v36 != v11 )
      {
        v12 = *v11;
        *v11 = 0LL;
      }
      v31 = v12;
      v36 = 0LL;
      Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v36);
      Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v35);
    }
    if ( v31 )
    {
      v13 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, CResource *, _QWORD))(*(_QWORD *)a3 + 56LL))(
              a3,
              v31,
              v7);
      if ( !v13
        || (v14 = *(_QWORD *)a3,
            v15 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a3 + 16LL))(a3),
            (*(unsigned int (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(v14 + 56))(
              a3,
              v15,
              v7) > v13) )
      {
        LODWORD(v30) = 0;
        Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v31);
      }
    }
    v16 = *((_DWORD *)a2 + 3);
    if ( (v16 & 0x40000) != 0 )
    {
      if ( v32 )
      {
        if ( v33 != v31 )
        {
          v17 = ConvertToInputType(*(_DWORD *)a2, v16);
          if ( !anonymous_namespace_::AllSupportedWithSingleTarget((__int64)a3, v17) )
          {
            LODWORD(v30) = 1;
            Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v31);
          }
        }
      }
    }
    if ( (*((_DWORD *)a2 + 3) & 0x40000) != 0
      && v32 == 2
      && (_DWORD)v30 == 1
      && !TargetingInfo::IsDrop((TargetingInfo *)&v30) )
    {
      LODWORD(v30) = 1;
      Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v31);
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GestureTargetingPTPFrameSplitFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_GestureTargetingPTPFrameSplitFix>::GetImpl'::`2'::impl) )
    {
      if ( (*((_DWORD *)a2 + 3) & 0x10000) != 0 && *(_DWORD *)a2 == 5 )
      {
        for ( i = 0; i < *((_DWORD *)a1 + 4); ++i )
        {
          v19 = *((unsigned int *)a1 + 62 * i + 93);
          if ( (_DWORD)v19 != *((_DWORD *)a2 + 1)
            && (*(int (__fastcall **)(const struct IManipulationContext *, __int64, int *))(*(_QWORD *)a3 + 64LL))(
                 a3,
                 v19,
                 &v32) >= 0
            && !TargetingInfo::IsDrop((TargetingInfo *)&v32) )
          {
            break;
          }
        }
      }
    }
    v20 = v33;
    if ( v33 )
    {
      if ( v33 != v31 )
      {
        v21 = *(__int64 (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(*(_QWORD *)a3 + 56LL);
        v22 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a3 + 16LL))(a3);
        v23 = v21(a3, v22, v7);
        if ( (unsigned int)v21(a3, (__int64)v20, v7) == v23 )
        {
          if ( (*(unsigned int (__fastcall **)(CResource *, _QWORD, __int64))(*(_QWORD *)v33 + 80LL))(v33, v7, 1LL) )
          {
            v34 = 0LL;
            v24 = v33;
            v25 = *(int (__fastcall **)(CResource *, _QWORD, __int64 *))(*(_QWORD *)v33 + 128LL);
            Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v34);
            if ( v25(v24, v7, &v34) >= 0 )
            {
              (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v34 + 40LL))(v34, &v38);
              v26 = v38 == 1 && ((v39 & 1) != 0 || (v39 & 2) != 0);
              if ( ((v40 & 1) == 0 || v26)
                && (*(unsigned int (__fastcall **)(CResource *))(*(_QWORD *)v33 + 136LL))(v33) )
              {
                Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v31, &v33);
                LODWORD(v30) = v32;
              }
            }
            v27 = v34;
            if ( v34 )
            {
              v34 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
            }
          }
        }
      }
    }
    if ( !(_DWORD)v30 )
    {
      if ( !v32 && (*((_DWORD *)a2 + 3) & 0x40000) == 0 )
      {
LABEL_57:
        v28 = v37;
        *(_DWORD *)v37 = v30;
        Microsoft::WRL::ComPtr<IInteractionResource>::operator=((CResource **)v28 + 1, &v31);
        goto LABEL_58;
      }
      LODWORD(v30) = 1;
      Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v31);
    }
    if ( !v31 && (_DWORD)v30 == 1 )
    {
      (*(void (__fastcall **)(const struct IManipulationContext *, __int64 *))(*(_QWORD *)a3 + 96LL))(a3, &v34);
      if ( v35 )
      {
        Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v31);
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v35);
        v8 = 0;
        v31 = v35;
      }
      Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v35);
    }
    goto LABEL_57;
  }
LABEL_58:
  Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v31);
  return (unsigned int)v8;
}
