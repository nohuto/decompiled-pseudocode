/*
 * XREFs of ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x140325D54
 * Callers:
 *     ?GrepDrawEscape@@YAHAEAVXDCOBJ@@HAEBV?$umptr_r@D@@@Z @ 0x14032669C (-GrepDrawEscape@@YAHAEAVXDCOBJ@@HAEBV-$umptr_r@D@@@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140326F78 (-iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 *     ?SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x140329880 (-SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ??1BMPDEVOPEN@@QEAA@XZ @ 0x1402FA978 (--1BMPDEVOPEN@@QEAA@XZ.c)
 *     ?bBmpUndoMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1402FC5DC (-bBmpUndoMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x1402FCAC4 (--1REDIROPEN@@QEAA@XZ.c)
 *     ?bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1402FE9E0 (-bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 *     vSpUnTearDownSprites @ 0x14032F3B0 (vSpUnTearDownSprites.c)
 */

void __fastcall DEVEXCLUDERECT::~DEVEXCLUDERECT(DEVEXCLUDERECT *this, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 *v4; // rsi
  __int64 SessionState; // rax
  __int64 v6; // rdx
  struct SURFACE *v7; // rcx
  __int64 *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  struct SURFACE *v11; // rcx
  char *v12; // rsi
  __int64 v13; // rdi
  struct SURFACE *v14; // [rsp+30h] [rbp+8h] BYREF
  struct SURFACE *v15; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( *(_DWORD *)this )
  {
    v4 = (__int64 *)*((_QWORD *)this + 4);
    v15 = 0LL;
    SessionState = W32GetSessionState((_DWORD)this, a2);
    if ( v4 )
    {
      v6 = *v4;
      if ( (*(_DWORD *)(*v4 + 36) & 0x4000) != 0 )
      {
        v7 = *(struct SURFACE **)(*(_QWORD *)(SessionState + 96) + 4728LL);
        if ( *(struct SURFACE **)(v6 + 48) == v7 )
        {
          v7 = *(struct SURFACE **)(v6 + 496);
          v15 = v7;
          if ( v7 )
            bUndoMakeOpaque(v7, v6);
        }
      }
    }
    v8 = (__int64 *)*((_QWORD *)this + 4);
    v14 = 0LL;
    v9 = W32GetSessionState((_DWORD)v7, v6);
    if ( v8 )
    {
      v10 = *v8;
      if ( (*(_DWORD *)(*v8 + 36) & 0x4000) != 0 && *(_QWORD *)(v10 + 48) == *(_QWORD *)(*(_QWORD *)(v9 + 96) + 8LL) )
      {
        v11 = *(struct SURFACE **)(v10 + 496);
        v14 = v11;
        if ( v11 )
          bBmpUndoMakeOpaque(v11, v10);
      }
    }
    v12 = (char *)this + 16;
    v13 = *((_QWORD *)this + 1);
    if ( *(_DWORD *)(v13 + 140) )
    {
      do
        vSpUnTearDownSprites(*(_QWORD *)(*(_QWORD *)(v13 + 144) + 8LL * v2++), v12, 0LL);
      while ( v2 < *(_DWORD *)(v13 + 140) );
    }
    else
    {
      vSpUnTearDownSprites(v13, v12, 0LL);
    }
    BMPDEVOPEN::~BMPDEVOPEN(&v14);
    REDIROPEN::~REDIROPEN(&v15);
  }
}
