/*
 * XREFs of sub_18000DDD0 @ 0x18000DDD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000DCB4 @ 0x18000DCB4 (sub_18000DCB4.c)
 *     sub_18000E438 @ 0x18000E438 (sub_18000E438.c)
 *     sub_18000F51C @ 0x18000F51C (sub_18000F51C.c)
 */

int __fastcall sub_18000DDD0(unsigned __int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v4; // rax

  sub_18000DCB4(a1, a2, a3);
  LODWORD(v4) = GetCurrentThreadId();
  if ( dword_1801C3398 != (_DWORD)v4 )
  {
    if ( _InterlockedIncrement(&dword_1801C339C) < 4 )
    {
      dword_1801C3398 = v4;
      v4 = sub_18000E438();
      if ( v4 )
        LODWORD(v4) = sub_18000F51C(v4, a1);
      dword_1801C3398 = 0;
    }
    _InterlockedDecrement(&dword_1801C339C);
  }
  return v4;
}
