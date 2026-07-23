/*
 * XREFs of MiInitializeZeroingDomains @ 0x1407FFCC4
 * Callers:
 *     MiAbsorbPossibleEngineChanges @ 0x140690174 (MiAbsorbPossibleEngineChanges.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x140371000 (KeFindFirstSetRightGroupAffinity.c)
 *     MiGetProcessorDomain @ 0x1404D3724 (MiGetProcessorDomain.c)
 *     MiGetEngineType @ 0x1404F5F10 (MiGetEngineType.c)
 *     MiGetNodeBaseDomain @ 0x140686B30 (MiGetNodeBaseDomain.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall MiInitializeZeroingDomains(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r14
  unsigned int i; // edi
  __int64 v7; // rbp
  __int16 v8; // r15
  int FirstSetRightGroupAffinity; // r11d
  __int64 v10; // r9
  bool v11; // zf
  int ProcessorDomain; // eax
  _DWORD *v13; // rdx
  __int64 v14; // r9
  int v15; // r8d
  __int64 v16; // r10
  __int64 *v17; // r10
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int128 v21; // [rsp+20h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v3 = *(unsigned int *)(a1 + 12);
  for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
  {
    result = *(_QWORD *)(a1 + 32);
    v21 = *(_OWORD *)(result + 16LL * i);
    v7 = v21;
    if ( (_QWORD)v21 )
    {
      v8 = WORD4(v21);
      do
      {
        FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)&v21);
        v10 = KiProcessorBlock[FirstSetRightGroupAffinity];
        v7 &= ~*(_QWORD *)(v10 + 200);
        v11 = *(_BYTE *)(a1 + 2) == 0;
        *(_QWORD *)&v21 = v7;
        if ( !v11 )
          MiGetNodeBaseDomain(*(_DWORD *)(v10 + 34644));
        ProcessorDomain = MiGetProcessorDomain(FirstSetRightGroupAffinity);
        v17 = (__int64 *)(48LL * (unsigned int)(v15 + ProcessorDomain) + v16);
        v18 = *v17;
        if ( a2 )
        {
          result = MiGetEngineType(v14);
          if ( (_DWORD)result != a2 )
            continue;
        }
        *(_DWORD *)(a1 + 64) = *v13;
        result = *(_QWORD *)(v14 + 200);
        *(_QWORD *)(v18 + 16LL * i) |= result;
        *(_WORD *)(v18 + 16LL * i + 8) = v8;
        *((_DWORD *)v17 + 10) = 1;
      }
      while ( v7 );
    }
  }
  v19 = *(_QWORD *)(a1 + 40);
  if ( (_DWORD)v3 )
  {
    v20 = v3;
    do
    {
      result = (__int64)memmove(*(void **)(v19 + 8), *(const void **)v19, 16LL * *(unsigned int *)(a1 + 4));
      v19 += 48LL;
      --v20;
    }
    while ( v20 );
  }
  return result;
}
