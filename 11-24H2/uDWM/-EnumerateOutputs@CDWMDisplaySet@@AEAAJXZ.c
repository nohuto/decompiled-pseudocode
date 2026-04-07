/*
 * XREFs of ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x180056D54
 * Callers:
 *     ?Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z @ 0x180056CBC (-Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetOutputInfo@CDWMDXGIAdapter@@QEBAAEAUDXGIOutputInfo@@I@Z @ 0x180056F74 (-GetOutputInfo@CDWMDXGIAdapter@@QEBAAEAUDXGIOutputInfo@@I@Z.c)
 *     ?IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ @ 0x180056F8C (-IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x180057B8C (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ?ApplyUniformSpaceMapping@CDWMDisplaySet@@AEAAXPEAUDXGIOutputInfo@@@Z @ 0x180057C10 (-ApplyUniformSpaceMapping@CDWMDisplaySet@@AEAAXPEAUDXGIOutputInfo@@@Z.c)
 *     ?Validate@DXGIOutputInfo@@QEBAJXZ @ 0x180057C74 (-Validate@DXGIOutputInfo@@QEBAJXZ.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180057D38 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ??0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x180057DA8 (--0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x18005825C (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDWMDisplaySet::EnumerateOutputs(CDWMDisplaySet *this)
{
  unsigned int v2; // ebx
  bool v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rax
  CDWMDXGIAdapter *v6; // r14
  unsigned int i; // ebp
  char *OutputInfo; // rdi
  int updated; // eax
  CDWMDisplaySet *v10; // rcx
  CDWMDisplay *v11; // rax
  CDWMDisplay *v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // r8d
  int v15; // edi
  unsigned int v16; // eax
  unsigned int v18; // [rsp+20h] [rbp-38h]
  CDWMDisplay *v19; // [rsp+60h] [rbp+8h] BYREF
  CDWMDisplay *v20; // [rsp+68h] [rbp+10h]

  v2 = 0;
  v19 = 0LL;
  v3 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 1) + 48LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 1) + 48LL)) != 0;
  v4 = 0LL;
LABEL_2:
  v5 = *((_QWORD *)this + 1);
  if ( (unsigned int)v4 >= *(_DWORD *)(v5 + 80) )
    goto LABEL_20;
  v6 = *(CDWMDXGIAdapter **)(*(_QWORD *)(v5 + 56) + 8 * v4);
  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)v6 + 94) )
    {
      v4 = (unsigned int)(v4 + 1);
      goto LABEL_2;
    }
    OutputInfo = (char *)CDWMDXGIAdapter::GetOutputInfo(v6, i);
    updated = DXGIOutputInfo::UpdateDesc((DXGIOutputInfo *)OutputInfo);
    v2 = updated;
    if ( updated < 0 )
    {
      v18 = 240;
      goto LABEL_19;
    }
    if ( !DXGIOutputInfo::IsAttachedToDesktop((DXGIOutputInfo *)OutputInfo) )
      continue;
    CDWMDisplaySet::ApplyUniformSpaceMapping(v10, (struct DXGIOutputInfo *)OutputInfo);
    if ( OutputInfo[220] < 0 )
      continue;
    CAnalogCompositorManager::GetInstance();
    updated = DXGIOutputInfo::Validate((DXGIOutputInfo *)OutputInfo);
    v2 = updated;
    if ( updated < 0 )
    {
      v18 = 265;
LABEL_19:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, v18, 0LL);
      goto LABEL_20;
    }
    v11 = (CDWMDisplay *)DefaultHeap::AllocClear(0x128uLL);
    v20 = v11;
    v12 = v11 ? CDWMDisplay::CDWMDisplay(v11, v3, v6, (const struct DXGIOutputInfo *)OutputInfo) : 0LL;
    v19 = v12;
    if ( !v12 )
      break;
    v13 = *((_DWORD *)this + 16);
    v14 = v13 + 1;
    if ( v13 + 1 < v13 )
    {
      v2 = -2147024362;
      v15 = -2147024362;
      v16 = 179;
      goto LABEL_16;
    }
    v15 = 0;
    if ( v14 <= *((_DWORD *)this + 15) )
    {
      *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * *((unsigned int *)this + 16)) = v12;
      *((_DWORD *)this + 16) = v14;
    }
    else
    {
      v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 8, 1, &v19);
      v2 = v15;
      if ( v15 < 0 )
      {
        v16 = 190;
LABEL_16:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, v16, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x113u, 0LL);
        goto LABEL_20;
      }
    }
    v2 = v15;
    v19 = 0LL;
  }
  v2 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x111u, 0LL);
LABEL_20:
  if ( v19 )
    CDWMDisplay::Release(v19);
  return v2;
}
