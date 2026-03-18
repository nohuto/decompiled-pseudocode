/*
 * XREFs of ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x18008DEE0
 * Callers:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x18008DEE0 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 *     ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z @ 0x18012B5D4 (-ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z.c)
 * Callees:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x18008DEE0 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInteractionContext@CInteractionRoot@@UEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x18008E340 (-GetInteractionContext@CInteractionRoot@@UEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z.c)
 *     RemoveCountFromEndOfArrayAndFree @ 0x180096800 (RemoveCountFromEndOfArrayAndFree.c)
 *     ?InternalRelease@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ @ 0x18012BE94 (-InternalRelease@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     RemoveCountFromEndOfArray_AxisWithType_ @ 0x1801FE8F0 (RemoveCountFromEndOfArray_AxisWithType_.c)
 *     _anonymous_namespace_::DisableBufferingForInteraction @ 0x180226020 (_anonymous_namespace_--DisableBufferingForInteraction.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGestureTargetingManager::ProcessInteractionTree(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8,
        _QWORD *a9,
        _QWORD *a10)
{
  unsigned int v11; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64 *); // rax
  __int64 v18; // r14
  int InteractionContext; // eax
  int v20; // r14d
  __int64 v21; // rcx
  __int64 (__fastcall *v23)(__int64 *, __int64, _QWORD); // rdi
  unsigned int v24; // ebx
  int v25; // edi
  __int64 v26; // rdi
  __int64 (__fastcall *v27)(__int64, __int64, __int64, __int64, __int64, __int64, _DWORD *, __int128 *); // rax
  float v28; // xmm1_4
  _QWORD *v29; // rbx
  __int64 v31; // [rsp+58h] [rbp-69h] BYREF
  __int128 v32; // [rsp+60h] [rbp-61h] BYREF
  unsigned int v33; // [rsp+70h] [rbp-51h] BYREF
  unsigned int v34; // [rsp+74h] [rbp-4Dh] BYREF
  unsigned int v35; // [rsp+78h] [rbp-49h] BYREF
  __int64 v36; // [rsp+80h] [rbp-41h]
  __int64 v37; // [rsp+88h] [rbp-39h]
  __int64 v38; // [rsp+90h] [rbp-31h]
  _QWORD *v39; // [rsp+98h] [rbp-29h]
  _QWORD *v40; // [rsp+A0h] [rbp-21h]
  __int128 v41; // [rsp+A8h] [rbp-19h] BYREF

  v11 = a3;
  v37 = a5;
  v38 = a6;
  *a8 = 3;
  *a9 = 0LL;
  v40 = a10;
  *a10 = 0LL;
  v13 = *a1;
  v39 = a9;
  v36 = a4;
  v14 = (*(__int64 (__fastcall **)(__int64 *))(v13 + 32))(a1);
  v15 = *a1;
  v16 = v14;
  *(_QWORD *)&v41 = v14;
  v31 = 0LL;
  v34 = 0;
  v17 = *(__int64 (__fastcall **)(__int64 *))(v15 + 112);
  v35 = 0;
  v33 = 0;
  v18 = v17(a1);
  *(_QWORD *)&v32 = *(_QWORD *)(*(_QWORD *)v18 + 128LL);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v31);
  if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v32 == CInteractionRoot::GetInteractionContext )
    InteractionContext = CInteractionRoot::GetInteractionContext(v18, v11, &v31);
  else
    InteractionContext = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 *))v32)(v18, v11, &v31);
  v20 = InteractionContext;
  if ( InteractionContext >= 0 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int *, __int64, unsigned int *, __int64, unsigned int *))(*(_QWORD *)a2 + 24LL))(
            a2,
            v31,
            v36,
            &v34,
            v37,
            &v35,
            v38,
            &v33);
    if ( v20 >= 0 )
    {
      if ( v16 )
      {
        v23 = *(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 56);
        v24 = v23(a1, a2, v11);
        if ( v24 > (unsigned int)v23(a1, v41, a3)
          || (v25 = v41, (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 40))(a1, v41)) )
        {
          v11 = a3;
        }
        else
        {
          v11 = a3;
          if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2) )
          {
            v20 = CGestureTargetingManager::ProcessInteractionTree(
                    (_DWORD)a1,
                    v25,
                    a3,
                    v36,
                    v37,
                    v38,
                    a7,
                    (__int64)a8,
                    (__int64)v39,
                    (__int64)v40);
            if ( v20 < 0 )
              goto LABEL_5;
          }
        }
      }
      v26 = v38;
      RemoveCountFromEndOfArrayAndFree(v33, v38);
      if ( *a8 == 3 )
      {
        v27 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, _DWORD *, __int128 *))(*(_QWORD *)a2 + 32LL);
        v41 = 0LL;
        v20 = v27(a2, a7, v36, v37, v26, v31, a8, &v41);
        WORD1(v32) = 0;
        if ( *(_BYTE *)a7 || (LOBYTE(v32) = 0, (_BYTE)v41) )
          LOBYTE(v32) = 1;
        if ( *(_BYTE *)(a7 + 1) || (BYTE1(v32) = 0, BYTE1(v41)) )
          BYTE1(v32) = 1;
        v28 = *((float *)&v41 + 2) + *(float *)(a7 + 8);
        *((float *)&v32 + 1) = *((float *)&v41 + 1) + *(float *)(a7 + 4);
        *((float *)&v32 + 2) = v28;
        *((float *)&v32 + 3) = *((float *)&v41 + 3) + *(float *)(a7 + 12);
        *(_OWORD *)a7 = v32;
        if ( v20 >= 0 && *a8 == 2
          || *a8 == 1 && (unsigned __int8)anonymous_namespace_::DisableBufferingForInteraction(a1, a2, v11) )
        {
          *a8 = 2;
          *(_QWORD *)&v32 = a2;
          if ( a2 )
          {
            (**(void (__fastcall ***)(__int64))a2)(a2);
            (**(void (__fastcall ***)(__int64))a2)(a2);
          }
          v20 = 0;
          *v39 = a2;
          Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v32);
        }
        else if ( v20 < 0 )
        {
          goto LABEL_5;
        }
        if ( *a8 == 4 )
        {
          v29 = v40;
          *a8 = 3;
          if ( !*v29 )
          {
            *(_QWORD *)&v32 = a2;
            if ( a2 )
            {
              (**(void (__fastcall ***)(__int64))a2)(a2);
              (**(void (__fastcall ***)(__int64))a2)(a2);
            }
            *v29 = a2;
            v20 = 0;
            Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v32);
          }
        }
      }
      RemoveCountFromEndOfArray_AxisWithType_(v34, v36 + 8);
      RemoveCountFromEndOfArray_AxisWithType_(v35, v37 + 8);
    }
  }
LABEL_5:
  v21 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  }
  return (unsigned int)v20;
}
