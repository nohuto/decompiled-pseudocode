/*
 * XREFs of ?_Find_relative_path@filesystem@std@@YAPEBGQEBG0@Z @ 0x1800BC844
 * Callers:
 *     ?parent_path@path@filesystem@std@@QEBA?AV123@XZ @ 0x1800BC7A8 (-parent_path@path@filesystem@std@@QEBA-AV123@XZ.c)
 * Callees:
 *     <none>
 */

std::filesystem *__fastcall std::filesystem::_Find_relative_path(
        std::filesystem *this,
        char *a2,
        const unsigned __int16 *const a3)
{
  signed __int64 v3; // r8

  v3 = (a2 - (char *)this) >> 1;
  if ( v3 >= 2 )
  {
    if ( (*(_DWORD *)this & 0xFFFFFFDF) - 3801153 >= 0x1A )
    {
      if ( *(_WORD *)this == 92 || *(_WORD *)this == 47 )
      {
        if ( v3 >= 4 )
        {
          if ( (*((_WORD *)this + 3) == 92 || *((_WORD *)this + 3) == 47)
            && (v3 == 4 || *((_WORD *)this + 4) != 92 && *((_WORD *)this + 4) != 47)
            && ((*((_WORD *)this + 1) == 92 || *((_WORD *)this + 1) == 47)
             && (*((_WORD *)this + 2) == 63 || *((_WORD *)this + 2) == 46)
             || *((_WORD *)this + 1) == 63 && *((_WORD *)this + 2) == 63) )
          {
            this = (std::filesystem *)((char *)this + 6);
            goto LABEL_4;
          }
        }
        else if ( (unsigned __int64)((a2 - (char *)this) >> 1) < 3 )
        {
          goto LABEL_4;
        }
        if ( (*((_WORD *)this + 1) == 92 || *((_WORD *)this + 1) == 47)
          && *((_WORD *)this + 2) != 92
          && *((_WORD *)this + 2) != 47 )
        {
          for ( this = (std::filesystem *)((char *)this + 6);
                this != (std::filesystem *)a2 && *(_WORD *)this != 92 && *(_WORD *)this != 47;
                this = (std::filesystem *)((char *)this + 2) )
          {
            ;
          }
        }
      }
    }
    else
    {
      this = (std::filesystem *)((char *)this + 4);
    }
  }
LABEL_4:
  while ( this != (std::filesystem *)a2 && (*(_WORD *)this == 92 || *(_WORD *)this == 47) )
    this = (std::filesystem *)((char *)this + 2);
  return this;
}
