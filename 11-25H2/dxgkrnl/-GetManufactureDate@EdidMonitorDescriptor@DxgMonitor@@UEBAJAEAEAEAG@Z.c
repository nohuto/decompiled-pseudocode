/*
 * XREFs of ?GetManufactureDate@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAEAEAG@Z @ 0x1403F21E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x14003C6B8 (-EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x14003C7AC (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?MonitorLogBadEDID@@YAXJ@Z @ 0x140184860 (-MonitorLogBadEDID@@YAXJ@Z.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetManufactureDate(
        DxgMonitor::EdidMonitorDescriptor *this,
        unsigned __int8 *a2,
        unsigned __int16 *a3)
{
  const unsigned __int8 *v4; // rax
  unsigned int v5; // ebx
  int IsEDIDBaseBlock; // eax
  const unsigned __int8 *v8; // r10
  unsigned __int16 *v9; // r11
  int v10; // eax

  if ( *((_DWORD *)this + 4) )
  {
    v4 = (const unsigned __int8 *)*((_QWORD *)this + 3);
    if ( v4 )
    {
      while ( 1 )
      {
        v4 = *(const unsigned __int8 **)v4;
        if ( !v4 )
          break;
        if ( *((_DWORD *)v4 + 2) == 2 )
        {
          IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock(v4 + 24);
          v5 = IsEDIDBaseBlock;
          if ( IsEDIDBaseBlock < 0 )
          {
            WdLogSingleEntry1(3LL, IsEDIDBaseBlock);
            WdLogGlobalForLineNumber = 725;
            MonitorLogBadEDID(v5);
            goto LABEL_4;
          }
          v10 = EDIDV1_ObtainMonitorManufactureDate(v8, a2, v9);
          v5 = v10;
          if ( v10 < 0 )
          {
            WdLogSingleEntry1(2LL, v10);
            WdLogGlobalForLineNumber = 380;
            return v5;
          }
          return 0LL;
        }
      }
    }
  }
  WdLogSingleEntry1(3LL, this);
  WdLogGlobalForLineNumber = 712;
  v5 = -1071841279;
LABEL_4:
  WdLogSingleEntry1(2LL, (int)v5);
  WdLogGlobalForLineNumber = 378;
  return v5;
}
