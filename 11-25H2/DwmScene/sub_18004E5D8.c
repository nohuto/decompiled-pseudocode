/*
 * XREFs of sub_18004E5D8 @ 0x18004E5D8
 * Callers:
 *     sub_18004D880 @ 0x18004D880 (sub_18004D880.c)
 * Callees:
 *     memcpy @ 0x18000CD49 (memcpy.c)
 *     sub_1800108E8 @ 0x1800108E8 (sub_1800108E8.c)
 */

void __fastcall sub_18004E5D8(__int64 a1, const void *a2, size_t a3, int a4)
{
  unsigned int v5; // ebx
  char *v8; // rsi
  char *v9; // r8
  size_t v10; // [rsp+50h] [rbp+18h] BYREF

  v5 = a4 & 0xFFFFFFDF;
  if ( a3 > 0x7FFFFFFF )
  {
    std::_Xbad_alloc();
    __debugbreak();
  }
  if ( !a3 || (v5 & 6) == 6 )
  {
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  else
  {
    v10 = a3;
    v8 = (char *)sub_1800108E8(a1, &v10);
    memcpy(v8, a2, a3);
    *(_QWORD *)(a1 + 104) = &v8[a3];
    if ( (v5 & 4) == 0 )
      std::streambuf::setg(a1, v8, v8, &v8[a3]);
    if ( (v5 & 2) == 0 )
    {
      v9 = v8;
      if ( (v5 & 0x18) != 0 )
        v9 = *(char **)(a1 + 104);
      std::streambuf::setp(a1, v8, v9, *(_QWORD *)(a1 + 104));
      if ( (v5 & 4) != 0 )
        std::streambuf::setg(a1, v8, v8, v8);
    }
    v5 |= 1u;
  }
  *(_DWORD *)(a1 + 112) = v5;
}
