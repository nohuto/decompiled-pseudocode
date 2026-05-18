/*
 * XREFs of sub_18001E640 @ 0x18001E640
 * Callers:
 *     sub_1800B5F4C @ 0x1800B5F4C (sub_1800B5F4C.c)
 * Callees:
 *     memcpy @ 0x18000CD49 (memcpy.c)
 *     memmove @ 0x18000CD6D (memmove.c)
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_18001C9D8 @ 0x18001C9D8 (sub_18001C9D8.c)
 *     sub_18001D9AC @ 0x18001D9AC (sub_18001D9AC.c)
 */

void **__fastcall sub_18001E640(void **Src, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // r8
  wchar_t *v7; // rax
  __int64 v8; // r8
  wchar_t *v9; // r14
  __int64 v10; // rdi

  sub_18001C9D8((__int64)Src, 0LL);
  v6 = (__int64)Src[2];
  if ( (char *)a4 > (char *)Src[3] - v6 )
    return sub_18001D9AC(Src, a4, v6);
  Src[2] = (void *)(v6 + a4);
  v7 = (wchar_t *)sub_1800130AC((__int64)Src);
  v9 = v7;
  if ( &aFl[a4] <= v7 || L"FL_" > &v7[v8] )
  {
    v10 = a4;
  }
  else if ( v7 > L"FL_" )
  {
    v10 = v7 - L"FL_";
  }
  else
  {
    v10 = 0LL;
  }
  memmove(&v7[a4], v7, 2 * v8 + 2);
  memcpy(v9, L"FL_", 2 * v10);
  memcpy(&v9[v10], &aFl[v10 + a4], 2 * (a4 - v10));
  return Src;
}
