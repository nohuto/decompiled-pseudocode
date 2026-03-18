/*
 * XREFs of NtGdiExtGetObjectW @ 0x140014310
 * Callers:
 *     <none>
 * Callees:
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtGdiExtGetObjectW(HSURF a1, unsigned int a2, void *a3)
{
  unsigned int v6; // r15d
  int v7; // ebx
  int ObjectW; // eax
  unsigned int v9; // esi
  size_t v10; // r8
  ULONG64 v11; // rax
  _BYTE Src[592]; // [rsp+20h] [rbp-288h] BYREF

  v6 = (unsigned int)a1 & 0x7F0000;
  memset_0(Src, 0, sizeof(Src));
  if ( a2 > 0x250 )
    a2 = 592;
  v7 = a2;
  if ( v6 == 0x100000 )
    v7 = 16;
  ObjectW = GreExtGetObjectW(a1);
  v9 = ObjectW;
  if ( v6 == 0x100000 && v7 >= a2 )
    v7 = a2;
  if ( ObjectW && a3 )
  {
    if ( v7 < ObjectW )
      ObjectW = v7;
    v10 = ObjectW;
    v11 = (ULONG64)a3 + ObjectW;
    if ( v11 > MmUserProbeAddress || v11 <= (unsigned __int64)a3 || ((unsigned __int8)a3 & 1) != 0 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(a3, Src, v10);
  }
  return v9;
}
