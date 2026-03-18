/*
 * XREFs of MiFindUserSidHotPatchContext @ 0x1407F279C
 * Callers:
 *     MiFindProcessImageHotPatchRecord @ 0x140A326F0 (MiFindProcessImageHotPatchRecord.c)
 *     MiQueryLoadedPatches @ 0x140AA6168 (MiQueryLoadedPatches.c)
 * Callees:
 *     RtlHashBytes2 @ 0x1404331E0 (RtlHashBytes2.c)
 *     RtlLengthSid @ 0x140456300 (RtlLengthSid.c)
 *     MiCompareUserSidHotPatchNodes @ 0x1407F24B4 (MiCompareUserSidHotPatchNodes.c)
 */

_QWORD *__fastcall MiFindUserSidHotPatchContext(_QWORD *a1)
{
  ULONG v3; // eax
  __int64 v4; // rax
  _QWORD *v5; // rbx
  int v6; // eax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !qword_140E37470 )
    return 0LL;
  v3 = RtlLengthSid(a1);
  v4 = RtlHashBytes2(a1, v3, 0LL);
  v7[1] = a1;
  v5 = (_QWORD *)qword_140E37470;
  v7[0] = v4;
  while ( v5 )
  {
    v6 = MiCompareUserSidHotPatchNodes(v7, (__int64)v5);
    if ( v6 >= 0 )
    {
      if ( v6 <= 0 )
        return v5;
      v5 = (_QWORD *)v5[1];
    }
    else
    {
      v5 = (_QWORD *)*v5;
    }
  }
  return v5;
}
