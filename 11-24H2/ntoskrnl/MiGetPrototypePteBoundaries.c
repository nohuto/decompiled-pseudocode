/*
 * XREFs of MiGetPrototypePteBoundaries @ 0x140693E78
 * Callers:
 *     MiMakeTransitionHeatBatch @ 0x1403FD304 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiObtainProtoBaseFromNode @ 0x14041FDF0 (MiObtainProtoBaseFromNode.c)
 */

__int64 __fastcall MiGetPrototypePteBoundaries(unsigned __int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  _QWORD *v5; // r10
  unsigned __int64 v6; // r11
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  *a2 = 0LL;
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2D750);
  v5 = (_QWORD *)qword_140E2D748;
  while ( v5 )
  {
    v8 = 0LL;
    v6 = MiObtainProtoBaseFromNode(v5, &v8);
    if ( a1 >= v6 )
    {
      if ( a1 < v6 + 8 * v8 )
        break;
      v5 = (_QWORD *)v5[1];
    }
    else
    {
      v5 = (_QWORD *)*v5;
    }
  }
  if ( v5 )
    v3 = MiObtainProtoBaseFromNode(v5, a2);
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2D750);
  return v3;
}
