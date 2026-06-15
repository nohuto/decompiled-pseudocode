/*
 * XREFs of ?CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z @ 0x14000D230
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2CConnectionNode@@SAPEAX_K@Z @ 0x14000CCA0 (--2CConnectionNode@@SAPEAX_K@Z.c)
 *     ?ValidateUncompressedFrameFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x14000D4C4 (-ValidateUncompressedFrameFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ?CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@@Z @ 0x14000D58C (-CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCac.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@AEAAXXZ @ 0x14000EF9C (-GetFreeNode@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDeviceGraphObjectCache::CreateConnection(
        unsigned __int64 this,
        struct APO_CONNECTION_DESCRIPTOR *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r12
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  unsigned int v7; // edi
  struct _RTL_CRITICAL_SECTION *v8; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  int Connection; // eax
  unsigned int v13; // r14d
  __int64 **v14; // r14
  __int64 v15; // r15
  __int64 *v16; // rcx
  __int64 *v17; // rax
  ATL::CAtlException *v18; // rbx
  ATL::CAtlException *v19; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v21; // [rsp+70h] [rbp+8h]
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+78h] [rbp+10h]
  void (__fastcall ***v24)(_QWORD, __int64); // [rsp+88h] [rbp+20h]

  v3 = a3;
  v6 = (struct _RTL_CRITICAL_SECTION *)(this + 48);
  v22 = (struct _RTL_CRITICAL_SECTION *)(this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 48));
  if ( !a2 || a2->u32Signature != 1094927443 || !a2->u32MaxFrameCount )
  {
    v7 = -2147024809;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E2,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)v7);
LABEL_4:
    if ( !v6 )
      return v7;
    v8 = v6;
LABEL_6:
    LeaveCriticalSection(v8);
    return v7;
  }
  v7 = ValidateUncompressedFrameFormat(a2->pFormat);
  if ( (v7 & 0x80000000) != 0 )
    goto LABEL_3;
  v10 = CConnectionNode::operator new();
  v11 = v10;
  if ( !v10 )
  {
    v7 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E7,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_4;
  }
  *v10 = &CConnectionNode::`vftable';
  v10[2] = ++CConnectionNode::m_LastConnectionHandle;
  v10[13] = 0LL;
  v10[14] = 0LL;
  v10[17] = 0LL;
  v10[18] = 0LL;
  v10[20] = 0LL;
  v10[1] = 0LL;
  v10[11] = 0LL;
  v10[15] = 0LL;
  v10[16] = 0LL;
  v10[19] = 0LL;
  v24 = (void (__fastcall ***)(_QWORD, __int64))v10;
  Connection = CConnectionNode::CreateConnection(
                 (CConnectionNode *)v10,
                 a2,
                 (struct IDeviceGraphObjectCache *)(this & -(__int64)(this != 8)));
  v13 = Connection;
  if ( Connection >= 0 )
  {
    try
    {
      v14 = (__int64 **)(this + 144);
      v15 = *(_QWORD *)(this + 144);
      ATL::CAtlList<CConnectionNode *,CConnectionNodeTraits>::GetFreeNode(v14);
    }
    catch ( ATL::CAtlException *v19 )
    {
      v18 = v19;
      if ( *(_DWORD *)v19 == -1073741571 )
        _o__resetstkoflw();
      v21 = *(_DWORD *)v18;
      v7 = *(_DWORD *)v18;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F5,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
          (const char *)(unsigned int)v21);
        (**v24)(v24, 1LL);
        v8 = v22;
        if ( !v22 )
          return v7;
        goto LABEL_6;
      }
      v3 = a3;
      v6 = v22;
      v11 = v24;
      goto LABEL_24;
    }
    v16 = v14[4];
    v17 = (__int64 *)*v16;
    v16[2] = (__int64)v11;
    v14[4] = v17;
    v16[1] = 0LL;
    *v16 = v15;
    v14[2] = (__int64 *)((char *)v14[2] + 1);
    if ( *v14 )
      (*v14)[1] = (__int64)v16;
    else
      v14[1] = v16;
    *v14 = v16;
LABEL_24:
    *v3 = v11[2];
    if ( v6 )
      LeaveCriticalSection(v6);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1EA,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
    (const char *)(unsigned int)Connection);
  (*(void (__fastcall **)(_QWORD *, __int64))*v11)(v11, 1LL);
  if ( v6 )
    LeaveCriticalSection(v6);
  return v13;
}
