/*
 * XREFs of ConfigureIntelEmu @ 0x14002B7E0
 * Callers:
 *     PctDiscoverPlatformCtrs @ 0x14002B840 (PctDiscoverPlatformCtrs.c)
 * Callees:
 *     PctPlatformCounterState @ 0x140003460 (PctPlatformCounterState.c)
 *     PctGetIntelEsuType @ 0x140005928 (PctGetIntelEsuType.c)
 */

unsigned __int64 __fastcall ConfigureIntelEmu(__int64 a1, int a2, char a3)
{
  __int64 v4; // rdi
  unsigned __int64 result; // rax
  __int64 v6; // r9

  v4 = PctPlatformCounterState(a1, a2);
  result = PctGetIntelEsuType();
  v6 = 0LL;
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 1 )
    {
      result = 0xF4240uLL / (1LL << a3);
      v6 = result;
    }
  }
  else
  {
    v6 = 1LL << a3;
  }
  *(_QWORD *)(v4 + 32) = v6;
  return result;
}
