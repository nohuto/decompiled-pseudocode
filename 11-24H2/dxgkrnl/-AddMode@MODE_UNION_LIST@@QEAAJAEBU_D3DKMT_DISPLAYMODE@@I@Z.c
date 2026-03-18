/*
 * XREFs of ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1402FC480
 * Callers:
 *     ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1402FC29C (-AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall MODE_UNION_LIST::AddMode(
        MODE_UNION_LIST *this,
        const struct _D3DKMT_DISPLAYMODE *a2,
        unsigned int a3)
{
  _DWORD *v3; // r14
  __int64 v4; // rbp
  unsigned int v5; // eax
  unsigned int v7; // ecx
  const void **v9; // rdi
  _DWORD *v10; // rsi
  char *v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // esi
  unsigned __int64 v15; // rax
  void *v16; // rsi
  bool v17; // zf
  unsigned __int64 v18; // rax
  void *v19; // rax
  void *v20; // rsi
  const void *v21; // rdx
  __int64 v22; // rax
  const wchar_t *v23; // r9
  void *v24; // rcx

  v3 = (_DWORD *)((char *)this + 16);
  v4 = a3;
  v5 = *((_DWORD *)this + 4);
  v7 = *((_DWORD *)this + 6);
  *v3 = ++v5;
  v9 = (const void **)((char *)this + 8);
  if ( v5 <= v7 )
  {
    v10 = v3;
LABEL_3:
    v11 = (char *)*v9;
    v12 = 44LL * (unsigned int)(*v3 - 1);
    *(_OWORD *)&v11[v12] = *(_OWORD *)&a2->Width;
    *(_OWORD *)&v11[v12 + 16] = *(_OWORD *)&a2->RefreshRate.Numerator;
    *(_QWORD *)&v11[v12 + 32] = *(_QWORD *)&a2->DisplayFixedOutput;
    *(_DWORD *)&v11[v12 + 40] = *((_DWORD *)&a2->Flags + 1);
    if ( *((_BYTE *)this + 28) )
    {
      if ( *v10 - (int)v4 - 1 > 0 )
        memmove(
          (void *)(*((_QWORD *)this + 4) + 4 * v4 + 4),
          (const void *)(*((_QWORD *)this + 4) + 4 * v4),
          4LL * (*v10 - (int)v4 - 1));
      *(_DWORD *)(*((_QWORD *)this + 4) + 4 * v4) = *v10 - 1;
    }
    return 0;
  }
  v15 = 44LL * (v7 + 500);
  if ( !is_mul_ok(v7 + 500, 0x2CuLL) )
    v15 = -1LL;
  v16 = (void *)operator new[](v15, 0x4B677844u, 256LL);
  if ( v16 )
  {
    if ( *v9 )
    {
      memmove(v16, *v9, 44LL * *((unsigned int *)this + 6));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)*v9);
    }
    v17 = *((_BYTE *)this + 28) == 0;
    *v9 = v16;
    if ( v17 )
      goto LABEL_21;
    v18 = 4LL * (unsigned int)(*((_DWORD *)this + 6) + 500);
    if ( !is_mul_ok((unsigned int)(*((_DWORD *)this + 6) + 500), 4uLL) )
      v18 = -1LL;
    v19 = (void *)operator new[](v18, 0x4B677844u, 256LL);
    v20 = v19;
    if ( v19 )
    {
      v21 = (const void *)*((_QWORD *)this + 4);
      if ( v21 )
      {
        memmove(v19, v21, 4LL * *((unsigned int *)this + 6));
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 4));
      }
      *((_QWORD *)this + 4) = v20;
LABEL_21:
      *((_DWORD *)this + 6) += 500;
      v10 = (_DWORD *)((char *)this + 16);
      goto LABEL_3;
    }
    WdLogSingleEntry0(6LL);
    v22 = 1921LL;
    v23 = L"unable to allocate memory for display mode index.";
  }
  else
  {
    WdLogSingleEntry0(6LL);
    v22 = 1893LL;
    v23 = L"unable to allocate memory for display mode list.";
  }
  WdLogGlobalForLineNumber = v22;
  v13 = -1073741801;
  DxgkLogInternalTriageEvent(0LL, 262145LL, 0xFFFFFFFFLL, v23, v22, 0LL, 0LL, 0LL, 0LL);
  v24 = (void *)*((_QWORD *)this + 4);
  if ( v24 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v24);
    *((_QWORD *)this + 4) = 0LL;
  }
  if ( *v9 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)*v9);
    *v9 = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = 0;
  return v13;
}
