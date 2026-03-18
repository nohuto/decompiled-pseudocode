/*
 * XREFs of MiFindUserSidHotPatchContext @ 0x1407E28FC
 * Callers:
 *     MiFindProcessImageHotPatchRecord @ 0x140A1DD10 (MiFindProcessImageHotPatchRecord.c)
 *     MiQueryLoadedPatches @ 0x140AA1218 (MiQueryLoadedPatches.c)
 * Callees:
 *     RtlHashBytes2 @ 0x1403A0720 (RtlHashBytes2.c)
 *     RtlLengthSid @ 0x140458B00 (RtlLengthSid.c)
 *     MiCompareUserSidHotPatchNodes @ 0x1407E2614 (MiCompareUserSidHotPatchNodes.c)
 */

_QWORD *__fastcall MiFindUserSidHotPatchContext(void *a1)
{
  ULONG v3; // eax
  __int64 v4; // rax
  _QWORD *v5; // rbx
  int v6; // eax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !qword_140E37230 )
    return 0LL;
  v3 = RtlLengthSid(a1);
  v4 = RtlHashBytes2((__int64)a1, v3, 0LL);
  v7[1] = a1;
  v5 = (_QWORD *)qword_140E37230;
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
