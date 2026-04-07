/*
 * XREFs of ?v_ShouldIncludeInSnapshot@CDCompDesktopThumbnail@@UEAA_NPEAVCWindowData@@@Z @ 0x1800BC6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CDCompDesktopThumbnail::v_ShouldIncludeInSnapshot(CDCompDesktopThumbnail *this, struct CWindowData *a2)
{
  __int64 i; // r8
  __int64 v3; // r9

  if ( (*((_BYTE *)a2 + 740) & 1) != 0 )
    return 0;
  if ( *((_DWORD *)a2 + 140) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 140); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(*((_QWORD *)a2 + 67) + 8 * i);
      if ( *(_BYTE *)(v3 + 34) && *(_DWORD *)(v3 + 120) == 1 )
        return 0;
    }
  }
  return 1;
}
