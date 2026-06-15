/*
 * XREFs of ?GetOta@CStreamInstance@@UEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x14006E530
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x140065E9C (--4-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV0.c)
 *     ?GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x14006C1B0 (-GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstance::GetOta(
        CStreamInstance *this,
        int a2,
        struct IAudioProtectedOutputController *a3,
        struct IAudioVirtualProtectedOutput **a4)
{
  int v6; // edx
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 *v10; // rdi
  __int64 v11; // rax
  int v12; // eax
  CPipeInstance *v13; // rcx
  int PlaybackProtectionApo; // eax
  __int64 (__fastcall *v15)(struct IAudioProtectedOutputController *, struct IAudioProcessingObject *, __int64 *); // rsi
  __int64 v16; // rcx
  int v17; // eax
  struct IAudioVirtualProtectedOutput *v18; // rax
  struct IAudioProcessingObject *v20; // [rsp+20h] [rbp-18h] BYREF
  __int64 v21[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v21[0] = 0LL;
  v6 = a2 - 1;
  if ( !v6 )
  {
    v10 = (__int64 *)((char *)this + 120);
    if ( !*((_QWORD *)this + 15) )
    {
      v20 = 0LL;
      v13 = (CPipeInstance *)*((_QWORD *)this + 10);
      if ( v13 )
      {
        PlaybackProtectionApo = CPipeInstance::GetPlaybackProtectionApo(v13, &v20);
        if ( PlaybackProtectionApo < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xDE,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
            (const char *)(unsigned int)PlaybackProtectionApo);
      }
      v15 = *(__int64 (__fastcall **)(struct IAudioProtectedOutputController *, struct IAudioProcessingObject *, __int64 *))(*(_QWORD *)a3 + 24LL);
      v16 = *v10;
      *v10 = 0LL;
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      v17 = v15(a3, v20, v10);
      v7 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE0,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
          (const char *)(unsigned int)v17);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v20);
        goto LABEL_18;
      }
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v20);
    }
    goto LABEL_17;
  }
  if ( v6 == 3 )
  {
    v10 = (__int64 *)((char *)this + 128);
    if ( !*((_QWORD *)this + 16) )
    {
      v11 = *(_QWORD *)a3;
      *v10 = 0LL;
      v12 = (*(__int64 (__fastcall **)(struct IAudioProtectedOutputController *, _QWORD, char *))(v11 + 24))(
              a3,
              0LL,
              (char *)this + 128);
      v7 = v12;
      if ( v12 < 0 )
      {
        v8 = (unsigned int)v12;
        v9 = 234LL;
        goto LABEL_7;
      }
    }
LABEL_17:
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::operator=(v21, v10);
    v18 = (struct IAudioVirtualProtectedOutput *)v21[0];
    v21[0] = 0LL;
    *a4 = v18;
    v7 = 0;
    goto LABEL_18;
  }
  v7 = -2147467263;
  v8 = 2147500033LL;
  v9 = 240LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
    (const char *)v8);
LABEL_18:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v21);
  return v7;
}
