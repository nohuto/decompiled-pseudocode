/*
 * XREFs of sub_1400053F0 @ 0x1400053F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400064C4 @ 0x1400064C4 (sub_1400064C4.c)
 *     sub_140008C34 @ 0x140008C34 (sub_140008C34.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1400053F0(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rax
  __int64 v4; // [rsp+40h] [rbp+8h]
  unsigned __int64 v5; // [rsp+40h] [rbp+8h]

  if ( *(_DWORD *)(*(_QWORD *)a1 + 80LL) )
  {
    LODWORD(v4) = 0;
    HIDWORD(v4) = (unsigned int)(a2 - 1) > 1;
    return ((__int64 (__fastcall *)(_QWORD, __int64, unsigned __int64, __int64))qword_140019528)(
             *(unsigned int *)(*(_QWORD *)a1 + 84LL),
             409LL,
             0xFFFFFFFEFFFFFFFFuLL,
             v4);
  }
  else
  {
    v3 = __readmsr(0x199u);
    LODWORD(v5) = v3;
    HIDWORD(v5) = ((unsigned int)(a2 - 1) > 1) | HIDWORD(v3) & 0xFFFFFFFE;
    result = v5;
    __writemsr(0x199u, v5);
  }
  return result;
}
