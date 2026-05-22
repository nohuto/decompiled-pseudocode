/*
 * XREFs of ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x1800E0514
 * Callers:
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DCC90 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009BD18 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E86C (--_U@YAPEAX_K@Z.c)
 *     ??R?$default_delete@U?$VariableSizedPayloadStorage@UGazeInputInfo@@@@@std@@QEBAXPEAU?$VariableSizedPayloadStorage@UGazeInputInfo@@@@@Z @ 0x1800DC9BC (--R-$default_delete@U-$VariableSizedPayloadStorage@UGazeInputInfo@@@@@std@@QEBAXPEAU-$VariableSi.c)
 *     ?TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ @ 0x1800E0818 (-TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ.c)
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x1800E095C (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 *     ?Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x180184250 (-Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 *     ?IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z @ 0x1801842FC (-IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z.c)
 *     memcpy_0 @ 0x1801CF19C (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GazeHidDevice::Initialize(GazeHidDevice *this, struct GazeDeviceInfo *a2)
{
  char *v4; // r14
  PHIDP_PREPARSED_DATA *v5; // rsi
  int v6; // eax
  unsigned int v7; // ebp
  NTSTATUS Caps; // eax
  PHIDP_PREPARSED_DATA *v10; // rbp
  _DWORD *v11; // rdi
  const char *v12; // r9
  size_t v13; // rsi
  void *v14; // rax
  const struct std::nothrow_t *v15; // rdx
  void *v16; // rcx
  __int64 v17; // rcx
  void **v18; // rdx
  int updated; // eax
  int v20; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *((_QWORD *)this + 4) = a2;
  v4 = (char *)this + 128;
  v5 = (PHIDP_PREPARSED_DATA *)((char *)this + 48);
  v6 = GazeHidParser::Initialize((PHIDP_CAPS)this + 2, *((PHIDP_PREPARSED_DATA *)this + 6));
  v7 = v6;
  if ( v6 >= 0 )
  {
    Caps = HidP_GetCaps(*v5, (PHIDP_CAPS)((char *)this + 60));
    if ( Caps >= 0 )
    {
      *((_DWORD *)a2 + 392) = 0;
      if ( (unsigned __int8)GazeHidParser::IsPropertySupported(v4, 6LL) )
      {
        *((_DWORD *)a2 + 392) |= 1u;
        v10 = (PHIDP_PREPARSED_DATA *)((char *)this + 48);
      }
      else
      {
        v10 = v5;
      }
      if ( (unsigned __int8)GazeHidParser::IsPropertySupported(v4, 10LL) )
      {
        *((_DWORD *)a2 + 392) |= 2u;
        v5 = v10;
      }
      *((_DWORD *)a2 + 396) = *((_DWORD *)this + 14);
      memcpy_0((char *)a2 + 1588, *v5, *((unsigned int *)this + 14));
      *((_DWORD *)this + 58) = *((unsigned __int16 *)this + 32) + 96;
      v11 = operator new(0x10uLL);
      v13 = *((unsigned int *)this + 58);
      *(_QWORD *)v11 = 0LL;
      if ( v13 < 0x60 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x1FB,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\inc\\rawinput.h",
          v12);
      v14 = operator new[](v13);
      v16 = *(void **)v11;
      *(_QWORD *)v11 = v14;
      if ( v16 )
        operator delete(v16, v15);
      v11[2] = v13;
      memset_0(*(void **)v11, 0, v13);
      *(_DWORD *)(*(_QWORD *)v11 + 24LL) = v13;
      v18 = (void **)*((_QWORD *)this + 28);
      *((_QWORD *)this + 28) = v11;
      if ( v18 )
        std::default_delete<VariableSizedPayloadStorage<GazeInputInfo>>::operator()(v17, v18);
      updated = GazeHidDevice::TryUpdateDisplayMapping(this);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x35,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
          (const char *)(unsigned int)updated);
      v20 = GazeHidDevice::TryUpdateCalibrationState(this);
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x36,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
          (const char *)(unsigned int)v20);
      return 0LL;
    }
    else
    {
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x1B,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
               (const char *)(unsigned int)Caps);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
