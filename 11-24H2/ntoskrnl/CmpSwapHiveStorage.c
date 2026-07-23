/*
 * XREFs of CmpSwapHiveStorage @ 0x1407DECCC
 * Callers:
 *     CmpRefreshHive @ 0x1407CEFE0 (CmpRefreshHive.c)
 *     CmpReorganizeHive @ 0x1409331F0 (CmpReorganizeHive.c)
 * Callees:
 *     HvSwapHiveStorage @ 0x1407DFCA8 (HvSwapHiveStorage.c)
 */

__int64 __fastcall CmpSwapHiveStorage(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  _QWORD **v19; // r9
  _QWORD *v20; // r10
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  _QWORD *v24; // r11
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 result; // rax
  __int64 v31; // rcx
  _QWORD *v32; // [rsp+20h] [rbp-10h] BYREF
  _QWORD *v33; // [rsp+28h] [rbp-8h]

  HvSwapHiveStorage();
  v4 = (_QWORD *)(a2 + 1544);
  v5 = a1 - a2;
  v6 = 6LL;
  do
  {
    v7 = *(_QWORD *)((char *)v4 + v5);
    *(_QWORD *)((char *)v4 + v5) = *v4;
    *v4++ = v7;
    --v6;
  }
  while ( v6 );
  v8 = *(_DWORD *)(a1 + 1792);
  v9 = 64LL;
  *(_DWORD *)(a1 + 1792) = *(_DWORD *)(a2 + 1792);
  v10 = a2 - a1;
  *(_DWORD *)(a2 + 1792) = v8;
  v11 = *(_QWORD *)(a1 + 1808);
  *(_QWORD *)(a1 + 1808) = *(_QWORD *)(a2 + 1808);
  *(_QWORD *)(a2 + 1808) = v11;
  v12 = *(_QWORD *)(a1 + 1816);
  *(_QWORD *)(a1 + 1816) = *(_QWORD *)(a2 + 1816);
  *(_QWORD *)(a2 + 1816) = v12;
  v13 = *(_DWORD *)(a1 + 1872);
  *(_DWORD *)(a1 + 1872) = *(_DWORD *)(a2 + 1872);
  *(_DWORD *)(a2 + 1872) = v13;
  v14 = *(_DWORD *)(a1 + 1876);
  *(_DWORD *)(a1 + 1876) = *(_DWORD *)(a2 + 1876);
  *(_DWORD *)(a2 + 1876) = v14;
  v15 = *(_DWORD *)(a1 + 1880);
  *(_DWORD *)(a1 + 1880) = *(_DWORD *)(a2 + 1880);
  *(_DWORD *)(a2 + 1880) = v15;
  v16 = *(_QWORD *)(a1 + 1888);
  *(_QWORD *)(a1 + 1888) = *(_QWORD *)(a2 + 1888);
  *(_QWORD *)(a2 + 1888) = v16;
  v17 = (_QWORD *)(a1 + 1896);
  do
  {
    v18 = (_QWORD *)*v17;
    v19 = (_QWORD **)((char *)v17 + v10 + 8);
    v20 = &v32;
    v33 = &v32;
    v21 = &v32;
    v32 = &v32;
    if ( v18 != v17 )
    {
      v33 = *(_QWORD **)((char *)v19 + v5);
      v22 = v33;
      v32 = v18;
      v18[1] = &v32;
      *v22 = &v32;
      v20 = v33;
      v21 = v32;
      *(_QWORD **)((char *)v19 + v5) = v17;
      *v17 = v17;
    }
    v23 = (_QWORD *)((char *)v17 + v10);
    v24 = *(_QWORD **)((char *)v17 + v10);
    if ( v24 != (_QWORD *)((char *)v17 + v10) )
    {
      v25 = *v19;
      *v17 = v24;
      *(_QWORD **)((char *)v19 + v5) = v25;
      v24[1] = v17;
      *v25 = v17;
      v20 = v33;
      v21 = v32;
      *v19 = v23;
      *v23 = v23;
    }
    if ( v21 != &v32 )
    {
      *v23 = v21;
      *v19 = v20;
      v21[1] = v23;
      *v20 = v23;
    }
    v17 += 2;
    --v9;
  }
  while ( v9 );
  v26 = *(_QWORD *)(a1 + 4136);
  *(_QWORD *)(a1 + 4136) = *(_QWORD *)(a2 + 4136);
  v27 = *(_QWORD *)(a2 + 4144);
  *(_QWORD *)(a2 + 4136) = v26;
  v28 = *(_QWORD *)(a1 + 4144);
  *(_QWORD *)(a1 + 4144) = v27;
  *(_QWORD *)(a2 + 4144) = v28;
  v29 = *(_QWORD *)(a1 + 4184);
  *(_QWORD *)(a1 + 4184) = *(_QWORD *)(a2 + 4184);
  *(_QWORD *)(a2 + 4184) = v29;
  LODWORD(v28) = *(_DWORD *)(a1 + 4224);
  *(_DWORD *)(a1 + 4224) = *(_DWORD *)(a2 + 4224);
  *(_DWORD *)(a2 + 4224) = v28;
  LODWORD(v28) = *(_DWORD *)(a1 + 4228);
  *(_DWORD *)(a1 + 4228) = *(_DWORD *)(a2 + 4228);
  *(_DWORD *)(a2 + 4228) = v28;
  LODWORD(v28) = *(_DWORD *)(a1 + 4752);
  *(_DWORD *)(a1 + 4752) = *(_DWORD *)(a2 + 4752);
  *(_DWORD *)(a2 + 4752) = v28;
  LODWORD(v28) = *(_DWORD *)(a1 + 4756);
  *(_DWORD *)(a1 + 4756) = *(_DWORD *)(a2 + 4756);
  *(_DWORD *)(a2 + 4756) = v28;
  LODWORD(v28) = *(_DWORD *)(a1 + 4760);
  *(_DWORD *)(a1 + 4760) = *(_DWORD *)(a2 + 4760);
  *(_DWORD *)(a2 + 4760) = v28;
  LODWORD(v28) = *(_DWORD *)(a1 + 4764);
  *(_DWORD *)(a1 + 4764) = *(_DWORD *)(a2 + 4764);
  *(_DWORD *)(a2 + 4764) = v28;
  result = *(_QWORD *)(a2 + 4792);
  v31 = *(_QWORD *)(a1 + 4792);
  *(_QWORD *)(a1 + 4792) = result;
  *(_QWORD *)(a2 + 4792) = v31;
  return result;
}
