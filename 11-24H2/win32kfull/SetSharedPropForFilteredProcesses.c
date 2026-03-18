/*
 * XREFs of SetSharedPropForFilteredProcesses @ 0x1402BF27C
 * Callers:
 *     InternalSetProp @ 0x140031458 (InternalSetProp.c)
 * Callees:
 *     GETCLIENTWNDINFO @ 0x14026C270 (GETCLIENTWNDINFO.c)
 */

__int64 __fastcall SetSharedPropForFilteredProcesses(const struct tagWND *a1, __int16 a2, __int64 a3)
{
  __int64 v5; // rdx
  volatile void *v6; // rcx
  __int64 v7; // r8
  int v8; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int16 v10; // cx
  volatile void *Address; // [rsp+40h] [rbp+8h]

  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
  {
    for ( Address = *(volatile void **)(GETCLIENTWNDINFO(a1) + 24); Address; Address = v6 )
    {
      v8 = 0;
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6, v5, v7);
      ProbeForWrite(Address, 0x618uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      while ( 1 )
      {
        v5 = 3LL * v8;
        if ( v8 >= 64 )
          break;
        v10 = *((_WORD *)Address + 12 * v8 + 8);
        if ( !v10 )
          return 0LL;
        if ( v10 == a2 )
        {
          *((_QWORD *)Address + 3 * v8 + 1) = a3;
          return 1LL;
        }
        ++v8;
      }
      v6 = (volatile void *)*((_QWORD *)Address + 3 * v8);
    }
  }
  return 0LL;
}
