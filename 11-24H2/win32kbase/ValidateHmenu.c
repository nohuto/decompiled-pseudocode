/*
 * XREFs of ValidateHmenu @ 0x140099210
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140099270 (HMValidateHandleWithDescriptor.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall ValidateHmenu(__int64 a1, unsigned int a2)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rdx
  struct tagTHREADINFO *v6; // rsi
  __int64 result; // rax

  v4 = PtiCurrent();
  LOBYTE(v5) = 2;
  v6 = v4;
  result = HMValidateHandleWithDescriptor(a1, v5, a2);
  if ( result )
  {
    if ( *(_QWORD *)(result + 24) != *((_QWORD *)v6 + 62) )
    {
      UserSetLastError(1401);
      return 0LL;
    }
  }
  return result;
}
