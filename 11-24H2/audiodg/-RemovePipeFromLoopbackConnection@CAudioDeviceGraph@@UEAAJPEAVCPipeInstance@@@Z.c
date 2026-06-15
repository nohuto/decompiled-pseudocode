/*
 * XREFs of ?RemovePipeFromLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002DC00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?RemovePipeInternal@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_K@Z @ 0x14002F53C (-RemovePipeInternal@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_K@Z.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@_N@Z @ 0x140057F24 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@_N@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::RemovePipeFromLoopbackConnection(
        CAudioDeviceGraph *this,
        struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  CPipeInstance *v5; // rcx
  const struct CConnectionInstance *LoopbackConnection; // rax
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  v5 = (CPipeInstance *)*((_QWORD *)this + 18);
  v11 = v2;
  LoopbackConnection = CPipeInstance::GetLoopbackConnection(v5, 0);
  v7 = CAudioDeviceGraph::RemovePipeInternal(
         (CAudioDeviceGraph *)((char *)this - 16),
         a2,
         *((_QWORD *)LoopbackConnection + 1));
  v8 = v7;
  if ( v7 >= 0 )
  {
    CSAutoLock<1>::~CSAutoLock<1>(&v11);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x508,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v7);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v8;
  }
}
