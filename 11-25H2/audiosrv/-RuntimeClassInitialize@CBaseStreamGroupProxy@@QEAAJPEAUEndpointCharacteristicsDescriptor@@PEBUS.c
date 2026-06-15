/*
 * XREFs of ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@K@Z @ 0x1800200FC
 * Callers:
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@KPEAUIAudioModeEffectsWatcher@@@Z @ 0x180059270 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEB.c)
 *     ?RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x18008AEA4 (-RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x180020B2C (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ??0CResourcePriorityTracker@@QEAA@K@Z @ 0x180020D50 (--0CResourcePriorityTracker@@QEAA@K@Z.c)
 *     ??4CProcessingModeParameters@@QEAAAEAV0@AEBV0@@Z @ 0x180027060 (--4CProcessingModeParameters@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x180027B44 (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBaseStreamGroupProxy::RuntimeClassInitialize(
        CBaseStreamGroupProxy *this,
        struct EndpointCharacteristicsDescriptor *a2,
        const struct StreamGroupParams *a3,
        unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rcx
  void (__fastcall ***v11)(_QWORD, GUID *, char *); // rcx
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rdi
  void *v15; // rax
  size_t v16; // rax
  CResourcePriorityTracker *v17; // rax
  const char *v18; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    *((_DWORD *)this + 78) = (*(__int64 (**)(void))(**(_QWORD **)a2 + 56LL))();
    v9 = *(_QWORD *)a2;
    v10 = *((_QWORD *)this + 38);
    *((_QWORD *)this + 38) = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    *((_QWORD *)this + 38) = 0LL;
    v11 = *(void (__fastcall ****)(_QWORD, GUID *, char *))(v9 + 56);
    if ( v11 )
      (**v11)(v11, &GUID_4d3814ae_3db5_4fb3_819c_1493075ce6e3, (char *)this + 304);
    v12 = _AllocString<CTCoAllocPolicy>(v11, v8, *(_QWORD *)a3, (char *)this + 56);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12F,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v12);
      result = v13;
    }
    else
    {
      v14 = *(unsigned __int16 *)(*((_QWORD *)a3 + 2) + 16LL);
      v15 = CoTaskMemAlloc(v14 + 18);
      *((_QWORD *)this + 6) = v15;
      if ( v15 )
      {
        v16 = CTCoAllocPolicy::_CoTaskMemSize(v15);
        memset_0(*((void **)this + 6), 0, v16);
        memcpy_0(*((void **)this + 6), *((const void **)a3 + 2), v14 + 18);
        *((_OWORD *)this + 2) = *((_OWORD *)a3 + 2);
        *((_QWORD *)this + 3) = *((_QWORD *)a3 + 3);
        *((_DWORD *)this + 17) = *((_DWORD *)a3 + 2);
        *((_DWORD *)this + 34) = 0;
        *((_DWORD *)this + 35) = 0;
        *((_DWORD *)this + 36) = 0;
        *((_BYTE *)this + 64) = *((_BYTE *)a3 + 49);
        *((_BYTE *)this + 65) = *((_BYTE *)a3 + 50);
        CProcessingModeParameters::operator=((char *)this + 264, (char *)a3 + 56);
        v17 = (CResourcePriorityTracker *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
        if ( v17 )
          v17 = CResourcePriorityTracker::CResourcePriorityTracker(v17, a4);
        *((_QWORD *)this + 9) = v17;
        if ( v17 )
        {
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x140,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)0x8007000ELL);
          result = 2147942414LL;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x132,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)0x8007000ELL);
        result = 2147942414LL;
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x143,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           v18);
  }
  return result;
}
