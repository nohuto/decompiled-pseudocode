/*
 * XREFs of RtlpHpSegMgrVaCtxFree @ 0x14035CE60
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x140364450 (RtlpHpSegMgrRelease.c)
 * Callees:
 *     RtlpHpSegMgrLock @ 0x14035CE14 (RtlpHpSegMgrLock.c)
 *     RtlpHpSegMgrUnlock @ 0x14035CE38 (RtlpHpSegMgrUnlock.c)
 *     RtlpHpVaMgrCtxQuery @ 0x14035D9AC (RtlpHpVaMgrCtxQuery.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxFree(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v6; // rbp
  unsigned __int16 *v7; // rbx
  unsigned __int64 v8; // rdi
  __int16 *v9; // r10
  int v10; // r11d
  __int16 v11; // r9
  unsigned __int64 v12; // r8
  unsigned __int16 *v13; // rax
  unsigned __int16 *v14; // rcx
  unsigned __int16 *v15; // rax
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF
  __int128 v18; // [rsp+30h] [rbp-28h]

  v6 = a2 & 0xFFFFFFFFFFE00000uLL;
  v7 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  RtlpHpVaMgrCtxQuery(&unk_140E68558, a2 & 0xFFFFFFFFFFE00000uLL, &v17);
  v8 = (a2 - v6) / *a3;
  RtlpHpSegMgrLock(a1);
  v9 = (__int16 *)v18;
  v10 = (unsigned __int16)(*(_WORD *)(v18 + 2) ^ (1 << v8));
  *(_WORD *)(v18 + 2) = v10;
  v11 = *v9;
  v12 = (unsigned __int64)(unsigned __int16)*v9 >> 15;
  if ( v10 == (1 << (0x200000uLL / *a3)) - 1 )
  {
    if ( *((_QWORD *)v9 + 1) != -1LL )
    {
      if ( v11 >= 0 )
        *v9 = v11 ^ (v11 ^ (v11 - 1)) & 0x7FF;
      while ( 1 )
      {
        v13 = *(unsigned __int16 **)(a1 + 8 * v12 + 120);
        if ( !v13 )
          NT_ASSERT("Link != ((void *)0)");
        v14 = *(unsigned __int16 **)v13;
        *(_QWORD *)(a1 + 8 * v12 + 120) = *(_QWORD *)v13;
        if ( v13 == (unsigned __int16 *)(v9 + 4) )
          break;
        *(_QWORD *)v13 = v7;
        v7 = v13;
      }
      while ( 1 )
      {
        v15 = v7;
        if ( !v7 )
          break;
        v7 = *(unsigned __int16 **)v7;
        *(_QWORD *)v15 = v14;
        *(_QWORD *)(a1 + 8 * v12 + 120) = v15;
        v14 = v15;
      }
    }
  }
  else
  {
    if ( ((v10 - 1) & v10) == 0 )
    {
      *((_QWORD *)v9 + 1) = *(_QWORD *)(a1 + 8 * v12 + 120);
      *(_QWORD *)(a1 + 8 * v12 + 120) = v9 + 4;
    }
    v6 = 0LL;
  }
  RtlpHpSegMgrUnlock(a1);
  if ( v6 )
    *a3 = 0x200000LL;
  return v6;
}
