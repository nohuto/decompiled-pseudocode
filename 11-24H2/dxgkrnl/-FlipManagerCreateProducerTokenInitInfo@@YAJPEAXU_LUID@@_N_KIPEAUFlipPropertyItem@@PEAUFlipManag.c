/*
 * XREFs of ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x14009E4EC
 * Callers:
 *     NtTokenManagerCreateFlipObjectTokenHandle @ 0x140099730 (NtTokenManagerCreateFlipObjectTokenHandle.c)
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x140019DE8 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14001A1D4 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14001A590 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresen.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14001A9A4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ??$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipPropertySet@@@Z @ 0x140040790 (--$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipProp.c)
 *     ??_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z @ 0x1400502B8 (--_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FlipManagerCreateProducerTokenInitInfo(
        void *a1,
        struct _LUID a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct FlipPropertyItem *a6,
        struct FlipManagerTokenInitInfo *a7)
{
  _QWORD *v7; // rsi
  struct CFlipPresentUpdate *v10; // r15
  FlipManagerTokenIFlipInfo *v11; // r12
  int v12; // eax
  __int64 i; // r8
  CFlipPropertySetBase *v14; // r13
  int v15; // edi
  _QWORD *v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdi
  __int64 Win32kImportTable; // rax
  bool v24; // [rsp+40h] [rbp-40h]
  __int64 v25; // [rsp+48h] [rbp-38h]
  _QWORD *v26; // [rsp+50h] [rbp-30h]
  PVOID Object; // [rsp+58h] [rbp-28h] BYREF
  CFlipPropertySetBase *v28; // [rsp+60h] [rbp-20h] BYREF
  struct CFlipPresentUpdate *v29; // [rsp+68h] [rbp-18h] BYREF
  struct FlipManagerTokenIFlipInfo *v30; // [rsp+70h] [rbp-10h] BYREF
  char v32; // [rsp+D0h] [rbp+50h]

  v32 = a3;
  v7 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  Object = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v24 = 0;
  v12 = CreateFlipPropertySetWorker<CFlipPropertySet>(a5, a6, a3, &v28);
  v14 = v28;
  v15 = v12;
  if ( v12 >= 0 )
  {
    if ( v28 )
    {
      v26 = 0LL;
      v16 = (_QWORD *)*((_QWORD *)v28 + 3);
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)v28 + 3); i = (unsigned int)(i + 1) )
      {
        v17 = *((_QWORD *)v28 + 2);
        v18 = 32LL * (unsigned int)i;
        v19 = *(_QWORD *)(v18 + v17) - *(_QWORD *)&GUID_7d0dcf87_222e_4d05_b402_3bfa5181ec53.Data1;
        if ( !v19 )
          v19 = *(_QWORD *)(v18 + v17 + 8) - *(_QWORD *)GUID_7d0dcf87_222e_4d05_b402_3bfa5181ec53.Data4;
        if ( !v19 && *(_DWORD *)(v18 + v17 + 16) == 8 )
        {
          v26 = v16;
          if ( v16 && *v16 )
          {
            if ( a4 )
            {
              v15 = -1073741811;
              goto LABEL_31;
            }
            v25 = *v16;
          }
          break;
        }
        v16 = (_QWORD *)((char *)v16 + *(unsigned int *)(v18 + v17 + 16));
      }
    }
    v20 = FlipManagerObject::ResolveHandle(a1, 2u, i, (struct FlipManagerObject **)&Object);
    v7 = Object;
    v15 = v20;
    if ( v20 >= 0 )
    {
      if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)((char *)Object + 40)) >= 0 )
      {
        v21 = v7[10];
        CPushLock::ReleaseLock((CPushLock *)(v7 + 5));
        v24 = v21 == 1;
      }
      v15 = CPushLock::AcquireLockExclusive((CPushLock *)(v7 + 5));
      if ( v15 >= 0 )
      {
        v15 = CFlipManager::CreatePresentUpdateForProducer((CFlipManager *)(v7 + 4), v32, a4, v25 != 0, v14, &v29, &v30);
        CPushLock::ReleaseLock((CPushLock *)(v7 + 5));
        v10 = v29;
        v11 = v30;
      }
      if ( v15 >= 0 )
      {
        *((_QWORD *)a7 + 3) = *((_QWORD *)v10 + 8);
        v15 = ObReferenceObjectByPointer(v7, 3u, g_pDxgkCompositionObjectType, 0);
        if ( v15 >= 0 )
        {
          if ( v25 )
          {
            Win32kImportTable = DxgkGetWin32kImportTable();
            (*(void (__fastcall **)(__int64, struct _LUID))(Win32kImportTable + 56))(v25, a2);
          }
          *((_BYTE *)a7 + 16) = v24;
          *((_QWORD *)a7 + 4) = a4;
          *((_QWORD *)a7 + 1) = v7;
          *((_QWORD *)v10 + 1) = v7;
          v7 = 0LL;
          *(_QWORD *)a7 = v10;
          v10 = 0LL;
          if ( v26 )
            *((_QWORD *)a7 + 6) = *v26;
          *((_QWORD *)a7 + 5) = v11;
          v11 = 0LL;
        }
      }
      if ( v11 )
        FlipManagerTokenIFlipInfo::`scalar deleting destructor'(v11);
      if ( v10 )
        (*(void (__fastcall **)(struct CFlipPresentUpdate *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
LABEL_31:
  if ( v14 )
    CFlipPropertySetBase::Release(v14);
  if ( v7 )
    ObfDereferenceObject(v7);
  return (unsigned int)v15;
}
