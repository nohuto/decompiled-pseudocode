/*
 * XREFs of ?SetIntegerProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x140103940
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z @ 0x1401026A4 (-RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z.c)
 *     ?GetSegmentCount@CGenericInkMarshaler@DirectComposition@@AEBAIXZ @ 0x140103D4C (-GetSegmentCount@CGenericInkMarshaler@DirectComposition@@AEBAIXZ.c)
 */

__int64 __fastcall DirectComposition::CGenericInkMarshaler::SetIntegerProperty(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  bool *v5; // r11
  __int64 v6; // r10
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  __int64 v11; // rax
  unsigned int SegmentCount; // eax
  __int64 v14; // rcx
  unsigned int v15; // r9d
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d

  v5 = a5;
  LODWORD(v6) = 0;
  *a5 = 0;
  v7 = a3 - 1;
  if ( !v7 )
  {
    if ( (unsigned __int64)(a4 - 1) > 0xFF )
      goto LABEL_9;
    v11 = *((_QWORD *)this + 17);
    if ( v11 )
    {
      if ( a4 == v11 )
        return (unsigned int)v6;
      goto LABEL_9;
    }
    *((_QWORD *)this + 17) = a4;
LABEL_12:
    *v5 = 1;
    return (unsigned int)v6;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    SegmentCount = DirectComposition::CGenericInkMarshaler::GetSegmentCount(this);
    if ( *(_QWORD *)(v14 + 136) == v6 || v15 > SegmentCount )
      goto LABEL_9;
    *(_DWORD *)(v14 + 16) &= ~0x40u;
    *(_DWORD *)(v14 + 144) = SegmentCount - v15;
    goto LABEL_12;
  }
  v9 = v8 - 2;
  if ( !v9 )
  {
    LODWORD(v6) = DirectComposition::CGenericInkMarshaler::RemoveSegmentsAtEnd(this, (unsigned int)a4, a5);
    return (unsigned int)v6;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    v16 = v10 - 2;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 3;
          if ( !v19 )
          {
            *((_DWORD *)this + 58) = a4;
            goto LABEL_24;
          }
          if ( v19 == 1 )
          {
            *((_DWORD *)this + 59) = a4;
LABEL_24:
            *((_DWORD *)this + 4) &= ~0x200u;
            goto LABEL_12;
          }
LABEL_9:
          LODWORD(v6) = -1073741811;
          return (unsigned int)v6;
        }
        *((_DWORD *)this + 44) = a4;
      }
      else
      {
        *((_DWORD *)this + 43) = a4;
      }
    }
    else
    {
      *((_DWORD *)this + 42) = a4;
    }
    *((_DWORD *)this + 4) &= ~0x80u;
    goto LABEL_12;
  }
  *((_DWORD *)this + 39) = a4;
  return (unsigned int)v6;
}
