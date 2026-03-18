/*
 * XREFs of _InnerGetClassPtr @ 0x140178A28
 * Callers:
 *     GetClassPtr @ 0x1400469F0 (GetClassPtr.c)
 *     InternalRegisterClassEx @ 0x1400B54C0 (InternalRegisterClassEx.c)
 *     _UnregisterClass @ 0x14023A7F8 (_UnregisterClass.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall InnerGetClassPtr(__int16 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r10

  if ( a1 )
  {
    while ( *a2 )
    {
      v3 = *(_QWORD *)(*a2 + 8);
      if ( *(_WORD *)v3 == a1 && (!a3 || HIWORD(*(_DWORD *)(v3 + 64)) == WORD1(a3)) && (*(_BYTE *)(v3 + 6) & 4) == 0 )
        return a2;
      a2 = (__int64 *)*a2;
    }
  }
  return 0LL;
}
