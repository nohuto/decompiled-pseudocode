/*
 * XREFs of ?ArrangeCloneDisplays@CDWMDisplaySet@@AEAAJXZ @ 0x1800582D0
 * Callers:
 *     ?Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z @ 0x180056CBC (-Init@CDWMDisplaySet@@QEAAJPEBVCDWMDXGIEnumeration@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180098EE4 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CDWMDisplaySet::ArrangeCloneDisplays(CDWMDisplaySet *this)
{
  unsigned int v1; // ebp
  unsigned int v2; // r14d
  __int64 v3; // rdi
  CDWMDisplaySet *i; // r10
  __int64 v5; // r15
  __int64 v6; // r11
  _BYTE *v7; // rax
  __int64 k; // rdx
  __int64 v10; // r8
  __int64 j; // rbx
  __int64 v12; // rsi
  unsigned int v13; // [rsp+20h] [rbp-28h]

  v1 = *((_DWORD *)this + 16);
  v2 = 0;
  *((_DWORD *)this + 8) = 0;
  v3 = 0LL;
  for ( i = this; (unsigned int)v3 < v1; v3 = (unsigned int)(v3 + 1) )
  {
    v5 = *((_QWORD *)i + 5);
    v6 = *(_QWORD *)(v5 + 8 * v3);
    v7 = (_BYTE *)(v6 + 289);
    if ( *(_BYTE *)(v6 + 288) )
    {
      if ( !*v7 )
        goto LABEL_15;
      *((_DWORD *)i + 8) = v3;
    }
    if ( !*v7 )
    {
LABEL_15:
      for ( j = 0LL; (unsigned int)j < v1; j = (unsigned int)(j + 1) )
      {
        v12 = *(_QWORD *)(v5 + 8 * j);
        if ( *(_BYTE *)(v12 + 289)
          && (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(v6 + 56, v12 + 56) )
        {
          *(_QWORD *)(v6 + 88) = v12;
          goto LABEL_7;
        }
      }
      goto LABEL_7;
    }
    *(_QWORD *)(v6 + 88) = v6;
LABEL_7:
    v1 = *((_DWORD *)i + 16);
  }
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)i + 16); k = (unsigned int)(k + 1) )
  {
    v10 = *(_QWORD *)(*((_QWORD *)i + 5) + 8 * k);
    if ( !*(_QWORD *)(v10 + 88) )
    {
      v13 = 400;
      goto LABEL_23;
    }
    if ( *(_BYTE *)(v10 + 289) && *(_QWORD *)(v10 + 88) != v10 )
    {
      v13 = 412;
LABEL_23:
      v2 = -2003304291;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801068A0, 1LL, -2003304291, v13, 0LL);
      return v2;
    }
  }
  return v2;
}
