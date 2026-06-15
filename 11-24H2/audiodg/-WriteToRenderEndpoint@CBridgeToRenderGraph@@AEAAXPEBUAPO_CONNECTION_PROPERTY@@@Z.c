/*
 * XREFs of ?WriteToRenderEndpoint@CBridgeToRenderGraph@@AEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140034DB0
 * Callers:
 *     ?OnAudioPacket@CBridgeToRenderGraph@@UEAAXPEBUAE_CURRENT_POSITION@@PEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140034D40 (-OnAudioPacket@CBridgeToRenderGraph@@UEAAXPEBUAE_CURRENT_POSITION@@PEBUAPO_CONNECTION_PROPERTY@@.c)
 *     ?WriteToRenderEndpoint@CBridgeToRenderGraph@@AEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140034DB0 (-WriteToRenderEndpoint@CBridgeToRenderGraph@@AEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z.c)
 * Callees:
 *     ?WriteToRenderEndpoint@CBridgeToRenderGraph@@AEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140034DB0 (-WriteToRenderEndpoint@CBridgeToRenderGraph@@AEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 *     memcpy_0 @ 0x14005B481 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBridgeToRenderGraph::WriteToRenderEndpoint(
        CBridgeToRenderGraph *this,
        const struct APO_CONNECTION_PROPERTY *a2)
{
  __int64 v4; // rdx
  void *v5; // rax
  UINT_PTR v6; // rbx
  UINT32 v7; // eax
  __int64 v8; // rcx
  UINT32 v9; // eax
  UINT32 u32ValidFrameCount; // r15d
  int v11; // ebx
  __int64 v12; // rax
  const void *pBuffer; // rdi
  int v14; // ebx
  __int64 v15; // rax
  void *v16; // rdi
  unsigned int v17; // ebx
  const void *v18; // rax
  UINT32 v19; // eax
  __int64 v20; // rcx
  APO_CONNECTION_PROPERTY v21; // [rsp+20h] [rbp-20h] BYREF

  if ( !*((_BYTE *)this + 80) )
  {
    v9 = *((_DWORD *)this + 21);
    *(&v21.u32Signature + 1) = 0;
    v21.pBuffer = 0LL;
    v21.u32ValidFrameCount = v9;
    v21.u32BufferFlags = BUFFER_SILENT;
    v21.u32Signature = 1094930515;
    *((_BYTE *)this + 80) = 1;
    CBridgeToRenderGraph::WriteToRenderEndpoint(this, &v21);
  }
  if ( !*((_BYTE *)this + 81) )
    goto LABEL_4;
  u32ValidFrameCount = a2->u32ValidFrameCount;
  if ( u32ValidFrameCount + *((_DWORD *)this + 19) >= *((_DWORD *)this + 18) )
  {
    *((_BYTE *)this + 81) = 0;
LABEL_4:
    v4 = *((unsigned int *)this + 19);
    if ( (_DWORD)v4 )
    {
      v16 = (void *)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 6) + 24LL))(
                      *((_QWORD *)this + 6),
                      v4,
                      0LL);
      if ( v16 )
      {
        v17 = *((_DWORD *)this + 19) * *(unsigned __int16 *)(*((_QWORD *)this + 2) + 12LL);
        v18 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8));
        memcpy_0(v16, v18, v17);
        v19 = *((_DWORD *)this + 19);
        v20 = *((_QWORD *)this + 6);
        *(&v21.u32Signature + 1) = 0;
        v21.u32ValidFrameCount = v19;
        v21.u32BufferFlags = BUFFER_VALID;
        v21.pBuffer = (UINT_PTR)v16;
        v21.u32Signature = 1094930515;
        (*(void (__fastcall **)(__int64, APO_CONNECTION_PROPERTY *))(*(_QWORD *)v20 + 32LL))(v20, &v21);
        *((_DWORD *)this + 19) = 0;
      }
    }
    v5 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 6) + 24LL))(
                   *((_QWORD *)this + 6),
                   a2->u32ValidFrameCount,
                   0LL);
    v6 = (UINT_PTR)v5;
    if ( v5 )
    {
      if ( a2->pBuffer )
        memcpy_0(
          v5,
          (const void *)a2->pBuffer,
          a2->u32ValidFrameCount * *(unsigned __int16 *)(*((_QWORD *)this + 2) + 12LL));
      v7 = a2->u32ValidFrameCount;
      v8 = *((_QWORD *)this + 6);
      *(&v21.u32Signature + 1) = 0;
      v21.u32ValidFrameCount = v7;
      v21.u32BufferFlags = a2->u32BufferFlags;
      v21.pBuffer = v6;
      v21.u32Signature = 1094930515;
      (*(void (__fastcall **)(__int64, APO_CONNECTION_PROPERTY *))(*(_QWORD *)v8 + 32LL))(v8, &v21);
    }
    return;
  }
  if ( a2->u32BufferFlags == BUFFER_VALID )
  {
    pBuffer = (const void *)a2->pBuffer;
    v14 = *(unsigned __int16 *)(*((_QWORD *)this + 2) + 12LL);
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8));
    memcpy_0(
      (void *)(v15 + *((_DWORD *)this + 19) * (unsigned int)*(unsigned __int16 *)(*((_QWORD *)this + 2) + 12LL)),
      pBuffer,
      u32ValidFrameCount * v14);
  }
  else if ( a2->u32BufferFlags == BUFFER_SILENT )
  {
    v11 = *(unsigned __int16 *)(*((_QWORD *)this + 2) + 12LL);
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8));
    memset_0(
      (void *)(v12 + *((_DWORD *)this + 19) * (unsigned int)*(unsigned __int16 *)(*((_QWORD *)this + 2) + 12LL)),
      0,
      u32ValidFrameCount * v11);
  }
  *((_DWORD *)this + 19) += a2->u32ValidFrameCount;
}
