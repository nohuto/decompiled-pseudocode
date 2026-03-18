/*
 * XREFs of ??0DMMVIDPNTARGETMODE@@QEAA@I@Z @ 0x140042324
 * Callers:
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x140254678 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?AddModeImpl@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@W4_DXGK_VIDPN_INTERFACE_VERSION@@@Z @ 0x1403BE9CC (-AddModeImpl@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QE.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

DMMVIDPNTARGETMODE *__fastcall DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE(DMMVIDPNTARGETMODE *this, int a2)
{
  DMMVIDPNTARGETMODE *result; // rax
  int v4; // edx
  __int64 v5; // r8

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 6) = a2;
  if ( a2 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 240;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          240,
          v4,
          v5,
          0LL,
          2,
          -1,
          L"i_Id != D3DDDI_ID_UNINITIALIZED",
          240LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)((char *)this + 76) = -1LL;
  *(_QWORD *)((char *)this + 84) = -1LL;
  *(_QWORD *)((char *)this + 92) = -1LL;
  *((_QWORD *)this + 14) = 0xFFFFFFFFLL;
  *((_DWORD *)this + 30) = 8;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833173007;
  *((_DWORD *)this + 33) = 0;
  *(_QWORD *)this = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
  result = this;
  *((_DWORD *)this + 40) = 1;
  *((_DWORD *)this + 34) = 4;
  return result;
}
