/*
 * XREFs of FsRtlFindFirstOverlappingSharedNode @ 0x1404279A0
 * Callers:
 *     FsRtlGetNextFileLock @ 0x14057D4E0 (FsRtlGetNextFileLock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlFindFirstOverlappingSharedNode(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        _BYTE *a5)
{
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx

  v7 = a1;
  v8 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  v9 = 0LL;
  if ( a1 )
  {
    do
    {
      v10 = *a2;
      v8 = v7 - 24;
      v11 = *(_QWORD **)(v7 - 24);
      if ( *(_QWORD *)(v7 - 24 + 16) >= *a2 && ((v12 = v11[1]) != 0 || v11[2]) )
      {
        if ( v12 <= *a3 && (*a3 != -1LL || v10) )
        {
          if ( v12 <= v10 )
            break;
          v9 = v7 - 24;
        }
        if ( a4 )
          *a4 = v7;
        if ( a5 )
          *a5 = 1;
        v7 = *(_QWORD *)(v7 + 8);
      }
      else
      {
        if ( v11[6] == *a3 && v11[1] == v10 )
          break;
        if ( a4 )
          *a4 = v7;
        if ( a5 )
          *a5 = 0;
        v7 = *(_QWORD *)(v7 + 16);
      }
    }
    while ( v7 );
  }
  if ( v7 )
    v9 = v8;
  v13 = v9 + 24;
  if ( !v9 )
    return 0LL;
  return v13;
}
