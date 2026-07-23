/*
 * XREFs of _splitpath_s @ 0x18012B1B0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 *     strncpy_s @ 0x18012BD90 (strncpy_s.c)
 */

errno_t __cdecl splitpath_s(
        const char *FullPath,
        char *Drive,
        size_t DriveCount,
        char *Dir,
        size_t DirCount,
        char *Filename,
        size_t FilenameCount,
        char *Ext,
        size_t ExtCount)
{
  size_t v12; // rsi
  int v13; // ecx
  __int64 v14; // rax
  const char *v15; // rbx
  char v16; // al
  const char *v17; // rbp
  const char *v18; // rsi
  const char *v19; // rbx
  size_t v20; // rbx
  size_t v21; // rbx

  v12 = DriveCount;
  v13 = 0;
  if ( !FullPath )
    goto LABEL_4;
  if ( Drive )
  {
    if ( !DriveCount )
      goto LABEL_4;
  }
  else if ( DriveCount )
  {
LABEL_4:
    v13 = 1;
    goto LABEL_58;
  }
  if ( Dir )
  {
    if ( !DirCount )
      goto LABEL_4;
  }
  else if ( DirCount )
  {
    goto LABEL_4;
  }
  if ( Filename )
  {
    if ( !FilenameCount )
      goto LABEL_4;
  }
  else if ( FilenameCount )
  {
    goto LABEL_4;
  }
  if ( Ext )
  {
    if ( !ExtCount )
      goto LABEL_4;
  }
  else if ( ExtCount )
  {
    goto LABEL_4;
  }
  v14 = 1LL;
  v15 = FullPath;
  do
  {
    if ( !*v15 )
      break;
    ++v15;
    --v14;
  }
  while ( v14 );
  if ( *v15 == 58 )
  {
    if ( Drive )
    {
      if ( DriveCount < 3 )
        goto LABEL_59;
      strncpy_s(Drive, DriveCount, FullPath, 2uLL);
      v13 = 0;
    }
    FullPath = v15 + 1;
  }
  else if ( Drive )
  {
    *Drive = 0;
  }
  v16 = *FullPath;
  v17 = 0LL;
  v18 = 0LL;
  v19 = FullPath;
  if ( !*FullPath )
    goto LABEL_40;
  do
  {
    if ( v16 == 47 || v16 == 92 )
    {
      v17 = v19 + 1;
    }
    else if ( v16 == 46 )
    {
      v18 = v19;
    }
    v16 = *++v19;
  }
  while ( *v19 );
  if ( !v17 )
  {
LABEL_40:
    if ( Dir )
      *Dir = 0;
LABEL_42:
    if ( v18 && v18 >= FullPath )
    {
      if ( !Filename )
      {
LABEL_47:
        if ( !Ext )
          return 0;
        v20 = v19 - v18;
        if ( ExtCount > v20 )
        {
          strncpy_s(Ext, ExtCount, v18, v20);
          return 0;
        }
        goto LABEL_56;
      }
      if ( FilenameCount > v18 - FullPath )
      {
        strncpy_s(Filename, FilenameCount, FullPath, v18 - FullPath);
        goto LABEL_47;
      }
LABEL_56:
      v13 = 0;
      goto LABEL_57;
    }
    if ( Filename )
    {
      v21 = v19 - FullPath;
      if ( FilenameCount <= v21 )
        goto LABEL_56;
      strncpy_s(Filename, FilenameCount, FullPath, v21);
    }
    if ( Ext )
      *Ext = 0;
    return 0;
  }
  if ( !Dir )
  {
LABEL_39:
    FullPath = v17;
    goto LABEL_42;
  }
  if ( DirCount > v17 - FullPath )
  {
    strncpy_s(Dir, DirCount, FullPath, v17 - FullPath);
    goto LABEL_39;
  }
LABEL_57:
  v12 = DriveCount;
LABEL_58:
  if ( Drive )
  {
LABEL_59:
    if ( v12 )
      *Drive = 0;
  }
  if ( Dir && DirCount )
    *Dir = 0;
  if ( Filename && FilenameCount )
    *Filename = 0;
  if ( Ext && ExtCount )
    *Ext = 0;
  if ( FullPath && !v13 )
    return 34;
  invalid_parameter();
  return 22;
}
