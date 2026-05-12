/*
 * XREFs of FindNamedToken @ 0x14013E6E4
 * Callers:
 *     ParseLockingObjectInfo @ 0x14013D7F0 (ParseLockingObjectInfo.c)
 *     ParseGetTableColumnData @ 0x14013EA80 (ParseGetTableColumnData.c)
 * Callees:
 *     WPP_SF_DD @ 0x140067CBC (WPP_SF_DD.c)
 *     GetTokenData @ 0x140141D08 (GetTokenData.c)
 */

__int64 __fastcall FindNamedToken(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 *v3; // rdi
  unsigned int v4; // esi
  __int64 v7; // rbx
  int v8; // ecx
  const void *TokenData; // rax
  SIZE_T v10; // r8
  const void *v11; // r9

  v3 = *(__int64 **)(a2 + 16);
  v4 = 0;
  *a3 = 0LL;
  while ( !*a3 && v3 )
  {
    if ( v3[1] != 0x200000006LL || (v7 = v3[2]) == 0 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x11u,
          (__int64)&WPP_26031245b0af395f80dcd19d8421604d_Traceguids,
          *((_DWORD *)v3 + 2),
          *((_DWORD *)v3 + 3));
      return (unsigned int)-1073741435;
    }
    v8 = *(_DWORD *)(a1 + 12);
    if ( (unsigned int)(v8 - 7) <= 7
      && *(_DWORD *)(a1 + 8) <= 8u
      && (unsigned int)(*(_DWORD *)(v7 + 8) - 7) <= 7
      && *(_DWORD *)(v7 + 12) <= 8u
      && *(_QWORD *)a1 == *(_QWORD *)(v7 + 16)
      || (unsigned int)(v8 - 15) <= 2
      && (unsigned int)(*(_DWORD *)(v7 + 8) - 15) <= 2
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(v7 + 12)
      && (TokenData = (const void *)GetTokenData(v3[2], a2, *(unsigned int *)(v7 + 12)),
          RtlCompareMemory(v11, TokenData, v10) == *(_DWORD *)(v7 + 12)) )
    {
      *a3 = v7;
    }
    v3 = (__int64 *)*v3;
  }
  return v4;
}
