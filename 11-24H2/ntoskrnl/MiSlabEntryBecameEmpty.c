/*
 * XREFs of MiSlabEntryBecameEmpty @ 0x1404A5228
 * Callers:
 *     MiInsertSlabEntry @ 0x14021E754 (MiInsertSlabEntry.c)
 *     MiFreeSlabEntries @ 0x140354D7C (MiFreeSlabEntries.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSlabEntryBecameEmpty(__int64 a1, __int64 a2)
{
  unsigned int v3; // r9d
  __int64 v4; // r11
  unsigned int v5; // r9d
  unsigned int v6; // ecx
  __int64 v7; // rdi
  volatile signed __int32 *v8; // r11
  int v9; // r9d
  unsigned __int64 v10; // rax

  _InterlockedOr((volatile signed __int32 *)(a1 + 136), 1u);
  if ( *(_DWORD *)(a1 + 128) == 8 )
  {
    v3 = *(_DWORD *)(a2 + 92);
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 57216LL * *(unsigned int *)(a1 + 132);
    if ( (v3 & 4) != 0 )
      v5 = (v3 >> 3) & 0x3F;
    else
      v5 = 64;
    LOBYTE(v6) = 1;
    v7 = v5 & 0x1F;
    v8 = (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v4 + 57008) + 314072LL) + 4 * ((unsigned __int64)v5 >> 5));
    if ( (unsigned __int64)(v7 + 1) > 0x20 )
    {
      v9 = v5 & 0x1F;
      if ( !v9 )
        goto LABEL_12;
      _InterlockedOr(v8++, ((1 << (32 - v9)) - 1) << v7);
      v6 = 1 - (32 - v9);
      if ( v6 >= 0x20 )
      {
        v10 = (unsigned __int64)v6 >> 5;
        do
        {
          *v8 = -1;
          v6 -= 32;
          ++v8;
          --v10;
        }
        while ( v10 );
      }
      if ( v6 )
LABEL_12:
        _InterlockedOr(v8, (1 << v6) - 1);
    }
    else
    {
      _InterlockedOr(v8, 1 << v7);
    }
    *(_QWORD *)(a1 + 176) = 0LL;
  }
}
