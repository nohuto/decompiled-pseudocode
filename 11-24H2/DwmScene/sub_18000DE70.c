/*
 * XREFs of sub_18000DE70 @ 0x18000DE70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000DD94 @ 0x18000DD94 (sub_18000DD94.c)
 *     sub_18000E538 @ 0x18000E538 (sub_18000E538.c)
 *     sub_18000F61C @ 0x18000F61C (sub_18000F61C.c)
 */

int __fastcall sub_18000DE70(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v4; // rax

  sub_18000DD94(a1, a2, a3);
  LODWORD(v4) = GetCurrentThreadId();
  if ( dword_1801C43B0 != (_DWORD)v4 )
  {
    if ( _InterlockedIncrement(&dword_1801C43B4) < 4 )
    {
      dword_1801C43B0 = v4;
      v4 = sub_18000E538();
      if ( v4 )
        LODWORD(v4) = sub_18000F61C(v4, a1);
      dword_1801C43B0 = 0;
    }
    _InterlockedDecrement(&dword_1801C43B4);
  }
  return v4;
}
