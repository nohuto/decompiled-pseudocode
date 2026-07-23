/*
 * XREFs of MiPageChargedCommit @ 0x140444F6C
 * Callers:
 *     MiDecommitSharedPageTail @ 0x140206290 (MiDecommitSharedPageTail.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPageChargedCommit(__int64 a1, __int16 a2)
{
  __int64 v2; // rax

  if ( *(__int64 *)(a1 + 40) >= 0 )
    return 1LL;
  v2 = *(_QWORD *)(a1 + 16);
  if ( (v2 & 0x400) == 0 || (a2 & 0x200) != 0 )
    return 1LL;
  if ( qword_140E2DCC0 )
  {
    if ( (v2 & 0x10) == 0 )
      v2 &= ~qword_140E2DCC0;
  }
  return (*(_DWORD *)(*(_QWORD *)(v2 >> 16) + 56LL) & 0x820) == 0x820;
}
