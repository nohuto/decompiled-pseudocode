/*
 * XREFs of ReValidateHwndStrict @ 0x1401A92E0
 * Callers:
 *     ?Get@tagUNIQUE_WINDOW_HANDLE@@QEBAPEAUtagWND@@XZ @ 0x1401A7390 (-Get@tagUNIQUE_WINDOW_HANDLE@@QEBAPEAUtagWND@@XZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall ReValidateHwndStrict(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = HMValidateHandleNoSecure(a1, 1);
  if ( result )
  {
    v2 = *(_QWORD *)(result + 40);
    if ( *(char *)(v2 + 20) < 0 )
    {
      return 0LL;
    }
    else if ( *(char *)(v2 + 19) < 0 )
    {
      return 0LL;
    }
  }
  return result;
}
