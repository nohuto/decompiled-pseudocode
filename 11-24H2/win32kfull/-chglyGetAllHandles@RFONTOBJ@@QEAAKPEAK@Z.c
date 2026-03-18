/*
 * XREFs of ?chglyGetAllHandles@RFONTOBJ@@QEAAKPEAK@Z @ 0x1401F8C78
 * Callers:
 *     FONTOBJ_cGetAllGlyphHandles @ 0x140308A90 (FONTOBJ_cGetAllGlyphHandles.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::chglyGetAllHandles(RFONTOBJ *this, unsigned int *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax
  __int64 v4; // r9
  unsigned int i; // r11d
  unsigned __int16 *v6; // r10
  unsigned __int16 v7; // ax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 result; // rax
  unsigned int v11; // ecx
  unsigned int v12; // eax

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL);
  if ( *(_DWORD *)(v3 + 4) > 8u && (result = *(unsigned int *)(v3 + 200), (_DWORD)result) )
  {
    if ( a2 )
    {
      do
        *a2++ = v2++;
      while ( v2 < (unsigned int)result );
    }
  }
  else
  {
    v4 = *(_QWORD *)(*(_QWORD *)this + 472LL);
    if ( a2 )
    {
      for ( i = 0; i < *(_DWORD *)(v4 + 12); ++i )
      {
        v6 = (unsigned __int16 *)(v4 + 16 * (i + 1LL));
        v7 = v6[1];
        if ( *((_QWORD *)v6 + 1) )
        {
          v8 = 0;
          if ( v7 )
          {
            do
            {
              v9 = v8++;
              *a2++ = *(_DWORD *)(*((_QWORD *)v6 + 1) + 4 * v9);
            }
            while ( v8 < v6[1] );
          }
        }
        else
        {
          v11 = 0;
          if ( v7 )
          {
            do
            {
              v12 = v11 + *v6;
              ++v11;
              *a2++ = v12;
            }
            while ( v11 < v6[1] );
          }
        }
      }
    }
    return *(unsigned int *)(v4 + 8);
  }
  return result;
}
