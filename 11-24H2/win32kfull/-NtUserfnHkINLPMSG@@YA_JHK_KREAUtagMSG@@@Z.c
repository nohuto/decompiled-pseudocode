/*
 * XREFs of ?NtUserfnHkINLPMSG@@YA_JHK_KREAUtagMSG@@@Z @ 0x140291918
 * Callers:
 *     NtUserCallNextHookEx @ 0x14007EB30 (NtUserCallNextHookEx.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxCallNextHookEx@@YA_JH_K_J@Z @ 0x14007FC00 (-xxxCallNextHookEx@@YA_JH_K_J@Z.c)
 */

__int64 __fastcall NtUserfnHkINLPMSG(int a1, __int64 a2, __int64 a3, struct tagMSG *volatile a4)
{
  unsigned int v5; // esi
  struct tagMSG *volatile v7; // r8
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v11; // [rsp+40h] [rbp-28h]
  __int128 v12; // [rsp+50h] [rbp-18h]

  v5 = a2;
  *(_OWORD *)v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v7 = (struct tagMSG *volatile)MmUserProbeAddress;
  if ( (unsigned __int64)a4 < MmUserProbeAddress )
    v7 = a4;
  *(_OWORD *)v10 = *(_OWORD *)v7;
  v11 = *((_OWORD *)v7 + 1);
  v12 = *((_OWORD *)v7 + 2);
  if ( a1 == 3 && (LODWORD(v10[1]) == 576 || LODWORD(v10[1]) == 281) )
  {
    *((_QWORD *)&v11 + 1) = *((_QWORD *)PtiCurrent(LODWORD(v10[1]), a2) + 92);
    *(_QWORD *)&v11 = *((_QWORD *)PtiCurrent(*((__int64 *)&v11 + 1), v8) + 93);
  }
  result = xxxCallNextHookEx(v5, a3, (__int64)v10);
  if ( a1 == 3 )
  {
    *(_OWORD *)a4 = *(_OWORD *)v10;
    *((_OWORD *)a4 + 1) = v11;
    *((_OWORD *)a4 + 2) = v12;
  }
  return result;
}
