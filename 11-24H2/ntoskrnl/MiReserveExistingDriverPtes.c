/*
 * XREFs of MiReserveExistingDriverPtes @ 0x140A6AEB8
 * Callers:
 *     MiReserveDriverPtes @ 0x140A555D0 (MiReserveDriverPtes.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x14026CB1C (MiMakeZeroedPageTables.c)
 *     RtlSetBits @ 0x14027C2D0 (RtlSetBits.c)
 *     RtlFindClearBits @ 0x140402600 (RtlFindClearBits.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     RtlAreBitsSet @ 0x140441BC0 (RtlAreBitsSet.c)
 */

unsigned __int64 __fastcall MiReserveExistingDriverPtes(ULONG NumberToFind)
{
  char *v1; // rbx
  ULONG ClearBits; // esi
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r8
  __int64 PteAddress; // rax
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r14

  v1 = (char *)qword_140E2D9A0;
  ClearBits = -1;
  if ( !qword_140E2D9A0 )
    return 0LL;
  do
  {
    if ( *((_QWORD *)v1 + 6) )
    {
      if ( *((_DWORD *)v1 + 4) >= NumberToFind )
      {
        ClearBits = RtlFindClearBits((PRTL_BITMAP)v1 + 1, NumberToFind, *((_DWORD *)v1 + 8));
        if ( ClearBits != -1 )
          break;
      }
    }
    v1 = *(char **)v1;
  }
  while ( v1 );
  if ( !v1 )
    return 0LL;
  v5 = *((_QWORD *)v1 + 1) + ((unsigned __int64)ClearBits << 7);
  MiGetPteAddress(v5);
  PteAddress = MiGetPteAddress(v6);
  v9 = (v8 - PteAddress) >> 3;
  v10 = MiGetPteAddress(v5 + 128LL * NumberToFind - 8);
  v12 = (v10 - v11) >> 3;
  if ( !RtlAreBitsSet((PRTL_BITMAP)(v1 + 40), v9, v12 + 1) )
  {
    if ( (unsigned int)MiMakeZeroedPageTables(v5, (unsigned int)v5 + (NumberToFind << 7) - 8, 1, 11) )
    {
      RtlSetBits((PRTL_BITMAP)(v1 + 40), v9, v12 + 1);
      goto LABEL_9;
    }
    return 0LL;
  }
LABEL_9:
  RtlSetBits((PRTL_BITMAP)v1 + 1, ClearBits, NumberToFind);
  result = v5;
  *((_DWORD *)v1 + 8) = ClearBits + NumberToFind;
  return result;
}
