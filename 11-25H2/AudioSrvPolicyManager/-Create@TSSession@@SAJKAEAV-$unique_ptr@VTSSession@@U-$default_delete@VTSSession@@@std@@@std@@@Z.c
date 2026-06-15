/*
 * XREFs of ?Create@TSSession@@SAJKAEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@Z @ 0x18004069C
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180041534 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCEndpointVolumeStateManager@@UIEndpointVolumeStateManager@@AEAPEAUIVolumeProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointVolumeStateManager@@AEAPEAUIVolumeProvider@@@Z @ 0x18001A848 (--$MakeAndInitialize@VCEndpointVolumeStateManager@@UIEndpointVolumeStateManager@@AEAPEAUIVolumeP.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002060C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$?4U?$default_delete@VTSSession@@@std@@$0A@@?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18003F224 (--$-4U-$default_delete@VTSSession@@@std@@$0A@@-$unique_ptr@VTSSession@@U-$default_delete@VTSSess.c)
 *     ??0TSSession@@AEAA@XZ @ 0x18003FA9C (--0TSSession@@AEAA@XZ.c)
 *     ??1?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@QEAA@XZ @ 0x18003FD80 (--1-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TSSession::Create(int a1, __int64 *a2)
{
  TSSession *v4; // rax
  const char *v5; // r9
  __int64 result; // rax
  CEndpointVolumeStateManager **v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  TSSession *v12; // [rsp+40h] [rbp+18h] BYREF
  struct IVolumeProvider *v13; // [rsp+48h] [rbp+20h] BYREF

  v4 = (TSSession *)operator new(0x460uLL, (const struct std::nothrow_t *)&std::nothrow);
  try
  {
    v12 = v4;
    if ( v4 )
      v4 = TSSession::TSSession(v4);
    v12 = v4;
    if ( v4 )
    {
      *(_DWORD *)v4 = a1;
      v7 = (CEndpointVolumeStateManager **)((char *)v4 + 1040);
      v8 = *((_QWORD *)v4 + 130);
      *((_QWORD *)v4 + 130) = 0LL;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v13 = g_VolumeProvider;
      v9 = Microsoft::WRL::Details::MakeAndInitialize<CEndpointVolumeStateManager,IEndpointVolumeStateManager,IVolumeProvider * &>(
             v7,
             (__int64 *)&v13);
      v10 = v9;
      if ( v9 >= 0 )
      {
        std::unique_ptr<TSSession>::operator=<std::default_delete<TSSession>,0>(a2, (__int64 *)&v12);
        std::unique_ptr<TSSession>::~unique_ptr<TSSession>(&v12);
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC1,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v9);
        std::unique_ptr<TSSession>::~unique_ptr<TSSession>(&v12);
        result = v10;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBE,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)0x8007000ELL);
      std::unique_ptr<TSSession>::~unique_ptr<TSSession>(&v12);
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC7,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                           v5);
  }
  return result;
}
