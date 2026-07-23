/*
 * XREFs of WmipMangleInstanceName @ 0x1409B0854
 * Callers:
 *     WmipBuildInstanceSet @ 0x1409B053C (WmipBuildInstanceSet.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     WmipFindISinGEbyName @ 0x1409AFB60 (WmipFindISinGEbyName.c)
 *     WmipFindGEByGuid @ 0x1409B2884 (WmipFindGEByGuid.c)
 *     WmipUnreferenceEntry @ 0x1409B31A8 (WmipUnreferenceEntry.c)
 */

__int64 __fastcall WmipMangleInstanceName(__int64 a1, const wchar_t *a2, size_t a3, wchar_t *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // r10
  const wchar_t *v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rsi
  __int64 v11; // r11
  __int64 GEByGuid; // rbp
  __int64 v14; // rsi
  __int16 i; // di
  ULONG_PTR ISinGEbyName; // rax
  unsigned int v17; // [rsp+58h] [rbp+10h] BYREF

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
  GEByGuid = WmipFindGEByGuid(v11, 0LL);
  if ( GEByGuid )
  {
    v14 = v10 - 1;
    for ( i = 90; ; a4[v14] = i )
    {
      ISinGEbyName = WmipFindISinGEbyName(GEByGuid, a4, &v17);
      if ( !ISinGEbyName )
        break;
      WmipUnreferenceEntry(&WmipISChunkInfo, ISinGEbyName);
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
    WmipUnreferenceEntry(&WmipGEChunkInfo, GEByGuid);
  }
  return v4;
}
