/*
 * XREFs of sub_140005F24 @ 0x140005F24
 * Callers:
 *     sub_14002E988 @ 0x14002E988 (sub_14002E988.c)
 *     sub_140031D38 @ 0x140031D38 (sub_140031D38.c)
 *     sub_1400320E0 @ 0x1400320E0 (sub_1400320E0.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x1400323EC (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_140033F84 @ 0x140033F84 (sub_140033F84.c)
 *     sub_140034144 @ 0x140034144 (sub_140034144.c)
 *     sub_140034388 @ 0x140034388 (sub_140034388.c)
 *     sub_140039E1C @ 0x140039E1C (sub_140039E1C.c)
 *     sub_14003A750 @ 0x14003A750 (sub_14003A750.c)
 *     sub_14003AB2C @ 0x14003AB2C (sub_14003AB2C.c)
 *     sub_14003B4B4 @ 0x14003B4B4 (sub_14003B4B4.c)
 *     sub_14003BEA0 @ 0x14003BEA0 (sub_14003BEA0.c)
 *     sub_14003EFEC @ 0x14003EFEC (sub_14003EFEC.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x14003F3EC (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 *     sub_140045018 @ 0x140045018 (sub_140045018.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 sub_140005F24(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rbx
  unsigned int v9; // edi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = *((_DWORD *)&off_140018050->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&off_140018050->Timer + 80 * v7 + 1) >= a2 )
    qword_140018EE0(*((_QWORD *)&off_140018050->AttachedDevice + 10 * v7), 43LL, a5, a4, va, 4LL, 0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v12, va, 4LL, 0LL);
}
