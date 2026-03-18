/*
 * XREFs of RtlpHpSegMgrVaCtxFree @ 0x1402F916C
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x1402E15FC (RtlpHpSegMgrRelease.c)
 * Callees:
 *     RtlpHpVaMgrCtxQuery @ 0x1402FA31C (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpSegMgrUnlock @ 0x1402FA950 (RtlpHpSegMgrUnlock.c)
 *     RtlpHpSegMgrLock @ 0x1402FA978 (RtlpHpSegMgrLock.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxFree(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  char v10; // al
  __int16 *v11; // r10
  char v12; // r15
  int v13; // r11d
  unsigned __int64 v14; // rdx
  __int16 v15; // r9
  unsigned __int64 v16; // r8
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  __int128 v21; // [rsp+20h] [rbp-38h] BYREF
  __int128 v22; // [rsp+30h] [rbp-28h]

  v6 = a2 & 0xFFFFFFFFFFE00000uLL;
  v7 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  RtlpHpVaMgrCtxQuery(&unk_140E68098, a2 & 0xFFFFFFFFFFE00000uLL, &v21);
  v8 = (a2 - v6) % *a3;
  v9 = (a2 - v6) / *a3;
  v10 = RtlpHpSegMgrLock(a1, v8);
  v11 = (__int16 *)v22;
  v12 = v10;
  v13 = (unsigned __int16)(*(_WORD *)(v22 + 2) ^ (1 << v9));
  *(_WORD *)(v22 + 2) = v13;
  v14 = 0x200000uLL % *a3;
  v15 = *v11;
  v16 = (unsigned __int64)(unsigned __int16)*v11 >> 15;
  if ( v13 == (1 << (0x200000uLL / *a3)) - 1 )
  {
    v14 = (unsigned __int64)(v11 + 4);
    if ( *((_QWORD *)v11 + 1) != -1LL )
    {
      if ( v15 >= 0 )
        *v11 = v15 ^ (v15 ^ (v15 - 1)) & 0x7FF;
      while ( 1 )
      {
        v17 = *(_QWORD **)(a1 + 8 * v16 + 120);
        if ( !v17 )
          NT_ASSERT("Link != ((void *)0)");
        v18 = (_QWORD *)*v17;
        *(_QWORD *)(a1 + 8 * v16 + 120) = *v17;
        if ( v17 == (_QWORD *)v14 )
          break;
        *v17 = v7;
        v7 = v17;
      }
      while ( 1 )
      {
        v19 = v7;
        if ( !v7 )
          break;
        v7 = (_QWORD *)*v7;
        *v19 = v18;
        *(_QWORD *)(a1 + 8 * v16 + 120) = v19;
        v18 = v19;
      }
    }
  }
  else
  {
    if ( ((v13 - 1) & v13) == 0 )
    {
      *((_QWORD *)v11 + 1) = *(_QWORD *)(a1 + 8 * v16 + 120);
      *(_QWORD *)(a1 + 8 * v16 + 120) = v11 + 4;
    }
    v6 = 0LL;
  }
  LOBYTE(v14) = v12;
  RtlpHpSegMgrUnlock(a1, v14, v16);
  if ( v6 )
    *a3 = 0x200000LL;
  return v6;
}
