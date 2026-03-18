/*
 * XREFs of ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1802D5008
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___ @ 0x1802D4100 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x180024308 (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18008FCF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801EC734 (--$_Emplace_reallocate@V-$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_r.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$try_com_query_nothrow@UIHolographicExclusiveModeManagerProxy@@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@0@AEAPEAUIUnknown@@@Z @ 0x1802D41B8 (--$try_com_query_nothrow@UIHolographicExclusiveModeManagerProxy@@AEAPEAUIUnknown@@@wil@@YA-AV-$c.c)
 *     ?ProcessAddDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802D4BE8 (-ProcessAddDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802D4CCC (-ProcessAddExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802D4D9C (-ProcessAddTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAddViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802D4E78 (-ProcessAddViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessAttachExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802D4F6C (-ProcessAttachExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802D55C4 (-ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802D56BC (-ProcessRemoveDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802D5794 (-ProcessRemoveExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802D5858 (-ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802D58F4 (-ProcessRemoveTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802D59B4 (-ProcessRemoveViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessTextureUpdateSync@CHolographicClient@@AEAAXIPEAX0_K@Z @ 0x1802D5A90 (-ProcessTextureUpdateSync@CHolographicClient@@AEAAXIPEAX0_K@Z.c)
 *     ?UninitializeResources@CHolographicClient@@AEAAXXZ @ 0x1802D5C50 (-UninitializeResources@CHolographicClient@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CHolographicClient::ProcessMessage(
        CHolographicClient *this,
        unsigned int a2,
        struct IUnknown *a3,
        void *a4,
        void *a5,
        void *a6,
        void *a7)
{
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  struct IUnknownVtbl *v15; // rax
  struct IUnknownVtbl *v16; // rax
  struct IUnknownVtbl *v17; // rax
  unsigned int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  struct IUnknownVtbl *v23; // rax
  struct IUnknownVtbl *v24; // rax
  struct IUnknownVtbl *v25; // rax
  unsigned int v26; // edx
  unsigned int v27; // edx
  unsigned int v28; // edx
  unsigned int v29; // edx
  unsigned int v30; // edx
  unsigned int v31; // edx
  struct IUnknownVtbl *lpVtbl; // rax
  struct IUnknownVtbl *v33; // rax
  __int64 v34; // rdx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  int v38; // edx
  struct IUnknownVtbl *v39; // rax
  struct IUnknownVtbl *v40; // rax
  struct IUnknownVtbl *v41; // rax
  __int64 *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // [rsp+30h] [rbp-10h] BYREF
  void (__fastcall ***v45)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  if ( a2 > 0xF )
  {
    if ( a2 <= 0x1A )
    {
      if ( a2 == 26 )
      {
        CHolographicClient::ProcessRemoveViewer(this, a3);
      }
      else
      {
        v26 = a2 - 18;
        if ( v26 )
        {
          v27 = v26 - 2;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( v29 )
              {
                v30 = v29 - 1;
                if ( v30 )
                {
                  v31 = v30 - 1;
                  if ( v31 )
                  {
                    if ( v31 != 1 )
                      goto LABEL_69;
                    lpVtbl = a3->lpVtbl;
                    v44 = 0LL;
                    if ( ((int (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
                           a3,
                           &GUID_6be85f9e_fb49_4826_8b19_a61973c8ea67,
                           &v44) >= 0 )
                    {
                      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 208LL))(
                        *((_QWORD *)this + 3),
                        v44);
                      ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(v44);
                    }
                  }
                  else
                  {
                    CHolographicClient::ProcessAddViewer(this, a3);
                  }
                }
                else
                {
                  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 144LL))(
                    *((_QWORD *)this + 3),
                    (unsigned int)a4);
                }
              }
              else
              {
                v33 = a3->lpVtbl;
                v44 = 0LL;
                if ( ((int (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v33->QueryInterface)(
                       a3,
                       &GUID_4781ba52_4074_45c2_9296_6f54fd9e0368,
                       &v44) >= 0 )
                {
                  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 136LL))(
                    *((_QWORD *)this + 3),
                    v44);
                  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(v44);
                }
              }
            }
            else
            {
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 26);
              *((_DWORD *)this + 62) = 0;
              DynArrayImpl<0>::ShrinkToSize((__int64)this + 224, 0x20u);
            }
          }
          else if ( *((struct IUnknown **)this + 26) != a3 )
          {
            if ( a3 )
              ((void (__fastcall *)(struct IUnknown *))a3->lpVtbl->AddRef)(a3);
            v44 = *((_QWORD *)this + 26);
            *((_QWORD *)this + 26) = a3;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v44);
          }
        }
        else if ( a4 )
        {
          SetEvent(a4);
        }
      }
      return;
    }
    v34 = a2 - 27;
    if ( !(_DWORD)v34 )
    {
      LODWORD(v34) = (unsigned __int8)a4;
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 232LL))(*((_QWORD *)this + 3), v34);
      return;
    }
    v35 = v34 - 2;
    if ( !v35 )
    {
      v45 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a3;
      wil::try_com_query_nothrow<IHolographicExclusiveModeManagerProxy,IUnknown * &>(&v44, &v45);
      if ( v44 )
      {
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 152LL))(*((_QWORD *)this + 3));
        v42 = (__int64 *)*((_QWORD *)this + 14);
        if ( v42 == *((__int64 **)this + 15) )
        {
          std::vector<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>(
            (__int64 **)this + 13,
            v42,
            &v44);
        }
        else
        {
          v43 = v44;
          v44 = 0LL;
          *v42 = v43;
          *((_QWORD *)this + 14) += 8LL;
        }
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v44);
      return;
    }
    v36 = v35 - 1;
    if ( !v36 )
    {
      CHolographicClient::ProcessRemoveExclusiveModeProxy(this, a3);
      return;
    }
    v37 = v36 - 1;
    if ( v37 )
    {
      v38 = v37 - 1;
      if ( v38 )
      {
        if ( v38 != 1 )
          goto LABEL_69;
        v39 = a3->lpVtbl;
        v44 = 0LL;
        if ( ((int (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v39->QueryInterface)(
               a3,
               &GUID_58174da9_6b91_4256_bb33_9f9f1a265ba2,
               &v44) < 0 )
          return;
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 80LL))(*((_QWORD *)this + 3), v44);
      }
      else
      {
        v40 = a3->lpVtbl;
        v44 = 0LL;
        if ( ((int (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v40->QueryInterface)(
               a3,
               &GUID_58174da9_6b91_4256_bb33_9f9f1a265ba2,
               &v44) < 0 )
          return;
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 72LL))(*((_QWORD *)this + 3), v44);
      }
    }
    else
    {
      v41 = a3->lpVtbl;
      v44 = 0LL;
      if ( ((int (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v41->QueryInterface)(
             a3,
             &GUID_58174da9_6b91_4256_bb33_9f9f1a265ba2,
             &v44) < 0 )
        return;
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3), v44);
    }
LABEL_17:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    return;
  }
  if ( a2 == 15 )
  {
    CHolographicClient::ProcessReleaseExclusiveSwapChain(this, a3);
    return;
  }
  if ( a2 > 8 )
  {
    v18 = a2 - 9;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              if ( v22 != 1 )
                goto LABEL_69;
              CHolographicClient::ProcessAttachExclusiveSwapChain((RTL_SRWLOCK *)this, a3);
            }
            else
            {
              CHolographicClient::ProcessRemoveExclusiveView(this, a3);
            }
          }
          else
          {
            CHolographicClient::ProcessAddExclusiveView(this, a3);
          }
          return;
        }
        v23 = a3->lpVtbl;
        v44 = 0LL;
        if ( ((int (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v23->QueryInterface)(
               a3,
               &GUID_f6510650_98a1_40e3_b87a_8dc216605fda,
               &v44) < 0 )
          return;
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 184LL))(*((_QWORD *)this + 3), v44);
      }
      else
      {
        CHolographicClient::UninitializeResources(this);
        v24 = a3->lpVtbl;
        v44 = 0LL;
        if ( ((int (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v24->QueryInterface)(
               a3,
               &GUID_f6510650_98a1_40e3_b87a_8dc216605fda,
               &v44) < 0 )
          return;
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 176LL))(*((_QWORD *)this + 3), v44);
      }
    }
    else
    {
      v25 = a3->lpVtbl;
      v44 = 0LL;
      if ( ((int (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v25->QueryInterface)(
             a3,
             &GUID_f6510650_98a1_40e3_b87a_8dc216605fda,
             &v44) < 0 )
        return;
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 168LL))(*((_QWORD *)this + 3), v44);
    }
    goto LABEL_17;
  }
  if ( a2 == 8 )
  {
    v17 = a3->lpVtbl;
    v44 = 0LL;
    if ( ((int (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v17->QueryInterface)(
           a3,
           &GUID_5e01b98c_b7d8_4f41_8bf2_9dc251835cd5,
           &v44) >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 104LL))(*((_QWORD *)this + 3), v44);
      ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(v44);
    }
    return;
  }
  v9 = a2 - 1;
  if ( !v9 )
  {
    v16 = a3->lpVtbl;
    v44 = 0LL;
    if ( ((int (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v16->QueryInterface)(
           a3,
           &GUID_6ea01fc5_ef58_46aa_b361_da5050ef3873,
           &v44) >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 32LL))(*((_QWORD *)this + 3), v44);
      ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(v44);
    }
    return;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    CHolographicClient::ProcessAddTexture(this, a3);
    return;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    CHolographicClient::ProcessRemoveTexture(this, a3);
    return;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v15 = a3->lpVtbl;
    v44 = 0LL;
    if ( ((int (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v15->QueryInterface)(
           a3,
           &GUID_6ea01fc5_ef58_46aa_b361_da5050ef3873,
           &v44) < 0 )
      return;
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 48LL))(*((_QWORD *)this + 3), v44);
    goto LABEL_17;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        CHolographicClient::ProcessRemoveDisplay(this, a3);
        return;
      }
LABEL_69:
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1B8,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicclient.cpp",
        (const char *)a4);
    }
    CHolographicClient::ProcessAddDisplay(this, a3);
  }
  else
  {
    CHolographicClient::ProcessTextureUpdateSync(this, (unsigned int)a4, a5, a6, (unsigned __int64)a7);
  }
}
