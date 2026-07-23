/*
 * XREFs of EtwpUpdateRegEntryEnableMask @ 0x140838494
 * Callers:
 *     EtwpNotifyDisallowedGuidChange @ 0x1408332EC (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 * Callees:
 *     EtwpApplyScopeFilters @ 0x140839F10 (EtwpApplyScopeFilters.c)
 *     EtwpTrackDecodeGuidForSession @ 0x140A5AA14 (EtwpTrackDecodeGuidForSession.c)
 */

__int64 __fastcall EtwpUpdateRegEntryEnableMask(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        char a4,
        char a5,
        unsigned int a6)
{
  unsigned __int16 v6; // di
  __int64 v7; // rbp
  __int64 v9; // rbx
  __int64 result; // rax
  unsigned __int16 v11; // [rsp+68h] [rbp+20h] BYREF

  v6 = a3;
  v7 = a2;
  if ( a4 )
    v9 = a5 != 0 ? 106LL : 102LL;
  else
    v9 = a5 != 0 ? 104LL : 100LL;
  result = a6;
  if ( a6 == 1 )
  {
    v11 = a3;
    LOBYTE(a3) = a4;
    LOBYTE(a2) = 1;
    EtwpApplyScopeFilters(a1, a2, a3, a5, (__int64)&v11);
    result = *(unsigned __int16 *)(a1 + 98);
    if ( (result & 8) != 0 )
    {
      result = v11;
      *(_WORD *)(a1 + 100) = v11;
    }
    else
    {
      if ( (result & 0x200) != 0 && v11 )
      {
        result = EtwpTrackDecodeGuidForSession(v7, a1);
        if ( !(_BYTE)result )
        {
          result = 4294966783LL;
          _InterlockedAnd16((volatile signed __int16 *)(a1 + 98), 0xFDFFu);
        }
      }
      *(_WORD *)(v9 + a1) = v11 | *(_WORD *)(v9 + a1) & ~v6;
    }
  }
  else if ( !a6 && (*(_BYTE *)(a1 + 98) & 8) == 0 )
  {
    *(_WORD *)(v9 + a1) &= ~a3;
  }
  return result;
}
