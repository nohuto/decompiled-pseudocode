/*
 * XREFs of ?GetSimpleTempAppVisualArray@CDropFeedback@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x18053F3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180546B64 (-CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CSimpleTempAppVisual_CreateAndAddToArray@@YAJPEAUITemporaryAppVisual@@PEAUITemporaryAppVisualArray@@@Z @ 0x180549908 (-CSimpleTempAppVisual_CreateAndAddToArray@@YAJPEAUITemporaryAppVisual@@PEAUITemporaryAppVisualAr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropFeedback::GetSimpleTempAppVisualArray(
        CDropFeedback *this,
        struct ITemporaryAppVisualArray **a2)
{
  const struct _GUID *v4; // rcx
  int Instance; // r14d
  __int64 v6; // rcx
  unsigned int v7; // r15d
  struct ITemporaryAppVisualArray *v8; // rdi
  __int64 v9; // rsi
  int (__fastcall *v10)(__int64, _QWORD, GUID *, int (__fastcall ****)(_QWORD, GUID *, struct ITemporaryAppVisual **)); // rbx
  int (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rbx
  int (__fastcall *v12)(_QWORD, GUID *, struct ITemporaryAppVisual **); // rsi
  struct ITemporaryAppVisual *v14[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+48h] BYREF
  int (__fastcall ***v16)(_QWORD, GUID *, struct ITemporaryAppVisual **); // [rsp+90h] [rbp+50h] BYREF
  struct ITemporaryAppVisualArray *v17; // [rsp+98h] [rbp+58h] BYREF

  *a2 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v17);
  Instance = CTempAppVisualArray::CreateInstance(v4, (void **)&v17);
  if ( Instance >= 0 )
  {
    v6 = *((_QWORD *)this + 10);
    v15 = 0;
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v6 + 24LL))(v6, &v15);
    v7 = 0;
    v8 = v17;
    if ( v15 )
    {
      while ( Instance >= 0 )
      {
        v16 = 0LL;
        v9 = *((_QWORD *)this + 10);
        v10 = *(int (__fastcall **)(__int64, _QWORD, GUID *, int (__fastcall ****)(_QWORD, GUID *, struct ITemporaryAppVisual **)))(*(_QWORD *)v9 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v16);
        if ( v10(v9, v7, &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810, &v16) >= 0
          && ((unsigned int (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, struct ITemporaryAppVisual **)))(*v16)[12])(v16) != 1
          && ((unsigned int (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, struct ITemporaryAppVisual **)))(*v16)[12])(v16) != 2 )
        {
          v11 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v16;
          v14[0] = 0LL;
          v12 = **v16;
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)v14);
          if ( v12(v11, &GUID_114ed843_c914_443d_9588_6ffb643e73d0, v14) >= 0 )
            Instance = CSimpleTempAppVisual_CreateAndAddToArray(v14[0], v8);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)v14);
        }
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v16);
        if ( ++v7 >= v15 )
        {
          if ( Instance < 0 )
            break;
          goto LABEL_12;
        }
      }
    }
    else
    {
LABEL_12:
      Instance = CSimpleTempAppVisual_CreateAndAddToArray(
                   (struct ITemporaryAppVisual *)(((unsigned __int64)this - 16) & -(__int64)(this != (CDropFeedback *)48)),
                   v8);
      if ( Instance >= 0 )
      {
        v15 = 0;
        (*(void (__fastcall **)(struct ITemporaryAppVisualArray *, unsigned int *))(*(_QWORD *)v8 + 24LL))(v8, &v15);
        if ( v15 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v17);
          *a2 = v8;
          Instance = 0;
        }
        else
        {
          Instance = -2147023728;
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v17);
  return (unsigned int)Instance;
}
