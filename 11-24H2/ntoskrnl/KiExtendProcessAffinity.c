/*
 * XREFs of KiExtendProcessAffinity @ 0x1405C6828
 * Callers:
 *     KeSetUserAffinityThread @ 0x140330B44 (KeSetUserAffinityThread.c)
 *     KeStartThread @ 0x1403A1E70 (KeStartThread.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     KiSetIdealNodeProcessByGroup @ 0x14032B52C (KiSetIdealNodeProcessByGroup.c)
 *     KeComputeGroupMask @ 0x1404936EC (KeComputeGroupMask.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

unsigned __int16 __fastcall KiExtendProcessAffinity(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 result; // ax
  char v5; // bp
  unsigned __int16 v6; // bx
  unsigned __int16 *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r8
  __int128 v10; // [rsp+20h] [rbp-48h] BYREF

  result = *a2;
  v5 = 0;
  v6 = 0;
  v10 = 0LL;
  if ( result )
  {
    do
    {
      if ( v6 < result && *(_QWORD *)&a2[4 * v6 + 4] && v6 < KeActiveProcessors.Count && KeActiveProcessors.Bitmap[v6] )
      {
        v7 = *(unsigned __int16 **)(a1 + 80);
        if ( v6 >= *v7 )
          v8 = 0LL;
        else
          v8 = *(_QWORD *)&v7[4 * v6 + 4];
        if ( v6 >= KeActiveProcessors.Count )
          v9 = 0LL;
        else
          v9 = KeActiveProcessors.Bitmap[v6];
        KeAddGroupAffinityEx(*(unsigned __int16 **)(a1 + 80), v6, v9);
        if ( !v8 )
        {
          KiSetIdealNodeProcessByGroup(a1, 0LL, v6);
          v5 = 1;
        }
      }
      result = *a2;
      ++v6;
    }
    while ( v6 < *a2 );
    if ( v5 )
    {
      result = KeComputeGroupMask(*(unsigned __int16 **)(a1 + 80), (signed __int64 *)&v10);
      *(_OWORD *)(a1 + 152) = v10;
    }
  }
  return result;
}
