/*
 * XREFs of TouchTargetingEnabledForInput @ 0x14011A890
 * Callers:
 *     <none>
 * Callees:
 *     _IsPseudoDevice @ 0x14011A930 (_IsPseudoDevice.c)
 */

__int64 __fastcall TouchTargetingEnabledForInput(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  unsigned int v4; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // r8d
  int v10; // [rsp+34h] [rbp+Ch]

  v10 = HIDWORD(a1);
  v3 = a1;
  if ( *a2 != 2 )
    return 0;
  if ( (a2[3] & 0x10000) == 0 )
    return 0;
  v4 = 1;
  if ( (a2[25] & 1) != 0 && (unsigned int)IsPseudoDevice(a2) && a2[26] == a2[28] && a2[27] == a2[29] )
    return 0;
  v6 = a2[28];
  v7 = a2[26];
  if ( v6 < v7 )
    return 0;
  v8 = a2[29];
  v9 = a2[27];
  if ( v6 < v3 || v8 < v9 || v7 > v3 || v9 > v10 || v8 < v10 )
    return 0;
  return v4;
}
