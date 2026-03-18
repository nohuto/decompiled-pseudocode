/*
 * XREFs of _GetPriorityClipboardFormat @ 0x1401FD150
 * Callers:
 *     NtUserGetPriorityClipboardFormat @ 0x1401FD0A0 (NtUserGetPriorityClipboardFormat.c)
 * Callees:
 *     ?IsFmtBlocked@@YAHI@Z @ 0x140103EFC (-IsFmtBlocked@@YAHI@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x140105EAC (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x140106134 (-CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z.c)
 */

__int64 __fastcall GetPriorityClipboardFormat(__int64 a1, __int64 a2)
{
  int v2; // ebp
  unsigned int *v3; // r14
  struct tagWINDOWSTATION *v4; // rax
  struct tagWINDOWSTATION *v5; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rcx
  int v11; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // xmm0_8
  int v14; // eax
  __int64 v15; // xmm0_8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // xmm0_8
  int v20; // edi
  __int64 v21; // rax
  __int64 v22; // [rsp+20h] [rbp-48h] BYREF
  int v23; // [rsp+28h] [rbp-40h]
  __int64 v24; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+38h] [rbp-30h]
  __int64 v26; // [rsp+40h] [rbp-28h] BYREF
  int v27; // [rsp+48h] [rbp-20h]

  v2 = a2;
  v3 = (unsigned int *)a1;
  v4 = CheckClipboardAccess(a1, a2);
  v5 = v4;
  if ( !v4 || !*((_DWORD *)v4 + 34) || !*((_QWORD *)v4 + 16) )
    return 0LL;
  while ( 1 )
  {
    v7 = v2--;
    if ( v7 <= 0 )
      return 0xFFFFFFFFLL;
    v8 = *v3;
    if ( *v3 )
    {
      v9 = *((_QWORD *)v5 + 16);
      LODWORD(v10) = *((_DWORD *)v5 + 34);
      while ( 1 )
      {
        v11 = v10;
        v10 = (unsigned int)(v10 - 1);
        if ( !v11 )
          break;
        if ( *(_DWORD *)v9 == v8 )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
          if ( CurrentProcessWin32Process )
            CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
          v13 = *(_QWORD *)(CurrentProcessWin32Process + 872);
          v14 = *(_DWORD *)(CurrentProcessWin32Process + 880);
          v22 = v13;
          v15 = *(_QWORD *)(v9 + 20);
          v23 = v14;
          v16 = *(_DWORD *)(v9 + 28);
          v24 = v15;
          v25 = v16;
          if ( CheckClipboardAccessForIntegrityLevel(&v24, (const struct tagUIPI_INFO *)&v22)
            || !(unsigned int)IsFmtBlocked(v8, v17) )
          {
            return v8;
          }
          v19 = *(_QWORD *)(v9 + 20);
          v20 = *(_DWORD *)(v9 + 28);
          v21 = PsGetCurrentProcessWin32Process(v18);
          if ( v21 )
            v21 &= -(__int64)(*(_QWORD *)v21 != 0LL);
          v26 = v19;
          v27 = v20;
          EtwTraceUIPIClipboardError(0LL, v21, v8, &v26);
          break;
        }
        v9 += 32LL;
      }
    }
    ++v3;
  }
}
