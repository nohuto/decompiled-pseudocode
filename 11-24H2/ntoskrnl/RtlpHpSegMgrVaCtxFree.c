/*
 * XREFs of RtlpHpSegMgrVaCtxFree @ 0x1402C0D68
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x1402BCD10 (RtlpHpSegMgrRelease.c)
 * Callees:
 *     RtlpHpSegMgrLock @ 0x1402C0D1C (RtlpHpSegMgrLock.c)
 *     RtlpHpSegMgrUnlock @ 0x1402C0D40 (RtlpHpSegMgrUnlock.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1402C27C8 (RtlpHpVaMgrCtxQuery.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxFree(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v6; // rbp
  unsigned __int16 *v7; // rbx
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  char v11; // al
  __int16 *v12; // r10
  unsigned __int8 v13; // r15
  int v14; // r11d
  __int16 v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int16 *v17; // rax
  unsigned __int16 *v18; // rcx
  unsigned __int16 *v19; // rax
  __int128 v21; // [rsp+20h] [rbp-38h] BYREF
  __int128 v22; // [rsp+30h] [rbp-28h]

  v6 = a2 & 0xFFFFFFFFFFE00000uLL;
  v7 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  RtlpHpVaMgrCtxQuery(&unk_140E68358, a2 & 0xFFFFFFFFFFE00000uLL, &v21);
  v8 = (a2 - v6) % *a3;
  v9 = (a2 - v6) / *a3;
  v11 = RtlpHpSegMgrLock(a1, v8, v10);
  v12 = (__int16 *)v22;
  v13 = v11;
  v14 = (unsigned __int16)(*(_WORD *)(v22 + 2) ^ (1 << v9));
  *(_WORD *)(v22 + 2) = v14;
  v15 = *v12;
  v16 = (unsigned __int64)(unsigned __int16)*v12 >> 15;
  if ( v14 == (1 << (0x200000uLL / *a3)) - 1 )
  {
    if ( *((_QWORD *)v12 + 1) != -1LL )
    {
      if ( v15 >= 0 )
        *v12 = v15 ^ (v15 ^ (v15 - 1)) & 0x7FF;
      while ( 1 )
      {
        v17 = *(unsigned __int16 **)(a1 + 8 * v16 + 120);
        if ( !v17 )
          NT_ASSERT("Link != ((void *)0)");
        v18 = *(unsigned __int16 **)v17;
        *(_QWORD *)(a1 + 8 * v16 + 120) = *(_QWORD *)v17;
        if ( v17 == (unsigned __int16 *)(v12 + 4) )
          break;
        *(_QWORD *)v17 = v7;
        v7 = v17;
      }
      while ( 1 )
      {
        v19 = v7;
        if ( !v7 )
          break;
        v7 = *(unsigned __int16 **)v7;
        *(_QWORD *)v19 = v18;
        *(_QWORD *)(a1 + 8 * v16 + 120) = v19;
        v18 = v19;
      }
    }
  }
  else
  {
    if ( ((v14 - 1) & v14) == 0 )
    {
      *((_QWORD *)v12 + 1) = *(_QWORD *)(a1 + 8 * v16 + 120);
      *(_QWORD *)(a1 + 8 * v16 + 120) = v12 + 4;
    }
    v6 = 0LL;
  }
  RtlpHpSegMgrUnlock(a1, v13);
  if ( v6 )
    *a3 = 0x200000LL;
  return v6;
}
