/*
 * XREFs of ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1401B6EC0
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1401B4C34 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1401B5748 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 * Callees:
 *     ?GetScreenRect@@YA?AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z @ 0x1402A3478 (-GetScreenRect@@YA-AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z.c)
 */

__int64 __fastcall TTBetterTarget(
        struct tagWND *a1,
        int a2,
        struct tagPNTRWINDOWHITTTESTARGS *a3,
        struct tagRECT *a4,
        __int16 a5)
{
  unsigned int v5; // edi
  struct tagRECT v9; // xmm5
  LONG left; // eax
  LONG v11; // r9d
  LONG right; // ecx
  LONG v13; // eax
  LONG top; // edx
  LONG bottom; // ecx
  LONG v16; // eax
  const struct _D3DMATRIX *v17; // r8
  int v18; // edx
  struct tagRECT v19; // xmm5
  const struct _D3DMATRIX *v20; // r8
  int v21; // edx
  struct tagRECT v22; // xmm5
  const struct _D3DMATRIX *v23; // r8
  int v24; // edx
  struct tagRECT v25; // xmm5
  const struct _D3DMATRIX *v26; // r8
  int v27; // edx
  struct tagRECT v29; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT v30; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v31; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v32; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT v33; // [rsp+60h] [rbp-10h] BYREF

  v5 = 0;
  v9 = *(struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  v29 = v9;
  if ( a4 )
  {
    left = a4->left;
    v11 = v29.left;
    right = v29.right;
    if ( v29.left <= left )
      v11 = left;
    v13 = a4->right;
    v29.left = v11;
    if ( v29.right >= v13 )
      right = v13;
    v29.right = right;
    if ( v11 >= right )
      return 0LL;
    top = v29.top;
    bottom = v29.bottom;
    if ( v29.top <= a4->top )
      top = a4->top;
    v16 = a4->bottom;
    v29.top = top;
    if ( v29.bottom >= v16 )
      bottom = v16;
    v29.bottom = bottom;
    if ( top >= bottom )
      return 0LL;
    v9 = v29;
  }
  if ( !*((_QWORD *)a3 + 7) )
    return 1;
  if ( a2 + (a5 != 3 ? 0xFFF : 0) < (unsigned int)(*((_DWORD *)a3 + 16) + ((*((_DWORD *)a3 + 44) & 2) == 0 ? 0xFFF : 0)) )
  {
    v17 = (const struct _D3DMATRIX *)*((_QWORD *)a3 + 12);
    v18 = *((_DWORD *)a3 + 21);
    v29 = v9;
    if ( GetScreenRect(&v30, v18, v17, &v29)->left >= *((_DWORD *)a3 + 19) )
      return 1;
    v20 = (const struct _D3DMATRIX *)*((_QWORD *)a3 + 12);
    v21 = *((_DWORD *)a3 + 21);
    v29 = v19;
    if ( *((_DWORD *)a3 + 17) >= GetScreenRect(&v31, v21, v20, &v29)->right )
      return 1;
    v23 = (const struct _D3DMATRIX *)*((_QWORD *)a3 + 12);
    v24 = *((_DWORD *)a3 + 21);
    v29 = v22;
    if ( (int)HIDWORD(*(_QWORD *)&GetScreenRect(&v32, v24, v23, &v29)->left) >= *((_DWORD *)a3 + 20) )
      return 1;
    v26 = (const struct _D3DMATRIX *)*((_QWORD *)a3 + 12);
    v27 = *((_DWORD *)a3 + 21);
    v29 = v25;
    if ( *((_DWORD *)a3 + 18) >= (int)HIDWORD(*(_QWORD *)&GetScreenRect(&v33, v27, v26, &v29)->right)
      || (*((_DWORD *)a3 + 44) & 1) != 0 )
    {
      return 1;
    }
  }
  return v5;
}
