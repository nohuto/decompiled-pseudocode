/*
 * XREFs of ??0PenInterface@@QEAA@PEAX0@Z @ 0x180188128
 * Callers:
 *     ?AttachRIMDevice@HapticDeviceManager@@QEAAXPEAX0@Z @ 0x1801862D0 (-AttachRIMDevice@HapticDeviceManager@@QEAAXPEAX0@Z.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030470 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??$?0U?$default_delete@VCSharedCircularQueueProducer@@@std@@$0A@@?$unique_ptr@VCSharedCircularQueueProducer@@U?$default_delete@VCSharedCircularQueueProducer@@@std@@@std@@QEAA@$$T@Z @ 0x18005DF90 (--$-0U-$default_delete@VCSharedCircularQueueProducer@@@std@@$0A@@-$unique_ptr@VCSharedCircularQu.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180067038 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18007FAB0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B5644 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C39B8 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique@$$BY0A@G$0A@@std@@YA?AV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@0@_K@Z @ 0x1800DDC34 (--$make_unique@$$BY0A@G$0A@@std@@YA-AV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@std@@@0@_K.c)
 *     ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012E304 (-_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$set@U_GUID@@UGUIDComparer@PenInterface@@V?$allocator@U_GUID@@@std@@@std@@QEAA@XZ @ 0x1801880E8 (--0-$set@U_GUID@@UGUIDComparer@PenInterface@@V-$allocator@U_GUID@@@std@@@std@@QEAA@XZ.c)
 *     ?Initialize@PenInterface@@QEAAJXZ @ 0x1801885DC (-Initialize@PenInterface@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=8
PenInterface *__fastcall PenInterface::PenInterface(PenInterface *this, void *a2, void *a3)
{
  _OWORD *v6; // rsi
  int v7; // eax
  const void *v8; // rbx
  int v9; // eax
  int v10; // eax
  const struct std::nothrow_t *v11; // rdx
  void *v13; // [rsp+20h] [rbp-60h] BYREF
  __int128 v14; // [rsp+28h] [rbp-58h] BYREF
  __int128 v15; // [rsp+38h] [rbp-48h]
  __int64 v16; // [rsp+48h] [rbp-38h]
  PenInterface *v17; // [rsp+50h] [rbp-30h]
  _OWORD v18[2]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v17 = this;
  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &PenInterface::`vftable';
  v6 = (_OWORD *)((char *)this + 16);
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 7LL;
  *((_WORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = -1LL;
  *((_QWORD *)this + 8) = 0LL;
  std::unique_ptr<CSharedCircularQueueProducer>::unique_ptr<CSharedCircularQueueProducer>((_QWORD *)this + 17);
  *((_WORD *)this + 72) = 1;
  *((_BYTE *)this + 146) = 0;
  std::set<_GUID,PenInterface::GUIDComparer,std::allocator<_GUID>>::set<_GUID,PenInterface::GUIDComparer,std::allocator<_GUID>>((_QWORD *)this + 19);
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  LODWORD(v14) = 4;
  v7 = RIMGetDeviceProperties(a2, a3, &v14);
  if ( v7 < 0 )
    wil::details::in1diag3::_Throw_NtStatus(
      retaddr,
      (void *)0xE,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
      (const char *)(unsigned int)v7,
      (int)v13);
  std::make_unique<unsigned short [0],0>(&v13, DWORD2(v14));
  v8 = v13;
  *(_QWORD *)&v15 = v13;
  v9 = RIMGetDeviceProperties(a2, a3, &v14);
  if ( v9 < 0 )
    wil::details::in1diag3::_Throw_NtStatus(
      retaddr,
      (void *)0x12,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
      (const char *)(unsigned int)v9,
      (int)v13);
  memset(v18, 0, sizeof(v18));
  std::wstring::_Construct<1,unsigned short const *>((char **)v18, v8, DWORD2(v14));
  std::wstring::operator=(v6, (__int64)v18);
  std::wstring::_Tidy_deallocate((__int64)v18);
  v10 = PenInterface::Initialize(this);
  if ( v10 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      22LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\peninterface.cpp",
      (const char *)(unsigned int)v10,
      (int)v13);
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v13, v11);
  return this;
}
