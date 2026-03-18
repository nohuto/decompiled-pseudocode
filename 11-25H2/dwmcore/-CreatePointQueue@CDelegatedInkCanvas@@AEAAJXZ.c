/*
 * XREFs of ?CreatePointQueue@CDelegatedInkCanvas@@AEAAJXZ @ 0x1802A33A4
 * Callers:
 *     ?Initialize@CDelegatedInkCanvas@@UEAAJXZ @ 0x1802A3840 (-Initialize@CDelegatedInkCanvas@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x18019C774 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1802208DC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?GetInkCanvasInputHost@CMit@@SAJPEAPEAUIInkCanvasInputHost@@@Z @ 0x18026370C (-GetInkCanvasInputHost@CMit@@SAJPEAPEAUIInkCanvasInputHost@@@Z.c)
 *     ??1?$unique_ptr@VCSharedCircularQueueProducer@@U?$default_delete@VCSharedCircularQueueProducer@@@std@@@std@@QEAA@XZ @ 0x18027F828 (--1-$unique_ptr@VCSharedCircularQueueProducer@@U-$default_delete@VCSharedCircularQueueProducer@@.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18029AF74 (--1-$out_param_t@V-$unique_ptr@VCSharedCircularQueue@@U-$default_delete@VCSharedCircularQueue@@@.c)
 *     ?Create@CSharedCircularQueueProducer@@SAJV?$span@E$0?0@gsl@@IPEAPEAV1@@Z @ 0x18029B060 (-Create@CSharedCircularQueueProducer@@SAJV-$span@E$0-0@gsl@@IPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDelegatedInkCanvas::CreatePointQueue(CDelegatedInkCanvas *this)
{
  __int64 *v1; // rdi
  __int64 v2; // r14
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rdx
  gsl::details *v10; // rcx
  int v11; // ebx
  void *v12; // rcx
  void *v13; // rax
  int InkCanvasInputHost; // eax
  __int64 v15; // rdx
  __int64 v17[2]; // [rsp+20h] [rbp-30h] BYREF
  void **v18; // [rsp+30h] [rbp-20h] BYREF
  volatile __int32 **v19; // [rsp+38h] [rbp-18h] BYREF
  char v20; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IInkCanvasInputHost *v22; // [rsp+70h] [rbp+20h] BYREF
  void *v23; // [rsp+78h] [rbp+28h] BYREF

  v1 = (__int64 *)((char *)this + 168);
  v2 = *((_QWORD *)this + 22);
  v4 = *((_QWORD *)this + 21);
  v5 = v2 - v4;
  if ( (unsigned __int64)(v2 - v4) > 0x1C08 )
  {
    v6 = v4 + 7176;
LABEL_7:
    v1[1] = v6;
    goto LABEL_8;
  }
  if ( v5 < 0x1C08 )
  {
    if ( (unsigned __int64)(*((_QWORD *)this + 23) - v4) >= 0x1C08 )
    {
      v7 = 7176 - v5;
      memset_0(*((void **)this + 22), 0, 7176 - v5);
      v6 = v7 + v2;
      goto LABEL_7;
    }
    std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>((__int64)v1, 0x1C08uLL);
  }
LABEL_8:
  v8 = *v1;
  v9 = v1[1];
  v18 = &v23;
  v23 = 0LL;
  v19 = 0LL;
  v20 = 1;
  gsl::details::extent_type<-1>::extent_type<-1>(v17, v9 - v8);
  v17[1] = v8;
  if ( v17[0] == -1 || !v8 && v17[0] )
  {
    gsl::details::terminate(v10);
    JUMPOUT(0x1802A3559LL);
  }
  v11 = CSharedCircularQueueProducer::Create(v17, 0x38u, &v19);
  wil::details::out_param_t<std::unique_ptr<CSharedCircularQueue>>::~out_param_t<std::unique_ptr<CSharedCircularQueue>>((__int64)&v18);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\delegatedinkcanvas.cpp",
      (const char *)(unsigned int)v11);
LABEL_20:
    std::unique_ptr<CSharedCircularQueueProducer>::~unique_ptr<CSharedCircularQueueProducer>(&v23);
    return (unsigned int)v11;
  }
  v12 = (void *)*((_QWORD *)this + 24);
  v13 = v23;
  v23 = 0LL;
  *((_QWORD *)this + 24) = v13;
  if ( v12 )
    operator delete(v12);
  v22 = 0LL;
  InkCanvasInputHost = CMit::GetInkCanvasInputHost(&v22);
  v11 = InkCanvasInputHost;
  if ( InkCanvasInputHost < 0 )
  {
    v15 = 218LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\delegatedinkcanvas.cpp",
      (const char *)(unsigned int)InkCanvasInputHost);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
    goto LABEL_20;
  }
  InkCanvasInputHost = (*(__int64 (__fastcall **)(struct IInkCanvasInputHost *, __int64))(*(_QWORD *)v22 + 24LL))(
                         v22,
                         *v1);
  v11 = InkCanvasInputHost;
  if ( InkCanvasInputHost < 0 )
  {
    v15 = 220LL;
    goto LABEL_19;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
  std::unique_ptr<CSharedCircularQueueProducer>::~unique_ptr<CSharedCircularQueueProducer>(&v23);
  return 0LL;
}
