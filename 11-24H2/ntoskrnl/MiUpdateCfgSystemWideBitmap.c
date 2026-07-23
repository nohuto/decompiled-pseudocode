/*
 * XREFs of MiUpdateCfgSystemWideBitmap @ 0x140974678
 * Callers:
 *     MiUpdateImageSystemWideBitmaps @ 0x140974650 (MiUpdateImageSystemWideBitmaps.c)
 * Callees:
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140974760 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiGetImageWowSubsystemIndex @ 0x140974B3C (MiGetImageWowSubsystemIndex.c)
 */

__int64 __fastcall MiUpdateCfgSystemWideBitmap(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // r8
  int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // rbp
  int v10; // edi
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 result; // rax
  int v14; // [rsp+20h] [rbp-28h]

  v3 = *a1;
  v6 = -1LL;
  v7 = 0;
  v8 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)(*a1 + 56) + 76LL) & 0x40) != 0 )
  {
    v8 = (unsigned int)dword_140E2D8F0;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 24), -1LL, -1LL);
  }
  v9 = 2 * (a2 >> 4);
  v10 = 0;
  v11 = 2
      * ((_InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 24), -1LL, -1LL)
        + (unsigned __int64)(unsigned int)v8) >> 4);
  do
  {
    LODWORD(v12) = qword_140E2D840;
    if ( !v10 && *(__int16 *)(v3 + 12) < 0 )
      v12 = *((_QWORD *)&unk_140E2D7D8 + 8 * (unsigned __int64)(unsigned int)MiGetImageWowSubsystemIndex(v3, v8, v6));
    result = MiUpdateCfgSystemWideBitmapWorker(v12, a3, v9, v11, v14, v7);
    if ( (int)result < 0 )
      break;
    ++v10;
    if ( !a3 )
      break;
  }
  while ( v10 < 1 );
  return result;
}
