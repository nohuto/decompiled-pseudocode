/*
 * XREFs of ?AddRef@VirtualDesktop@@UEAAKXZ @ 0x180191F60
 * Callers:
 *     ?AddRef@VirtualDesktop@@W7EAAKXZ @ 0x180498250 (-AddRef@VirtualDesktop@@W7EAAKXZ.c)
 *     ?AddRef@VirtualDesktop@@WBA@EAAKXZ @ 0x180498260 (-AddRef@VirtualDesktop@@WBA@EAAKXZ.c)
 *     ?AddRef@VirtualDesktop@@WBI@EAAKXZ @ 0x180498270 (-AddRef@VirtualDesktop@@WBI@EAAKXZ.c)
 *     ?AddRef@VirtualDesktop@@WCA@EAAKXZ @ 0x180498280 (-AddRef@VirtualDesktop@@WCA@EAAKXZ.c)
 *     ?AddRef@VirtualDesktop@@WCI@EAAKXZ @ 0x180498290 (-AddRef@VirtualDesktop@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktop::AddRef(VirtualDesktop *this)
{
  signed __int64 v1; // rdx
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  bool v5; // zf
  signed __int64 v6; // rax
  signed __int32 v8; // r9d

  v1 = *((_QWORD *)this + 10);
  v3 = 0x7FFFFFFF;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return v3;
    v4 = v1 + 1;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 10, v1 + 1, v1);
    v5 = v1 == v6;
    v1 = v6;
    if ( v5 )
      return v4;
  }
  while ( 1 )
  {
    v8 = *(_DWORD *)(2 * v1 + 0x10);
    if ( v8 == 0x7FFFFFFF )
      break;
    if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v8 + 1, v8) )
      return (unsigned int)(v8 + 1);
  }
  return v3;
}
