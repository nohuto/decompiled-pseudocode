/*
 * XREFs of ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x14030BCC0
 * Callers:
 *     ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x14030BADC (-AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

__int64 __fastcall MODE_UNION_LIST::AddMode(
        MODE_UNION_LIST *this,
        const struct _D3DKMT_DISPLAYMODE *a2,
        unsigned int a3,
        __int64 a4)
{
  _DWORD *v4; // r14
  __int64 v5; // rbp
  unsigned int v6; // eax
  unsigned int v8; // ecx
  const void **v10; // rdi
  _DWORD *v11; // rsi
  char *v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // esi
  unsigned __int64 v16; // rax
  void *v17; // rsi
  __int64 v18; // r9
  bool v19; // zf
  unsigned __int64 v20; // rax
  void *v21; // rax
  void *v22; // rsi
  const void *v23; // rdx
  __int64 v24; // rax
  const wchar_t *v25; // r9
  void *v26; // rcx

  v4 = (_DWORD *)((char *)this + 16);
  v5 = a3;
  v6 = *((_DWORD *)this + 4);
  v8 = *((_DWORD *)this + 6);
  *v4 = ++v6;
  v10 = (const void **)((char *)this + 8);
  if ( v6 <= v8 )
  {
    v11 = v4;
LABEL_3:
    v12 = (char *)*v10;
    v13 = 44LL * (unsigned int)(*v4 - 1);
    *(_OWORD *)&v12[v13] = *(_OWORD *)&a2->Width;
    *(_OWORD *)&v12[v13 + 16] = *(_OWORD *)&a2->RefreshRate.Numerator;
    *(_QWORD *)&v12[v13 + 32] = *(_QWORD *)&a2->DisplayFixedOutput;
    *(_DWORD *)&v12[v13 + 40] = *((_DWORD *)&a2->Flags + 1);
    if ( *((_BYTE *)this + 28) )
    {
      if ( *v11 - (int)v5 - 1 > 0 )
        memmove(
          (void *)(*((_QWORD *)this + 4) + 4 * v5 + 4),
          (const void *)(*((_QWORD *)this + 4) + 4 * v5),
          4LL * (*v11 - (int)v5 - 1));
      *(_DWORD *)(*((_QWORD *)this + 4) + 4 * v5) = *v11 - 1;
    }
    return 0;
  }
  v16 = 44LL * (v8 + 500);
  if ( !is_mul_ok(v8 + 500, 0x2CuLL) )
    v16 = -1LL;
  v17 = (void *)operator new[](v16, 0x4B677844u, 256LL, a4);
  if ( v17 )
  {
    if ( *v10 )
    {
      memmove(v17, *v10, 44LL * *((unsigned int *)this + 6));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)*v10);
    }
    v19 = *((_BYTE *)this + 28) == 0;
    *v10 = v17;
    if ( v19 )
      goto LABEL_21;
    v20 = 4LL * (unsigned int)(*((_DWORD *)this + 6) + 500);
    if ( !is_mul_ok((unsigned int)(*((_DWORD *)this + 6) + 500), 4uLL) )
      v20 = -1LL;
    v21 = (void *)operator new[](v20, 0x4B677844u, 256LL, v18);
    v22 = v21;
    if ( v21 )
    {
      v23 = (const void *)*((_QWORD *)this + 4);
      if ( v23 )
      {
        memmove(v21, v23, 4LL * *((unsigned int *)this + 6));
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 4));
      }
      *((_QWORD *)this + 4) = v22;
LABEL_21:
      *((_DWORD *)this + 6) += 500;
      v11 = (_DWORD *)((char *)this + 16);
      goto LABEL_3;
    }
    WdLogSingleEntry0(6LL);
    v24 = 1921LL;
    v25 = L"unable to allocate memory for display mode index.";
  }
  else
  {
    WdLogSingleEntry0(6LL);
    v24 = 1893LL;
    v25 = L"unable to allocate memory for display mode list.";
  }
  WdLogGlobalForLineNumber = v24;
  v14 = -1073741801;
  DxgkLogInternalTriageEvent(0LL, 262145, 0xFFFFFFFFLL, v25, v24, 0LL, 0LL, 0LL, 0LL);
  v26 = (void *)*((_QWORD *)this + 4);
  if ( v26 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v26);
    *((_QWORD *)this + 4) = 0LL;
  }
  if ( *v10 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)*v10);
    *v10 = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = 0;
  return v14;
}
