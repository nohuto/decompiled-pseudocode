/*
 * XREFs of PopEtGetProcessImageInfo @ 0x140908E14
 * Callers:
 *     PopEtGetProcessAppId @ 0x14090754C (PopEtGetProcessAppId.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14043E310 (RtlImageNtHeader.c)
 *     PsGetProcessSectionBaseAddress @ 0x140480C00 (PsGetProcessSectionBaseAddress.c)
 */

__int64 __fastcall PopEtGetProcessImageInfo(__int64 a1, __int64 a2)
{
  unsigned __int64 ProcessSectionBaseAddress; // rax
  unsigned __int64 v4; // rax

  *(_QWORD *)a2 = 0LL;
  if ( (*(_DWORD *)(a1 + 1532) & 1) == 0 )
  {
    ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(a1);
    if ( ProcessSectionBaseAddress )
    {
      v4 = RtlImageNtHeader(ProcessSectionBaseAddress);
      if ( v4 )
      {
        *(_DWORD *)a2 = *(_DWORD *)(v4 + 88);
        *(_DWORD *)(a2 + 4) = *(_DWORD *)(v4 + 8);
      }
    }
  }
  return 0LL;
}
