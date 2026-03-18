/*
 * XREFs of NtDCompositionWaitForCompositorClock @ 0x1400CE2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14007496C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z @ 0x1400CAB78 (-GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z.c)
 *     ?Release@CCompClockInfo@DirectComposition@@QEAAJXZ @ 0x1400ED0EC (-Release@CCompClockInfo@DirectComposition@@QEAAJXZ.c)
 *     ?WaitForTick@CCompClockInfo@DirectComposition@@QEBAJIPEBQEAXPEAT_LARGE_INTEGER@@@Z @ 0x140194168 (-WaitForTick@CCompClockInfo@DirectComposition@@QEBAJIPEBQEAXPEAT_LARGE_INTEGER@@@Z.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall NtDCompositionWaitForCompositorClock(unsigned int a1, void *Src, unsigned int a3)
{
  int CompositorClockInfo; // ebx
  union _LARGE_INTEGER *v7; // r15
  DirectComposition::CCompClockInfo *v8; // r14
  __int64 v9; // rcx
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v11; // rdi
  unsigned int v12; // edx
  DirectComposition::CCompClockInfo *v14; // [rsp+30h] [rbp-158h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-150h] BYREF
  void *v16[32]; // [rsp+50h] [rbp-138h] BYREF

  CompositorClockInfo = 0;
  memset(v16, 0, sizeof(v16));
  v7 = 0LL;
  v15[1] = 0LL;
  v15[0] = 0LL;
  v8 = 0LL;
  v14 = 0LL;
  if ( a1 )
  {
    if ( a1 <= 0x20 && Src )
      RtlCopyFromUser(v16, Src, 8LL * a1);
    else
      CompositorClockInfo = -1073741811;
  }
  if ( a3 != -1 )
  {
    v15[0] = -10000LL * a3;
    v7 = (union _LARGE_INTEGER *)v15;
  }
  if ( CompositorClockInfo >= 0 )
  {
    KeEnterCriticalRegion();
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v9);
    v11 = DefaultConnection;
    if ( DefaultConnection )
    {
      CompositorClockInfo = DirectComposition::CConnection::GetCompositorClockInfo(DefaultConnection, &v14);
      DirectComposition::CConnection::Release(v11, v12);
      v8 = v14;
    }
    else
    {
      CompositorClockInfo = -1073741790;
    }
    KeLeaveCriticalRegion();
    if ( CompositorClockInfo >= 0 )
    {
      CompositorClockInfo = DirectComposition::CCompClockInfo::WaitForTick(v8, a1, v16, v7);
      DirectComposition::CCompClockInfo::Release(v8);
    }
  }
  return (unsigned int)CompositorClockInfo;
}
