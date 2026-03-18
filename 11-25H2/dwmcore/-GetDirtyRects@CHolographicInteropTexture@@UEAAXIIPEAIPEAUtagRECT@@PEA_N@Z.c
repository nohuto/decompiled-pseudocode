/*
 * XREFs of ?GetDirtyRects@CHolographicInteropTexture@@UEAAXIIPEAIPEAUtagRECT@@PEA_N@Z @ 0x1802DBF10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x180084360 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18019E7F0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1801CB910 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 */

void __fastcall CHolographicInteropTexture::GetDirtyRects(
        RTL_SRWLOCK *this,
        unsigned int a2,
        int a3,
        unsigned int *a4,
        struct tagRECT *a5,
        bool *a6)
{
  RTL_SRWLOCK *v6; // rbx
  __int64 v7; // rsi
  __int64 v11; // rsi
  unsigned int RectangleCount; // eax
  __int64 v13; // rbp
  LONG *p_bottom; // r11
  LONG *v15; // rcx
  LONG v16; // eax
  FastRegion::Internal::CRgnData *v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // r10
  char v20; // cl
  _BYTE v21[8]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-30h]
  LONG *v23; // [rsp+30h] [rbp-28h]
  FastRegion::Internal::CRgnData *v24; // [rsp+38h] [rbp-20h]
  int v25; // [rsp+40h] [rbp-18h]

  v6 = this + 280;
  v7 = a2;
  AcquireSRWLockShared(this + 280);
  if ( (unsigned int)v7 >= HIDWORD(this[259].Ptr) || a3 )
  {
    *a4 = 0;
    v20 = 1;
  }
  else
  {
    v11 = 96 * v7;
    RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)((char *)this[256].Ptr + v11 + 16));
    v13 = (int)RectangleCount;
    if ( RectangleCount <= *a4 )
    {
      *a4 = RectangleCount;
      FastRegion::Internal::CRgnData::BeginIterator(
        *(FastRegion::Internal::CRgnData **)((char *)this[256].Ptr + v11 + 16),
        (struct FastRegion::CRegion::Iterator *)v21);
      if ( a5 < &a5[v13] )
      {
        p_bottom = &a5->bottom;
        do
        {
          v15 = v23;
          if ( (unsigned __int64)v23 >= v22 )
            break;
          *(p_bottom - 2) = *v23;
          v16 = v15[2];
          v17 = v24;
          *p_bottom = v16;
          v18 = 2 * v25;
          *(p_bottom - 3) = *((_DWORD *)v17 + v18);
          *(p_bottom - 1) = *((_DWORD *)v17 + v18 + 1);
          FastRegion::Internal::CRgnData::StepIterator(v17, (struct FastRegion::CRegion::Iterator *)v21);
        }
        while ( (unsigned __int64)(p_bottom - 3) < v19 );
      }
    }
    v20 = *((_BYTE *)this[256].Ptr + v11 + 88);
  }
  *a6 = v20;
  ReleaseSRWLockShared(v6);
}
