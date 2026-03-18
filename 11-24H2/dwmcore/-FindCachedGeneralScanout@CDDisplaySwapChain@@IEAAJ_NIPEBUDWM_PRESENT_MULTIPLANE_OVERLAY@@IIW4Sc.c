/*
 * XREFs of ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIW4ScanoutScaleMode@1@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180066644
 * Callers:
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800668C0 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?Matches@CDDisplayCachedScanout@@QEAA_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1800677D0 (-Matches@CDDisplayCachedScanout@@QEAA_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplaySca.c)
 *     ?CreateScanout@CDDisplaySwapChain@@IEAAJIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180067A4C (-CreateScanout@CDDisplaySwapChain@@IEAAJIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplaySc.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18006836C (--$_Freenode@V-$allocator@U-$_List_node@V-$unique_ptr@VCDDisplayAgedCachedScanout@@U-$default_de.c)
 *     ??1CDDisplayCachedScanout@@QEAA@XZ @ 0x1800683C8 (--1CDDisplayCachedScanout@@QEAA@XZ.c)
 *     ?erase@?$list@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@V?$allocator@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800685C4 (-erase@-$list@V-$unique_ptr@VCDDisplayAgedCachedScanout@@U-$default_delete@VCDDisplayAgedCachedS.c)
 *     ??$emplace_front@PEAVCDDisplayAgedCachedScanout@@@?$list@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@V?$allocator@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@2@@std@@QEAA?A_T$$QEAPEAVCDDisplayAgedCachedScanout@@@Z @ 0x18006860C (--$emplace_front@PEAVCDDisplayAgedCachedScanout@@@-$list@V-$unique_ptr@VCDDisplayAgedCachedScano.c)
 *     ?Set@CDDisplayCachedScanout@@QEAAXIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180068B68 (-Set@CDDisplayCachedScanout@@QEAAXIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAUIDisplayScanout@Cor.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::FindCachedGeneralScanout(
        __int64 **a1,
        char a2,
        unsigned int a3,
        struct DWM_PRESENT_MULTIPLANE_OVERLAY *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        struct Windows::Devices::Display::Core::IDisplayScanout **a8)
{
  __int64 **v8; // r12
  __int64 **v9; // rbx
  struct Windows::Devices::Display::Core::IDisplayScanout *v11; // rsi
  __int64 *i; // rbx
  CDDisplayCachedScanout *v14; // r13
  __int64 *v15; // rdi
  __int64 v17; // r15
  CDDisplayCachedScanout *v18; // rax
  unsigned int v19; // r9d
  CDDisplayCachedScanout *v20; // rbx
  struct DWM_PRESENT_MULTIPLANE_OVERLAY *v21; // rdi
  unsigned int v22; // r13d
  int v23; // eax
  unsigned int v24; // r9d
  struct Windows::Devices::Display::Core::IDisplayScanout *v25; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 *v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // [rsp+20h] [rbp-28h]
  unsigned int v32; // [rsp+20h] [rbp-28h]
  __int64 v33; // [rsp+30h] [rbp-18h] BYREF
  _BYTE v34[16]; // [rsp+38h] [rbp-10h] BYREF
  struct Windows::Devices::Display::Core::IDisplayScanout *v35; // [rsp+90h] [rbp+48h] BYREF
  unsigned int v36; // [rsp+98h] [rbp+50h]
  unsigned int v37; // [rsp+A0h] [rbp+58h]
  struct DWM_PRESENT_MULTIPLANE_OVERLAY *v38; // [rsp+A8h] [rbp+60h]

  v38 = a4;
  v37 = a3;
  LOBYTE(v36) = a2;
  v8 = a1 + 40;
  v9 = (__int64 **)a1[40];
  v36 = 0;
  v11 = 0LL;
  for ( i = *v9; i != *v8; i = v15 )
  {
    v14 = (CDDisplayCachedScanout *)i[2];
    v15 = (__int64 *)*i;
    if ( !v11 )
    {
      v35 = 0LL;
      if ( CDDisplayCachedScanout::Matches(v14, v37, a4, (unsigned int)a4, v31, &v35) )
      {
        *((_DWORD *)v14 + 10) = 600;
        v27 = i[2];
        i[2] = 0LL;
        v33 = v27;
        std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::emplace_front<CDDisplayAgedCachedScanout *>(v8, &v33);
        *(_QWORD *)i[1] = *i;
        v28 = *i;
        *(_QWORD *)(v28 + 8) = i[1];
        a1[41] = (__int64 *)((char *)a1[41] - 1);
        std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>::_Freenode<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>(
          v28,
          i);
        v11 = v35;
        continue;
      }
      v11 = v35;
    }
    if ( (*((_DWORD *)v14 + 10))-- == 1 )
      std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::erase(v8, v34, i);
  }
  v17 = v36;
  if ( v11 )
    goto LABEL_15;
  v18 = (CDDisplayCachedScanout *)operator new(0x30uLL);
  v20 = v18;
  if ( v18 )
  {
    *(_QWORD *)v18 &= v17;
    *((_QWORD *)v18 + 1) &= v17;
    *((_QWORD *)v18 + 2) &= v17;
    *((_QWORD *)v18 + 3) &= v17;
    *((_DWORD *)v18 + 9) &= v17;
    *((_DWORD *)v18 + 8) = 1;
    *((_DWORD *)v18 + 10) = 600;
  }
  else
  {
    v20 = 0LL;
  }
  v35 = (struct Windows::Devices::Display::Core::IDisplayScanout *)(v17 & (unsigned __int64)v35);
  v21 = v38;
  v22 = v37;
  v23 = CDDisplaySwapChain::CreateScanout((CDDisplaySwapChain *)a1, v37, v38, v19, v31, &v35);
  LODWORD(v17) = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x588u, 0LL);
    if ( v20 )
    {
      CDDisplayCachedScanout::~CDDisplayCachedScanout(v20);
      operator delete(v20, 0x30uLL);
    }
    v25 = v35;
  }
  else
  {
    v11 = v35;
    CDDisplayCachedScanout::Set(v20, v22, v21, v24, v32, v35);
    v35 = v20;
    std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::emplace_front<CDDisplayAgedCachedScanout *>(v8, &v35);
    if ( (unsigned __int64)a1[41] > 0x15 )
    {
      v29 = (__int64 *)a1[40][1];
      v30 = *v29;
      a1[41] = (__int64 *)((char *)a1[41] - 1);
      *(_QWORD *)v29[1] = v30;
      *(_QWORD *)(v30 + 8) = v29[1];
      std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>::_Freenode<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>(
        v30,
        v29);
    }
LABEL_15:
    v25 = 0LL;
    *a8 = v11;
  }
  if ( v25 )
    (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayScanout *))(*(_QWORD *)v25 + 16LL))(v25);
  return (unsigned int)v17;
}
