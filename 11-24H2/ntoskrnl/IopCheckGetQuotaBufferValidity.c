/*
 * XREFs of IopCheckGetQuotaBufferValidity @ 0x14070F794
 * Callers:
 *     NtQueryQuotaInformationFile @ 0x1407157A0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     RtlValidSid @ 0x14086B530 (RtlValidSid.c)
 */

__int64 __fastcall IopCheckGetQuotaBufferValidity(unsigned int *a1, int a2, _QWORD *a3)
{
  int v5; // esi
  unsigned int *i; // rbx
  ULONG v7; // eax
  __int64 v8; // rcx
  int v9; // eax

  v5 = (int)a1;
  for ( i = a1; a2 >= 20 && RtlValidSid(i + 2); i = (unsigned int *)((char *)i + v8) )
  {
    v7 = RtlLengthSid(i + 2);
    v8 = *i;
    v9 = v7 + 8;
    if ( !(_DWORD)v8 )
    {
      if ( a2 - v9 >= 0 )
        return 0LL;
      break;
    }
    if ( v9 > (int)v8 )
      break;
    if ( (v8 & 3) != 0 )
      break;
    a2 -= v8;
    if ( a2 < 0 )
      break;
  }
  *a3 = (unsigned int)((_DWORD)i - v5);
  return 3221226086LL;
}
