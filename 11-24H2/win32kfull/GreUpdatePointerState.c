/*
 * XREFs of GreUpdatePointerState @ 0x14002B1B4
 * Callers:
 *     GreHidePointer @ 0x14002A43C (GreHidePointer.c)
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x14002B398 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreUpdatePointerState(int a1)
{
  unsigned int v2; // ebx
  __int128 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // eax
  int v10; // ecx
  int v11; // ecx

  v2 = 0;
  *(_QWORD *)&v3 = PsGetCurrentProcessWin32Process();
  v6 = v3;
  if ( (_QWORD)v3 )
  {
    v3 = -(__int128)*(unsigned __int64 *)v3;
    v6 &= *((_QWORD *)&v3 + 1);
  }
  v7 = *(_QWORD *)(W32GetSessionState(v4, *((_QWORD *)&v3 + 1), v5) + 96);
  if ( v6 )
  {
    if ( a1 )
    {
      if ( (*(_DWORD *)(v6 + 12) & 0x40000000) == 0 )
      {
        v8 = *(_DWORD *)(v7 + 72);
        if ( v8 != -1 )
        {
          *(_DWORD *)(v7 + 72) = v8 + 1;
          *(_DWORD *)(v6 + 12) |= 0x40000000u;
          LOBYTE(v2) = v8 == 0;
        }
      }
    }
    else
    {
      v9 = *(_DWORD *)(v6 + 12);
      if ( (v9 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v6 + 12) = v9 & 0xBFFFFFFF;
        v10 = *(_DWORD *)(v7 + 72);
        if ( v10 )
        {
          v11 = v10 - 1;
          *(_DWORD *)(v7 + 72) = v11;
          if ( !v11 )
            return 1;
        }
      }
    }
  }
  return v2;
}
