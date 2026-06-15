/*
 * XREFs of ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAUIStreamInstanceInternal@@_JKW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@11U_GUID@@@Z @ 0x14006E368
 * Callers:
 *     ?CreateExclusiveModeStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14006DF30 (-CreateExclusiveModeStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUD.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCStreamInstance@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003AB64 (-CreateInstance@-$CComCreator@V-$CComObject@VCStreamInstance@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamInstance::CreateStreamInstance(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int128 *a9)
{
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int128 v19; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  _QWORD *v21; // [rsp+80h] [rbp+8h] BYREF

  *a1 = 0LL;
  v21 = 0LL;
  v13 = ATL::CComCreator<ATL::CComObject<CStreamInstance>>::CreateInstance(
          (__int64)a1,
          (__int64)&GUID_715c22ff_b7d8_425e_9db8_ad78c623b67e,
          &v21);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v16 = *v21;
    v19 = *a9;
    v13 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD, __int128 *, __int64))(v16 + 144))(
            v21,
            a3,
            a4,
            a5,
            0LL,
            0LL,
            0LL,
            &v19,
            a2);
    v14 = v13;
    if ( v13 >= 0 )
    {
      v17 = v21;
      v21 = 0LL;
      *a1 = v17;
      v14 = 0;
      goto LABEL_7;
    }
    v15 = 102LL;
  }
  else
  {
    v15 = 100LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
    (const char *)(unsigned int)v13);
LABEL_7:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v21);
  return v14;
}
