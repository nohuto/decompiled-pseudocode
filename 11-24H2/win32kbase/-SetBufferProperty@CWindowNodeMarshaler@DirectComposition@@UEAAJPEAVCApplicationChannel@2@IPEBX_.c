/*
 * XREFs of ?SetBufferProperty@CWindowNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1400F9D70
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140075AB0 (-SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA.c)
 */

__int64 __fastcall DirectComposition::CWindowNodeMarshaler::SetBufferProperty(
        DirectComposition::CWindowNodeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // r10d
  __int128 v7; // xmm0
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // rax
  __int128 v17; // xmm0

  v6 = 0;
  *a6 = 0;
  if ( a3 > 0x3F )
  {
    switch ( a3 )
    {
      case '@':
        if ( a4 && a5 == 16 )
        {
          v17 = *(_OWORD *)a4;
          *((_DWORD *)this + 92) |= 0x1000u;
          *(_OWORD *)((char *)this + 488) = v17;
          goto LABEL_9;
        }
        return (unsigned int)-1073741811;
      case 'A':
        if ( a4 && a5 == 16 )
        {
          v11 = *(_OWORD *)a4;
          *((_DWORD *)this + 92) |= 0x2000u;
          *(_OWORD *)((char *)this + 504) = v11;
          goto LABEL_9;
        }
        return (unsigned int)-1073741811;
      case 'D':
        if ( a4 && a5 == 8 )
        {
          v15 = *(_QWORD *)a4;
          *((_DWORD *)this + 92) |= 0x10000u;
          *((_QWORD *)this + 67) = v15;
          goto LABEL_9;
        }
        return (unsigned int)-1073741811;
      case 'E':
        if ( a4 && a5 == 8 )
        {
          v16 = *(_QWORD *)a4;
          *((_DWORD *)this + 92) |= 0x20000u;
          *((_QWORD *)this + 68) = v16;
          goto LABEL_9;
        }
        return (unsigned int)-1073741811;
    }
    return (unsigned int)DirectComposition::CVisualMarshaler::SetBufferProperty(this, a2, a3, a4, a5, a6);
  }
  switch ( a3 )
  {
    case '?':
      if ( a4 && a5 == 16 )
      {
        v14 = *(_OWORD *)a4;
        *((_DWORD *)this + 92) |= 0x800u;
        *(_OWORD *)((char *)this + 468) = v14;
        goto LABEL_9;
      }
      return (unsigned int)-1073741811;
    case '4':
      if ( a4 && a5 == 16 )
      {
        v13 = *(_OWORD *)a4;
        *((_DWORD *)this + 92) |= 1u;
        *(_OWORD *)((char *)this + 372) = v13;
        goto LABEL_9;
      }
      return (unsigned int)-1073741811;
    case '5':
      if ( a4 && a5 == 16 )
      {
        v10 = *(_OWORD *)a4;
        *((_DWORD *)this + 92) |= 2u;
        *(_OWORD *)((char *)this + 388) = v10;
        goto LABEL_9;
      }
      return (unsigned int)-1073741811;
  }
  if ( a3 != 54 )
  {
    if ( a3 == 55 )
    {
      if ( a4 && a5 == 8 )
      {
        v9 = *(_QWORD *)a4;
        *((_DWORD *)this + 92) |= 8u;
        *(_QWORD *)((char *)this + 420) = v9;
        goto LABEL_9;
      }
      return (unsigned int)-1073741811;
    }
    if ( a3 == 56 )
    {
      if ( a4 && a5 == 16 )
      {
        v12 = *(_OWORD *)a4;
        *((_DWORD *)this + 92) |= 0x10u;
        *(_OWORD *)((char *)this + 428) = v12;
        goto LABEL_9;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)DirectComposition::CVisualMarshaler::SetBufferProperty(this, a2, a3, a4, a5, a6);
  }
  if ( !a4 || a5 != 16 )
    return (unsigned int)-1073741811;
  v7 = *(_OWORD *)a4;
  *((_DWORD *)this + 92) |= 4u;
  *(_OWORD *)((char *)this + 404) = v7;
LABEL_9:
  *a6 = 1;
  return v6;
}
