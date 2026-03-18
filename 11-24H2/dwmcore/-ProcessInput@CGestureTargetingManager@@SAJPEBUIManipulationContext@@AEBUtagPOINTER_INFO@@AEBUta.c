/*
 * XREFs of ?ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@@Z @ 0x180257D98
 * Callers:
 *     ?CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180190EF4 (-CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ @ 0x18012BE94 (-InternalRelease@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x18018ED9C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x1801D82E0 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     _anonymous_namespace_::BypassGestureTargeting @ 0x1801FFE1C (_anonymous_namespace_--BypassGestureTargeting.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGestureTargetingManager::ProcessInput(
        const struct IManipulationContext *a1,
        const struct tagPOINTER_INFO *a2,
        const struct tagPOINTER_INFO_UNION *a3)
{
  unsigned int v6; // eax
  char v7; // al
  __int64 v8; // r9
  __int64 v9; // rax
  int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 (__fastcall *v16)(const struct IManipulationContext *, __int64, _QWORD); // r9
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 *v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rdi
  unsigned int v22; // eax
  __int64 (__fastcall *v23)(const struct IManipulationContext *, __int64 (__fastcall ***)(_QWORD), _QWORD); // r9
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  _BYTE v27[120]; // [rsp+40h] [rbp-78h] BYREF
  char v28; // [rsp+C8h] [rbp+10h] BYREF
  __int64 *v29; // [rsp+D8h] [rbp+20h] BYREF

  v6 = ConvertToInputType(*(_DWORD *)a2, *((_DWORD *)a2 + 3));
  v7 = anonymous_namespace_::BypassGestureTargeting((__int64 *)a1, v6);
  v8 = *(_QWORD *)a1;
  if ( v7 )
  {
    v9 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(v8 + 16))(a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 160LL))(v9);
    return 0LL;
  }
  else
  {
    v11 = 0;
    v12 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, _QWORD))(v8 + 24))(
            a1,
            *((unsigned int *)a2 + 1));
    if ( v12 )
    {
      while ( v11 >= 0 )
      {
        v28 = 0;
        v13 = *(_QWORD *)v12;
        v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 176LL))(v12, v27);
        v15 = ConvertToInputType(*(_DWORD *)a2, *((_DWORD *)a2 + 3));
        v17 = v16(a1, v12, v15);
        v11 = (*(__int64 (__fastcall **)(__int64, const struct tagPOINTER_INFO *, const struct tagPOINTER_INFO_UNION *, _QWORD, __int64, char *))(v13 + 16))(
                v12,
                a2,
                a3,
                v17,
                v14,
                &v28);
        if ( v11 >= 0 )
        {
          if ( v28 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 208LL))(v12);
        }
        v12 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64))(*(_QWORD *)a1 + 48LL))(a1, v12);
        if ( !v12 )
        {
          if ( v11 < 0 )
            return (unsigned int)v11;
          goto LABEL_10;
        }
      }
    }
    else
    {
LABEL_10:
      v18 = *(_QWORD *)a1;
      v28 = 0;
      v29 = (__int64 *)(*(__int64 (__fastcall **)(const struct IManipulationContext *))(v18 + 112))(a1);
      v19 = v29;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v29);
      v20 = *v19;
      v21 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*v19 + 176))(v19, v27);
      v22 = ConvertToInputType(*(_DWORD *)a2, *((_DWORD *)a2 + 3));
      v24 = v23(a1, (__int64 (__fastcall ***)(_QWORD))v19, v22);
      v11 = (*(__int64 (__fastcall **)(__int64 *, const struct tagPOINTER_INFO *, const struct tagPOINTER_INFO_UNION *, _QWORD, __int64, char *))(v20 + 16))(
              v19,
              a2,
              a3,
              v24,
              v21,
              &v28);
      Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease((CCachedVisualImage **)&v29, v25, v26);
    }
    return (unsigned int)v11;
  }
}
