/*
 * XREFs of ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x18004DCAC
 * Callers:
 *     ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x18004DC40 (-OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z.c)
 * Callees:
 *     ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x18004DBDC (-CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z.c)
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x18004DEA4 (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?ReceiveRawInput@ISM@InputTraceLogging@@SAXPEBUDeviceInfo@@@Z @ 0x18004DF28 (-ReceiveRawInput@ISM@InputTraceLogging@@SAXPEBUDeviceInfo@@@Z.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x18004E250 (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009BB68 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RIMDeviceCollection::OnReadEvent(HANDLE *this)
{
  unsigned __int64 v2; // r9
  HANDLE v3; // r8
  unsigned int i; // ecx
  HANDLE v5; // rdx
  const struct DeviceInfo *v6; // rdi
  unsigned int v7; // esi
  int InputReportFromRIM; // eax
  __int64 v10; // rdx
  unsigned int v11; // edi
  int Buffer; // eax
  int v13; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char v15; // [rsp+60h] [rbp+8h]

  v15 = 0;
  v2 = *((unsigned int *)this + 680);
  if ( (_DWORD)v2 == -1073741528 )
  {
    RIMDeviceCollection::Close((RIMDeviceCollection *)this);
    return 0LL;
  }
  if ( (v2 & 0x80000000) != 0LL )
  {
    v10 = 634LL;
    goto LABEL_19;
  }
  v3 = this[338];
  for ( i = 0; i < 0x100; ++i )
  {
    v5 = this[i + 78];
    if ( v5 && (*((HANDLE *)v5 + 2) == v3 || !*((_DWORD *)v5 + 10)) )
    {
      v6 = (const struct DeviceInfo *)*((_QWORD *)v5 + 4);
      v7 = *((unsigned __int16 *)this + 1364);
      if ( (*((_DWORD *)v6 + 1) & 0xFFFFFEFF) != 0 )
      {
        InputTraceLogging::ISM::ReceiveRawInput(v6);
        (*((void (__fastcall **)(HANDLE *, _QWORD, HANDLE, _QWORD))*this + 10))(
          this,
          *(unsigned int *)v6,
          this[337],
          v7);
      }
      if ( this[337] != this[335] )
      {
        v15 = 1;
        RIMFreeInputBuffer(this[10]);
        this[337] = 0LL;
        Buffer = RIMDeviceCollection::CreateReadBuffer((RIMDeviceCollection *)this, (const struct std::nothrow_t *)v7);
        v11 = Buffer;
        if ( Buffer < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2AE,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
            (const char *)(unsigned int)Buffer,
            v13);
          goto LABEL_20;
        }
      }
      break;
    }
  }
  if ( *((_BYTE *)this + 2736) )
  {
    SetEvent(this[7]);
    return 0LL;
  }
  InputReportFromRIM = RIMDeviceCollection::ReadInputReportFromRIM((RIMDeviceCollection *)this);
  if ( InputReportFromRIM >= 0 )
    return 0LL;
  v2 = (unsigned int)InputReportFromRIM;
  v10 = 706LL;
LABEL_19:
  v11 = wil::details::in1diag3::Return_NtStatus(
          retaddr,
          (void *)v10,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
          (const char *)v2,
          v13);
LABEL_20:
  if ( v15 )
  {
    if ( this[337] )
    {
      RIMFreeInputBuffer(this[10]);
      this[337] = 0LL;
    }
  }
  return v11;
}
