/*
 * XREFs of ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ @ 0x180029F58
 * Callers:
 *     ?Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z @ 0x180028DD8 (-Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800BF48C (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CDWMDisplaySet::ArrangeCloneDisplays(CDWMDisplaySet *this)
{
  unsigned int v1; // edx
  unsigned int v2; // r14d
  __int64 v3; // rbp
  CDWMDisplaySet *v4; // r10
  unsigned int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v9; // r15
  __int64 v10; // rbx
  _BYTE *v11; // rax
  __int64 v12; // r11
  __int64 v13; // rdi
  unsigned int v14; // [rsp+20h] [rbp-28h]

  v1 = *((_DWORD *)this + 16);
  v2 = 0;
  *((_DWORD *)this + 8) = 0;
  v3 = 0LL;
  v4 = this;
  if ( v1 )
  {
    v5 = v1;
    do
    {
      v9 = *((_QWORD *)v4 + 5);
      v10 = *(_QWORD *)(v9 + 8 * v3);
      v11 = (_BYTE *)(v10 + 269);
      if ( *(_BYTE *)(v10 + 268) && *v11 )
        *((_DWORD *)v4 + 8) = v3;
      else
        v5 = v1;
      if ( *v11 )
      {
        *(_QWORD *)(v10 + 88) = v10;
      }
      else
      {
        v12 = 0LL;
        if ( v5 )
        {
          while ( 1 )
          {
            v13 = *(_QWORD *)(v9 + 8 * v12);
            if ( *(_BYTE *)(v13 + 269) )
            {
              if ( (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                                      v10 + 56,
                                      v13 + 56) )
                break;
            }
            v12 = (unsigned int)(v12 + 1);
            if ( (unsigned int)v12 >= v5 )
              goto LABEL_5;
          }
          *(_QWORD *)(v10 + 88) = v13;
        }
      }
LABEL_5:
      v1 = *((_DWORD *)v4 + 16);
      v3 = (unsigned int)(v3 + 1);
      v5 = v1;
    }
    while ( (unsigned int)v3 < v1 );
    v6 = 0LL;
    if ( v1 )
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(*((_QWORD *)v4 + 5) + 8 * v6);
        if ( !*(_QWORD *)(v7 + 88) )
          break;
        if ( *(_BYTE *)(v7 + 269) && *(_QWORD *)(v7 + 88) != v7 )
        {
          v14 = 414;
          goto LABEL_24;
        }
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= v1 )
          return v2;
      }
      v14 = 402;
LABEL_24:
      v2 = -2003304291;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18011F7F0, 1u, -2003304291, v14, 0LL);
    }
  }
  return v2;
}
