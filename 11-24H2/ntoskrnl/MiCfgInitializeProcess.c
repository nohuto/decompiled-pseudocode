/*
 * XREFs of MiCfgInitializeProcess @ 0x14091BB10
 * Callers:
 *     MiMapProcessExecutable @ 0x14091B024 (MiMapProcessExecutable.c)
 * Callees:
 *     MiMapSecurePureReserveView @ 0x140A31ED4 (MiMapSecurePureReserveView.c)
 *     MiReferenceCfgVad @ 0x140A91CA0 (MiReferenceCfgVad.c)
 */

__int64 __fastcall MiCfgInitializeProcess(__int64 a1)
{
  _QWORD *v2; // rsi
  int v3; // r14d
  unsigned int v4; // ebx
  struct _KTHREAD *CurrentThread; // r14
  __int16 v6; // dx
  int v7; // r10d
  __int64 i; // rax
  unsigned __int64 v9; // rax
  __int64 result; // rax
  __int16 v11; // ax
  unsigned __int64 v12; // [rsp+60h] [rbp+30h] BYREF
  __int64 v13; // [rsp+68h] [rbp+38h] BYREF

  if ( (*(_DWORD *)(a1 + 1872) & 1) == 0 )
    return 0LL;
  v2 = (_QWORD *)(a1 + 784);
  if ( *(_QWORD *)(a1 + 872) <= 0x100000000uLL )
  {
    if ( !*v2 )
      return 3221225595LL;
    v11 = *(_WORD *)(a1 + 1772);
    if ( v11 != 332 && v11 != 452 )
      return 3221225595LL;
  }
  v3 = qword_140E2D840;
  v12 = 0LL;
  v13 = qword_140E2DBC8;
  v4 = MiMapSecurePureReserveView(a1, qword_140E2D840, (unsigned int)&v13, (unsigned int)&v12, 0LL);
  if ( (v4 & 0x80000000) != 0 )
  {
    if ( !qword_140E2DBC8 )
      return v4;
    v13 = 0LL;
    v12 = 0LL;
    v4 = MiMapSecurePureReserveView(a1, v3, (unsigned int)&v13, (unsigned int)&v12, 0LL);
    if ( (v4 & 0x80000000) != 0 )
      return v4;
  }
  CurrentThread = KeGetCurrentThread();
  MiReferenceCfgVad(CurrentThread, v13, 0LL);
  if ( !*v2 )
    return v4;
  v6 = *(_WORD *)(a1 + 1772);
  if ( v6 != 332 && v6 != 452 )
    return v4;
  v7 = 0;
  for ( i = 0LL; !(_DWORD)i; i = 1LL )
  {
    if ( v6 == MiWowSubsystems6432[i] )
    {
      v7 = unk_140E2D7D8;
      break;
    }
  }
  v9 = *(_QWORD *)(a1 + 872);
  v13 = 0LL;
  v12 = (2 * (v9 >> 4)) >> 3;
  result = MiMapSecurePureReserveView(a1, v7, (unsigned int)&v13, (unsigned int)&v12, 0LL);
  v4 = result;
  if ( (int)result >= 0 )
  {
    MiReferenceCfgVad(CurrentThread, v13, 1LL);
    return v4;
  }
  return result;
}
