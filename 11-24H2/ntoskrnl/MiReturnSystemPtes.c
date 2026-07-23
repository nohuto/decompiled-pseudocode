/*
 * XREFs of MiReturnSystemPtes @ 0x140209C30
 * Callers:
 *     MiReleasePteMappings @ 0x140209350 (MiReleasePteMappings.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiAttemptCoalesce @ 0x140468B98 (MiAttemptCoalesce.c)
 * Callees:
 *     MiReturnSystemVa @ 0x14020AB44 (MiReturnSystemVa.c)
 */

__int64 __fastcall MiReturnSystemPtes(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v6; // rbx
  __int64 v8; // rcx
  bool v9; // cf
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rbx
  unsigned int v15; // eax

  v4 = *(_DWORD *)(a1 + 40);
  v6 = 16 * a4;
  if ( (v4 & 1) == 0 )
    v6 = a4;
  v8 = 16 * a3;
  v9 = (v4 & 1) != 0;
  v10 = *(_QWORD *)(a1 + 32);
  if ( !v9 )
    v8 = a3;
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 56), -v6);
  v11 = (v10 + 8 * v8) << 25;
  v12 = *(unsigned int *)(a1 + 44);
  v13 = (v11 + (v6 << 28)) >> 16;
  if ( a2 == 1 )
  {
    v15 = 10;
    if ( (_DWORD)v12 == 8 )
      v15 = 12;
    v12 = v15;
  }
  return MiReturnSystemVa(v11 >> 16, v13, v12);
}
