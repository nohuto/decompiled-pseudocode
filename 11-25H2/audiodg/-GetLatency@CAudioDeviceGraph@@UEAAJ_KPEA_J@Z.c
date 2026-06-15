/*
 * XREFs of ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x14003A0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140006CA8 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x14003A214 (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetLatency(CAudioDeviceGraph *this, unsigned __int64 a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  bool v7; // zf
  CPipeInstance *PipeInstance; // rdi
  __int64 v9; // rsi
  int Latency; // eax
  unsigned int v11; // ebp
  unsigned int v13; // edi
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v7 = *((_DWORD *)this + 64) == 0;
  v16 = (__int64)v3;
  if ( v7 )
  {
    v13 = -2005139437;
    v14 = 443LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)v13);
    if ( v3 )
      LeaveCriticalSection(v3);
    return v13;
  }
  if ( !a3 )
  {
    v13 = -2147467261;
    v14 = 446LL;
    goto LABEL_15;
  }
  PipeInstance = CAudioDeviceGraph::FindPipeInstance(this, a2);
  if ( PipeInstance )
  {
    v9 = 0LL;
    while ( PipeInstance )
    {
      v16 = 0LL;
      Latency = CPipeInstance::GetLatency(PipeInstance, &v16);
      v11 = Latency;
      if ( Latency < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1C9,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)Latency);
        if ( v3 )
          LeaveCriticalSection(v3);
        return v11;
      }
      v9 += v16;
      PipeInstance = *(CPipeInstance **)PipeInstance;
    }
    *a3 = v9;
    if ( v3 )
      LeaveCriticalSection(v3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C2,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C001ALL);
    CSAutoLock<1>::~CSAutoLock<1>((struct _RTL_CRITICAL_SECTION **)&v16);
    return 2289827866LL;
  }
}
