/*
 * XREFs of ?GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z @ 0x1400CAB78
 * Callers:
 *     NtDCompositionWaitForCompositorClock @ 0x1400CE2F0 (NtDCompositionWaitForCompositorClock.c)
 * Callees:
 *     ?Release@CCompClockInfo@DirectComposition@@QEAAJXZ @ 0x1400ED0EC (-Release@CCompClockInfo@DirectComposition@@QEAAJXZ.c)
 *     ?Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z @ 0x14015C068 (-Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z.c)
 *     ?IsSameTarget@CCompClockInfo@DirectComposition@@QEBA_NAEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x140224454 (-IsSameTarget@CCompClockInfo@DirectComposition@@QEBA_NAEBUtagCOMPOSITION_TARGET_ID@@@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::GetCompositorClockInfo(
        DirectComposition::CConnection *this,
        struct DirectComposition::CCompClockInfo **a2)
{
  int v4; // esi
  __int64 v5; // rdi
  _QWORD *CurrentProcessWin32Process; // rax
  char v7; // r14
  int v8; // eax
  __int64 v9; // xmm1_8
  volatile signed __int32 **v10; // rbx
  DirectComposition::CCompClockInfo *v11; // rcx
  DirectComposition::CCompClockInfo *v12; // rcx
  __int64 v13; // rcx
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]
  int v17; // [rsp+38h] [rbp-20h]

  v4 = 0;
  v5 = 0LL;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(this);
  if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
    v5 = CurrentProcessWin32Process[32];
  *a2 = 0LL;
  v16 = 0LL;
  v17 = 0;
  v15 = 0LL;
  if ( !v5 )
    return (unsigned int)-1073741823;
  v7 = 0;
  ExAcquirePushLockSharedEx((char *)this + 200, 0LL);
  *((_BYTE *)this + 208) = 0;
  if ( *((_DWORD *)this + 54) || *((_DWORD *)this + 55) )
  {
    v7 = 1;
    v8 = *((_DWORD *)this + 60);
    v9 = *((_QWORD *)this + 29);
    v15 = *(_OWORD *)((char *)this + 216);
    v17 = v8;
    v16 = v9;
  }
  ExReleasePushLockSharedEx((char *)this + 200, 0LL);
  if ( !v7 )
    return (unsigned int)-1073741823;
  ExAcquirePushLockExclusiveEx(v5 + 40, 0LL);
  v10 = (volatile signed __int32 **)(v5 + 56);
  *(_BYTE *)(v5 + 48) = 1;
  v11 = *(DirectComposition::CCompClockInfo **)(v5 + 56);
  if ( v11 )
  {
    if ( DirectComposition::CCompClockInfo::IsSameTarget(v11, (const struct tagCOMPOSITION_TARGET_ID *)&v15) )
    {
LABEL_10:
      _InterlockedIncrement(*v10);
      *a2 = (struct DirectComposition::CCompClockInfo *)*v10;
      goto LABEL_11;
    }
    DirectComposition::CCompClockInfo::Release(v12);
    *v10 = 0LL;
  }
  v4 = DirectComposition::CCompClockInfo::Create(
         (const struct tagCOMPOSITION_TARGET_ID *)&v15,
         (struct DirectComposition::CCompClockInfo **)(v5 + 56));
  if ( v4 >= 0 )
    goto LABEL_10;
LABEL_11:
  v13 = v5 + 40;
  if ( *(_BYTE *)(v5 + 48) )
    ExReleasePushLockExclusiveEx(v13, 0LL);
  else
    ExReleasePushLockSharedEx(v13, 0LL);
  return (unsigned int)v4;
}
