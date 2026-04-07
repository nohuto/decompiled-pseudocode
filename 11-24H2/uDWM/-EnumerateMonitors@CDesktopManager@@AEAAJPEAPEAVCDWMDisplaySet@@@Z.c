/*
 * XREFs of ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180056928
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18008D05C (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180025870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x180056B3C (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x180056B78 (-Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 *     ??0CDWMDisplaySet@@QEAA@XZ @ 0x180056C80 (--0CDWMDisplaySet@@QEAA@XZ.c)
 *     ?Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z @ 0x180056CBC (-Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z.c)
 *     ?DisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@I@Z @ 0x1800585B0 (-DisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@I@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180096744 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopManager::EnumerateMonitors(CDesktopManager *this, struct CDWMDisplaySet **a2)
{
  int v2; // ebx
  volatile signed __int32 *v4; // rax
  const struct CDWMDXGIEnumeration **v5; // rsi
  CDWMDisplaySet *v6; // rcx
  const struct std::nothrow_t *v7; // rdx
  CDWMDisplaySet *v8; // rax
  CDWMDisplaySet *v9; // rax
  __int64 v10; // rcx
  unsigned int i; // r14d
  CDWMDisplaySet *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned int v17; // edx
  int v18; // ebp
  unsigned int v19; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF
  CDWMDisplaySet *v22; // [rsp+58h] [rbp+10h]

  v2 = 0;
  *a2 = (struct CDWMDisplaySet *)*((_QWORD *)this + 18);
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 18);
  if ( v4 )
    _InterlockedIncrement(v4);
  v5 = (const struct CDWMDXGIEnumeration **)((char *)this + 136);
  while ( 1 )
  {
    if ( *v5 )
    {
      (*(void (__fastcall **)(const struct CDWMDXGIEnumeration *))(*(_QWORD *)*v5 + 8LL))(*v5);
      *v5 = 0LL;
    }
    v6 = (CDWMDisplaySet *)*((_QWORD *)this + 18);
    if ( v6 )
    {
      CDWMDisplaySet::Release(v6);
      *((_QWORD *)this + 18) = 0LL;
    }
    if ( (int)CDWMDXGIEnumeration::Create(v5) >= 0 )
    {
      v8 = (CDWMDisplaySet *)operator new[](0x70uLL, v7);
      v22 = v8;
      if ( !v8 )
      {
        *((_QWORD *)this + 18) = 0LL;
LABEL_19:
        v2 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x453u, 0LL);
        goto LABEL_20;
      }
      v9 = CDWMDisplaySet::CDWMDisplaySet(v8);
      *((_QWORD *)this + 18) = v9;
      if ( !v9 )
        goto LABEL_19;
      v2 = CDWMDisplaySet::Init(v9, *v5);
    }
    if ( *v5 )
    {
      v10 = *((_QWORD *)*v5 + 2);
      if ( v10 )
      {
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 104LL))(v10) )
          break;
      }
    }
  }
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x465u, 0LL);
    goto LABEL_20;
  }
  *((_DWORD *)this + 32) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 104, 8u);
  for ( i = 0; ; ++i )
  {
    v13 = (CDWMDisplaySet *)*((_QWORD *)this + 18);
    if ( i >= *((_DWORD *)v13 + 16) )
      break;
    v14 = *((_QWORD *)CDWMDisplaySet::DisplayNoRef(v13, i) + 11);
    v15 = *((unsigned int *)this + 32);
    v16 = *(_QWORD *)(v14 + 16);
    v17 = v15 + 1;
    v21 = v16;
    if ( (int)v15 + 1 < (unsigned int)v15 )
    {
      v2 = -2147024362;
      v19 = 179;
      v18 = -2147024362;
LABEL_28:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, v19, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x46Bu, 0LL);
LABEL_20:
      ModuleFailFastForHRESULT((unsigned int)v2, retaddr);
    }
    v18 = 0;
    if ( v17 <= *((_DWORD *)this + 31) )
    {
      *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v15) = v16;
      *((_DWORD *)this + 32) = v17;
    }
    else
    {
      v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 104, 8, 1, &v21);
      v2 = v18;
      if ( v18 < 0 )
      {
        v19 = 190;
        goto LABEL_28;
      }
    }
    v2 = v18;
  }
  return (unsigned int)v2;
}
