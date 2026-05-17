/*
 * XREFs of RtlUTF8StringToUnicodeString @ 0x1800D5050
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlUTF8ToUnicodeN @ 0x18000C3F0 (RtlUTF8ToUnicodeN.c)
 *     RtlpAllocateAtom @ 0x18000D2C0 (RtlpAllocateAtom.c)
 *     CountUTF8ToUnicode @ 0x1800D5160 (CountUTF8ToUnicode.c)
 */

__int64 __fastcall RtlUTF8StringToUnicodeString(__int64 a1, unsigned __int16 *a2, char a3)
{
  __int64 v5; // rdx
  __int64 result; // rax
  unsigned int v8; // edi
  __int64 Atom; // rax
  unsigned int v10; // ecx
  int v11; // edi
  unsigned __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF

  v5 = *a2;
  v14 = 0;
  result = CountUTF8ToUnicode(*((_QWORD *)a2 + 1), v5, &v14);
  if ( (int)result >= 0 )
  {
    v8 = v14 + 2;
    v14 = v8;
    if ( v8 > 0xFFFE )
      return 3221225712LL;
    if ( a3 )
    {
      Atom = RtlpAllocateAtom(v8);
      *(_QWORD *)(a1 + 8) = Atom;
      if ( !Atom )
        return 3221225495LL;
      *(_WORD *)(a1 + 2) = v8;
      LOWORD(v10) = v8;
    }
    else
    {
      v10 = *(unsigned __int16 *)(a1 + 2);
      if ( v8 > v10 )
        return 2147483653LL;
    }
    v11 = RtlUTF8ToUnicodeN(*(_WORD **)(a1 + 8), (unsigned __int16)v10, &v14, *((char **)a2 + 1), *a2);
    if ( v11 < 0 )
    {
      if ( a3 )
      {
        RtlpSysVolFree(*(_QWORD *)(a1 + 8));
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_WORD *)(a1 + 2) = 0;
      }
      return (unsigned int)v11;
    }
    v12 = v14;
    v13 = *(unsigned __int16 *)(a1 + 2);
    *(_WORD *)a1 = v14;
    if ( (unsigned int)v12 < v13 )
    {
      v11 = 0;
      *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * (v12 >> 1)) = 0;
      return (unsigned int)v11;
    }
    return 2147483653LL;
  }
  return result;
}
