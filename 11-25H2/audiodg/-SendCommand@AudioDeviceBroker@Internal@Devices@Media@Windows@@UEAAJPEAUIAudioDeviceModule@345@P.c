/*
 * XREFs of ?SendCommand@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@PEAUIBuffer@Streams@Storage@5@PEAPEAU7895@@Z @ 0x14007EF20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x1400192CC (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::SendCommand(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        struct Windows::Media::Devices::IAudioDeviceModule *a2,
        struct Windows::Storage::Streams::IBuffer *a3,
        struct Windows::Storage::Streams::IBuffer **a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned __int64 v9; // r9
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  if ( !a2 )
  {
    v7 = -2147024809;
    v8 = 1477LL;
LABEL_8:
    v9 = v7;
    goto LABEL_9;
  }
  if ( !a3 )
  {
    v7 = -2147024809;
    v8 = 1478LL;
    goto LABEL_8;
  }
  if ( !a4 )
  {
    v8 = 1479LL;
LABEL_7:
    v7 = -2147467261;
    goto LABEL_8;
  }
  wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=(&v13, *((_QWORD *)a2 + 12));
  if ( !v13 )
  {
    v8 = 1483LL;
    goto LABEL_7;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, struct Windows::Media::Devices::IAudioDeviceModule *, struct Windows::Storage::Streams::IBuffer *, struct Windows::Storage::Streams::IBuffer **))(*(_QWORD *)v13 + 56LL))(
          v13,
          a2,
          a3,
          a4);
  v7 = v10;
  if ( v10 >= 0 )
  {
    v7 = 0;
    goto LABEL_15;
  }
  v9 = (unsigned int)v10;
  v8 = 1486LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)v9);
LABEL_15:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v13);
  return v7;
}
