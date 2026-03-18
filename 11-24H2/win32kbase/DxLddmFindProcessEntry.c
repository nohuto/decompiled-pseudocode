/*
 * XREFs of DxLddmFindProcessEntry @ 0x1400143A0
 * Callers:
 *     ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x1400142C8 (-DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall DxLddmFindProcessEntry(__int64 *a1, int a2)
{
  __int64 *result; // rax

  result = a1;
  while ( 1 )
  {
    result = (__int64 *)*result;
    if ( result == a1 )
      break;
    if ( *((_DWORD *)result + 4) == a2 )
      return result;
  }
  return 0LL;
}
