/*
 * XREFs of MiReplaceSystemProtoPtesNode @ 0x1406879E8
 * Callers:
 *     MiAllocateFileExtents @ 0x140AA0C34 (MiAllocateFileExtents.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402A8320 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiObtainProtoBaseFromNode @ 0x140337C50 (MiObtainProtoBaseFromNode.c)
 */

__int64 __fastcall MiReplaceSystemProtoPtesNode(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rsi
  KIRQL v5; // bp
  bool v6; // r10
  _QWORD *v7; // r11
  _QWORD *v8; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = MiObtainProtoBaseFromNode(a1, &v10);
  v5 = ExAcquireSpinLockExclusive(&dword_140E2D3D0);
  RtlAvlRemoveNode((unsigned __int64 *)&qword_140E2D3C8, (__int64)a1);
  a1[3] &= ~8uLL;
  v6 = 0;
  v7 = (_QWORD *)qword_140E2D3C8;
  if ( qword_140E2D3C8 )
  {
    while ( 1 )
    {
      if ( v4 >= MiObtainProtoBaseFromNode(v7, &v10) )
      {
        v8 = (_QWORD *)v7[1];
        if ( !v8 )
        {
          v6 = 1;
          break;
        }
      }
      else
      {
        v8 = (_QWORD *)*v7;
        if ( !*v7 )
          break;
      }
      v7 = v8;
    }
  }
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E2D3C8, (unsigned __int64)v7, v6, a2);
  a2[3] |= 8uLL;
  return MiReleaseSpinLockExclusive(&dword_140E2D3D0, v5);
}
