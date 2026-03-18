/*
 * XREFs of ?BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1401B2900
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1401B46E0 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1400379DC (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14003E990 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004FCB0 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x14005008C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1401ECF7C (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1403D7C7C (-IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::BindCompositionSurfaceCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE *a2,
        struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN *a3)
{
  struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN *v3; // r13
  __int64 RemoteBundleObject; // rsi
  DxgkCompositionObject *v7; // r15
  int v8; // ecx
  struct DXGPROCESS *Current; // rax
  struct DXGFASTMUTEX *v10; // rax
  DxgkCompositionObject *v11; // rax
  struct _KPROCESS *v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // r12
  __int64 v17; // rcx
  HANDLE v18; // rcx
  NTSTATUS v19; // esi
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // r13
  __int64 v23; // rcx
  __int64 v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // rax
  bool v27; // zf
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // rbx
  HANDLE v31; // rcx
  __int64 Object; // [rsp+20h] [rbp-E0h]
  __int64 v34; // [rsp+30h] [rbp-D0h]
  __int64 v35; // [rsp+38h] [rbp-C8h]
  PVOID v37; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v38[16]; // [rsp+60h] [rbp-A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-90h] BYREF
  char v40; // [rsp+A0h] [rbp-60h]
  HANDLE Handle[32]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = a3;
  LODWORD(RemoteBundleObject) = -1073741811;
  v7 = 0LL;
  memset(Handle, 0, sizeof(Handle));
  v8 = 31;
  if ( *((_DWORD *)a2 + 47) < 0x1Fu )
    v8 = *((_DWORD *)a2 + 47);
  *((_DWORD *)a2 + 47) = v8;
  Current = DXGPROCESS::GetCurrent();
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 232LL))() )
  {
    v10 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v38, v10, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
    v11 = (DxgkCompositionObject *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 72LL))(
                                     *((_QWORD *)this + 1),
                                     *((unsigned int *)a2 + 3),
                                     17LL);
    if ( v11 )
    {
      v7 = v11;
      DxgkCompositionObject::AddRef(v11);
    }
    else
    {
      WdLogSingleEntry2(3LL, *((unsigned int *)a2 + 3), -1073741811LL);
      WdLogGlobalForLineNumber = 378;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v38);
  }
  else
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 383;
  }
  if ( !v7 )
    goto LABEL_34;
  v12 = (struct _KPROCESS *)*((_QWORD *)this + 5);
  v40 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v12);
  RemoteBundleObject = (int)DxgkExtractRemoteBundleObject(
                              *((_DWORD *)a2 + 334),
                              *((_DWORD *)a2 + 47) + 1,
                              Handle,
                              *((struct _EPROCESS **)this + 3));
  CPROCESSATTACHHELPER::Detach(&ApcState);
  if ( (int)RemoteBundleObject < 0 )
  {
    WdLogSingleEntry1(3LL, RemoteBundleObject);
    WdLogGlobalForLineNumber = 485;
  }
  else
  {
    v13 = 0LL;
    v16 = DXGVAILOBJECT::IsIFlipFeatureEnabled() != 0;
    while ( 1 )
    {
      v17 = *((unsigned int *)a2 + 47);
      if ( (unsigned int)v13 >= (unsigned int)v17 )
        break;
      v18 = Handle[v13];
      *((_QWORD *)a2 + 4 * (unsigned int)v13 + 24) = v18;
      if ( v16 )
      {
        v37 = 0LL;
        v19 = ObReferenceObjectByHandle(v18, 0xF0000u, g_pDxgkSharedAllocationObjectType, 1, &v37, 0LL);
        if ( v19 < 0 || (v20 = *((_QWORD *)v37 + 2)) == 0 || *(_DWORD *)(v20 + 132) != 1 )
        {
          if ( v37 )
            ObfDereferenceObject(v37);
          LODWORD(RemoteBundleObject) = -1073741811;
          goto LABEL_27;
        }
        v16 &= (*(_DWORD *)(*(_QWORD *)(v20 + 136) - 44LL) & 0x2000) != 0;
        ObfDereferenceObject(v37);
      }
      v13 = (unsigned int)(v13 + 1);
    }
    v21 = *((_DWORD *)a2 + 44);
    v22 = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 150) = Handle[v17];
    v23 = v21 ^ ((unsigned __int8)v21 ^ (unsigned __int8)(16 * v16)) & 0x10u;
    v24 = (unsigned int)v23 ^ ((unsigned __int8)(v21 ^ (v21 ^ (16 * v16)) & 0x10) ^ (unsigned __int8)(v16 << 6)) & 0x40;
    *((_DWORD *)a2 + 44) = v24;
    v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v24, v14, v15);
    v25[3] = *((unsigned int *)a2 + 3);
    v25[4] = v7;
    v25[5] = *((int *)a2 + 4);
    v25[6] = *((_QWORD *)a2 + 4);
    v26 = *((_QWORD *)v7 + 4);
    v27 = *((_DWORD *)a2 + 4) == 0;
    WdLogGlobalForLineNumber = 450;
    LOBYTE(v28) = !v27;
    v29 = (*(__int64 (__fastcall **)(_QWORD *, char *, __int64, char *))(v26 + 24))(
            (_QWORD *)v7 + 4,
            (char *)a2 + 24,
            v28,
            (char *)a3 + 16);
    RemoteBundleObject = v29;
    if ( v29 >= 0 )
    {
      if ( v22 != *((_QWORD *)a3 + 2) )
      {
        WdLogSingleEntry4(3LL, *((unsigned int *)a2 + 3), v7, *((_QWORD *)a2 + 4), *((_QWORD *)a3 + 2));
        WdLogGlobalForLineNumber = 471;
      }
      v3 = a3;
    }
    else
    {
      WdLogSingleEntry5(2LL, *((unsigned int *)a2 + 3), v7, *((int *)a2 + 4), *((_QWORD *)a2 + 4), v29);
      v35 = *((_QWORD *)a2 + 4);
      v34 = *((int *)a2 + 4);
      Object = *((unsigned int *)a2 + 3);
      WdLogGlobalForLineNumber = 462;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"PairedBind(0x%I64x = 0x%I64x, 0x%I64x, 0x%I64x) failed. Returning 0x%I64x",
        Object,
        (__int64)v7,
        v34,
        v35,
        RemoteBundleObject);
      v3 = a3;
    }
LABEL_27:
    v30 = 0LL;
    if ( *((_DWORD *)a2 + 47) != -1 )
    {
      do
      {
        v31 = Handle[v30];
        if ( v31 )
          ObCloseHandle(v31, 1);
        v30 = (unsigned int)(v30 + 1);
      }
      while ( (unsigned int)v30 < *((_DWORD *)a2 + 47) + 1 );
    }
  }
  DxgkCompositionObject::Release(v7);
  if ( (int)RemoteBundleObject < 0 )
  {
LABEL_34:
    WdLogSingleEntry2(3LL, *((unsigned int *)a2 + 3), (int)RemoteBundleObject);
    WdLogGlobalForLineNumber = 494;
  }
  *((_DWORD *)v3 + 1) = RemoteBundleObject;
  return (unsigned int)RemoteBundleObject;
}
