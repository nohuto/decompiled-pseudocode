/*
 * XREFs of W32pProcessCallout @ 0x140105930
 * Callers:
 *     <none>
 * Callees:
 *     GreIsCurrentProcessSystemCritical @ 0x140105CF0 (GreIsCurrentProcessSystemCritical.c)
 *     FreeW32Process @ 0x14010620C (FreeW32Process.c)
 */

__int64 __fastcall W32pProcessCallout(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // rbx
  bool v4; // bp
  int IsCurrentProcessSystemCritical; // eax
  int v6; // edx
  int v7; // eax
  int v8; // edi
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 ThreadWin32Thread; // rax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  int W32ProcessImpl; // ebp
  __int64 ProcessWin32Process; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 0LL;
  v4 = 1;
  IsCurrentProcessSystemCritical = GreIsCurrentProcessSystemCritical();
  v6 = *(_DWORD *)(a1 + 24) & 1;
  if ( IsCurrentProcessSystemCritical )
  {
    if ( v6 )
    {
      W32ProcessImpl = AllocateW32ProcessImpl(v1);
      v13 = W32ProcessImpl;
      if ( W32ProcessImpl < 0 )
        return v13;
      ProcessWin32Process = PsGetProcessWin32Process(v1);
      LOBYTE(v17) = 1;
      v18 = ProcessWin32Process;
      *(_DWORD *)(ProcessWin32Process + 276) |= 0xC0u;
      v13 = GdiProcessCallout(ProcessWin32Process, v17);
      if ( (v13 & 0x80000000) == 0 || W32ProcessImpl == 1073741851 )
        return v13;
      v14 = v18;
    }
    else
    {
      ThreadWin32Thread = PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, ThreadWin32Thread);
      v13 = GdiProcessCallout(0LL, 0LL);
      v14 = PsGetProcessWin32Process(v1);
    }
    FreeW32Process(v14, 0LL);
    return v13;
  }
  if ( v6 )
  {
    v7 = AllocateW32ProcessImpl(v1);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v4 = v7 != 1073741851;
      v3 = PsGetProcessWin32Process(v1);
      result = xxxUserProcessCallout(v3, a1);
      v8 = result;
      if ( (_DWORD)result == 1073741851 )
        return result;
      if ( (int)result >= 0 )
      {
        LOBYTE(v10) = 1;
        v8 = GdiProcessCallout(v3, v10);
        if ( v8 < 0 )
        {
          xxxUserProcessCallout(v3, 0LL);
        }
        else
        {
          LOBYTE(v11) = 1;
          v8 = DCompositionProcessCallout(v3, v11);
          if ( v8 < 0 )
          {
            xxxUserProcessCallout(v3, 0LL);
            GdiProcessCallout(v3, 0LL);
          }
        }
      }
    }
  }
  else
  {
    v3 = PsGetProcessWin32Process(v1);
    xxxUserProcessCallout(v3, 0LL);
    DCompositionProcessCallout(v3, 0LL);
    GdiProcessCallout(v3, 0LL);
    v8 = 0;
  }
  if ( (*(_DWORD *)(a1 + 24) & 1) == 0 || v8 < 0 )
  {
    if ( v3 )
    {
      GdiUnmapGDIW32PIDLockedBitmaps(v3);
      if ( v4 )
        FreeW32Process(v3, 1LL);
    }
  }
  return (unsigned int)v8;
}
