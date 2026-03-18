/*
 * XREFs of ?SetBufferProperty@CComponentTransform3DMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1400F7B10
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall DirectComposition::CComponentTransform3DMarshaler::SetBufferProperty(
        DirectComposition::CComponentTransform3DMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        size_t Size,
        bool *a6)
{
  unsigned int v6; // ebx
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  size_t v13; // r8
  __int64 v14; // rax
  char *v15; // rcx

  v6 = 0;
  v7 = a3 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 3;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              if ( v12 != 1 )
                return (unsigned int)-1073741811;
              v13 = Size;
              if ( Size != 64 )
                return (unsigned int)-1073741811;
              *((_DWORD *)this + 4) &= ~0x4000u;
              v14 = 148LL;
            }
            else
            {
              v13 = Size;
              if ( Size != 12 )
                return (unsigned int)-1073741811;
              *((_DWORD *)this + 4) &= ~0x2000u;
              v14 = 136LL;
            }
          }
          else
          {
            v13 = Size;
            if ( Size != 12 )
              return (unsigned int)-1073741811;
            *((_DWORD *)this + 4) &= ~0x1000u;
            v14 = 120LL;
          }
        }
        else
        {
          v13 = Size;
          if ( Size != 16 )
            return (unsigned int)-1073741811;
          *((_DWORD *)this + 4) &= ~0x400u;
          v14 = 104LL;
        }
      }
      else
      {
        v13 = Size;
        if ( Size != 12 )
          return (unsigned int)-1073741811;
        *((_DWORD *)this + 4) &= ~0x200u;
        v14 = 92LL;
      }
    }
    else
    {
      v13 = Size;
      if ( Size != 12 )
        return (unsigned int)-1073741811;
      *((_DWORD *)this + 4) &= ~0x80u;
      v14 = 72LL;
    }
  }
  else
  {
    v13 = Size;
    if ( Size != 8 )
      return (unsigned int)-1073741811;
    *((_DWORD *)this + 4) &= ~0x100u;
    v14 = 84LL;
  }
  v15 = (char *)this + v14;
  if ( !v15 )
    return (unsigned int)-1073741811;
  memmove(v15, a4, v13);
  *a6 = 1;
  return v6;
}
