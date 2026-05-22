/*
 * XREFs of ?OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z @ 0x1800D7AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x180026F08 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180057F60 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??$count@X@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x18005B45C (--$count@X@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$a.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180068174 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?_Tidy@?$vector@GV?$allocator@G@std@@@std@@AEAAXXZ @ 0x1800D6530 (-_Tidy@-$vector@GV-$allocator@G@std@@@std@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBG@?$vector@GV?$allocator@G@std@@@std@@AEAAPEAGQEAGAEBG@Z @ 0x1800D6768 (--$_Emplace_reallocate@AEBG@-$vector@GV-$allocator@G@std@@@std@@AEAAPEAGQEAGAEBG@Z.c)
 *     ?CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800D6FEC (-CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?HIDUsageToButtonMapping@MobileButtonDeviceCollection@@AEAAJGPEAK@Z @ 0x1800D7114 (-HIDUsageToButtonMapping@MobileButtonDeviceCollection@@AEAAJGPEAK@Z.c)
 *     memcpy_0 @ 0x1801C7CFC (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MobileButtonDeviceCollection::OnInvalidateInput(MobileButtonDeviceCollection *this, void *a2)
{
  int v3; // edx
  unsigned int Device; // ebx
  __int64 v5; // rdx
  __int128 v7; // xmm6
  _BYTE *v8; // r12
  MobileButtonDeviceCollection *v9; // rcx
  unsigned __int16 *v10; // rsi
  unsigned __int16 *v11; // r13
  _BYTE *v12; // rdi
  unsigned __int16 v13; // dx
  DWORD TickCount; // ebx
  int ButtonInfo; // eax
  __int64 v16; // rdx
  unsigned int v17[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct RIMDevice *v18; // [rsp+50h] [rbp-B8h] BYREF
  __int64 Src; // [rsp+58h] [rbp-B0h] BYREF
  void *Src_8[2]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE *v21; // [rsp+70h] [rbp-98h]
  LARGE_INTEGER PerformanceCount; // [rsp+78h] [rbp-90h] BYREF
  __int64 v23[3]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v24[24]; // [rsp+98h] [rbp-70h] BYREF
  int v25; // [rsp+B0h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+CA0h] [rbp+B98h]

  v18 = 0LL;
  Device = RIMDeviceCollection::FindDevice(this, 0, a2, &v18, 0LL);
  if ( (Device & 0x80000000) != 0 )
  {
    v5 = 349LL;
    goto LABEL_3;
  }
  LODWORD(v18) = **((_DWORD **)v18 + 4);
  v17[0] = (unsigned int)v18;
  memset_0(v24, v3, 0xBC0uLL);
  v25 = 3008;
  PerformanceCount.QuadPart = 0LL;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (__int64)this + 2760,
    (__int64)&Src,
    v17);
  if ( Src == *((_QWORD *)this + 346) )
  {
    Device = -2147467259;
    v5 = 362LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
      (const char *)Device);
    return Device;
  }
  v7 = *(_OWORD *)(Src + 24);
  *(_OWORD *)Src_8 = 0LL;
  v8 = 0LL;
  v21 = 0LL;
  Src = *(unsigned int *)(Src + 32);
  gsl::details::extent_type<-1>::extent_type<-1>(v23, (unsigned int)Src);
  if ( v23[0] == -1 || !(_QWORD)v7 && v23[0] )
  {
    _o_terminate(v9);
    __debugbreak();
    JUMPOUT(0x1800D7DC1LL);
  }
  v10 = (unsigned __int16 *)v7;
  v11 = (unsigned __int16 *)(v7 + 2 * v23[0]);
  v12 = Src_8[1];
  while ( v10 != v11 )
  {
    v13 = *v10;
    if ( *v10 )
    {
      v17[0] = 0;
      if ( (int)MobileButtonDeviceCollection::HIDUsageToButtonMapping(v9, v13, v17) >= 0 )
      {
        if ( std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::count<void>(
               (_QWORD *)this + 353,
               v17) )
        {
          if ( v12 == v8 )
          {
            std::vector<unsigned short>::_Emplace_reallocate<unsigned short const &>((__int64)Src_8, v12, v10);
            v8 = v21;
            v12 = Src_8[1];
          }
          else
          {
            *(_WORD *)v12 = *v10;
            v12 += 2;
            Src_8[1] = v12;
          }
        }
        else
        {
          TickCount = GetTickCount();
          QueryPerformanceCounter(&PerformanceCount);
          ButtonInfo = MobileButtonDeviceCollection::CreateButtonInfo(
                         (MobileButtonDeviceCollection *)*v10,
                         (int)v18,
                         TickCount,
                         PerformanceCount,
                         *v10,
                         0,
                         (struct InputInfo *)v24);
          Device = ButtonInfo;
          if ( ButtonInfo < 0 )
          {
            v16 = 412LL;
            goto LABEL_23;
          }
          ButtonInfo = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                         *((_QWORD *)this + 2),
                         v24);
          Device = ButtonInfo;
          if ( ButtonInfo < 0 )
          {
            v16 = 417LL;
LABEL_23:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v16,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
              (const char *)(unsigned int)ButtonInfo);
            std::vector<unsigned short>::_Tidy((__int64)Src_8);
            return Device;
          }
        }
      }
    }
    ++v10;
  }
  memset_0((void *)v7, 0, 2 * Src);
  memcpy_0((void *)v7, Src_8[0], 2 * ((v12 - (char *)Src_8[0]) >> 1));
  std::vector<unsigned short>::_Tidy((__int64)Src_8);
  return 0LL;
}
