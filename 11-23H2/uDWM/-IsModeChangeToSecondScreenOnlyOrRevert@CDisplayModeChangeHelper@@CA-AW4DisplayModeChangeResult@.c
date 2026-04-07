/*
 * XREFs of ?IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180028708
 * Callers:
 *     ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180028634 (-HasChanged@CDisplayModeChangeHelper@@SA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV-$.c)
 * Callees:
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x1800289EC (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x18005AFB8 (-IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x18005B788 (-GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z.c)
 *     ??1?$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B6F44 (--1-$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@345@Z @ 0x1800BC528 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U2@U3@@-$_tlgWrit.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDisplayModeChangeHelper::IsModeChangeToSecondScreenOnlyOrRevert(
        CDWMDisplaySet *a1,
        CDWMDisplaySet *a2,
        _QWORD *a3)
{
  struct CDWMDisplay *v4; // rbx
  CDWMDisplay *v5; // rdi
  int v6; // r8d
  __int64 v8; // rax
  char *v9; // [rsp+50h] [rbp-20h] BYREF
  __int64 v10; // [rsp+58h] [rbp-18h] BYREF
  char *v11; // [rsp+60h] [rbp-10h] BYREF
  struct CDWMDisplay *v12; // [rsp+98h] [rbp+28h] BYREF
  CDWMDisplay *v13; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+38h] BYREF

  a3[1] = *a3;
  if ( *((_DWORD *)a2 + 16) != 1 )
    return 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( (int)CDWMDisplaySet::GetPrimaryDisplay(a1, &v13) < 0
    || (v12 = 0LL, (int)CDWMDisplaySet::GetPrimaryDisplay(a2, &v12) < 0)
    || (v4 = v12, !*((_BYTE *)v12 + 268))
    || (v5 = v13, CDWMDisplay::IsSamePhysicalDisplay(v13, v12)) )
  {
    wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v12);
    wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v13);
    return 0LL;
  }
  v8 = *((_QWORD *)v5 + 21);
  if ( (unsigned int)dword_180147058 > 5 && (byte_180147068 & 1) != 0 && (qword_180147070 & 1) == qword_180147070 )
  {
    v14 = *((_QWORD *)v4 + 21);
    LODWORD(v12) = *((_DWORD *)v4 + 47);
    v9 = (char *)v4 + 96;
    v10 = v8;
    LODWORD(v13) = *((_DWORD *)v5 + 47);
    v11 = (char *)v5 + 96;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (_DWORD)v12,
      (unsigned int)&unk_1801260B0,
      v6,
      (_DWORD)v5 + 96,
      (__int64)&v11,
      (__int64)&v13,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v12,
      (__int64)&v14);
  }
  CDWMDisplay::Release(v4);
  CDWMDisplay::Release(v5);
  return 10LL;
}
