/*
 * XREFs of ?IsSubjectToSessionDisplayPolicyGain@CWindowsPolicyManager@@UEAAHPEAUIAudioStreamPolicyVolumeClient@@@Z @ 0x180028FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A130 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001778C (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::IsSubjectToSessionDisplayPolicyGain(
        CWindowsPolicyManager *this,
        struct IAudioStreamPolicyVolumeClient *a2)
{
  int v4; // r12d
  int v5; // esi
  int v6; // r14d
  unsigned int v7; // r15d
  int (__fastcall *v8)(struct IAudioStreamPolicyVolumeClient *, void (__fastcall ****)(_QWORD, GUID *, __int64 **)); // rax
  unsigned int v9; // ebx
  void (__fastcall **v10)(_QWORD, GUID *, __int64 **); // rax
  __int64 v11; // rax
  int v12; // eax
  __int64 *v14; // [rsp+20h] [rbp-10h] BYREF
  void (__fastcall ***v15)(_QWORD, GUID *, __int64 **); // [rsp+28h] [rbp-8h] BYREF
  int v16; // [rsp+78h] [rbp+48h]
  int v17; // [rsp+80h] [rbp+50h]
  volatile signed __int32 *v18; // [rsp+88h] [rbp+58h] BYREF

  v16 = 0;
  v17 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(struct IAudioStreamPolicyVolumeClient *))(*(_QWORD *)a2 + 56LL))(a2);
  v8 = *(int (__fastcall **)(struct IAudioStreamPolicyVolumeClient *, void (__fastcall ****)(_QWORD, GUID *, __int64 **)))(*(_QWORD *)a2 + 24LL);
  v15 = 0LL;
  v9 = 1;
  if ( v8(a2, &v15) >= 0 )
  {
    v10 = *v15;
    v14 = 0LL;
    (*v10)(v15, &GUID_2ea99478_7574_414c_8ba3_0c615b1716a4, &v14);
    v11 = *v14;
    v18 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, volatile signed __int32 **))(v11 + 24))(v14, &v18) >= 0 )
    {
      v16 = *((_DWORD *)v18 + 115);
      v17 = *((_DWORD *)v18 + 111);
      v4 = *((_DWORD *)v18 + 116);
      v5 = *(_DWORD *)(*((_QWORD *)v18 + 28) + 208LL) & 0x20;
    }
    if ( (*((_BYTE *)this + 52) & 3) == 3
      || (*((_BYTE *)this + 52) & 1) != 0
      && !(*(unsigned int (__fastcall **)(struct IAudioStreamPolicyVolumeClient *))(*(_QWORD *)a2 + 72LL))(a2)
      || (*((_BYTE *)this + 52) & 2) != 0
      && (*(unsigned int (__fastcall **)(struct IAudioStreamPolicyVolumeClient *))(*(_QWORD *)a2 + 72LL))(a2) == 1 )
    {
      v6 = 1;
    }
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v18);
    wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v14);
  }
  if ( v7 <= 0x13 && (v12 = 933936, _bittest(&v12, v7)) || v16 || v17 || v4 || v5 || v6 )
    v9 = 0;
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v15);
  return v9;
}
