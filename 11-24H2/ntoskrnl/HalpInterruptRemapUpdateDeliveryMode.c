/*
 * XREFs of HalpInterruptRemapUpdateDeliveryMode @ 0x1404A2DE4
 * Callers:
 *     HalpInterruptRemap @ 0x14053E7C4 (HalpInterruptRemap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInterruptRemapUpdateDeliveryMode(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 4) != 209 )
  {
    result = (unsigned int)(*(_DWORD *)(a2 + 24) - 5);
    if ( (unsigned int)result <= 1 )
      *(_DWORD *)(a2 + 12) |= 2u;
  }
  return result;
}
