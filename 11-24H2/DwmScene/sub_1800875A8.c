/*
 * XREFs of sub_1800875A8 @ 0x1800875A8
 * Callers:
 *     sub_180087470 @ 0x180087470 (sub_180087470.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 */

__int64 *__fastcall sub_1800875A8(__int64 *a1, _QWORD *a2, int *a3, int *a4)
{
  __int64 v8; // r10
  int v9; // xmm0_4
  int v10; // xmm1_4
  __int64 v11; // rax
  __int64 *result; // rax

  v8 = sub_18001B1F8(56LL);
  if ( v8 )
  {
    v9 = *a4;
    v10 = *a3;
    *(_QWORD *)v8 = &Spectre::Utils::Tweening::TweenProperty<float,Spectre::Utils::Tweening::TransformationDefault<float>>::`vftable';
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_QWORD *)(v8 + 16) = 0LL;
    if ( a2[1] )
    {
      *(_QWORD *)(v8 + 8) = *a2;
      v11 = a2[1];
      *(_QWORD *)(v8 + 16) = v11;
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 12));
    }
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = 0LL;
    *(_DWORD *)(v8 + 40) = v10;
    *(_DWORD *)(v8 + 44) = v9;
  }
  else
  {
    v8 = 0LL;
  }
  result = a1;
  *a1 = v8;
  return result;
}
