/*
 * XREFs of FsRtlDoesDbcsContainWildCards @ 0x1409C5610
 * Callers:
 *     FsRtlIsFatDbcsLegal @ 0x1409C53B0 (FsRtlIsFatDbcsLegal.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlDoesDbcsContainWildCards(PANSI_STRING Name)
{
  __int64 i; // r8
  __int64 v2; // rax

  for ( i = 0LL; (unsigned int)i < Name->Length; i = (unsigned int)(i + 1) )
  {
    v2 = Name->Buffer[i];
    if ( (unsigned __int8)v2 >= 0x80u
      && (_BYTE)NlsMbOemCodePageTag
      && *((_WORD *)NlsOemLeadByteInfo + (unsigned __int8)v2) )
    {
      LODWORD(i) = i + 1;
    }
    else if ( (v2 & 0x80u) == 0LL && (*((_BYTE *)qword_140013670 + v2) & 8) != 0 )
    {
      return 1;
    }
  }
  return 0;
}
