/*
 * XREFs of MiInitializeChannelOrdering @ 0x1407F7428
 * Callers:
 *     MiInitializeNuma @ 0x140669F98 (MiInitializeNuma.c)
 * Callees:
 *     MiInitializeSystemChannelOrdering @ 0x140C59D7C (MiInitializeSystemChannelOrdering.c)
 */

__int64 __fastcall MiInitializeChannelOrdering(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 result; // rax
  __int64 v5; // rcx

  if ( qword_140E2DC68 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = 57216LL * (unsigned int)a2;
    if ( (unsigned __int8)MmNumberOfChannels > 1u )
      *(_DWORD *)(v3 + v2 + 15184) |= 1u;
    if ( (ULONG *)a1 == &MiSystemPartition )
    {
      return MiInitializeSystemChannelOrdering(a1, a2, v3, v2);
    }
    else
    {
      v5 = qword_140E38D50;
      *(_WORD *)(v3 + v2 + 15237) = *(_WORD *)(v3 + qword_140E38D50 + 15237);
      *(_WORD *)(v3 + v2 + 15233) = *(_WORD *)(v3 + v5 + 15233);
      result = *(unsigned __int16 *)(v3 + v5 + 15235);
      *(_WORD *)(v3 + v2 + 15235) = result;
    }
  }
  return result;
}
