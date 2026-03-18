/*
 * XREFs of ?UnbindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1401B824C
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1401B6C90 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x140015E68 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x140037548 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14003DDC0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::UnbindCompositionSurfaceCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE *a2,
        struct _DXGCOMPOSITIONMESSAGE_UNBINDCOMPOSITIONSURFACE_RETURN *a3)
{
  int v6; // ebx
  DxgkCompositionObject *v7; // rdi
  BOOL v8; // esi
  struct DXGPROCESS *Current; // rax
  struct DXGFASTMUTEX *v10; // rax
  __int64 v11; // rcx
  unsigned int *v12; // r14
  DxgkCompositionObject *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // rdx
  int v22; // eax
  _BYTE v24[16]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v25[16]; // [rsp+60h] [rbp-28h] BYREF

  v6 = -1073741811;
  v7 = 0LL;
  v8 = 0;
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v25);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( (*((_DWORD *)Current + 102) & 0x800) == 0 )
      v8 = (*(__int64 (**)(void))(*((_QWORD *)Current + 11) + 232LL))() != 0;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 520;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v25);
  if ( !v8 )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 553;
    v12 = (unsigned int *)((char *)a2 + 12);
LABEL_15:
    WdLogSingleEntry3(3LL, *v12, *((int *)a2 + 4), v6);
    WdLogGlobalForLineNumber = 579;
    goto LABEL_16;
  }
  v10 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, v10, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  v11 = *((_QWORD *)this + 1);
  v12 = (unsigned int *)((char *)a2 + 12);
  v13 = (DxgkCompositionObject *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v11 + 72LL))(
                                   v11,
                                   *((unsigned int *)a2 + 3),
                                   17LL);
  if ( v13 )
  {
    v7 = v13;
    DxgkCompositionObject::AddRef(v13);
  }
  else
  {
    WdLogSingleEntry2(3LL, *v12, -1073741811LL);
    WdLogGlobalForLineNumber = 548;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
  if ( !v7 )
    goto LABEL_15;
  v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
  v18[3] = *v12;
  v18[4] = v7;
  v18[5] = *((int *)a2 + 4);
  v19 = *((_QWORD *)v7 + 4);
  v20 = *((_DWORD *)a2 + 4) == 0;
  WdLogGlobalForLineNumber = 561;
  LOBYTE(v21) = !v20;
  v22 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(v19 + 32))((_QWORD *)v7 + 4, v21);
  v6 = v22;
  if ( v22 < 0 )
  {
    WdLogSingleEntry4(3LL, *v12, v7, *((int *)a2 + 4), v22);
    WdLogGlobalForLineNumber = 569;
  }
  DxgkCompositionObject::Release(v7);
  if ( v6 < 0 )
    goto LABEL_15;
LABEL_16:
  *((_DWORD *)a3 + 1) = v6;
  return (unsigned int)v6;
}
