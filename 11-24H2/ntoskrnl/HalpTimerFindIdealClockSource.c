/*
 * XREFs of HalpTimerFindIdealClockSource @ 0x14053828C
 * Callers:
 *     HalpTimerSelectRoles @ 0x140539128 (HalpTimerSelectRoles.c)
 * Callees:
 *     HalpFindTimer @ 0x140544A60 (HalpFindTimer.c)
 */

__int64 HalpTimerFindIdealClockSource()
{
  char v0; // si
  __int64 v1; // rbx
  char v2; // di
  __int64 Timer; // rax
  int v4; // ecx

  v0 = HalpHvPresent;
  v1 = 0LL;
  if ( !HalpHvPresent || !HalpHvCpuManager )
  {
LABEL_5:
    v2 = HalpTimerPlatformClockSourceForced;
    if ( HalpTimerPlatformClockSourceForced )
      goto LABEL_7;
    Timer = HalpFindTimer(8, 96, 24576, 3840, 0);
    if ( !Timer )
      goto LABEL_7;
LABEL_26:
    v4 = *(_DWORD *)(Timer + 224);
    if ( (v4 & 0x50) != 0 )
      return Timer & -(__int64)((v4 & 0x20) != 0);
    return v1;
  }
  v2 = HalpTimerPlatformClockSourceForced;
  if ( !HalpTimerPlatformClockSourceForced )
  {
    Timer = HalpFindTimer(11, 544, 0, 80, 0);
    if ( Timer )
      goto LABEL_26;
    goto LABEL_5;
  }
LABEL_7:
  Timer = HalpFindTimer(11, 544, 0, 80, 0);
  if ( Timer )
    goto LABEL_26;
  if ( !v2 && !v0 && HalpProfileInterface != &DefaultProfileInterface )
  {
    Timer = HalpFindTimer(0, 33, 24576, 3840, 0);
    if ( Timer )
      goto LABEL_26;
  }
  Timer = HalpFindTimer(3, 352, 0, 0, 0);
  if ( Timer )
    goto LABEL_26;
  Timer = HalpFindTimer(3, 48, 0, 256, 0);
  if ( Timer )
    goto LABEL_26;
  Timer = HalpFindTimer(3, 96, 0, 3840, 0);
  if ( Timer )
    goto LABEL_26;
  Timer = HalpFindTimer(3, 48, 0, 3840, 0);
  if ( Timer )
    goto LABEL_26;
  Timer = HalpFindTimer(0, 32864, 24576, 3840, 0);
  if ( Timer )
  {
    if ( *(_QWORD *)(Timer + 192) >= 0x7D0uLL )
      goto LABEL_26;
  }
  Timer = HalpFindTimer(0, 32816, 24576, 3840, 0);
  if ( Timer )
  {
    if ( *(_QWORD *)(Timer + 192) >= 0x7D0uLL )
      goto LABEL_26;
  }
  Timer = HalpFindTimer(0, 608, 57344, 0, 0);
  if ( Timer )
  {
    if ( *(_QWORD *)(Timer + 192) >= 0x7D0uLL )
      goto LABEL_26;
  }
  Timer = HalpFindTimer(0, 96, 57344, 3840, 0);
  if ( Timer )
  {
    if ( *(_QWORD *)(Timer + 192) >= 0x7D0uLL )
      goto LABEL_26;
  }
  Timer = HalpFindTimer(0, 48, 57344, 3840, 0);
  if ( Timer )
  {
    if ( *(_QWORD *)(Timer + 192) >= 0x7D0uLL )
      goto LABEL_26;
  }
  return v1;
}
