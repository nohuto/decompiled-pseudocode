/*
 * XREFs of RtlpOwnerAcesPresent @ 0x1403ECFB0
 * Callers:
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14042DC70 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140465250 (SepCommonAccessCheckEx.c)
 *     RtlpNewSecurityObject @ 0x14090DD00 (RtlpNewSecurityObject.c)
 * Callees:
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

char __fastcall RtlpOwnerAcesPresent(unsigned __int8 a1, __int64 a2)
{
  _WORD *SeOwnerRightsSid; // r14
  unsigned int v4; // ebp
  char *v5; // rbx
  unsigned int i; // edi
  unsigned __int8 v7; // si
  unsigned __int8 v8; // cl
  char *v9; // rcx

  SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
  if ( a2 )
  {
    v4 = *(unsigned __int16 *)(a2 + 4);
    v5 = (char *)(a2 + 8);
    for ( i = 0; ; ++i )
    {
      if ( i >= v4 )
        return 0;
      v7 = v5[1];
      if ( (v7 & 8) == 0 )
        break;
LABEL_14:
      v5 += *((unsigned __int16 *)v5 + 1);
    }
    v8 = *v5;
    if ( (unsigned __int8)(*v5 - 5) > 3u && (unsigned __int8)(v8 - 11) > 1u )
    {
      if ( v8 < 0xFu )
      {
        if ( v8 == 4 )
        {
          v9 = v5 + 12;
          goto LABEL_11;
        }
        if ( v8 < 0xBu )
        {
LABEL_10:
          v9 = v5 + 8;
LABEL_11:
          if ( v9
            && *(_WORD *)v9 == *SeOwnerRightsSid
            && !memcmp(v9, SeOwnerRightsSid, 4 * ((unsigned __int64)*(unsigned __int16 *)v9 >> 8) + 8)
            && (!a1 || (v7 & a1) != 0) )
          {
            return 1;
          }
          goto LABEL_14;
        }
LABEL_23:
        if ( (unsigned __int8)(v8 - 13) > 1u )
          goto LABEL_14;
        goto LABEL_10;
      }
      if ( v8 > 0x10u )
        goto LABEL_23;
    }
    v9 = &v5[16 * (*((_DWORD *)v5 + 2) & 1) + ((8LL * (*((_DWORD *)v5 + 2) & 2)) | 0xC)];
    goto LABEL_11;
  }
  return 0;
}
