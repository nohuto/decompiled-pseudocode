/*
 * XREFs of WmipMangleInstanceName @ 0x1409D040C
 * Callers:
 *     WmipBuildInstanceSet @ 0x1409D00F4 (WmipBuildInstanceSet.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14043FE9C (RtlStringCchCopyW.c)
 *     WmipFindGEByGuid @ 0x1409CD8B0 (WmipFindGEByGuid.c)
 *     WmipUnreferenceEntry @ 0x1409CE1D4 (WmipUnreferenceEntry.c)
 *     WmipFindISinGEbyName @ 0x1409D0B10 (WmipFindISinGEbyName.c)
 */

__int64 __fastcall WmipMangleInstanceName(__int64 a1, const wchar_t *a2, size_t a3, wchar_t *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // r10
  const wchar_t *v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rsi
  _QWORD *v11; // r11
  volatile signed __int64 *GEByGuid; // rbp
  __int64 v14; // rsi
  __int16 i; // di
  volatile signed __int64 *ISinGEbyName; // rax
  int v17; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  v17 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v7 = 0x7FFFFFFFLL;
  v8 = a2;
  do
  {
    if ( !*v8 )
      break;
    ++v8;
    --v7;
  }
  while ( v7 );
  v9 = v7 == 0 ? 0xC000000D : 0;
  v10 = (0x7FFFFFFF - v7) & -(__int64)(v7 != 0);
  if ( !v7 )
    return v9;
  RtlStringCchCopyW(a4, a3, a2);
  GEByGuid = WmipFindGEByGuid(v11, 0);
  if ( GEByGuid )
  {
    v14 = v10 - 1;
    for ( i = 90; ; a4[v14] = i )
    {
      ISinGEbyName = (volatile signed __int64 *)WmipFindISinGEbyName(GEByGuid, a4, &v17);
      if ( !ISinGEbyName )
        break;
      WmipUnreferenceEntry((__int64)&WmipISChunkInfo, ISinGEbyName);
      if ( i == 90 )
      {
        ++v14;
        i = 65;
        if ( v14 == a3 - 1 )
        {
          v4 = -1073741670;
          break;
        }
        a4[v14 + 1] = 0;
      }
      else
      {
        ++i;
      }
    }
    WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, GEByGuid);
  }
  return v4;
}
