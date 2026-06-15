/*
 * XREFs of ?ResetAPOs@CAudioDeviceGraph@@UEAAJXZ @ 0x140013F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetAPOs@CPipeInstance@@QEBAXXZ @ 0x1400147E8 (-ResetAPOs@CPipeInstance@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::ResetAPOs(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  _QWORD *v3; // rsi
  CPipeInstance *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 216);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  if ( *((_DWORD *)this + 64) )
  {
    v3 = (_QWORD *)*((_QWORD *)this + 21);
    while ( v3 )
    {
      v5 = (CPipeInstance *)v3[2];
      v3 = (_QWORD *)*v3;
      CPipeInstance::ResetAPOs(v5);
    }
    CPipeInstance::ResetAPOs(*((CPipeInstance **)this + 20));
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A7,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0013LL);
    if ( v2 )
      LeaveCriticalSection(v2);
    return 2289827859LL;
  }
}
