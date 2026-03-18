/*
 * XREFs of ?GetCrc@EdidMonitorDescriptor@DxgMonitor@@UEBAEXZ @ 0x14027FED0
 * Callers:
 *     <none>
 * Callees:
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x14003C16C (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?MonitorLogBadEDID@@YAXJ@Z @ 0x140186BB0 (-MonitorLogBadEDID@@YAXJ@Z.c)
 */

unsigned __int8 __fastcall DxgMonitor::EdidMonitorDescriptor::GetCrc(DxgMonitor::EdidMonitorDescriptor *this)
{
  const unsigned __int8 *v1; // rax
  int IsEDIDBaseBlock; // eax
  __int64 v4; // r10
  int v5; // ebx

  if ( *((_DWORD *)this + 4) )
  {
    v1 = (const unsigned __int8 *)*((_QWORD *)this + 3);
    if ( v1 )
    {
      while ( 1 )
      {
        v1 = *(const unsigned __int8 **)v1;
        if ( !v1 )
          break;
        if ( *((_DWORD *)v1 + 2) == 2 )
        {
          IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock(v1 + 24);
          v5 = IsEDIDBaseBlock;
          if ( IsEDIDBaseBlock < 0 )
          {
            WdLogSingleEntry1(3LL, IsEDIDBaseBlock);
            WdLogGlobalForLineNumber = 720;
            MonitorLogBadEDID(v5);
            return 0;
          }
          return *(_BYTE *)(v4 + 127);
        }
      }
    }
  }
  WdLogSingleEntry1(3LL, this);
  WdLogGlobalForLineNumber = 707;
  return 0;
}
