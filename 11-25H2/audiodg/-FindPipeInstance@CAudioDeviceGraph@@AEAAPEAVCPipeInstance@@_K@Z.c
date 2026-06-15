/*
 * XREFs of ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x14003A214
 * Callers:
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x14003A0B0 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 *     ?GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x140064A00 (-GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     <none>
 */

struct CPipeInstance *__fastcall CAudioDeviceGraph::FindPipeInstance(CAudioDeviceGraph *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  _QWORD *v5; // rcx
  __int64 v6; // rbx

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 216);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  v5 = (_QWORD *)*((_QWORD *)this + 21);
  while ( v5 )
  {
    v6 = v5[2];
    v5 = (_QWORD *)*v5;
    if ( v6 == a2 )
    {
      if ( v4 )
        LeaveCriticalSection(v4);
      return (struct CPipeInstance *)v6;
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
