/*
 * XREFs of ?GetSnapThumbnailLocation@CTopLevelWindow3D@@QEAA?AUtagRECT@@XZ @ 0x180098854
 * Callers:
 *     ?Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z @ 0x18007C3E0 (-Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z.c)
 *     ?AdjustSnapUIArrangementStartRect@CTopLevelWindow3D@@QEAA?AUD2D_POINTANDSIZE_F@@AEBU2@@Z @ 0x1800DB8B4 (-AdjustSnapUIArrangementStartRect@CTopLevelWindow3D@@QEAA-AUD2D_POINTANDSIZE_F@@AEBU2@@Z.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CTopLevelWindow3D::GetSnapThumbnailLocation(
        CTopLevelWindow3D *this,
        struct tagRECT *__return_ptr retstr)
{
  float v3; // xmm1_4
  LONG left; // r8d
  LONG top; // edx
  LONG v6; // r9d
  int v7; // eax
  LONG v8; // ecx

  v3 = *((float *)this + 147);
  *retstr = *(struct tagRECT *)(*((_QWORD *)this + 36) + 48LL);
  if ( v3 != 0.0 )
  {
    left = retstr->left;
    top = retstr->top;
    v6 = left + *((_DWORD *)this + 150);
    v7 = retstr->bottom - top;
    v8 = top + *((_DWORD *)this + 151);
    retstr->left = v6;
    retstr->top = v8;
    retstr->bottom = v8 + (int)(float)((float)v7 * v3);
    retstr->right = v6 + (int)(float)((float)(retstr->right - left) * v3);
  }
  return retstr;
}
