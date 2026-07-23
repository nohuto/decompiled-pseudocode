/*
 * XREFs of WmipDetermineInstanceBaseIndex @ 0x1409AFE8C
 * Callers:
 *     WmipBuildInstanceSet @ 0x1409B053C (WmipBuildInstanceSet.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     WmipFindGEByGuid @ 0x1409B2884 (WmipFindGEByGuid.c)
 *     WmipUnreferenceEntry @ 0x1409B31A8 (WmipUnreferenceEntry.c)
 */

__int64 __fastcall WmipDetermineInstanceBaseIndex(__int64 a1, char *a2)
{
  unsigned int v4; // edi
  __int64 GEByGuid; // rax
  __int64 v6; // r11
  __int64 v7; // r8
  __int64 *i; // rdx
  int v9; // r10d
  int v10; // ecx
  unsigned __int16 *v11; // rax
  _DWORD *v12; // rbx

  v4 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  GEByGuid = WmipFindGEByGuid(a1, 0LL);
  v6 = GEByGuid;
  if ( GEByGuid )
  {
    v7 = GEByGuid + 56;
    for ( i = *(__int64 **)(GEByGuid + 56); i != (__int64 *)v7; i = (__int64 *)*i )
    {
      if ( (i[2] & 1) != 0 )
      {
        v12 = (_DWORD *)i[11];
        v11 = (unsigned __int16 *)a2;
        do
        {
          v9 = *(unsigned __int16 *)((char *)v11 + (char *)(v12 + 1) - a2);
          v10 = *v11 - v9;
          if ( v10 )
            break;
          ++v11;
        }
        while ( v9 );
        if ( !v10 && v4 <= *v12 + *((_DWORD *)i + 18) )
          v4 = *v12 + *((_DWORD *)i + 18);
      }
    }
    WmipUnreferenceEntry(&WmipGEChunkInfo, v6);
  }
  KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  return v4;
}
