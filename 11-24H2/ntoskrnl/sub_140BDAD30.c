/*
 * XREFs of sub_140BDAD30 @ 0x140BDAD30
 * Callers:
 *     sub_140507CD0 @ 0x140507CD0 (sub_140507CD0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140BC3010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140BD5A04 @ 0x140BD5A04 (sub_140BD5A04.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140BDAD30(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r8d
  __int64 *v3; // rax
  __int64 v4; // r9
  unsigned __int64 *v5; // r10
  __int64 v6; // r11
  unsigned __int64 v7; // rdx
  __int64 v8; // r9
  int v9; // r10d
  int v10; // edx
  int v11; // r9d
  _QWORD v13[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 0;
  v3 = (__int64 *)(a1 + 1496);
  if ( a1 )
    v4 = *v3;
  else
    v4 = MmPteBase;
  v5 = v13;
  v6 = 4LL;
  v7 = v4 + ((a2 >> 9) & 0x7FFFFFFFF8LL);
  do
  {
    *v5 = v7;
    if ( a1 )
      v8 = *v3;
    else
      v8 = MmPteBase;
    ++v5;
    v7 = v8 + ((v7 >> 9) & 0x7FFFFFFFF8LL);
    --v6;
  }
  while ( v6 );
  v9 = 0;
  v10 = 3;
  do
  {
    v11 = v10;
    if ( v9 )
      goto LABEL_14;
    if ( !v10 )
      break;
    if ( (*(_DWORD *)v13[v10] & 0x80) != 0 )
    {
      --v10;
      v9 = 1;
      v11 = v10;
LABEL_14:
      v13[v10] = 0LL;
    }
    --v10;
  }
  while ( v11 );
  LOBYTE(v2) = v13[0] == 0LL;
  return v2;
}
