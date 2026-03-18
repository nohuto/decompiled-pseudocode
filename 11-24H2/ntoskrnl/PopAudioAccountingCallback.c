/*
 * XREFs of PopAudioAccountingCallback @ 0x140A3BDA4
 * Callers:
 *     PopWnfAudioCallback @ 0x140A3B7C0 (PopWnfAudioCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAudioAccountingCallback(char a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    qword_140E27C50 = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    if ( qword_140E27C08 )
    {
      if ( qword_140E27C08 <= (unsigned __int64)qword_140E27C50 )
        result = MEMORY[0xFFFFF78000000008] - qword_140E27C50;
      else
        result = MEMORY[0xFFFFF78000000008] - qword_140E27C08;
      qword_140E27C58 += result;
    }
    qword_140E27C50 = 0LL;
  }
  return result;
}
