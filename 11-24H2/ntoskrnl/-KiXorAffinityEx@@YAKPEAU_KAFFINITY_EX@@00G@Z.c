/*
 * XREFs of ?KiXorAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402B2B10
 * Callers:
 *     PpmParkReportParkedCores @ 0x1402B24F0 (PpmParkReportParkedCores.c)
 *     KeXorAffinityEx2 @ 0x1402B2C68 (KeXorAffinityEx2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiXorAffinityEx(
        struct _KAFFINITY_EX *a1,
        struct _KAFFINITY_EX *a2,
        struct _KAFFINITY_EX *a3,
        unsigned __int16 a4)
{
  unsigned __int16 Count; // r10
  unsigned __int16 v6; // ax
  unsigned __int16 v8; // r11
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // dx
  struct _KAFFINITY_EX *v11; // rbp
  unsigned int v12; // r9d
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // dx
  __int64 v15; // rcx
  unsigned __int16 v16; // ax
  __int64 v17; // r10
  unsigned __int64 v18; // rax
  signed __int64 v20; // rsi
  $B38C3B1372D6E954799962D5DD404846 *v21; // r10
  signed __int64 v22; // rbx
  __int64 v23; // rdi
  bool v24; // zf
  __int64 v25; // rcx

  Count = a1->Count;
  v6 = a2->Count;
  v8 = a4;
  v9 = v6;
  a3->Size = a4;
  if ( Count >= v6 )
    v9 = Count;
  v10 = Count;
  if ( Count >= v6 )
    v10 = v6;
  a3->Count = v9;
  v11 = a2;
  if ( Count >= v6 )
    v11 = a1;
  v12 = 0;
  if ( v9 > v8 )
    a3->Count = v8;
  v13 = v8;
  if ( v10 <= v8 )
    v13 = v10;
  v14 = 0;
  if ( v9 <= v8 )
    v8 = v9;
  if ( v13 )
  {
    v20 = (char *)a1 - (char *)a2;
    v21 = &a2->8;
    v14 = v13;
    v22 = (char *)a3 - (char *)a2;
    v23 = v13;
    do
    {
      v24 = v21->Bitmap[0] == *(unsigned __int64 *)((char *)v21->Bitmap + v20);
      *(unsigned __int64 *)((char *)v21->Bitmap + v22) = v21->Bitmap[0] ^ *(unsigned __int64 *)((char *)v21->Bitmap + v20);
      v21 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v21 + 8);
      if ( !v24 )
        v12 = 1;
      --v23;
    }
    while ( v23 );
  }
  if ( v14 < v8 )
  {
    v15 = v14;
    v16 = v8 - v14;
    v14 = v8;
    v17 = v16;
    do
    {
      v18 = v11->Bitmap[v15];
      a3->Bitmap[v15++] = v18;
      if ( v18 )
        v12 = 1;
      --v17;
    }
    while ( v17 );
  }
  a3->Reserved = 0;
  while ( v14 < a3->Size )
  {
    v25 = v14++;
    a3->Bitmap[v25] = 0LL;
  }
  return v12;
}
