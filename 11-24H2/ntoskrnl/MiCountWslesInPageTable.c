/*
 * XREFs of MiCountWslesInPageTable @ 0x140392D68
 * Callers:
 *     MiRebuildPageTableAges @ 0x140392C6C (MiRebuildPageTableAges.c)
 * Callees:
 *     MiCountWslesInPageTableRange @ 0x140392E70 (MiCountWslesInPageTableRange.c)
 */

__int64 __fastcall MiCountWslesInPageTable(int a1, unsigned __int64 a2, _OWORD *a3, char a4)
{
  int v5; // edi
  int v6; // r8d
  unsigned __int64 v8; // rbx

  *a3 = 0LL;
  a3[1] = 0LL;
  v5 = (int)a3;
  v6 = 512;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( ((v8 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
  {
    MiCountWslesInPageTableRange(
      a1,
      8 * (((unsigned __int64)qword_140E2F3C0 >> 39) & 0x1FF) + 2109657088,
      ((__int64)(8 * (((unsigned __int64)qword_140E2F3D0 >> 39) & 0x1FF)
               - 8 * (((unsigned __int64)qword_140E2F3C0 >> 39) & 0x1FF)) >> 3)
    + 1,
      v5,
      a4);
    v6 = 256;
  }
  return MiCountWslesInPageTableRange(a1, (unsigned int)v8 & 0xFFFFF000, v6, v5, a4);
}
