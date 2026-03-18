/*
 * XREFs of TransformRegionBetweenCoordinateSpaces @ 0x1401BE6FC
 * Callers:
 *     ?RectInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagRECT@@@Z @ 0x1401BE634 (-RectInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagRECT@@@Z.c)
 *     ?PtInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagPOINT@@@Z @ 0x1402DC3D4 (-PtInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagPOINT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall TransformRegionBetweenCoordinateSpaces(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbp
  unsigned int v4; // esi
  int RegionData; // eax
  unsigned int v8; // edi
  __int64 v9; // rax
  _DWORD *v10; // rbx
  _QWORD *v11; // r14
  unsigned int v12; // ebp
  __int64 RectRgn; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r15
  __int128 v21; // [rsp+30h] [rbp-58h] BYREF

  v3 = *a3;
  v4 = 0;
  if ( (unsigned __int64)*a3 > 2
    && (((unsigned __int16)(*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(a2 + 40) + 288LL) >> 8)) & 0x1FF) != 0 )
  {
    RegionData = GreGetRegionData(v3, 0LL, 0LL);
    v8 = RegionData;
    if ( RegionData > 0 )
    {
      v9 = Win32AllocPoolZInit(RegionData, 1919775573LL);
      v10 = (_DWORD *)v9;
      if ( v9 )
      {
        if ( (unsigned int)GreGetRegionData(v3, v8, v9) )
        {
          v11 = v10 + 8;
          v21 = 0LL;
          v12 = 0;
          RectRgn = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
          if ( !v10[2] )
            goto LABEL_14;
          do
          {
            TransformRectBetweenCoordinateSpaces(&v21, v11, a1, a2);
            v16 = v21 - *v11;
            if ( (_QWORD)v21 == *v11 )
              v16 = *((_QWORD *)&v21 + 1) - v11[1];
            v4 |= v16 != 0;
            v17 = GreCreateRectRgnIndirect(&v21, v14, v15);
            v18 = v17;
            if ( v17 )
            {
              GreCombineRgn(RectRgn, RectRgn, v17, 2LL);
              GreDeleteObject(v18);
            }
            v11 += 2;
            ++v12;
          }
          while ( v12 < v10[2] );
          if ( v4 )
            *a3 = RectRgn;
          else
LABEL_14:
            GreDeleteObject(RectRgn);
        }
        Win32FreePool(v10);
      }
    }
  }
  return v4;
}
