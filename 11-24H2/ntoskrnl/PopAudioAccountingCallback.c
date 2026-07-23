/*
 * XREFs of PopAudioAccountingCallback @ 0x140A31584
 * Callers:
 *     PopWnfAudioCallback @ 0x140A30FA0 (PopWnfAudioCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAudioAccountingCallback(char a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    qword_140E27D90 = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    if ( qword_140E27D48 )
    {
      if ( qword_140E27D48 <= (unsigned __int64)qword_140E27D90 )
        result = MEMORY[0xFFFFF78000000008] - qword_140E27D90;
      else
        result = MEMORY[0xFFFFF78000000008] - qword_140E27D48;
      qword_140E27D98 += result;
    }
    qword_140E27D90 = 0LL;
  }
  return result;
}
