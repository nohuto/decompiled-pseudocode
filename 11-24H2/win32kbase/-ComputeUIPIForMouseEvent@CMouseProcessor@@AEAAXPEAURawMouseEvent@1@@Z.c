/*
 * XREFs of ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x14018C328
 * Callers:
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x14021F008 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 */

void __fastcall CMouseProcessor::ComputeUIPIForMouseEvent(
        CMouseProcessor *this,
        struct CMouseProcessor::RawMouseEvent *a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // esi
  __int64 v5; // rcx
  char v6; // r14
  __int64 v7; // xmm0_8
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-30h]
  __int128 v11; // [rsp+30h] [rbp-20h]
  int v12; // [rsp+40h] [rbp-10h]

  v10 = 0xFFFFFFFFLL;
  v2 = 0;
  v4 = 0;
  if ( IsInputThread((__int64)this) && *((_BYTE *)a2 + 140) )
  {
    v6 = 1;
    v7 = *(_QWORD *)((char *)a2 + 124);
    v4 = *((_DWORD *)a2 + 33);
    LOBYTE(v2) = *((_DWORD *)a2 + 34) != 0;
LABEL_6:
    v10 = v7;
    goto LABEL_7;
  }
  v6 = 0;
  v8 = PtiCurrent(v5);
  if ( v8 )
  {
    v9 = *((_QWORD *)v8 + 58);
    v7 = *(_QWORD *)(v9 + 872);
    v4 = *(_DWORD *)(v9 + 880);
    v2 = *(_DWORD *)(v9 + 12) >> 31;
    goto LABEL_6;
  }
LABEL_7:
  *(_QWORD *)&v11 = v10;
  *((_QWORD *)&v11 + 1) = __PAIR64__(v2, v4);
  LOBYTE(v12) = v6;
  *((_OWORD *)a2 + 9) = v11;
  *((_DWORD *)a2 + 40) = v12;
}
