/*
 * XREFs of RtlpHpSegMgrVaCtxFree @ 0x180158240
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x18005589C (RtlpHpSegMgrRelease.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpQueryVA @ 0x180093EA8 (RtlpHpQueryVA.c)
 *     RtlpHpSegMgrLock @ 0x180112AF0 (RtlpHpSegMgrLock.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxFree(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // rbp
  unsigned __int16 *v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r8
  __int16 *v11; // r10
  int v12; // r11d
  __int16 v13; // r9
  unsigned __int64 v14; // r8
  unsigned __int16 *v15; // rax
  unsigned __int16 *v16; // rcx
  unsigned __int16 *v17; // rax
  __int16 *v19; // [rsp+40h] [rbp+8h] BYREF

  v5 = a2 & 0xFFFFFFFFFFE00000uLL;
  v19 = 0LL;
  v7 = 0LL;
  RtlpHpQueryVA(a2 & 0xFFFFFFFFFFE00000uLL, a2, &v19, 0LL);
  v8 = (a2 - v5) % *a3;
  v9 = (a2 - v5) / *a3;
  RtlpHpSegMgrLock(a1, (volatile signed __int32 **)v8, v10);
  v11 = v19;
  v12 = (unsigned __int16)(v19[1] ^ (1 << v9));
  v19[1] = v12;
  v13 = *v11;
  v14 = (unsigned __int64)(unsigned __int16)*v11 >> 15;
  if ( v12 == (1 << (0x200000uLL / *a3)) - 1 )
  {
    if ( *((_QWORD *)v11 + 1) != -1LL )
    {
      if ( v13 >= 0 )
        *v11 = v13 ^ (v13 ^ (v13 - 1)) & 0x7FF;
      while ( 1 )
      {
        v15 = *(unsigned __int16 **)(a1 + 8 * v14 + 120);
        if ( !v15 )
          NT_ASSERT("Link != ((void *)0)");
        v16 = *(unsigned __int16 **)v15;
        *(_QWORD *)(a1 + 8 * v14 + 120) = *(_QWORD *)v15;
        if ( v15 == (unsigned __int16 *)(v11 + 4) )
          break;
        *(_QWORD *)v15 = v7;
        v7 = v15;
      }
      while ( 1 )
      {
        v17 = v7;
        if ( !v7 )
          break;
        v7 = *(unsigned __int16 **)v7;
        *(_QWORD *)v17 = v16;
        *(_QWORD *)(a1 + 8 * v14 + 120) = v17;
        v16 = v17;
      }
    }
  }
  else
  {
    if ( ((v12 - 1) & v12) == 0 )
    {
      *((_QWORD *)v11 + 1) = *(_QWORD *)(a1 + 8 * v14 + 120);
      *(_QWORD *)(a1 + 8 * v14 + 120) = v11 + 4;
    }
    v5 = 0LL;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 112));
  if ( v5 )
    *a3 = 0x200000LL;
  return v5;
}
