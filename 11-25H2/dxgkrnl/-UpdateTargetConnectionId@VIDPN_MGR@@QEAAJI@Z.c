/*
 * XREFs of ?UpdateTargetConnectionId@VIDPN_MGR@@QEAAJI@Z @ 0x140255478
 * Callers:
 *     ?DmmUpdateTargetConnectionId@@YAJQEAXI@Z @ 0x140253A9C (-DmmUpdateTargetConnectionId@@YAJQEAXI@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x140036A80 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 */

__int64 __fastcall VIDPN_MGR::UpdateTargetConnectionId(struct _KTHREAD **this, unsigned int a2)
{
  __int64 v3; // rsi
  struct _KTHREAD *v4; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rbp
  int v7; // ecx

  v3 = a2;
  if ( this[8] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5621;
  }
  _InterlockedIncrement((volatile signed __int32 *)this[15] + 18);
  v4 = this[15];
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(v4, v3);
  if ( TargetById )
  {
    if ( v4 )
      ReferenceCounted::Release((struct _KTHREAD *)((char *)v4 + 64));
    v7 = `DMMVIDEOPRESENTTARGET::IncreaseConnectionId'::`2'::s_TargetConnectionId;
    *((_DWORD *)TargetById + 33) = `DMMVIDEOPRESENTTARGET::IncreaseConnectionId'::`2'::s_TargetConnectionId;
    `DMMVIDEOPRESENTTARGET::IncreaseConnectionId'::`2'::s_TargetConnectionId = v7 + 1;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, v3, this);
    WdLogGlobalForLineNumber = 5634;
    if ( v4 )
      ReferenceCounted::Release((struct _KTHREAD *)((char *)v4 + 64));
    return 3223192325LL;
  }
}
