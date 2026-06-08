/*
 * XREFs of sub_14002AF90 @ 0x14002AF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall sub_14002AF90(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( *(_BYTE *)(a1 + 128) == 127
    && ((*(_QWORD *)(a1 + 132) - 1906LL) & 0xFFFFFFFFFFFFFFFDuLL) == 0
    && *(_BYTE *)(a1 + 129) == 8 )
  {
    return *(_BYTE *)(a1 + 130) == 16;
  }
  return result;
}
