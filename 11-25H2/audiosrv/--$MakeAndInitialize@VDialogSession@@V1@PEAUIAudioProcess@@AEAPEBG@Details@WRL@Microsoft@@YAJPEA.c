/*
 * XREFs of ??$MakeAndInitialize@VDialogSession@@V1@PEAUIAudioProcess@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVDialogSession@@$$QEAPEAUIAudioProcess@@AEAPEBG@Z @ 0x1800F6030
 * Callers:
 *     ?RpcBeginDialogSession@@YAJPEBGPEAPEAVDialogSession@@@Z @ 0x1800F630C (-RpcBeginDialogSession@@YAJPEBGPEAPEAVDialogSession@@@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18007A618 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A6194 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@DialogSession@@QEAAJPEAUIAudioProcess@@PEBG@Z @ 0x1800F63BC (-RuntimeClassInitialize@DialogSession@@QEAAJPEAUIAudioProcess@@PEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<DialogSession,DialogSession,IAudioProcess *,unsigned short const * &>(
        _QWORD *a1,
        struct IAudioProcess **a2,
        const unsigned __int16 **a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // edi
  __int64 v9; // rax
  void *v11; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v11 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(v6);
    *v7 = &DialogSession::`vftable';
    v7[2] = 0LL;
    v7[3] = 0LL;
    *((_DWORD *)v7 + 8) = 0;
    v12 = v7;
    v11 = 0LL;
    v8 = DialogSession::RuntimeClassInitialize((DialogSession *)v7, *a2, *a3);
    v9 = *v7;
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *))(v9 + 8))(v7);
      *a1 = v7;
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v8 = 0;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *))(v9 + 16))(v7);
    }
  }
  else
  {
    v8 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v11);
  return (unsigned int)v8;
}
