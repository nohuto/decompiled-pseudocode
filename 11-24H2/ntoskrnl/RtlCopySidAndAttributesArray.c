/*
 * XREFs of RtlCopySidAndAttributesArray @ 0x140990EE0
 * Callers:
 *     SepCreateTokenEx @ 0x1403E9CAC (SepCreateTokenEx.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 *     CmpBuildAdminInformation @ 0x140990B8C (CmpBuildAdminInformation.c)
 *     NtQueryInformationToken @ 0x140AD09E0 (NtQueryInformationToken.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

NTSTATUS __cdecl RtlCopySidAndAttributesArray(
        ULONG Count,
        PSID_AND_ATTRIBUTES Src,
        ULONG SidAreaSize,
        PSID_AND_ATTRIBUTES Dest,
        PSID SidArea,
        PSID *RemainingSidArea,
        PULONG RemainingSidAreaSize)
{
  ULONG i; // ebx
  ULONG v13; // esi
  unsigned __int8 *Sid; // rdx
  unsigned int v15; // eax

  for ( i = 0; ; ++i )
  {
    if ( i >= Count )
    {
      *RemainingSidArea = SidArea;
      *RemainingSidAreaSize = SidAreaSize;
      return 0;
    }
    v13 = 4 * *((unsigned __int8 *)Src[i].Sid + 1) + 8;
    if ( v13 > SidAreaSize )
      break;
    Dest[i].Sid = SidArea;
    SidAreaSize -= v13;
    Dest[i].Attributes = Src[i].Attributes;
    Sid = (unsigned __int8 *)Src[i].Sid;
    v15 = 4 * Sid[1] + 8;
    if ( v15 <= v13 )
      memmove(SidArea, Sid, v15);
    SidArea = (char *)SidArea + v13;
  }
  return -1073741789;
}
