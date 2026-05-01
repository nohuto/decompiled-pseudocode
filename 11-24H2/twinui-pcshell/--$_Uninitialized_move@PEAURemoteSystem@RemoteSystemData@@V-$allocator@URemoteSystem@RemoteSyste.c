/*
 * XREFs of ??$_Uninitialized_move@PEAURemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@YAPEAURemoteSystem@RemoteSystemData@@QEAU12@0PEAU12@AEAV?$allocator@URemoteSystem@RemoteSystemData@@@0@@Z @ 0x1806459CC
 * Callers:
 *     ??$_Emplace_reallocate@AEAURemoteSystem@RemoteSystemData@@@?$vector@URemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@AEAAPEAURemoteSystem@RemoteSystemData@@QEAU23@AEAU23@@Z @ 0x180644CF8 (--$_Emplace_reallocate@AEAURemoteSystem@RemoteSystemData@@@-$vector@URemoteSystem@RemoteSystemDa.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@YAXPEAURemoteSystem@RemoteSystemData@@QEAU12@AEAV?$allocator@URemoteSystem@RemoteSystemData@@@0@@Z @ 0x1806449AC (--$_Destroy_range@V-$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@YAXPEAURemoteSystem@R.c)
 */

volatile signed __int32 **__fastcall std::_Uninitialized_move<RemoteSystemData::RemoteSystem *>(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 **a3)
{
  __int64 v4; // r8
  char *v5; // r9
  volatile signed __int32 *v6; // rax

  if ( a1 != a2 )
  {
    v4 = a1 + 16;
    v5 = (char *)a3 - a1;
    do
    {
      v6 = *(volatile signed __int32 **)(v4 - 16);
      *(_QWORD *)(v4 - 16) = 0LL;
      *a3 = v6;
      a3 += 4;
      *(_DWORD *)&v5[v4 - 8] = *(_DWORD *)(v4 - 8);
      *(_QWORD *)&v5[v4] = *(_QWORD *)v4;
      *(_WORD *)&v5[v4 + 8] = *(_WORD *)(v4 + 8);
      v4 += 32LL;
    }
    while ( v4 - 16 != a2 );
  }
  std::_Destroy_range<std::allocator<RemoteSystemData::RemoteSystem>>(a3, a3);
  return a3;
}
