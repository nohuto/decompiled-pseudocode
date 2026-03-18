/*
 * XREFs of ?ReleaseResources@CHolographicInteropTexture@@QEAAXXZ @ 0x1802D3328
 * Callers:
 *     ?ReleaseInteropTextures@CHolographicManager@@QEAAXXZ @ 0x1802CFAB4 (-ReleaseInteropTextures@CHolographicManager@@QEAAXXZ.c)
 *     ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802D2810 (-DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z @ 0x1802D2904 (-EnsureRenderBuffers@CHolographicInteropTexture@@QEAAJPEAVCD3DDevice@@W4DXGI_FORMAT@@@Z.c)
 *     ?ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION@@@Z @ 0x1802D3138 (-ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPH.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1801C7BD0 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CHolographicInteropTexture::ReleaseResources(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  _DWORD *v3; // r14
  __int64 i; // rdi
  _QWORD *Ptr; // rbp
  __int64 v6; // r15
  __int64 v7; // rcx
  void *v8; // rcx
  char *v9; // rcx
  char *v10; // rdi

  v1 = this + 290;
  AcquireSRWLockExclusive(this + 290);
  v3 = (_DWORD *)&this[269].Ptr + 1;
  if ( this[266].Ptr )
  {
    for ( i = 0LL; (unsigned int)i < *v3; i = (unsigned int)(i + 1) )
    {
      Ptr = this[266].Ptr;
      v6 = 96 * i;
      v7 = Ptr[12 * i];
      if ( v7 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        Ptr[(unsigned __int64)v6 / 8] = 0LL;
      }
      v8 = *(void **)((char *)this[266].Ptr + v6 + 8);
      if ( v8 )
      {
        CloseHandle(v8);
        *(_QWORD *)((char *)this[266].Ptr + v6 + 8) = 0LL;
      }
    }
    v9 = (char *)this[266].Ptr;
    if ( v9 )
    {
      v10 = v9 - 8;
      `vector destructor iterator'(
        v9,
        96LL,
        *((_QWORD *)v9 - 1),
        (void (__fastcall *)(char *))CHolographicInteropTexture::RenderBuffer::~RenderBuffer);
      operator delete(v10);
    }
    this[266].Ptr = 0LL;
  }
  *v3 = 0;
  BYTE1(this[269].Ptr) = 0;
  ReleaseSRWLockExclusive(v1);
}
