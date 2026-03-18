/*
 * XREFs of ?TestModifyInternalPanelInfo@DISPLAY_MUX_MGR@@QEAAJXZ @ 0x140087FC8
 * Callers:
 *     DpiDrtModifyInternalPanelInfoCacheMux @ 0x140088464 (DpiDrtModifyInternalPanelInfoCacheMux.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DISPLAY_MUX_MGR::TestModifyInternalPanelInfo(DISPLAY_MUX_MGR *this)
{
  __int64 v2; // r8
  __int64 v3; // r10
  unsigned int v4; // r11d
  char *v6; // rdx
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  unsigned int v10; // eax

  if ( *((_BYTE *)this + 148) && *((_BYTE *)this + 149) )
  {
    v2 = *(unsigned int *)((char *)this + 158);
    if ( (unsigned int)v2 >= 0x10 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3657;
    }
    else
    {
      v3 = 0LL;
      if ( (_DWORD)v2 )
      {
        while ( 1 )
        {
          v4 = *(_DWORD *)((char *)this + 12 * v3 + 174);
          if ( v4 )
          {
            if ( (*(_DWORD *)((char *)this + 12 * v3 + 170) - *(_DWORD *)((char *)this + 12 * v3 + 166)) / v4 + 1 >= 4 )
              break;
          }
          v3 = (unsigned int)(v3 + 1);
          if ( (unsigned int)v3 >= (unsigned int)v2 )
            goto LABEL_8;
        }
        if ( (unsigned int)v2 > (unsigned int)v3 )
        {
          v6 = (char *)this + 12 * v2 + 166;
          do
          {
            v2 = (unsigned int)(v2 - 1);
            v7 = *(_DWORD *)((char *)this + 12 * v2 + 174);
            *(_QWORD *)v6 = *(_QWORD *)((char *)this + 12 * v2 + 166);
            *((_DWORD *)v6 + 2) = v7;
            v6 -= 12;
          }
          while ( (unsigned int)v2 > (unsigned int)v3 );
        }
        v8 = *(_DWORD *)((char *)this + 12 * v3 + 174);
        v9 = v8 + *(_DWORD *)((char *)this + 12 * v3 + 166);
        *(_DWORD *)((char *)this + 12 * v3 + 170) = v9;
        *(_DWORD *)((char *)this + 12 * (unsigned int)(v3 + 1) + 166) = v9 + v8;
        ++*(_DWORD *)((char *)this + 158);
        v10 = *(_DWORD *)((char *)this + 154);
        if ( (unsigned int)v3 < v10 )
          *(_DWORD *)((char *)this + 154) = v10 + 1;
        return 0LL;
      }
LABEL_8:
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3626;
    }
    return 3221225473LL;
  }
  return 0LL;
}
