/*
 * XREFs of ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x18004DADC
 * Callers:
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x18004D68C (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x1800D0D20 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 * Callees:
 *     ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x18004DBDC (-CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z.c)
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x18004DEA4 (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18008CF24 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RIMDeviceCollection::InitializeRIM(HANDLE *this, unsigned int a2, LPHANDLE lpTargetHandle)
{
  HANDLE CurrentProcess; // rax
  const char *v7; // r9
  int Buffer; // ebx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  CurrentProcess = GetCurrentProcess();
  if ( DuplicateHandle(CurrentProcess, this[5], CurrentProcess, lpTargetHandle, 0, 0, 2u) )
  {
    Buffer = RIMDeviceCollection::CreateReadBuffer((RIMDeviceCollection *)this, a2);
    if ( Buffer < 0 )
    {
      v10 = 747LL;
    }
    else
    {
      Buffer = RIMDeviceCollection::ReadInputReportFromRIM((RIMDeviceCollection *)this);
      if ( Buffer >= 0 )
        return 0LL;
      v10 = 749LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)Buffer,
      v11);
  }
  else
  {
    Buffer = wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x2E5,
               (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
               v7);
  }
  if ( this[10] )
  {
    RIMUnregisterForInput();
    CloseHandle(this[10]);
    this[10] = 0LL;
  }
  return (unsigned int)Buffer;
}
