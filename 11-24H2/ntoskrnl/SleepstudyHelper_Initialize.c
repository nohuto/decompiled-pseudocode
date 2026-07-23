/*
 * XREFs of SleepstudyHelper_Initialize @ 0x140A92090
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperCreateLibraryEx @ 0x1404AAF60 (SleepstudyHelperCreateLibraryEx.c)
 */

__int64 __fastcall SleepstudyHelper_Initialize(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  _DWORD v6[6]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v6[2] = 0;
  v6[0] = 1;
  v6[1] = 1818784627;
  result = SleepstudyHelperCreateLibraryEx(v6, &v7);
  if ( (int)result >= 0 )
  {
    v5 = v7;
    *(_QWORD *)(v7 + 32) = a2;
    *a1 = v5;
  }
  return result;
}
