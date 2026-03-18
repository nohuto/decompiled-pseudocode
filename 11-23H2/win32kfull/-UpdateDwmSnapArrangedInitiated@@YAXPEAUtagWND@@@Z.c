/*
 * XREFs of ?UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z @ 0x1C01EA7E4
 * Callers:
 *     ?RestoreSemimaximizedState@@YAXPEAUtagWND@@PEBUtagCHECKPOINT@@@Z @ 0x1C01E9DB4 (-RestoreSemimaximizedState@@YAXPEAUtagWND@@PEBUtagCHECKPOINT@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C01EB3CC (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F04DC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 * Callees:
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 */

void __fastcall UpdateDwmSnapArrangedInitiated(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // rsi
  void *v4; // rbx
  _OWORD v5[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v6[5]; // [rsp+40h] [rbp-28h]

  v2 = *(_QWORD *)a1;
  v4 = (void *)ReferenceDwmApiPort(a1, a2);
  if ( v4 )
  {
    memset(v5, 0, sizeof(v5));
    v6[0] = 0LL;
    LODWORD(v5[0]) = 3407884;
    WORD2(v5[0]) = 0x8000;
    LODWORD(v6[1]) = 1073741935;
    *(_QWORD *)((char *)&v6[1] + 4) = v2;
    LpcRequestPort(v4, v5);
    ObfDereferenceObject(v4);
  }
  SetOrClrWF(1, (__int64 *)a1, 0xD910u, 1);
}
