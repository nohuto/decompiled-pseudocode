/*
 * XREFs of ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F3454
 * Callers:
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F4B48 (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     InternalSetProp @ 0x1C003C0AC (InternalSetProp.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 */

__int64 __fastcall SetFrostProp(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx

  v5 = 0;
  if ( !GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1378LL), 1LL, a4) )
    return (unsigned int)InternalSetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1378LL), a2, 5u);
  return v5;
}
