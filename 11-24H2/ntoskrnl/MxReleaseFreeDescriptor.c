/*
 * XREFs of MxReleaseFreeDescriptor @ 0x140C554E4
 * Callers:
 *     MiCreateFreePfns @ 0x140C5339C (MiCreateFreePfns.c)
 * Callees:
 *     MxCreateFreePfns @ 0x140C546DC (MxCreateFreePfns.c)
 */

void __fastcall MxReleaseFreeDescriptor(unsigned __int64 *a1, int a2)
{
  int v3; // esi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  __int128 v10; // [rsp+28h] [rbp-28h]
  int v11; // [rsp+38h] [rbp-18h]
  int v12; // [rsp+3Ch] [rbp-14h]
  unsigned __int64 v13; // [rsp+40h] [rbp-10h]
  __int64 v14; // [rsp+48h] [rbp-8h]

  v9 = 0LL;
  v12 = 0;
  v3 = 0;
  v4 = *a1;
  v10 = 0LL;
  v5 = a1[3];
  v13 = v4;
  v11 = a2;
  if ( v5 != -1LL )
  {
    v14 = v5 - v4 + 512;
    MxCreateFreePfns((__int64)&v9);
    v3 = 1;
  }
  v6 = a1[2];
  if ( v6 != -1LL )
  {
    v7 = *a1;
    if ( (v6 & 0xFFFFFFFFFFFFFE00uLL) <= *a1 )
      v3 = 1;
    else
      v7 = v6 & 0xFFFFFFFFFFFFFE00uLL;
    v13 = v7;
    v14 = v6 - v7 + 1;
    MxCreateFreePfns((__int64)&v9);
    if ( !v3 )
    {
      v8 = *a1 & 0x1FF;
      if ( (*a1 & 0x1FF) != 0 )
      {
        v13 = *a1;
        v14 = 512 - v8;
        MxCreateFreePfns((__int64)&v9);
      }
    }
  }
}
