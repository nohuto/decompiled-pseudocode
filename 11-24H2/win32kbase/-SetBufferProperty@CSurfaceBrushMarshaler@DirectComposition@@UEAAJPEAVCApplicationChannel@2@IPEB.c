/*
 * XREFs of ?SetBufferProperty@CSurfaceBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14000BF50
 * Callers:
 *     <none>
 * Callees:
 *     UnionRect @ 0x14000C078 (UnionRect.c)
 */

__int64 __fastcall DirectComposition::CSurfaceBrushMarshaler::SetBufferProperty(
        DirectComposition::CSurfaceBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        char *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  __int64 v12; // rax
  __int64 i; // rax
  __int128 v14; // xmm0
  char v16; // al
  char v17; // al

  v6 = 0;
  *a6 = 0;
  v8 = a3 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      if ( a4 && a5 == 16 )
      {
        if ( !*((_BYTE *)this + 139) )
          return v6;
        UnionRect((char *)this + 104, (char *)this + 104);
        *((_DWORD *)this + 4) |= 0x20u;
        goto LABEL_17;
      }
      return (unsigned int)-1073741811;
    }
    v10 = v9 - 6;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          if ( a4 )
          {
            if ( a5 == 1 )
            {
              if ( *a4 )
              {
                v12 = *((_QWORD *)this + 9);
                if ( v12 )
                {
                  for ( i = *(unsigned int *)(v12 + 36); (unsigned int)i < 0xC2; LODWORD(i) = dword_140270F80[i] )
                  {
                    if ( (_DWORD)i == 42 )
                    {
                      *((_BYTE *)this + 138) = 1;
                      return v6;
                    }
                  }
                }
              }
            }
          }
        }
        return (unsigned int)-1073741811;
      }
      if ( a4 && a5 == 1 )
      {
        v17 = *a4;
        *((_DWORD *)this + 4) |= 0x1000u;
        *((_BYTE *)this + 137) = v17;
        goto LABEL_17;
      }
      return (unsigned int)-1073741811;
    }
    if ( !a4 || a5 != 1 )
      return (unsigned int)-1073741811;
    v16 = *a4;
    *((_DWORD *)this + 4) |= 0x800u;
    *((_BYTE *)this + 136) = v16;
  }
  else
  {
    if ( !a4 || a5 != 16 )
      return (unsigned int)-1073741811;
    v14 = *(_OWORD *)a4;
    *((_DWORD *)this + 4) |= 0x20u;
    *(_OWORD *)((char *)this + 88) = v14;
  }
LABEL_17:
  *a6 = 1;
  return v6;
}
