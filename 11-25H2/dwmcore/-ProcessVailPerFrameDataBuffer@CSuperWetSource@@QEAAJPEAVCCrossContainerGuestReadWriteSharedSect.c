/*
 * XREFs of ?ProcessVailPerFrameDataBuffer@CSuperWetSource@@QEAAJPEAVCCrossContainerGuestReadWriteSharedSection@@II@Z @ 0x18029B1C4
 * Callers:
 *     ?ProcessVailPerFrameDataBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_VAILPERFRAMEDATABUFFER@@@Z @ 0x18023A854 (-ProcessVailPerFrameDataBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_VA.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z @ 0x1802AFDFC (-ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z.c)
 */

__int64 __fastcall CSuperWetSource::ProcessVailPerFrameDataBuffer(
        CSuperWetSource *this,
        struct CCrossContainerGuestReadWriteSharedSection *a2,
        unsigned int a3,
        int a4)
{
  const void *v8; // rax
  __int64 result; // rax
  CResource *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v8 = CSharedSectionBase::ResolveAllocation(a2, a3, 0x1000uLL);
  *((_QWORD *)this + 17) = v8;
  if ( v8 )
  {
    if ( *((struct CCrossContainerGuestReadWriteSharedSection **)this + 13) != a2 )
    {
      if ( a2 )
        CMILRefCountImpl::AddReference((struct CCrossContainerGuestReadWriteSharedSection *)((char *)a2 + 8));
      v10 = (CResource *)*((_QWORD *)this + 13);
      *((_QWORD *)this + 13) = a2;
      if ( v10 )
        CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v10);
    }
    *((_DWORD *)this + 32) = a3;
    result = 0LL;
    *((_DWORD *)this + 33) = a4;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\superwetsource.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
