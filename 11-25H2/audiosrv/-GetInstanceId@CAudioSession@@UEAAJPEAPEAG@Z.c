/*
 * XREFs of ?GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x18001A950
 * Callers:
 *     <none>
 * Callees:
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001AAE0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::GetInstanceId(CAudioSession *this, unsigned __int16 **a2)
{
  int v4; // esi
  __int64 v5; // rbx
  int v6; // eax
  unsigned __int64 v7; // rdi
  unsigned __int16 *v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int16 v12; // cx
  unsigned __int16 *v13; // rcx
  int v14; // ecx
  void *v16; // rdi
  HANDLE ProcessHeap; // rax
  __int64 v18; // [rsp+50h] [rbp+18h] BYREF

  v18 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v4 = CAudioSessionInstanceId::ToString((char *)this + 584, &v18);
  v5 = v18;
  if ( v4 < 0 )
    goto LABEL_22;
  v6 = *(_DWORD *)(v18 - 16) + 1;
  v7 = 2LL * v6;
  if ( v7 > 0x40000 )
  {
    *a2 = 0LL;
  }
  else
  {
    v8 = (unsigned __int16 *)operator new[](2LL * v6, (const struct std::nothrow_t *)&std::nothrow);
    *a2 = v8;
    if ( v8 )
    {
      v9 = v7 >> 1;
      if ( v9 - 1 > 0x7FFFFFFE )
      {
        v4 = -2147024809;
        v14 = -2147024809;
        if ( v9 )
        {
          *v8 = 0;
LABEL_21:
          v16 = *a2;
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v16);
          *a2 = 0LL;
          goto LABEL_22;
        }
      }
      else
      {
        v10 = 2147483646 - v9;
        v11 = v5 - (_QWORD)v8;
        do
        {
          if ( !(v10 + v9) )
            break;
          v12 = *(unsigned __int16 *)((char *)v8 + v11);
          if ( !v12 )
            break;
          *v8++ = v12;
          --v9;
        }
        while ( v9 );
        v13 = v8 - 1;
        if ( v9 )
          v13 = v8;
        *v13 = 0;
        v14 = -2147024774;
        if ( v9 )
          v14 = 0;
      }
      v4 = v14;
      if ( v14 >= 0 )
        goto LABEL_14;
      goto LABEL_21;
    }
  }
  v4 = -2147024882;
LABEL_22:
  AudSrvTraceLoggingErrorHelper("CAudioSession::GetInstanceId", 0x162u, v4);
LABEL_14:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v5 - 24) + 8LL))(*(_QWORD *)(v5 - 24));
  return (unsigned int)v4;
}
