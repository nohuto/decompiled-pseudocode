/*
 * XREFs of ?GetPointerTarget@CGestureTargetingManager@@SAJPEAVCManipulationFrame@@AEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x18025795C
 * Callers:
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x18012B890 (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ @ 0x18012BE94 (-InternalRelease@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18012BF0C (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x18018ED9C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x1801D82E0 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ?IsDrop@TargetingInfo@@QEBA_NXZ @ 0x18020524C (-IsDrop@TargetingInfo@@QEBA_NXZ.c)
 *     _anonymous_namespace_::AllSupportedWithSingleTarget @ 0x180227208 (_anonymous_namespace_--AllSupportedWithSingleTarget.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGestureTargetingManager::GetPointerTarget(
        struct CManipulationFrame *a1,
        const struct tagPOINTER_INFO *a2,
        const struct IManipulationContext *a3,
        struct TargetingInfo *a4)
{
  unsigned int v7; // r13d
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  CCachedVisualImage *v13; // rdi
  _DWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // ecx
  CCachedVisualImage **v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  unsigned int v22; // r15d
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // eax
  unsigned int i; // ebx
  CCachedVisualImage *v28; // r15
  __int64 (__fastcall *v29)(const struct IManipulationContext *, __int64, _QWORD); // rdi
  __int64 v30; // rax
  int v31; // ebx
  CCachedVisualImage *v32; // rdi
  int (__fastcall *v33)(CCachedVisualImage *, _QWORD, __int64 *); // rbx
  bool v34; // al
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r8
  unsigned int v39; // ebx
  struct TargetingInfo *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v44; // [rsp+20h] [rbp-79h] BYREF
  CCachedVisualImage *v45; // [rsp+28h] [rbp-71h] BYREF
  int v46; // [rsp+30h] [rbp-69h] BYREF
  CCachedVisualImage *v47; // [rsp+38h] [rbp-61h] BYREF
  int v48; // [rsp+40h] [rbp-59h]
  __int64 v49; // [rsp+48h] [rbp-51h] BYREF
  CCachedVisualImage *v50; // [rsp+50h] [rbp-49h] BYREF
  CCachedVisualImage *v51; // [rsp+58h] [rbp-41h] BYREF
  struct TargetingInfo *v52; // [rsp+60h] [rbp-39h]
  int v53; // [rsp+68h] [rbp-31h] BYREF
  char v54; // [rsp+6Ch] [rbp-2Dh]
  char v55; // [rsp+A0h] [rbp+7h]

  v52 = a4;
  v46 = 1;
  v44 = 0LL;
  v45 = 0LL;
  v47 = 0LL;
  Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v47, (__int64)a2, (__int64)a3);
  v7 = ConvertToInputType(*(_DWORD *)a2, *((_DWORD *)a2 + 3));
  v8 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, _QWORD, int *))(*(_QWORD *)a3 + 64LL))(
         a3,
         *((unsigned int *)a2 + 1),
         &v46);
  v48 = v8;
  if ( v8 < 0 )
  {
    v39 = v8;
  }
  else
  {
    if ( (*((_DWORD *)a2 + 3) & 0x40000) != 0
      && v46
      && v47
      && (*(unsigned int (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v47 + 144LL))(v47) )
    {
      LODWORD(v44) = v46;
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v45, &v47, v11);
      v13 = v45;
    }
    else
    {
      v14 = (_DWORD *)(*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64 *))(*(_QWORD *)a3 + 80LL))(
                        a3,
                        &v49);
      v13 = 0LL;
      v17 = *v14;
      v18 = (CCachedVisualImage **)(v14 + 2);
      LODWORD(v44) = v17;
      if ( &v51 != v18 )
      {
        v13 = *v18;
        *v18 = 0LL;
      }
      v51 = 0LL;
      v45 = v13;
      Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v51, v15, v16);
      Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v50, v19, v20);
    }
    if ( v13 )
    {
      v22 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, CCachedVisualImage *, _QWORD))(*(_QWORD *)a3 + 56LL))(
              a3,
              v13,
              v7);
      if ( !v22
        || (v23 = *(_QWORD *)a3,
            v24 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a3 + 16LL))(a3),
            (*(unsigned int (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(v23 + 56))(
              a3,
              v24,
              v7) > v22) )
      {
        LODWORD(v44) = 0;
        Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v45, v21, v12);
        v13 = v45;
      }
    }
    v25 = *((unsigned int *)a2 + 3);
    if ( (v25 & 0x40000) != 0 )
    {
      if ( v46 )
      {
        if ( v47 != v13 )
        {
          v26 = ConvertToInputType(*(_DWORD *)a2, v25);
          if ( !anonymous_namespace_::AllSupportedWithSingleTarget((__int64)a3, v26) )
          {
            LODWORD(v44) = 1;
            Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v45, v25, v12);
            v13 = v45;
          }
        }
      }
    }
    if ( (*((_DWORD *)a2 + 3) & 0x40000) != 0
      && v46 == 2
      && (_DWORD)v44 == 1
      && !TargetingInfo::IsDrop((TargetingInfo *)&v44) )
    {
      LODWORD(v44) = 1;
      Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v45, v25, v12);
      v13 = v45;
    }
    if ( (*((_DWORD *)a2 + 3) & 0x10000) != 0 && *(_DWORD *)a2 == 5 )
    {
      for ( i = 0; i < *((_DWORD *)a1 + 4); ++i )
      {
        v25 = *((unsigned int *)a1 + 62 * i + 93);
        if ( (_DWORD)v25 != *((_DWORD *)a2 + 1)
          && (*(int (__fastcall **)(const struct IManipulationContext *, __int64, int *))(*(_QWORD *)a3 + 64LL))(
               a3,
               v25,
               &v46) >= 0
          && !TargetingInfo::IsDrop((TargetingInfo *)&v46) )
        {
          break;
        }
      }
    }
    v28 = v47;
    if ( v47 )
    {
      if ( v47 != v13 && !TargetingInfo::IsDrop((TargetingInfo *)&v46) )
      {
        v29 = *(__int64 (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(*(_QWORD *)a3 + 56LL);
        v30 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a3 + 16LL))(a3);
        v31 = v29(a3, v30, v7);
        if ( (unsigned int)v29(a3, (__int64)v28, v7) == v31 )
        {
          if ( (*(unsigned int (__fastcall **)(CCachedVisualImage *, _QWORD, __int64))(*(_QWORD *)v47 + 80LL))(
                 v47,
                 v7,
                 1LL) )
          {
            v32 = v47;
            v49 = 0LL;
            v33 = *(int (__fastcall **)(CCachedVisualImage *, _QWORD, __int64 *))(*(_QWORD *)v47 + 128LL);
            Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v49);
            if ( v33(v32, v7, &v49) >= 0 )
            {
              (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v49 + 40LL))(v49, &v53);
              v34 = v53 == 1 && ((v54 & 1) != 0 || (v54 & 2) != 0);
              if ( ((v55 & 1) == 0 || v34)
                && (*(unsigned int (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v47 + 136LL))(v47) )
              {
                Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v45, &v47, v35);
                LODWORD(v44) = v46;
              }
            }
            Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v49);
          }
        }
      }
    }
    if ( !(_DWORD)v44 && (v46 || (*((_DWORD *)a2 + 3) & 0x40000) != 0) )
    {
      LODWORD(v44) = 1;
      Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v45, v25, v12);
    }
    if ( TargetingInfo::IsDrop((TargetingInfo *)&v44) )
    {
      (*(void (__fastcall **)(const struct IManipulationContext *, __int64 *))(*(_QWORD *)a3 + 96LL))(a3, &v49);
      if ( v50 )
      {
        Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v45, v37, v38);
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v50);
        v39 = 0;
        v45 = v50;
      }
      else
      {
        v39 = v48;
      }
      Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v50, v37, v38);
    }
    else
    {
      v39 = v48;
    }
    v40 = v52;
    *(_DWORD *)v52 = v44;
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=((CCachedVisualImage **)v40 + 1, &v45, v36);
  }
  Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v47, v9, v10);
  Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v45, v41, v42);
  return v39;
}
